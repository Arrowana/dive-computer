#ifndef TEST_SPI_FLASH_C
#define TEST_SPI_FLASH_C
#include "test_spi_flash.h"

void test_spi_flash()
{
	spi_flash_clock_init();
	spi_flash_init();
	
	uint8_t write_buffer[10] = {0, 1, 2, 3, 4, 5};
	spi_flash_write(write_buffer, 0x20000, sizeof(write_buffer));
	
	
	uint8_t read_buffer[200] = {0,};
	spi_flash_read(read_buffer, 0x20000, sizeof(read_buffer)); //spi_flash_read(uint8_t *read_buf, uint32_t flash_addr, uint32_t size)
	
	volatile uint8_t done;
}

#endif