#include "display.h"

unsigned char* buffer[40] = {};
unsigned char* acceleration_string[100] = {};
unsigned char* MS5837_output_string[100] = {};
unsigned char* depth_string[20] = {};
unsigned char* dive_id_string[20] = {};
unsigned char* ticks_string[20] = {};

void format_depth_string(float depth, unsigned char* depth_string)
{
	//sprintf float formattting, from stackoverflow https://stackoverflow.com/questions/905928/using-floats-with-sprintf-in-embedded-c
	char *tmpSign = (depth < 0) ? "-" : "";
	float tmpVal = (depth < 0) ? -depth : depth;

	int tmpInt1 = tmpVal;                  // Get the integer (678).
	float tmpFrac = tmpVal - tmpInt1;      // Get fraction (0.0123).
	int tmpInt2 = tmpFrac * 10;  // Turn into integer (123).

	// Print as parts, note that you need 0-padding for fractional bit.
	sprintf(depth_string, "D %s%d.%01dm \n", tmpSign, tmpInt1, tmpInt2);
}

void update_display(display_data_t *display_data)
{
	//Format
	sprintf(buffer, "%02d:%02d\n", display_data->dive_time->minute, display_data->dive_time->second);
	format_depth_string(display_data->depth, depth_string);
	sprintf(MS5837_output_string, "MS5837 \nT:%d degC\nP:%d .1mbar\n", display_data->temp_pressure->temperature, display_data->temp_pressure->pressure);
	//sprintf(acceleration_string, "ACC \nx:%d \ny:%d \nz:%d\n", acceleration_vector->x, acceleration_vector->y, acceleration_vector->z);
	sprintf(dive_id_string, "dive: %d\n", display_data->dive_id);
	//sprintf(ticks_string, "ticks: %d\n", ticks);
	
	//Display
	ST7732_set_cursor(0, 0);
	ST7735_set_text_size(4);
	ST7735_print(buffer);
	ST7735_set_text_size(3);
	ST7735_print(depth_string);
	ST7735_set_text_size(1);
	//ST7735_print(acceleration_string);
	ST7735_print(MS5837_output_string);
	ST7735_print(ticks_string);
	ST7735_print(dive_id_string);
}
