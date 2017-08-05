#ifndef __LSM303_H
#define __LSM303_H

#include <stdint.h>
#include "driver_init.h"
//Should read operation return data through pointer and return status?
//LSM303STATUS enum for return codes

#define SAD_LINEAR_ACCELERATION 0b0011001
#define SAD_MAGNETIC_FIELD 0b0011110

//Registers are 7 bit address
#define CTRL_REG1_A          0x20 //default value 00000111
#define CTRL_REG2_A          0x21 //default value 00000000
#define CTRL_REG3_A          0x22 //default value 00000000
#define CTRL_REG4_A          0x23 //default value 00000000
#define CTRL_REG5_A          0x24 //default value 00000000
#define CTRL_REG6_A          0x25 //default value 00000000
#define REFERENCE_A          0x26 //default value 00000000
#define STATUS_REG_A         0x14 //default value 00000000
#define OUT_X_L_A            0x28 //output
#define OUT_X_H_A            0x29 //output
#define OUT_Y_L_A            0x2A //output
#define OUT_Y_H_A            0x2B //output
#define OUT_Z_L_A            0x2C //output
#define OUT_Z_H_A            0x2D //output
#define FIFO_CTRL_REG_A      0x2E //default value 00000000
#define FIFO_SRC_REG_A       0x2F 
#define INT1_CFG_A           0x30 //default value 00000000
#define INT1_SRC_A           0x31 //default value 00000000
#define INT1_THS_A           0x32 //default value 00000000
#define INT1_DURATION_A      0x33 //default value 00000000
#define INT2_CFG_A           0x34 //default value 00000000
#define INT2_SRC_A           0x35 //default value 00000000
#define INT2_THS_A           0x36 //default value 00000000
#define INT2_DURATION_A      0x37 //default value 00000000
#define CLICK_CFG_A          0x38 //default value 00000000
#define CLICK_SRC_A          0x39 //default value 00000000
#define CLICK_THS_A          0x3A //default value 00000000
#define TIME_LIMIT_A         0x3B //default value 00000000
#define TIME_LATENCY_A       0x3C //default value 00000000
#define TIME_WINDOW_A        0x3D //default value 00000000
#define CRA_REG_M            0x00 //default value 0001000
#define CRB_REG_M            0x01 //default value 0010000
#define MR_REG_M             0x02 //default value 00000011
#define OUT_X_H_M            0x03 //output
#define OUT_X_L_M            0x04 //output
#define OUT_Z_H_M            0x05 //output
#define OUT_Z_L_M            0x06 //output
#define OUT_Y_H_M            0x07 //output
#define OUT_Y_L_M            0x08 //output
#define SR_REG_M             0x09 //default value 00000000
#define IRA_REG_M            0x0A //default value 01001000
#define IRB_REG_M            0x0B //default value 00110100
#define IRC_REG_M            0x0C //default value 00110011
#define TEMP_OUT_H_M         0x31 //output
#define TEMP_OUT_L_M         0x32 //output

#define LOW_POWER_10HZ       0b00101111

#define FIFO_EN              0b01000000
#define LIR_INT1             0b00001000

#define ACCELEROMETER_SENSITIVITY 1 //mg/LSB
#define MAGNETIC_GAIN_XY     230 //LSB/Gauss
#define MAGNETIC_GAIN_Z      205 //LSB/Gauss
#define TEMPERATURE_SENSITIVITY 8 //LSB/deg

#define ZYXDA 0b00001000

typedef enum LSM303STATUS {
	SUCCESS = 0,
	FAILURE = !SUCCESS
} LSM303STATUS;

typedef struct vector_type {
	int16_t x;
	int16_t y;
	int16_t z;
} vector_type;

LSM303STATUS LSM303_init();
bool is_accelerometer_data_available();
LSM303STATUS read_accelerometer(vector_type* acceleration_vector);
LSM303STATUS read_magnetometer(vector_type* magnetic_vector);
uint16_t read_temperature();

LSM303STATUS write_acc(uint8_t reg, uint8_t value);
LSM303STATUS write_mag(uint8_t reg, uint8_t value);
LSM303STATUS read_acc(uint8_t reg, uint8_t* buffer);
LSM303STATUS read_mag(uint8_t reg, uint8_t* buffer);

LSM303STATUS read_acc_two_bytes(uint8_t reg, uint8_t* buffer);

#endif //__LSM303_H
