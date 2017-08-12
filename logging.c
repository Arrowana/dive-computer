#include "logging.h"

struct logger active_logger;

#define LOGGING_SPI_FLASH_ADDRESS (0x20000) //Half of flash 128KB, 256KB in total

void init_logger() {
	spi_flash_clock_init();
	spi_flash_init();
	
	//Load existing records into RAM
	spi_flash_read(active_logger.dive_records, LOGGING_SPI_FLASH_ADDRESS, MAX_DIVE_RECORDS * sizeof(active_logger.dive_records));
	active_logger.current_record = 0;
	
	while(active_logger.dive_records[++active_logger.current_record].timestamp != 0xFFFFFFFF && active_logger.current_record < MAX_DIVE_RECORDS)
	{
	}
}

void log_dive_record(struct dive_record* record)
{
	if(active_logger.current_record >= MAX_DIVE_RECORDS)
	{
		return;
	}
	spi_flash_write(record, LOGGING_SPI_FLASH_ADDRESS + (++active_logger.current_record), sizeof(struct dive_record));
}

void log_erase()
{
	//Remove all existing logs
	uint8_t buffer;
	spi_flash_read(&buffer, LOGGING_SPI_FLASH_ADDRESS, 1);
	if(buffer != 0xff) //Prevent flash erase loop
	{
		spi_flash_erase(LOGGING_SPI_FLASH_ADDRESS, 12 * 1024);
	}
}