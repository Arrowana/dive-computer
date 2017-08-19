#include "logging.h"

struct logger active_logger;
uint8_t* logger_ptr;

#define LOGGING_SPI_FLASH_ADDRESS (0x20000) //Half of flash 128KB, 256KB in total

void init_logger() {
	spi_flash_clock_init();
	spi_flash_init();
	logger_ptr = (uint8_t*) &active_logger;
	//Load existing records into RAM
	uint32_t length = MAX_DIVE_RECORDS * sizeof(struct dive_record);
	spi_flash_read(active_logger.dive_records, LOGGING_SPI_FLASH_ADDRESS, length);
	active_logger.current_record = 0;
	
	while(active_logger.dive_records[active_logger.current_record].timestamp != 0xFFFFFFFF && active_logger.current_record < MAX_DIVE_RECORDS)
	{
		active_logger.current_record++;
	}
}

uint8_t log_dive_record(struct dive_record* record)
{
	if(active_logger.current_record >= MAX_DIVE_RECORDS)
	{
		return -1;
	}
	return spi_flash_write(record, LOGGING_SPI_FLASH_ADDRESS + active_logger.current_record++ * sizeof(struct dive_record), sizeof(struct dive_record));
}

void log_erase()
{
	//Remove all existing logs
	uint8_t buffer;
	spi_flash_read(&buffer, LOGGING_SPI_FLASH_ADDRESS, 1);
	if(buffer != 0xff) //Prevent flash erase loop
	{
		spi_flash_erase(LOGGING_SPI_FLASH_ADDRESS, 1000 * sizeof(struct dive_record));
	}
}