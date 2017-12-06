/* Auto-generated config file hpl_i2c_config.h */
#ifndef HPL_I2C_CONFIG_H
#define HPL_I2C_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

#include <peripheral_clk_config.h>
#include <hpl_lpmcu_misc_regs_config.h>

// Enable configuration of module
#ifndef CONF_I2CM_0_ENABLE
#define CONF_I2CM_0_ENABLE 1
#endif

// <h> Basic Configuration

// <o> Baud rate <1-12000000>
// <i> The I2C data transfer rate
// <id> i2c_master_baud_rate
#ifndef CONF_I2CM_0_BAUD
#define CONF_I2CM_0_BAUD 100000
#endif

// </h>

// Calculate baud register value from requested baudrate value
#ifndef CONF_I2CM_0_CLOCK_DIVIDER
#define CONF_I2CM_0_CLOCK_DIVIDER (uint16_t)(((float)CONF_I2C0_FREQUENCY / (float)(2 * CONF_I2CM_0_BAUD)) - 1)
#endif

#ifndef CONF_I2CM_0_PRESCALER
#define CONF_I2CM_0_PRESCALER CONF_I2C0_PRESCALER
#endif

// <<< end of configuration section >>>

#endif // HPL_I2C_CONFIG_H
