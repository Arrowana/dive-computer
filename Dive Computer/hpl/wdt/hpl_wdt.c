/**
* \file
*
* \brief SAM Watchdog
*
* Copyright (C) 2016 Atmel Corporation. All rights reserved.
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
* DAMAGES (INCLUDING, BUT NOT LIMIT ED TO, PROCUREMENT OF SUBSTITUTE GOODS
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
* \asf_license_stop
*
*/

#include <hpl_wdt_config.h>
#include <hpl_wdt.h>
#include <utils_assert.h>

#define WDT_WRITE_ACCESS_KEY 0x1ACCE551

int32_t _wdt_init(struct wdt_dev *const dev)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	/* Disable WDT clock */
	if (dev->hw == WDT0) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_CLOCK_ENABLES_0_WDT0_CLK_EN_bit(dev->hw);
	} else if (dev->hw == WDT1) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_CLOCK_ENABLES_0_WDT1_CLK_EN_bit(dev->hw);
	}

	/* Unlock register */
	hri_wdt_write_WDOGLOCK_reg(dev->hw, (hri_wdt_wdoglock_reg_t)WDT_WRITE_ACCESS_KEY);

	hri_wdt_write_WDOGLOAD_reg(dev->hw, (hri_wdt_wdogload_reg_t)CONF_WDT_LOAD_VALUE);

	if (CONF_WDT_RSTEN) {
		hri_wdt_set_WDOGCONTROL_RESEN_bit(dev->hw);
	}

	/* Enable WDT clock */
	if (dev->hw == WDT0) {
		hri_lpmcumiscregsmiscregs_set_LPMCU_CLOCK_ENABLES_0_WDT0_CLK_EN_bit(dev->hw);
	} else if (dev->hw == WDT1) {
		hri_lpmcumiscregsmiscregs_set_LPMCU_CLOCK_ENABLES_0_WDT1_CLK_EN_bit(dev->hw);
	}

	return ERR_NONE;
}

int32_t _wdt_deinit(struct wdt_dev *const dev)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	/* Reset WDT */
	if (dev->hw == WDT0) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_GLOBAL_RESET_0_WDT0_RSTN_bit(dev->hw);
		hri_lpmcumiscregsmiscregs_set_LPMCU_GLOBAL_RESET_0_WDT0_RSTN_bit(dev->hw);
	} else if (dev->hw == WDT1) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_GLOBAL_RESET_0_WDT1_RSTN_bit(dev->hw);
		hri_lpmcumiscregsmiscregs_set_LPMCU_GLOBAL_RESET_0_WDT1_RSTN_bit(dev->hw);
	}

	return ERR_NONE;
}

int32_t _wdt_set_timeout_period(struct wdt_dev *const dev, const uint32_t clk_rate, const uint16_t timeout_period)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	uint32_t temp;

	if (timeout_period == 0) {
		return ERR_INVALID_ARG;
	}

	temp = clk_rate / 1000;
	temp *= timeout_period;

	/* Unlock register */
	hri_wdt_write_WDOGLOCK_reg(dev->hw, (hri_wdt_wdoglock_reg_t)WDT_WRITE_ACCESS_KEY);

	hri_wdt_write_WDOGLOAD_reg(dev->hw, (hri_wdt_wdogload_reg_t)temp);

	return ERR_NONE;
}

uint32_t _wdt_get_timeout_period(const struct wdt_dev *const dev, const uint32_t clk_rate)
{
	uint32_t timeout_period;

	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	/* get the register value */
	timeout_period = hri_wdt_read_WDOGVALUE_reg(dev->hw);

	/* convert period cycles(clock cycles) to timeout period(ms) */
	timeout_period = timeout_period * 1000 / clk_rate;

	return timeout_period;
}

int32_t _wdt_enable(struct wdt_dev *const dev)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	/* Unlock register */
	hri_wdt_write_WDOGLOCK_reg(dev->hw, (hri_wdt_wdoglock_reg_t)WDT_WRITE_ACCESS_KEY);

	hri_wdt_set_WDOGCONTROL_INTEN_bit(dev->hw);

	return ERR_NONE;
}

int32_t _wdt_disable(struct wdt_dev *const dev)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	/* Unlock register */
	hri_wdt_write_WDOGLOCK_reg(dev->hw, (hri_wdt_wdoglock_reg_t)WDT_WRITE_ACCESS_KEY);

	hri_wdt_clear_WDOGCONTROL_INTEN_bit(dev->hw);

	return ERR_NONE;
}

int32_t _wdt_feed(struct wdt_dev *const dev)
{
	/* Sanity check arguments */
	ASSERT(dev && dev->hw);

	uint32_t load_value;

	/* Unlock register */
	hri_wdt_write_WDOGLOCK_reg(dev->hw, (hri_wdt_wdoglock_reg_t)WDT_WRITE_ACCESS_KEY);

	load_value = hri_wdt_read_WDOGLOAD_reg(dev->hw);

	hri_wdt_write_WDOGLOAD_reg(dev->hw, (hri_wdt_wdogload_reg_t)load_value);

	return ERR_NONE;
}
