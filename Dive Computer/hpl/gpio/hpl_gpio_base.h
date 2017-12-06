/**
 * \file
 *
 * \brief SAM GPIO
 *
 * Copyright (C) 2015-2016 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#include <hpl_gpio.h>
#include <utils_assert.h>
/**
 * \brief Set direction on port with mask
 */
static inline void _gpio_set_direction(const enum gpio_port port, const uint32_t mask,
                                       const enum gpio_direction direction)
{
	uint32_t mask_gpio1 = mask >> 16;

	if (port == GPIO_PORTA) {
		switch (direction) {
		case GPIO_DIRECTION_OFF:
			if (mask_gpio1 == 0) {
				hri_gpio_clear_OUTENSET_reg(GPIO0, mask);
			} else {
				hri_gpio_clear_OUTENSET_reg(GPIO1, mask_gpio1);
			}
			break;

		case GPIO_DIRECTION_IN:
			if (mask_gpio1 == 0) {
				hri_gpio_clear_OUTENSET_reg(GPIO0, mask);
			} else {
				hri_gpio_clear_OUTENSET_reg(GPIO1, mask_gpio1);
			}
			break;

		case GPIO_DIRECTION_OUT:
			if (mask_gpio1 == 0) {
				hri_gpio_set_OUTENSET_reg(GPIO0, mask);
			} else {
				hri_gpio_set_OUTENSET_reg(GPIO1, mask_gpio1);
			}
			break;

		default:
			ASSERT(false);
		}
	}
}

/**
 * \brief Set output level on port with mask
 */
static inline void _gpio_set_level(const enum gpio_port port, const uint32_t mask, const bool level)
{
	uint32_t mask_gpio1 = mask >> 16;

	if (port == GPIO_PORTA) {
		if (level) {
			if (mask_gpio1 == 0) {
				hri_gpio_set_DATAOUT_reg(GPIO0, mask);
			} else {
				hri_gpio_set_DATAOUT_reg(GPIO1, mask_gpio1);
			}
		} else {
			if (mask_gpio1 == 0) {
				hri_gpio_clear_DATAOUT_reg(GPIO0, mask);
			} else {
				hri_gpio_clear_DATAOUT_reg(GPIO1, mask_gpio1);
			}
		}
	}
}

/**
 * \brief Change output level to the opposite with mask
 */
static inline void _gpio_toggle_level(const enum gpio_port port, const uint32_t mask)
{
	uint32_t mask_gpio1 = mask >> 16;

	if (port == GPIO_PORTA) {
		if (mask_gpio1 == 0) {
			hri_gpio_toggle_DATAOUT_reg(GPIO0, mask);
		} else {
			hri_gpio_toggle_DATAOUT_reg(GPIO1, mask_gpio1);
		}
	}
}

/**
 * \brief Get input levels on all port pins
 */
static inline uint32_t _gpio_get_level(const enum gpio_port port)
{
	uint32_t tmp = 0;

	CRITICAL_SECTION_ENTER();

	if (port == GPIO_PORTA) {
		tmp = hri_gpio_read_DATA_reg(GPIO1);
		tmp = (tmp << 16) | hri_gpio_read_DATA_reg(GPIO0);
	}

	CRITICAL_SECTION_LEAVE();

	return tmp;
}

/**
 * \brief Set pin pull mode
 */
static inline void _gpio_set_pin_pull_mode(const enum gpio_port port, const uint8_t pin,
                                           const enum gpio_pull_mode pull_mode)
{
	uint8_t pin_num = pin;

	if (port == GPIO_PORTB) {
		pin_num += 32;
	}

	switch (pull_mode) {
	case GPIO_PULL_OFF:
		hri_lpmcumiscregsmiscregs_set_PULL_ENABLE_reg(LPMCU_MISC_REGS0, pin_num);
		break;

	case GPIO_PULL_UP:
		hri_lpmcumiscregsmiscregs_clear_PULL_ENABLE_reg(LPMCU_MISC_REGS0, pin_num);
		hri_lpmcumiscregsmiscregs_clear_RTYPE_PAD_0_reg(LPMCU_MISC_REGS0, pin_num);
		break;

	case GPIO_PULL_DOWN:
		hri_lpmcumiscregsmiscregs_clear_PULL_ENABLE_reg(LPMCU_MISC_REGS0, pin_num);
		hri_lpmcumiscregsmiscregs_set_RTYPE_PAD_0_reg(LPMCU_MISC_REGS0, pin_num);
		break;

	default:
		ASSERT(false);
		break;
	}
}

/**
 * \brief Set pin mux position
 */
static inline void _gpio_set_pin_function(const uint32_t gpio, const uint32_t function)
{
	uint8_t port        = GPIO_PORT(gpio);
	uint8_t pin         = GPIO_PIN(gpio);
	uint8_t pin_pinmux  = (pin % 8) << 2;
	uint8_t pin_megamux = (pin % 4) << 3;
	uint8_t megamux     = (function >> 8) & 0xFF;
	uint8_t muxsel      = function & 0xFF;

	if (function == GPIO_PIN_FUNCTION_OFF) {
		megamux = 0;
		muxsel  = 0;
	}

	if (port == GPIO_PORTA) {
		if (pin <= 7) {
			hri_lpmcumiscregsmiscregs_clear_PINMUX_SEL_0_reg(LPMCU_MISC_REGS0, (7 << pin_pinmux));
			hri_lpmcumiscregsmiscregs_set_PINMUX_SEL_0_reg(LPMCU_MISC_REGS0, (muxsel << pin_pinmux));
			if (muxsel == 0x01) {
				if (pin <= 3) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_0_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_0_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				} else if (pin <= 7) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_1_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_1_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				}
			}
		} else if (pin <= 15) {
			hri_lpmcumiscregsmiscregs_clear_PINMUX_SEL_1_reg(LPMCU_MISC_REGS0, (7 << pin_pinmux));
			hri_lpmcumiscregsmiscregs_set_PINMUX_SEL_1_reg(LPMCU_MISC_REGS0, (muxsel << pin_pinmux));
			if (muxsel == 0x01) {
				if (pin <= 11) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_2_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_2_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				} else if (pin <= 15) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_3_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_3_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				}
			}
		} else if (pin <= 23) {
			hri_lpmcumiscregsmiscregs_clear_PINMUX_SEL_2_reg(LPMCU_MISC_REGS0, (7 << pin_pinmux));
			hri_lpmcumiscregsmiscregs_set_PINMUX_SEL_2_reg(LPMCU_MISC_REGS0, (muxsel << pin_pinmux));
			if (muxsel == 0x01) {
				if (pin <= 19) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_4_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_4_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				} else if (pin <= 23) {
					hri_lpmcumiscregsmiscregs_clear_MEGA_MUX_IO_SEL_5_reg(LPMCU_MISC_REGS0, (0x3F << pin_megamux));
					hri_lpmcumiscregsmiscregs_set_MEGA_MUX_IO_SEL_5_reg(LPMCU_MISC_REGS0, (megamux << pin_megamux));
				}
			}
		}
	}
}
