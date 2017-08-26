/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <utils.h>
#include <hal_init.h>

#include <hpl_aon_sleep_timer.h>

struct timer_descriptor TIMER_0;
struct i2c_m_sync_desc I2C_0;
struct spi_m_sync_descriptor SPI_0;
struct wdt_descriptor WDT_0;

void WDT_0_CLOCK_init(void)
{
}

void WDT_0_init(void)
{
	WDT_0_CLOCK_init();
	wdt_init(&WDT_0, WDT0);
	wdt_disable(&WDT_0);
}

static void TIMER_0_init(void)
{
	//see AON_SLEEP_TIMER_TICK to tune the timer
	timer_init(&TIMER_0, AON_SLEEP_TIMER0, _aon_get_timer());
}

void I2C_0_PORT_init(void)
{
	gpio_set_pin_function(LP_GPIO_9, PINMUX_LP_GPIO_9_M_I2C0_SCL);
	gpio_set_pin_function(LP_GPIO_8, PINMUX_LP_GPIO_8_M_I2C0_SDA);
}

void I2C_0_CLOCK_init(void)
{
}

void I2C_0_init(void)
{
	I2C_0_CLOCK_init();
	i2c_m_sync_init(&I2C_0, I2C0);
	I2C_0_PORT_init();
}

void I2C0_register_isr(void)
{
	uint32_t *temp;
}

void SPI_0_PORT_init(void)
{
	//We don't need MISO
	// Set pin direction to input
	//gpio_set_pin_direction(LP_GPIO_5, GPIO_DIRECTION_IN);
	//gpio_set_pin_pull_mode(LP_GPIO_5, GPIO_PULL_OFF);
	//gpio_set_pin_function(LP_GPIO_5, PINMUX_LP_GPIO_5_SPI0_MISO);

	// Set pin direction to output
	gpio_set_pin_direction(LP_GPIO_11, GPIO_DIRECTION_OUT);
	gpio_set_pin_level(LP_GPIO_11, false);
	gpio_set_pin_function(LP_GPIO_11, PINMUX_LP_GPIO_11_SPI0_MOSI);

	// Set pin direction to output
	gpio_set_pin_direction(LP_GPIO_10, GPIO_DIRECTION_OUT);
	gpio_set_pin_level(LP_GPIO_10, false);
	gpio_set_pin_function(LP_GPIO_10, PINMUX_LP_GPIO_10_SPI0_SCK);
	
	//Chip select
	gpio_set_pin_direction(LP_GPIO_12, GPIO_DIRECTION_OUT);
	gpio_set_pin_level(LP_GPIO_12, false);
	
	//Initalize TFT_RESET
	gpio_set_pin_direction(LP_GPIO_13, GPIO_DIRECTION_OUT);
	gpio_set_pin_level(LP_GPIO_13, true);
	
	//A0 register control
	gpio_set_pin_direction(LP_GPIO_7, GPIO_DIRECTION_OUT);
	
	//LED_EN
	gpio_set_pin_direction(LP_GPIO_3, GPIO_DIRECTION_OUT);
	gpio_set_pin_pull_mode(LP_GPIO_3, GPIO_PULL_OFF);
	gpio_set_pin_function(LP_GPIO_8, GPIO_PIN_FUNCTION_OFF);
}

void SPI_0_CLOCK_init(void)
{
}

void SPI0_register_isr(void)
{
	uint32_t *temp;

	temp  = (uint32_t *)((RAM_ISR_TABLE_SPIRX0 + (0 << 1)) * 4 + ISR_RAM_MAP_START_ADDRESS);
	*temp = (uint32_t)SPI0_RX_Handler;

	temp  = (uint32_t *)((RAM_ISR_TABLE_SPITX0 + (0 << 1)) * 4 + ISR_RAM_MAP_START_ADDRESS);
	*temp = (uint32_t)SPI0_TX_Handler;
}

void SPI_0_init(void)
{
	SPI_0_CLOCK_init(); //useless?
	spi_m_sync_init(&SPI_0, SPI0);
	SPI_0_PORT_init();
}

void AON_SLEEP_TIMER0_register_isr(void)
{
	uint32_t *temp;

	temp  = (uint32_t *)((RAM_ISR_TABLE_AON_SLEEP_TIMER + 0) * 4 + ISR_RAM_MAP_START_ADDRESS);
	*temp = (uint32_t)AON_SLEEP_TIMER0_Handler;
}

void system_init(void)
{
	init_mcu();
	
	AON_SLEEP_TIMER0_register_isr();
	TIMER_0_init();
	
	//WDT_0_init(); //Seems to have drastic consequences on the operation of everything
	
	//SPI0_register_isr();
	SPI_0_init();
	
	I2C0_register_isr();
	I2C_0_init();
}
