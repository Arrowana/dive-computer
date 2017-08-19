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

//#define LSM303_ENABLE
#define DIVE_START_DEPTH 0.5
#define DIVE_END_DEPTH 0.2

struct io_descriptor *io_i2c;
struct timer_task TIMER_0_task;
volatile uint32_t ticks = 0;


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

static void TIMER_0_wakeup_task_cb(const struct timer_task *const timer_task)
{
	ticks++;
}

void TIMER_0_example(void)
{
	TIMER_0_task.interval = 1;
	TIMER_0_task.cb       = TIMER_0_wakeup_task_cb;
	TIMER_0_task.mode     = TIMER_TASK_REPEAT;

	timer_add_task(&TIMER_0, &TIMER_0_task);
	timer_start(&TIMER_0);
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
	ST7735_backLight(0);
	initR(INITR_144GREENTAB);
	fillScreen(ST7735_BLACK);
	ST7735_backLight(1);
}

float_t pressure_to_depth(int32_t pressure_hpa)
{
	//Return depth in meters
	float_t depth = (pressure_hpa - 100000) / 1030 / 9.81;
	
	return depth;
}

void format_depth_string(float depth, unsigned char* depth_string)
{
	//sprintf float formattting, from stackoverflow https://stackoverflow.com/questions/905928/using-floats-with-sprintf-in-embedded-c
	char *tmpSign = (depth < 0) ? "-" : "";
	float tmpVal = (depth < 0) ? -depth : depth;

	int tmpInt1 = tmpVal;                  // Get the integer (678).
	float tmpFrac = tmpVal - tmpInt1;      // Get fraction (0.0123).
	int tmpInt2 = tmpFrac * 100;  // Turn into integer (123).

	// Print as parts, note that you need 0-padding for fractional bit.
	sprintf(depth_string, "D: %s%d.%02dm \n", tmpSign, tmpInt1, tmpInt2);
} 

unsigned char* buffer[40] = {};
unsigned char* acceleration_string[100] = {};
unsigned char* MS5837_output_string[100] = {};
unsigned char* depth_string[20] = {};
unsigned char* dive_id_string[20] = {};
	
struct time
{
	uint8_t minute;
	uint8_t second;
};

void update_display(struct time* dive_time, vector_type* acceleration_vector, MS5837_measurements* temp_pressure, float_t depth, uint8_t dive_id)
{
	ST7732_set_cursor(0, 0);
	ST7735_set_text_size(4);

	sprintf(buffer, "%02d:%02d\n", dive_time->minute, dive_time->second);
	ST7735_print(buffer);
	sprintf(acceleration_string, "ACC \nx:%d \ny:%d \nz:%d\n", acceleration_vector->x, acceleration_vector->y, acceleration_vector->z);
	sprintf(MS5837_output_string, "MS5837 \nT:%d degC\nP:%d .1mbar\n", temp_pressure->temperature, temp_pressure->pressure);
	format_depth_string(depth, depth_string);
	sprintf(dive_id_string, "dive: %d", dive_id);
	
	ST7735_set_text_size(1);
	ST7735_print(acceleration_string);
	ST7735_print("\n");
	ST7735_print(MS5837_output_string);
	ST7735_set_text_size(2);
	ST7735_print(depth_string);
	ST7735_set_text_size(1);
	ST7735_print(dive_id_string);
}

//Dive computer program entry
void run_dive_computer()
{
	peripherals_init();
	sensors_init();
	screen_init();
	init_logger();

	TIMER_0_example();

	uint32_t cycles = 0;
	timer_get_clock_cycles_in_tick(&TIMER_0, &cycles);
	
	vector_type acceleration_vector = {0, 0, 0};
	MS5837_measurements temp_pressure = {0, 0};
	float_t depth = 0;
	bool dive_in_progress = false;
	LSM303STATUS status = FAILURE;

	struct time dive_time = {0, 0};
	uint8_t dive_id = 0;

	ST7735_drawBitmap(0, 0, splashscreen, 128, 128, ST7735_WHITE);
	delay(5000);
	fillScreen(ST7735_BLACK);
    struct dive_record current_dive_record = {0, 0, 0};
	uint8_t log_status = 0;

	while(1)
	{
		MS5857_get_measurements(ADC_4096, &temp_pressure);
		depth = pressure_to_depth(temp_pressure.pressure * 10);
		
		current_dive_record.temperature = temp_pressure.temperature;
		current_dive_record.pressure = temp_pressure.pressure;
		log_status = log_dive_record(&current_dive_record);
		
		if(depth > DIVE_START_DEPTH)
		{
			if(!dive_in_progress)
			{
				dive_time.second = 0; //Reset stopwatch
				dive_id++;
			}
			dive_in_progress = true;
		}
		else if (depth < DIVE_END_DEPTH)
		{
			dive_in_progress = false;
		}
		
		if(dive_in_progress)
		{
			//fake time
			if(dive_time.second == 59)
			{
				dive_time.second = 0;
			}
			else
			{
				dive_time.second++;
			}
		}

	#ifdef LSM303_ENABLE
		status = read_accelerometer(&acceleration_vector);
	#endif

		update_display(&dive_time, &acceleration_vector, &temp_pressure, depth, dive_id);
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
