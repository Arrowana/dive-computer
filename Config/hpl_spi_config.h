/* Auto-generated config file hpl_spi_config.h */
#ifndef HPL_SPI_CONFIG_H
#define HPL_SPI_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

#include <peripheral_clk_config.h>
#include <hpl_lpmcu_misc_regs_config.h>

// Enable configuration of module
#ifndef CONF_SPI_0_ENABLE
#define CONF_SPI_0_ENABLE 1
#endif

// Set module in SPI Master mode
#ifndef CONF_SPI_0_MODE
#define CONF_SPI_0_MODE 0x01
#endif

// <h> Basic Configuration

// <o> Baud rate <1-12000000>
// <i> The SPI data transfer rate
// <id> spi_master_baud_rate
#ifndef CONF_SPI_0_BAUD
#define CONF_SPI_0_BAUD 13000000
#endif

// </h>

// <e> Advanced Configuration
// <id> spi_master_advanced
#ifndef CONF_SPI_0_ADVANCED
#define CONF_SPI_0_ADVANCED 1
#endif

// <o> Dummy byte <0x00-0x1ff>
// <id> spi_master_dummybyte
// <i> Dummy byte used when reading data from the slave without sending any data
#ifndef CONF_SPI_0_DUMMYBYTE
#define CONF_SPI_0_DUMMYBYTE 0xff
#endif

// <o> Data Order
// <0=>MSB first
// <1=>LSB first
// <i> I least significant or most significant bit is shifted out first (DORD)
// <id> spi_master_arch_dord
#ifndef CONF_SPI_0_DORD
#define CONF_SPI_0_DORD 0x0
#endif

// <o> Clock Polarity
// <0=>SCK is low when idle
// <1=>SCK is high when idle
// <i> Determines if the leading edge is rising or falling with a corresponding opposite edge at the trailing edge. (CPOL)
// <id> spi_master_arch_cpol
#ifndef CONF_SPI_0_CPOL
#define CONF_SPI_0_CPOL 0x0
#endif

// <o> Clock Phase
// <0x0=>Sample input on leading edge
// <0x1=>Sample input on trailing edge
// <i> Determines if input data is sampled on leading or trailing SCK edge. (CPHA)
// <id> spi_master_arch_cpha
#ifndef CONF_SPI_0_CPHA
#define CONF_SPI_0_CPHA 0x0
#endif

// </e>

// Calculate baud register value from requested baudrate value
#ifndef CONF_SPI_0_CLOCK_DIVIDER
#define CONF_SPI_0_CLOCK_DIVIDER (uint16_t)(((float)CONF_SPI0_FREQUENCY / (float)(2 * CONF_SPI_0_BAUD)) - 1)
#endif

#ifndef CONF_SPI_0_PRESCALER
#define CONF_SPI_0_PRESCALER CONF_SPI0_PRESCALER
#endif

// <<< end of configuration section >>>

#endif // HPL_SPI_CONFIG_H
