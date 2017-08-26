/* Auto-generated config file hpl_lpmcu_misc_regs_config.h */
#ifndef HPL_LPMCU_MISC_REGS_CONFIG_H
#define HPL_LPMCU_MISC_REGS_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

#define CLOCK_RESOURCE_XO_26_MHZ 0
#define CLOCK_RESOURCE_RC_26_MHZ 1

#define CLOCK_PRESCALER1_VAL 0x0
#define CLOCK_PRESCALER2_VAL 0x1
#define CLOCK_PRESCALER4_VAL 0x2
#define CLOCK_PRESCALER8_VAL 0x3

// <e> External Oscillator 26MHz
// <i> Indicates whether XOSC is enabled or not
// <id> enable_xosc
#ifndef CONF_XOSC_CLOCK_CONFIG
#define CONF_XOSC_CLOCK_CONFIG 0
#endif

// <h> External Oscillator 26MHz Control
// <q> External 26M Oscillator Enable
// <i> Indicates whether External 26M Oscillator is enabled or not
// <id> xosc26m_arch_enable
#ifndef CONF_XOSC26M_ENABLE
#define CONF_XOSC26M_ENABLE 1
#endif
// </h>

// </e>

// <e> RC Oscillator 26MHz
// <i> Indicates whether RC is enabled or not
// <id> enable_rcosc
#ifndef CONF_RC_CLOCK_CONFIG
#define CONF_RC_CLOCK_CONFIG 0
#endif

// <h> RC Oscillator 26MHz Control
// <q> Internal 26M Oscillator Enable
// <i> Indicates whether Internal 26M Oscillator is enabled or not
// <id> rc26m_arch_enable
#ifndef CONF_RC26M_ENABLE
#define CONF_RC26M_ENABLE 1
#endif
// </h>
// </e>

// <e> ARM clock configuration
// <i> Indicates whether ARM Clock is enabled or not
// <id> enable_arm_clock
#ifndef CONF_ARM_CLOCK_CONFIG
#define CONF_ARM_CLOCK_CONFIG 1
#endif

// <h> ARM clock control
// <y> ARM Clock controller Input source
// <CLOCK_RESOURCE_XO_26_MHZ">External Oscillator 26MHz
// <CLOCK_RESOURCE_RC_26_MHZ">RC Oscillator 26MHz
// <i> This defines the clock source for ARM clock
// <id> arm_clock_oscillator
#ifndef CONF_ARM_CLOCK_SOURCE
#define CONF_ARM_CLOCK_SOURCE CLOCK_RESOURCE_XO_26_MHZ
#endif

// </h>
// </e>

// <e> SPI0 clock divider configuration
// <i> Indicates whether SPI0 divider Clock is enabled or not
// <id> enable_spi0_divider
#ifndef CONF_SPI0_DIV_CONFIG
#define CONF_SPI0_DIV_CONFIG 1
#endif

// <h> SPI0 Divider
// <y> SPI0 Divider Input source
// <SPI0_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for SPI0 Divider
// <id> spi0_divider_oscillator
#ifndef CONF_SPI0_DIV_CLOCK_SOURCE
#define CONF_SPI0_DIV_CLOCK_SOURCE SPI0_DIV_CLOCK_SOURCE
#endif

// <y> SPI0 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for SPI0 clock
// <id> spi0_prescaler
#ifndef CONF_SPI0_PRESCALER
#define CONF_SPI0_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> SPI1 clock divider configuration
// <i> Indicates whether SPI1 divider Clock is enabled or not
// <id> enable_spi1_divider
#ifndef CONF_SPI1_DIV_CONFIG
#define CONF_SPI1_DIV_CONFIG 1
#endif

// <h> SPI1 Divider
// <y> SPI1 Divider Input source
// <SPI1_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for SPI1 Divider
// <id> spi1_divider_oscillator
#ifndef CONF_SPI1_DIV_CLOCK_SOURCE
#define CONF_SPI1_DIV_CLOCK_SOURCE SPI1_DIV_CLOCK_SOURCE
#endif

// <y> SPI1 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for SPI1 clock
// <id> spi1_prescaler
#ifndef CONF_SPI1_PRESCALER
#define CONF_SPI1_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> I2C0 clock divider configuration
// <i> Indicates whether I2C0 divider Clock is enabled or not
// <id> enable_i2c0_divider
#ifndef CONF_I2C0_DIV_CONFIG
#define CONF_I2C0_DIV_CONFIG 1
#endif

// <h> I2C0 Divider
// <y> I2C0 Divider Input source
// <I2C0_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for I2C0 Divider
// <id> i2c0_divider_oscillator
#ifndef CONF_I2C0_DIV_CLOCK_SOURCE
#define CONF_I2C0_DIV_CLOCK_SOURCE I2C0_DIV_CLOCK_SOURCE
#endif

// <y> I2C0 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for I2C0 clock
// <id> i2c0_prescaler
#ifndef CONF_I2C0_PRESCALER
#define CONF_I2C0_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> I2C1 clock divider configuration
// <i> Indicates whether I2C1 divider Clock is enabled or not
// <id> enable_i2c1_divider
#ifndef CONF_I2C1_DIV_CONFIG
#define CONF_I2C1_DIV_CONFIG 1
#endif

// <h> I2C1 Divider
// <y> I2C1 Divider Input source
// <I2C1_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for I2C1 Divider
// <id> i2c1_divider_oscillator
#ifndef CONF_I2C1_DIV_CLOCK_SOURCE
#define CONF_I2C1_DIV_CLOCK_SOURCE I2C1_DIV_CLOCK_SOURCE
#endif

// <y> I2C1 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for I2C1 clock
// <id> i2c1_prescaler
#ifndef CONF_I2C1_PRESCALER
#define CONF_I2C1_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>
// <e> DUALTIMER clock divider configuration
// <i> Indicates whether DUALTIMER divider Clock is enabled or not
// <id> enable_dualtimer_divider
#ifndef CONF_DUALTIMER_DIV_CONFIG
#define CONF_DUALTIMER_DIV_CONFIG 1
#endif

// <h> DUALTIMER Divider
// <y> DUALTIMER Divider Input source
// <DUALTIMER_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for DUALTIMER Divider
// <id> dualtimer_divider_oscillator
#ifndef CONF_DUALTIMER_DIV_CLOCK_SOURCE
#define CONF_DUALTIMER_DIV_CLOCK_SOURCE DUALTIMER_DIV_CLOCK_SOURCE
#endif

// <y> DUALTIMER clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for DUALTIMER clock
// <id> dualtimer_prescaler
#ifndef CONF_DUALTIMER_PRESCALER
#define CONF_DUALTIMER_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> UART0 clock divider configuration
// <i> Indicates whether UART0 divider Clock is enabled or not
// <id> enable_uart0_divider
#ifndef CONF_UART0_DIV_CONFIG
#define CONF_UART0_DIV_CONFIG 1
#endif

// <h> UART0 Divider
// <y> UART0 Divider Input source
// <UART0_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for UART0 Divider
// <id> uart0_divider_oscillator
#ifndef CONF_UART0_DIV_CLOCK_SOURCE
#define CONF_UART0_DIV_CLOCK_SOURCE UART0_DIV_CLOCK_SOURCE
#endif

// <y> UART0 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for UART0 clock
// <id> uart0_prescaler
#ifndef CONF_UART0_PRESCALER
#define CONF_UART0_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> UART1 clock divider configuration
// <i> Indicates whether UART1 divider Clock is enabled or not
// <id> enable_uart1_divider
#ifndef CONF_UART1_DIV_CONFIG
#define CONF_UART1_DIV_CONFIG 1
#endif

// <h> UART1 Divider
// <y> UART1 Divider Input source
// <UART1_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for UART1 Divider
// <id> uart1_divider_oscillator
#ifndef CONF_UART1_DIV_CLOCK_SOURCE
#define CONF_UART1_DIV_CLOCK_SOURCE UART1_DIV_CLOCK_SOURCE
#endif

// <y> UART1 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for UART1 clock
// <id> uart1_prescaler
#ifndef CONF_UART1_PRESCALER
#define CONF_UART1_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> PWM0 clock divider configuration
// <i> Indicates whether PWM0 divider Clock is enabled or not
// <id> enable_pwm0_divider
#ifndef CONF_PWM0_DIV_CONFIG
#define CONF_PWM0_DIV_CONFIG 1
#endif

// <h> PWM0 Divider
// <y> PWM0 Divider Input source
// <PWM0_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for PWM0 Divider
// <id> pwm0_divider_oscillator
#ifndef CONF_PWM0_DIV_CLOCK_SOURCE
#define CONF_PWM0_DIV_CLOCK_SOURCE PWM0_DIV_CLOCK_SOURCE
#endif

// <y> PWM0 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescaler for PWM0 clock
// <id> pwm0_prescaler
#ifndef CONF_PWM0_PRESCALER
#define CONF_PWM0_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> PWM1 clock divider configuration
// <i> Indicates whether PWM1 divider Clock is enabled or not
// <id> enable_pwm1_divider
#ifndef CONF_PWM1_DIV_CONFIG
#define CONF_PWM1_DIV_CONFIG 1
#endif

// <h> PWM1 Divider
// <y> PWM1 Divider Input source
// <PWM1_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for PWM1 Divider
// <id> pwm1_divider_oscillator
#ifndef CONF_PWM1_DIV_CLOCK_SOURCE
#define CONF_PWM1_DIV_CLOCK_SOURCE PWM1_DIV_CLOCK_SOURCE
#endif

// <y> PWM1 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescaler for PWM1 clock
// <id> pwm1_prescaler
#ifndef CONF_PWM1_PRESCALER
#define CONF_PWM1_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> PWM2 clock divider configuration
// <i> Indicates whether PWM2 divider Clock is enabled or not
// <id> enable_pwm2_divider
#ifndef CONF_PWM2_DIV_CONFIG
#define CONF_PWM2_DIV_CONFIG 1
#endif

// <h> PWM2 Divider
// <y> PWM2 Divider Input source
// <PWM2_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for PWM2 Divider
// <id> pwm2_divider_oscillator
#ifndef CONF_PWM2_DIV_CLOCK_SOURCE
#define CONF_PWM2_DIV_CLOCK_SOURCE PWM2_DIV_CLOCK_SOURCE
#endif

// <y> PWM2 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescaler for PWM2 clock
// <id> pwm2_prescaler
#ifndef CONF_PWM2_PRESCALER
#define CONF_PWM2_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> PWM3 clock divider configuration
// <i> Indicates whether PWM3 divider Clock is enabled or not
// <id> enable_pwm3_divider
#ifndef CONF_PWM3_DIV_CONFIG
#define CONF_PWM3_DIV_CONFIG 1
#endif

// <h> PWM3 Divider
// <y> PWM3 Divider Input source
// <PWM3_DIV_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for PWM3 Divider
// <id> pwm3_divider_oscillator
#ifndef CONF_PWM3_DIV_CLOCK_SOURCE
#define CONF_PWM3_DIV_CLOCK_SOURCE PWM3_DIV_CLOCK_SOURCE
#endif

// <y> PWM3 clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescaler for PWM3 clock
// <id> pwm3_prescaler
#ifndef CONF_PWM3_PRESCALER
#define CONF_PWM3_PRESCALER CLOCK_PRESCALER1_VAL
#endif

// </h>
// </e>

// <e> System Configuration
// <i> Indicates whether configuration for system is enabled or not
// <id> enable_cpu_clock
#ifndef CONF_SYSTEM_CONFIG
#define CONF_SYSTEM_CONFIG 1
#endif

// <h> CPU Clock Settings
// <y> CPU Clock source
// <CPU_CLOCK_SOURCE"> ARM clock
// <i> This defines the clock source for the CPU
// <id> cpu_clock_source
#ifndef CONF_CPU_SRC
#define CONF_CPU_SRC CPU_CLOCK_SOURCE
#endif

// <y> CPU clock Prescalar
// <CLOCK_PRESCALER1_VAL"> 1
// <CLOCK_PRESCALER2_VAL"> 2
// <CLOCK_PRESCALER4_VAL"> 4
// <CLOCK_PRESCALER8_VAL"> 8
// <i> Prescalar for Main CPU clock
// <id> cpu_prescaler
#ifndef CONF_CPU_PRESCALER
#define CONF_CPU_PRESCALER CLOCK_PRESCALER1_VAL
#endif
// </h>

// </e>

// <<< end of configuration section >>>

#endif // HPL_LPMCU_MISC_REGS_CONFIG_H
