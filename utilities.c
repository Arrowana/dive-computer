#include "utilities.h"

void delay(uint32_t duration_ms)
{
	volatile uint32_t i = 0;
	while(i++ != 2500 * duration_ms);
}