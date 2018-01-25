#ifndef MS5837_H
#define MS5837_H
#include "driver_init.h"
#include "hal_io.h"
#include "utilities.h"

static const uint8_t reset_cmd = 0b00011110;
static const uint8_t convert_cmd = 0x40;
static const uint8_t read_adc_cmd = 0b00000000;

#define PROM_CMD 0xA0

extern struct io_descriptor* io_i2c;

typedef struct MS5837_measurements {
	int32_t temperature;
	int32_t pressure;
} MS5837_measurements;

enum measurement
{
	PRESSURE = 0x00,
	TEMPERATURE = 0x10
};

// Define constants for Conversion precision
enum precision
{
	ADC_256  = 0x00,
	ADC_512  = 0x02,
	ADC_1024 = 0x04,
	ADC_2048 = 0x06,
	ADC_4096 = 0x08,
	ADC_8192 = 0x0A,
};

static uint8_t i2c_sensor_address;
uint8_t MS5837_init(uint8_t sensorAddress);
uint8_t find_I2C_address();
int32_t MS5837_get_adc_measurement(enum measurement _measurement, enum precision _precision);
void MS5857_get_measurements(enum precision _precision, MS5837_measurements* measurements);
 
#endif