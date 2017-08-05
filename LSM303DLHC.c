#include "LSM303DLHC.h"

LSM303STATUS LSM303_init() {
	write_acc(CTRL_REG1_A, 0b00100111);
	uint8_t buffer = 0xff;
	//read_acc(CTRL_REG1_A, &buffer);
	write_acc(CTRL_REG3_A, LIR_INT1); //FIFO_EN We enable the FIFO and latch the interrupt
	//read_acc(CTRL_REG3_A, &buffer);
	//click_config();
	//write_mag(CRA_REG_M, 0b10010000); //Temperature sensor enabled and ODR 15Hz
	//write_mag(CRB_REG_M, 0b11100000); //Gain 230 LSB/Gauss on X,Y 205 LSB/Gauss on Z
	return SUCCESS;
}

LSM303STATUS click_config() {
	//write_acc(CLICK_CFG_A, 0x01); //single click interrupt on X-axis
	//write_mag(CLICK_SRC_A, 0b0010100); //single click enable, sign positive
	//write_mag(CLICK_THS_A, 0); //TODO: Set threshold
	//write_mag(TIME_LIMIT_A, 5); //No more than 5 readings at 10Hz over threshold
	return SUCCESS;
}

bool is_accelerometer_data_available() {
	uint8_t buffer;
	//read(STATUS_REG_A, &buffer);
	return (buffer && ZYXDA) >> 3;
}

LSM303STATUS read_accelerometer(vector_type* acceleration_vector) {
	int16_t x_value = -1;
	int16_t y_value = -1;
	int16_t z_value = -1;
	
	//Can be optimized by reading 6 bytes and casting them to a vector type
	read_acc_two_bytes(OUT_X_L_A, (uint8_t *) &x_value);
	read_acc_two_bytes(OUT_Y_L_A, (uint8_t *) &y_value);
	read_acc_two_bytes(OUT_Z_L_A, (uint8_t *) &z_value);
	
	acceleration_vector->x = ACCELEROMETER_SENSITIVITY * x_value;
	acceleration_vector->y = ACCELEROMETER_SENSITIVITY * y_value;
	acceleration_vector->z = ACCELEROMETER_SENSITIVITY * z_value;

	return SUCCESS;
}

LSM303STATUS read_magnetometer(vector_type* magnetic_vector) {
	//read(SR_REG_M); //DRDY
	uint16_t x_value;
	uint16_t y_value;
	uint16_t z_value;
	
	read_acc_two_bytes(OUT_X_L_M, (uint8_t *) &x_value);
	read_acc_two_bytes(OUT_Y_L_M, (uint8_t *) &y_value);
	read_acc_two_bytes(OUT_Z_L_M, (uint8_t *) &z_value);
	
	magnetic_vector->x = x_value / MAGNETIC_GAIN_XY;
	magnetic_vector->y = y_value / MAGNETIC_GAIN_XY;
	magnetic_vector->z = z_value / MAGNETIC_GAIN_Z;

	return SUCCESS;
}

uint16_t read_temperature() {
	//return (read_mag(TEMP_OUT_L_M) >> 2 | (read_mag(TEMP_OUT_H_M) << 4)) / TEMPERATURE_GAIN; //12 bit resolution
	return 0;
}

uint8_t read_interrupt1() {
	uint8_t buffer = 0x00;
	//read(INT1_SRC_A, &buffer);
	return buffer && 0b01000000;
}

LSM303STATUS write_acc(uint8_t reg, uint8_t value) {
	i2c_m_sync_set_slaveaddr(&I2C_0, SAD_LINEAR_ACCELERATION, 1);
	return i2c_m_sync_cmd_write(&I2C_0, reg, value) == ERR_NONE ? SUCCESS : FAILURE;
}

LSM303STATUS write_mag(uint8_t reg, uint8_t value) {
	I2C_0.slave_addr = SAD_MAGNETIC_FIELD;
	return i2c_m_sync_cmd_write(&I2C_0, reg, value) == ERR_NONE ? SUCCESS : FAILURE;
}

LSM303STATUS read_acc(uint8_t reg, uint8_t* buffer) {
	I2C_0.slave_addr = SAD_LINEAR_ACCELERATION;
	return i2c_m_sync_cmd_read(&I2C_0, reg, buffer) == ERR_NONE ? SUCCESS : FAILURE;
}

LSM303STATUS read_acc_two_bytes(uint8_t reg, uint8_t* buffer) {
	i2c_m_sync_set_slaveaddr(&I2C_0, SAD_LINEAR_ACCELERATION, 1);
	if(i2c_m_sync_cmd_read(&I2C_0, reg, buffer) != ERR_NONE) { return FAILURE;};
	return i2c_m_sync_cmd_read(&I2C_0, reg + 1, buffer + 1) == ERR_NONE ? SUCCESS : FAILURE;
}

LSM303STATUS read_mag(uint8_t reg, uint8_t* buffer) {
	I2C_0.slave_addr = SAD_MAGNETIC_FIELD;
	return i2c_m_sync_cmd_read(&I2C_0, reg, buffer) == ERR_NONE ? SUCCESS : FAILURE;
}

LSM303STATUS read_mag_two_bytes(uint8_t reg, uint8_t* buffer) {
	I2C_0.slave_addr = SAD_MAGNETIC_FIELD;
	if(i2c_m_sync_cmd_read(&I2C_0, reg, buffer) != ERR_NONE) { return FAILURE;};
	return i2c_m_sync_cmd_read(&I2C_0, reg, buffer + 1) == ERR_NONE ? SUCCESS : FAILURE;
}

//Loop to assess acceleration
//void main() {
//	LSM303_init();
//	vector_type acceleration_vector;
//	LSM303STATUS status = FAILURE;
//	for(;;) {
//		status = read_accelerometer(&acceleration_vector);
//	}
//}