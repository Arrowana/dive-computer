#ifndef TYPES_H_
#define TYPES_H_

#include "sensors/LSM303DLHC.h"
#include "sensors/MS5837.h"

typedef struct
{
	struct time* dive_time;
	vector_type* acceleration_vector;
	MS5837_measurements* temp_pressure;
	float_t depth;
	uint8_t dive_id;
} display_data_t;

struct time
{
	uint8_t minute;
	uint8_t second;
};

#endif /* TYPES_H_ */