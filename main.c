#include <atmel_start.h>
#include "LSM303DLHC.h"
#include "MS5837.h"
#include "ST7735.h"
#include "utilities.h"
#include "bitmaps.h"

struct io_descriptor *io_i2c;

//Read accelerometer in a loop to check readings
void lsm303_test()
{
	i2c_init();
	LSM303_init();
	vector_type acceleration_vector;
	LSM303STATUS status = FAILURE;
	
	for(;;) {
		status = read_accelerometer(&acceleration_vector);
	}	
}

void ms5837_test()
{
	i2c_init();
	I2C_0.slave_addr = 0b1110110;

	uint8_t reg = 0b00011110; //RESET
	uint32_t ret = io_i2c->write(io_i2c, &reg, 1);
	
	uint8_t measurement[3] = {0, 0, 0};
	for(;;) {
		reg = 0b01001000;  //CONVERT
		ret = io_i2c->write(io_i2c, &reg, 1);
		reg = 0b00000000; //READ ADC
		ret = io_i2c->write(io_i2c, &reg, 1);
		//Wait for conversion
		delay(50);
		uint8_t read_ret = i2c_m_sync_cmd_read(&I2C_0, 0x00, measurement);
	}
}

void i2c_init()
{
	i2c_m_sync_get_io_descriptor(&I2C_0, &io_i2c);
	i2c_m_sync_enable(&I2C_0);
}

void spi_init()
{
	spi_m_sync_get_io_descriptor(&SPI_0, &io_lcd_spi);
	spi_m_sync_enable(&SPI_0);
	//Next line seems to break stuff
	//spi_m_sync_set_data_order(&SPI_0, SPI_DATA_ORDER_MSB_1ST);
}

//Write hello world on MOSI
void spi_test()
{
	spi_m_sync_get_io_descriptor(&SPI_0, &io_lcd_spi);
	
	uint8_t example_SPI_0[12] = "Hello World!";
	spi_m_sync_enable(&SPI_0);
	while(1)
	{
		io_write(io_lcd_spi, example_SPI_0, 12);
	}
}

//Try to display basic stuff on the screen
void screen_test()
{
	spi_init();
	initR(INITR_144GREENTAB);
	ST7735_backLight(0);
	ST7735_backLight(1); //ENABLE backlight
	drawPixel(50, 50, ST7735_RED);
	
	while(1)
	{
		fillScreen(ST7735_BLUE);
		fillScreen(ST7735_RED);
		fillScreen(ST7735_BLACK);
		fillRect(0, 0, 30, 30, ST7735_YELLOW);
		unsigned char i;
		for(i= 0;i<90;i++) {
			drawChar(50, 50, i, ST7735_BLUE, ST7735_BLACK, 5);
		}
	}
}

void peripherals_init()
{
	i2c_init();
	spi_init();
}

void sensors_init()
{
	MS5837_init();
	LSM303_init();
}

void screen_init()
{
	//ST7735_backLight(0);
	initR(INITR_144GREENTAB);
	fillScreen(ST7735_BLACK);
	//ST7735_backLight(1);
}

//Dive computer program entry
void run_dive_computer()
{
	peripherals_init();
	sensors_init();
	screen_init();
	
	vector_type acceleration_vector;
	MS5837_measurements temp_pressure;
	LSM303STATUS status = FAILURE;

	//ST7735_print("Hello, ready to dive\n\n");
	uint8_t seconds = 0;
	unsigned char* buffer[40] = {};
	unsigned char* acceleration_string[100] = {};
	unsigned char* MS5837_output_string[100] = {};
		
	ST7735_drawBitmap(0, 0, splashscreen, 128, 128, ST7735_WHITE);
	delay(5000);
	fillScreen(ST7735_BLACK);

	while(1)
	{
		ST7732_set_cursor(0, 0);
		delay(200);
		sprintf(buffer, "00:%02d\n", seconds);
		ST7735_set_text_size(4);
		ST7735_print(buffer);
		if(seconds == 59)
		{
			seconds = 0;
		}
		else
		{
			seconds++;
		}

		MS5857_get_measurements(ADC_4096, &temp_pressure);
		status = read_accelerometer(&acceleration_vector);

		sprintf(acceleration_string, "ACC \nx:%d \ny:%d \nz:%d\n", acceleration_vector.x, acceleration_vector.y, acceleration_vector.z);
		sprintf(MS5837_output_string, "MS5837 \nT:%d degC\nP:%d .1mbar\n", temp_pressure.temperature, temp_pressure.pressure);

		ST7735_set_text_size(1);
		ST7735_print(acceleration_string);
		ST7735_print("\n");
		ST7735_print(MS5837_output_string);
	}
}

//Used to define a sleep given the instruction time
void delay_test()
{
	//Attempt to establish a delay
	volatile uint32_t i = 0;
	while(1)
	{
		gpio_set_pin_level(GPIO_PIN_RST, 0);
		while(i++ != 2500); // ~ 1 ms
		i = 0;
		gpio_set_pin_level(GPIO_PIN_RST, 1);
	}
}

int main(void)
{
	//Maximum hack to unfuck SPI
	uint8_t* spi_module_enable = 0x40006018;
	*spi_module_enable = 0x00;
	
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	run_dive_computer();
}
