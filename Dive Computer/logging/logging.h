#ifndef LOGGING_H
#define LOGGING_H

#include "spi_flash.h"

#define MAX_DIVE_RECORDS    (2000)

struct dive_record
{
	uint8_t dive_id;
	uint32_t timestamp;
	int32_t temperature;
	int32_t pressure;
};

struct logger
{
	struct dive_record dive_records[MAX_DIVE_RECORDS];
	uint32_t current_record;
};

void init_logger();
uint8_t log_dive_record(struct dive_record* record);
uint32_t get_last_dive_id();
void log_erase();

#endif