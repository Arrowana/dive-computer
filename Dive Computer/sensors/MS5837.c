#include "MS5837.h"

uint8_t measurement_buffer[3] = {0, 0, 0};
uint16_t coefficient[7];

int32_t _temperature_actual;
int32_t _pressure_actual;

#define SET_SLAVE_ADDR() I2C_0.slave_addr = 0b1110110
#define SET_SLAVE_ADDRESS( n ) I2C_0.slave_addr = n

uint8_t MS5837_init()
{
	SET_SLAVE_ADDR();
	uint32_t ret =  io_i2c->write(io_i2c, &reset_cmd, 1); //i2c_m_sync_write(&I2C_0, &reset_cmd, 1);
	uint8_t buffer[2] = {0};
	
	//TODO: Load coefficients from PROM
	for(uint8_t i = 0; i < 7; i++)
	{
		i2c_m_sync_cmd_read_multi(&I2C_0, PROM_CMD + (i * 2), buffer, 2); //TODO: check endianess here
		coefficient[i] = buffer[0] << 8 | buffer[1];
	}
	
	return 0;
}

uint8_t find_I2C_address() 
{
	uint8_t buffer[1] = {0};
	for(uint8_t address = 1; address < 127; address++ ) 
	{
		SET_SLAVE_ADDRESS(address);
		uint32_t ret =  i2c_m_sync_cmd_read_multi(&I2C_0,0x00, &buffer, 1);
		if (ret == 1) {
			return address;
		}
	}
}

int32_t MS5837_get_adc_measurement(enum measurement _measurement, enum precision _precision)
{
	SET_SLAVE_ADDR();
	uint8_t reg = convert_cmd + _measurement + _precision;
	uint32_t ret = io_i2c->write(io_i2c, &reg, 1);
	delay(10); //Maximum delay
	uint8_t buffer[3] = {0, 0, 0};
	i2c_m_sync_cmd_read_multi(&I2C_0, 0x00, &buffer, 3);
	
	int32_t adc_measurement = ((uint32_t)buffer[0] << 16) + ((uint32_t)buffer[1] << 8) + buffer[2];
	return adc_measurement;
}

void MS5857_get_measurements(enum precision _precision, MS5837_measurements* measurements)
{
	SET_SLAVE_ADDR();
	//Retrieve ADC result
	int32_t temperature_raw = MS5837_get_adc_measurement(TEMPERATURE, _precision);
	int32_t pressure_raw = MS5837_get_adc_measurement(PRESSURE, _precision);
	
	//Create Variables for calculations
	int32_t temp_calc;
	int32_t pressure_calc;
	
	int32_t dT;
	
	//Now that we have a raw temperature, let's compute our actual.
	dT = temperature_raw - ((int32_t) coefficient[5] << 8);
	temp_calc = (((int64_t)dT * coefficient[6]) >> 23) + 2000;
	
	// TODO TESTING  _temperature_actual = temp_calc;
	
	//Now we have our first order Temperature, let's calculate the second order.
	int64_t T2, OFF2, SENS2, OFF, SENS; //working variables

	if (temp_calc < 2000)
	// If temp_calc is below 20.0C
	{
		T2 = 3 * (((int64_t)dT * dT) >> 33);
		OFF2 = 3 * ((temp_calc - 2000) * (temp_calc - 2000)) / 2;
		SENS2 = 5 * ((temp_calc - 2000) * (temp_calc - 2000)) / 8;
		
		if(temp_calc < -1500)
		// If temp_calc is below -15.0C
		{
			OFF2 = OFF2 + 7 * ((temp_calc + 1500) * (temp_calc + 1500));
			SENS2 = SENS2 + 4 * ((temp_calc + 1500) * (temp_calc + 1500));
		}
	}
	else
	// If temp_calc is above 20.0C
	{
		uint64_t two_power_thirty_seven = 137438953472;
		T2 = 7 * ((uint64_t)dT * dT)/two_power_thirty_seven;
		OFF2 = ((temp_calc - 2000) * (temp_calc - 2000)) / 16;
		SENS2 = 0;
	}
	
	// Now bring it all together to apply offsets
	OFF = ((int64_t)coefficient[2] << 16) + (((coefficient[4] * (int64_t)dT)) >> 7);
	SENS = ((int64_t)coefficient[1] << 15) + (((coefficient[3] * (int64_t)dT)) >> 8);
	temp_calc = temp_calc - T2;
	OFF = OFF - OFF2;
	SENS = SENS - SENS2;

	// Now lets calculate the pressure
	pressure_calc = (((SENS * pressure_raw) / 2097152 ) - OFF) / 8192;
	
	measurements->temperature = temp_calc;
	measurements->pressure = pressure_calc;
}