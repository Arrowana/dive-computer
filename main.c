#include <atmel_start.h>
#include "LSM303DLHC.h"
#include "MS5837.h"
#include "ST7735.h"
#include "utilities.h"
#include "bitmaps.h"
#include "math.h"
#include "hpl_irq.h"
#include "logging.h"
#include "test_spi_flash.h"

struct io_descriptor *io_i2c;

//#define LSM303_ENABLE

void i2c_init()
{
	i2c_m_sync_get_io_descriptor(&I2C_0, &io_i2c);
	i2c_m_sync_enable(&I2C_0);
}

void spi_init()
{
	spi_m_sync_get_io_descriptor(&SPI_0, &io_lcd_spi);
	spi_m_sync_enable(&SPI_0);
}

//Read accelerometer in a loop to check readings
void test_lsm303()
{
	i2c_init();
	LSM303_init();
	vector_type acceleration_vector;
	LSM303STATUS status = FAILURE;
	
	for(;;) {
		status = read_accelerometer(&acceleration_vector);
	}	
}

void test_ms5837()
{
	i2c_init();
	MS5837_init();
	
	MS5837_measurements temp_pressure;
	for(;;) {
		MS5857_get_measurements(ADC_4096, &temp_pressure);
	}
}

//Write hello world on MOSI
void test_spi()
{
	spi_m_sync_get_io_descriptor(&SPI_0, &io_lcd_spi);
	
	uint8_t example_SPI_0[12] = "Hello World!";
	spi_m_sync_enable(&SPI_0);
	while(1)
	{
		io_write(io_lcd_spi, example_SPI_0, 12);
	}
}

void test_screen()
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
	
#ifdef LSM303_ENABLE
	LSM303_init();
#endif
}

void screen_init()
{
	//ST7735_backLight(0);
	initR(INITR_144GREENTAB);
	fillScreen(ST7735_BLACK);
	//ST7735_backLight(1);
}

int32_t pressure_to_depth(int32_t pressure_hpa, unsigned char* depth_string)
{
	//From stackoverflow https://stackoverflow.com/questions/905928/using-floats-with-sprintf-in-embedded-c
	float_t depth = (pressure_hpa - 100000) / 1030 / 9.81;

	char *tmpSign = (depth < 0) ? "-" : "";
	float tmpVal = (depth < 0) ? -depth : depth;

	int tmpInt1 = tmpVal;                  // Get the integer (678).
	float tmpFrac = tmpVal - tmpInt1;      // Get fraction (0.0123).
	int tmpInt2 = tmpFrac * 100;  // Turn into integer (123).

	// Print as parts, note that you need 0-padding for fractional bit.
	sprintf(depth_string, "Depth: %s%d.%02d m\n", tmpSign, tmpInt1, tmpInt2);
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
	unsigned char* depth_string[20] = {};
		
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

	#ifdef LSM303_ENABLE
		status = read_accelerometer(&acceleration_vector);
		sprintf(acceleration_string, "ACC \nx:%d \ny:%d \nz:%d\n", acceleration_vector.x, acceleration_vector.y, acceleration_vector.z);
	#else
		sprintf(acceleration_string, "ACC \nOFF\n\n\n");
	#endif

		sprintf(MS5837_output_string, "MS5837 \nT:%d degC\nP:%d .1mbar\n", temp_pressure.temperature, temp_pressure.pressure);
		pressure_to_depth(temp_pressure.pressure * 10, depth_string);
		
		ST7735_set_text_size(1);
		ST7735_print(acceleration_string);
		ST7735_print("\n");
		ST7735_print(MS5837_output_string);
		ST7735_print("\n");
		ST7735_print(depth_string);
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

volatile uint32_t ticks = 0;
void SysTick_Handler(void)
{
	ticks++;
}

void test_systick()
{
	SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk; //Disable systick
	uint32_t state = SysTick_Config(26000000/100);
	for(;;)
	{
		uint32_t tick = SysTick->VAL;
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
