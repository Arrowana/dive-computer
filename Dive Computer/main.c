#include "driver_init.h"
#include "sensors/LSM303DLHC.h"
#include "sensors/MS5837.h"
#include "display/ST7735.h"
#include "display/bitmaps.h"
#include "utilities.h"
#include "math.h"
#include "hpl_irq.h"
#include "logging/logging.h"
#include "types.h"

//#define LSM303_ENABLED 1
#define I2C_ENABLED 1
//#define SOUND_ENABLED 1
#define SPI_DISPLAY_ENABLED 1
#define DIVE_START_DEPTH    (1.0)
#define DIVE_END_DEPTH      (0.3)

struct io_descriptor *io_i2c;
struct timer_task TIMER_0_task;
volatile uint32_t ticks = 0; //Used for timing

// TODO: Ideally we will separate this logic in the another file.
#ifdef SOUND_ENABLED
uint32_t soundWaveTicks = 0;
static const uint32_t soundToggleLimit = 10;
bool soundIsOn = true; // For debug only. This logic is controlled by alarm settings.

void soundLogicRun() 
{
	if (soundIsOn) 
	{
		soundWaveTicks += 1;
		if (soundWaveTicks > soundToggleLimit) 
		{
			uint8_t soundPin = getSoundPin();
			gpio_toggle_pin_level(soundPin);
			soundWaveTicks = 0;		
		}
	}
}

void sound_init() 
{
// This method does not do much for now. But in the future will use the timer initialisation.	
}

#endif


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

void TIMER_0_Init(void)
{
	TIMER_0_task.interval = 1;
	TIMER_0_task.cb       = TIMER_0_wakeup_task_cb;
	TIMER_0_task.mode     = TIMER_TASK_REPEAT;

	timer_add_task(&TIMER_0, &TIMER_0_task);
	timer_start(&TIMER_0);
}

void peripherals_init()
{
#ifdef I2C_ENABLED
	i2c_init();
#endif

#ifdef SPI_DISPLAY_ENABLED
	spi_init();
#endif
}

void sensors_init()
{
	// This code MS5837 sensor initiation freezes when the sensor is not connected.
#ifdef I2C_ENABLED
	MS5837_init();
	//uint8_t addr = find_I2C_address(); // Find the address of the sensor.
#endif
#ifdef LSM303_ENABLED
	LSM303_init();
#endif
}

void screen_init()
{
#ifdef SPI_DISPLAY_ENABLED
	initR(INITR_144GREENTAB);
	fillScreen(ST7735_BLACK);
#endif
}

float_t pressure_to_depth(int32_t pressure_hpa)
{
	//Return depth in meters
	// TODO: Here should be used initial atmospheric pressure instead of 101325, which is by definition the 1 atm in pascals.
	// TODO: Default density of the oceanic water is 1025. For fresh (lakes) water 1000 should be used.
	float_t depth = (pressure_hpa - 101325) / 1030 / 9.81;
	return depth;
}

void dive_computer_init()
{
	peripherals_init();
	sensors_init();
	screen_init();
	init_logger();
	//log_erase(); // To start logging all over
	TIMER_0_Init();
#ifdef SOUND_ENABLED	 
	sound_init();
#endif
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
#ifdef LSM303_ENABLED
	LSM303STATUS status = FAILURE;
	vector_type acceleration_vector = {0, 0, 0};
	vector_type	magnetometer_vector = {0, 0, 0};
	double heading = 0;
#endif
	MS5837_measurements temp_pressure = {0, 0};
	float_t depth = 0;
	bool dive_in_progress = false;

	struct time dive_time = {0, 0};
	uint8_t dive_id = get_last_dive_id();
	uint32_t start_dive_timestamp = 0;
#ifdef SPI_DISPLAY_ENABLED
	ST7735_drawBitmap(0, 0, splashscreen, 128, 128, ST7735_WHITE);
	delay(1000);
	fastFillRect(0, 0, 128, 128, ST7735_BLACK);
#endif
    struct dive_record current_dive_record = {0, 0, 0, 0};
	uint8_t log_status = 0;

	while(1)
	{
#ifdef I2C_ENABLED
		MS5857_get_measurements(ADC_4096, &temp_pressure);
		depth = pressure_to_depth(temp_pressure.pressure * 10);
#else
		depth = 0;
#endif
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
#ifdef SOUND_ENABLED	
		soundLogicRun();
#endif

#ifdef LSM303_ENABLED
		status = read_accelerometer(&acceleration_vector);
		read_magnetometer(&magnetometer_vector);
		heading = atan2(magnetometer_vector.y, magnetometer_vector.x) * 180 / M_PI;
#endif

#ifdef SPI_DISPLAY_ENABLED
		display_data_t display_data;
		display_data.dive_time = &dive_time;
		display_data.temp_pressure = &temp_pressure;
		display_data.depth = depth;
		display_data.dive_id = dive_id;
		update_display(&display_data);
#endif
	}
}

int main(void)
{	
	bool spiEnabled = false;
	bool i2cEnabled = false;
	bool soundEnabled = false;
		
#ifdef SPI_DISPLAY_ENABLED
	//Hack to make SPI working
	uint8_t* spi_module_enable = 0x40006018;
	*spi_module_enable = 0x00;
	spiEnabled = true;
#endif

#ifdef I2C_ENABLED
	i2cEnabled = true;
#endif

#ifdef SOUND_ENABLED
	soundEnabled = true;
#endif

	/* Initializes MCU, drivers and middleware */
	system_init(spiEnabled, i2cEnabled, soundEnabled);
	run_dive_computer();
}
