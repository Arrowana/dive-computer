/* Auto-generated config file peripheral_clk_config.h */
#ifndef PERIPHERAL_CLK_CONFIG_H
#define PERIPHERAL_CLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <h> I2C0 Clock Settings
// <y> I2C0 Clock source
// <I2C0_CLOCK_SOURCE"> I2C0 Divider
// <i> This defines the clock source for the I2C0
// <id> i2c_clock_source
#ifndef CONF_I2C0_SRC
#define CONF_I2C0_SRC I2C0_CLOCK_SOURCE
#endif
// </h>

/**
 * \def I2C0 FREQUENCY
 * \brief I2C0's Clock frequency
 */
#ifndef CONF_I2C0_FREQUENCY
#define CONF_I2C0_FREQUENCY 26000000
#endif

// <h> SPI0 Clock Settings
// <y> SPI0 Clock source
// <SPI0_CLOCK_SOURCE">SPI0 Divider
// <i> This defines the clock source for the SPI0
// <id> spi_clock_source
#ifndef CONF_SPI0_SRC
#define CONF_SPI0_SRC SPI0_CLOCK_SOURCE
#endif
// </h>

/**
 * \def SPI0 FREQUENCY
 * \brief SPI0's Clock frequency
 */
#ifndef CONF_SPI0_FREQUENCY
#define CONF_SPI0_FREQUENCY 26000000
#endif

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 26000000
#endif

// <<< end of configuration section >>>

#endif // PERIPHERAL_CLK_CONFIG_H
