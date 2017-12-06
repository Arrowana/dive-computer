/**
 * \file
 *
 * \brief SAM B11 Dual Timer
 *
 * Copyright (C) 2016 - 2017 Atmel Corporation. All rights reserved.
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

#include <utils.h>
#include <hpl_timer.h>

#include <hpl_aon_sleep_timer_config.h>
#include <utils_assert.h>

/** Pointer to hpl device */
static struct _timer_device *_aon_timer_dev = NULL;

/**
 * \internal AON Sleep Timer interrupt handler
 *
 * \param[in] p Interrupt handler parameter
 */
void AON_SLEEP_TIMER0_Handler(void)
{
	void *hw = _aon_timer_dev->hw;

	/* Clear the interrupt status */
	hri_aonsleeptimersleeptimer_set_CONTROL_IRQ_CLEAR_bit(hw);
	if (_aon_timer_dev->timer_cb.period_expired) {
		_aon_timer_dev->timer_cb.period_expired(_aon_timer_dev);
	}
}

int32_t _timer_init(struct _timer_device *const device, void *const hw)
{
	ASSERT(device && hw);

	if (hri_aonsleeptimersleeptimer_get_CONTROL_SLEEP_TIMER_ACTIVE_bit(hw)) {
		return ERR_DENIED;
	}

	hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_reg(hw, AON_SLEEP_TIMER_LOAD_VALUE);

	device->hw     = hw;
	_aon_timer_dev = device;
	NVIC_EnableIRQ(AON_SLEEP_TIMER0_IRQn);

	return ERR_NONE;
}

void _timer_deinit(struct _timer_device *const device)
{
	void *hw = device->hw;

	ASSERT(device && hw);

	hri_aonsleeptimersleeptimer_clear_CONTROL_reg(
	    hw, AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE | AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR);
	hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_reg(hw, 0);
	hw = NULL;
}

void _timer_start(struct _timer_device *const device)
{
	ASSERT(device && device->hw);

	hri_aonsleeptimersleeptimer_set_CONTROL_RELOAD_ENABLE_bit(device->hw);
}

void _timer_stop(struct _timer_device *const device)
{
	void *hw = device->hw;

	ASSERT(device && device->hw);

	hri_aonsleeptimersleeptimer_clear_CONTROL_reg(
	    hw, AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE | AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE);
	hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_reg(hw, 0);
	/* Make sure those bits is 0 before leave */
	while (!(hri_aonsleeptimersleeptimer_read_CONTROL_reg(hw)
	         & AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Msk)) {
	}
}

void _timer_set_period(struct _timer_device *const device, const uint32_t clock_cycles)
{
	ASSERT(device && device->hw);

	hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_reg(device->hw, clock_cycles);
}

uint32_t _timer_get_period(const struct _timer_device *const device)
{
	ASSERT(device && device->hw);

	return hri_aonsleeptimersleeptimer_read_CURRENT_COUNT_VALUE_reg(device->hw);
}

bool _timer_is_started(const struct _timer_device *const device)
{
	ASSERT(device && device->hw);

	return hri_aonsleeptimersleeptimer_get_CONTROL_SLEEP_TIMER_ACTIVE_bit(device->hw);
}

void _timer_set_irq(struct _timer_device *const device)
{
	ASSERT(device);

	(void)device;

	NVIC_SetPendingIRQ(AON_SLEEP_TIMER0_IRQn);
}

/**
 * \brief Retrieve timer helper functions
 */
struct _timer_hpl_interface *_aon_get_timer(void)
{
	return NULL;
}
