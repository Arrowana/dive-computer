#include <atmel_start.h>
#include "sensors/LSM303DLHC.h"
#include "sensors/MS5837.h"
#include "display/ST7735.h"
#include "display/bitmaps.h"
#include "utilities.h"
#include "math.h"
#include "hpl_irq.h"
#include "logging/logging.h"
#include "types.h"

//#define LSM303_ENABLE
#define DIVE_START_DEPTH    (1.0)
#define DIVE_END_DEPTH      (0.3)

struct io_descriptor *io_i2c;
struct timer_task TIMER_0_task;
volatile uint32_t ticks = 0; //Used for timing

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
	initR(INITR_144GREENTAB);
	fillScreen(ST7735_BLACK);
}

float_t pressure_to_depth(int32_t pressure_hpa)
{
	//Return depth in meters
	float_t depth = (pressure_hpa - 100000) / 1030 / 9.81;
	
	return depth;
}

void dive_computer_init()
{
	peripherals_init();
	sensors_init();
	screen_init();
	init_logger();
	//log_erase();
	//init_logger();
	TIMER_0_example(); //TODO: Rename
}

uint32_t get_time()
{
	return ticks; //Ticks is the time in seconds
}

//Dive computer program entry
void run_dive_computer()
{
	dive_computer_init();
	uint32_t cycles = 0;
	timer_get_clock_cycles_in_tick(&TIMER_0, &cycles);
	
	LSM303STATUS status = FAILURE;
	vector_type acceleration_vector = {0, 0, 0};
	vector_type	magnetometer_vector = {0, 0, 0};
	double heading = 0;

	MS5837_measurements temp_pressure = {0, 0};
	float_t depth = 0;
	bool dive_in_progress = false;

	struct time dive_time = {0, 0};
	uint8_t dive_id = get_last_dive_id();
	uint32_t start_dive_timestamp = 0;

	ST7735_drawBitmap(0, 0, splashscreen, 128, 128, ST7735_WHITE);
	delay(1000);
	fastFillRect(0, 0, 128, 128, ST7735_BLACK);
    struct dive_record current_dive_record = {0, 0, 0, 0};
	uint8_t log_status = 0;

	while(1)
	{
		MS5857_get_measurements(ADC_4096, &temp_pressure);
		depth = pressure_to_depth(temp_pressure.pressure * 10);
		
		if(depth > DIVE_START_DEPTH)
		{
			if(!dive_in_progress)
			{
				//New dive
				dive_id++;
				start_dive_timestamp = ticks;
			}
			dive_in_progress = true;
		}
		else if (depth < DIVE_END_DEPTH)
		{
			dive_in_progress = false;
		}
		
		if(dive_in_progress)
		{
			uint32_t current_dive_timestamp = ticks - start_dive_timestamp;
			dive_time.minute = current_dive_timestamp / 60;
			dive_time.second = current_dive_timestamp % 60;
			
			current_dive_record.dive_id = dive_id;
			current_dive_record.timestamp = current_dive_timestamp;
			current_dive_record.temperature = temp_pressure.temperature;
			current_dive_record.pressure = temp_pressure.pressure;
			log_status = log_dive_record(&current_dive_record);
		}

	#ifdef LSM303_ENABLE
		status = read_accelerometer(&acceleration_vector);
		read_magnetometer(&magnetometer_vector);
		heading = atan2(magnetometer_vector.y, magnetometer_vector.x) * 180 / M_PI;
	#endif
	
		display_data_t display_data;
		display_data.dive_time = &dive_time;
		display_data.temp_pressure = &temp_pressure;
		display_data.depth = depth;
		display_data.dive_id = dive_id;
		update_display(&display_data);
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
