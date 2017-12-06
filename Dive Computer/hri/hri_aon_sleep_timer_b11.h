/**
 * \file
 *
 * \brief SAM AON_SLEEP_TIMER
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
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 */

#ifdef _SAMB11_AON_SLEEP_TIMER_COMPONENT_
#ifndef _HRI_AON_SLEEP_TIMER_B11_H_INCLUDED_
#define _HRI_AON_SLEEP_TIMER_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_AON_SLEEP_TIMER_CRITICAL_SECTIONS)
#define AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER()
#define AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_aon_sleep_timer_control_reg_t;
typedef uint32_t hri_aon_sleep_timer_current_count_value_reg_t;
typedef uint32_t hri_aon_sleep_timer_single_count_duration_reg_t;

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_RELOAD_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonsleeptimersleeptimer_get_CONTROL_RELOAD_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Msk) >> AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_RELOAD_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Msk;
	tmp |= value << AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Pos;
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_RELOAD_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_RELOAD_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_RELOAD_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_SINGLE_COUNT_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonsleeptimersleeptimer_get_CONTROL_SINGLE_COUNT_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Msk) >> AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_SINGLE_COUNT_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Msk;
	tmp |= value << AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Pos;
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_SINGLE_COUNT_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_SINGLE_COUNT_ENABLE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_SINGLE_COUNT_ENABLE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_IRQ_CLEAR_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonsleeptimersleeptimer_get_CONTROL_IRQ_CLEAR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Msk) >> AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Pos;
	return (bool)tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_IRQ_CLEAR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Msk;
	tmp |= value << AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Pos;
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_IRQ_CLEAR_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_IRQ_CLEAR_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_IRQ_CLEAR_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_SLEEP_TIMER_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonsleeptimersleeptimer_get_CONTROL_SLEEP_TIMER_ACTIVE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Msk) >> AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Pos;
	return (bool)tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_SLEEP_TIMER_ACTIVE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Msk;
	tmp |= value << AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Pos;
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_SLEEP_TIMER_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_SLEEP_TIMER_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_SLEEP_TIMER_NOT_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonsleeptimersleeptimer_get_CONTROL_SLEEP_TIMER_NOT_ACTIVE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Msk)
	      >> AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Pos;
	return (bool)tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_SLEEP_TIMER_NOT_ACTIVE_bit(const void *const hw,
                                                                                        bool              value)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Msk;
	tmp |= value << AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Pos;
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_SLEEP_TIMER_NOT_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_SLEEP_TIMER_NOT_ACTIVE_bit(const void *const hw)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_SLEEP_TIMER_NOT_ACTIVE_Msk;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_set_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const                 hw,
                                                                    hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t
hri_aonsleeptimersleeptimer_get_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const                 hw,
                                                                    hri_aon_sleep_timer_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(mask))
	      >> AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Pos;
	return tmp;
}

static inline void
hri_aonsleeptimersleeptimer_write_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const                 hw,
                                                                      hri_aon_sleep_timer_control_reg_t data)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Msk;
	tmp |= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(data);
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_clear_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const                 hw,
                                                                      hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_toggle_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const                 hw,
                                                                       hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t
hri_aonsleeptimersleeptimer_read_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Msk)
	      >> AON_SLEEP_TIMER_CONTROL_SLP_TIMER_CLK_RELOAD_DLY_Pos;
	return tmp;
}

static inline void
hri_aonsleeptimersleeptimer_set_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const                 hw,
                                                                             hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t
hri_aonsleeptimersleeptimer_get_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const                 hw,
                                                                             hri_aon_sleep_timer_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(mask))
	      >> AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Pos;
	return tmp;
}

static inline void
hri_aonsleeptimersleeptimer_write_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const                 hw,
                                                                               hri_aon_sleep_timer_control_reg_t data)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= ~AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Msk;
	tmp |= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(data);
	((AonSleepTimer *)hw)->CONTROL.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_clear_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const                 hw,
                                                                               hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_toggle_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const                 hw,
                                                                                hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t
hri_aonsleeptimersleeptimer_read_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp = (tmp & AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Msk)
	      >> AON_SLEEP_TIMER_CONTROL_SLP_TIMER_SINGLE_COUNT_ENABLE_DLY_Pos;
	return tmp;
}

static inline void hri_aonsleeptimersleeptimer_set_CONTROL_reg(const void *const                 hw,
                                                               hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg |= mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t
hri_aonsleeptimersleeptimer_get_CONTROL_reg(const void *const hw, hri_aon_sleep_timer_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_CONTROL_reg(const void *const                 hw,
                                                                 hri_aon_sleep_timer_control_reg_t data)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg = data;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_CONTROL_reg(const void *const                 hw,
                                                                 hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg &= ~mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_CONTROL_reg(const void *const                 hw,
                                                                  hri_aon_sleep_timer_control_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->CONTROL.reg ^= mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_control_reg_t hri_aonsleeptimersleeptimer_read_CONTROL_reg(const void *const hw)
{
	return ((AonSleepTimer *)hw)->CONTROL.reg;
}

static inline void hri_aonsleeptimersleeptimer_set_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(
    const void *const hw, hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg
	    |= AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_single_count_duration_reg_t
hri_aonsleeptimersleeptimer_get_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(
    const void *const hw, hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg;
	tmp = (tmp & AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(mask))
	      >> AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Pos;
	return tmp;
}

static inline void hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(
    const void *const hw, hri_aon_sleep_timer_single_count_duration_reg_t data)
{
	uint32_t tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg;
	tmp &= ~AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Msk;
	tmp |= AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(data);
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg = tmp;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_clear_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(
    const void *const hw, hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg
	    &= ~AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonsleeptimersleeptimer_toggle_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(
    const void *const hw, hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg
	    ^= AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION(mask);
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_single_count_duration_reg_t
hri_aonsleeptimersleeptimer_read_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg;
	tmp = (tmp & AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Msk)
	      >> AON_SLEEP_TIMER_SINGLE_COUNT_DURATION_SINGLE_COUNT_DURATION_Pos;
	return tmp;
}

static inline void
hri_aonsleeptimersleeptimer_set_SINGLE_COUNT_DURATION_reg(const void *const                               hw,
                                                          hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg |= mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_single_count_duration_reg_t
hri_aonsleeptimersleeptimer_get_SINGLE_COUNT_DURATION_reg(const void *const                               hw,
                                                          hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_aonsleeptimersleeptimer_write_SINGLE_COUNT_DURATION_reg(const void *const                               hw,
                                                            hri_aon_sleep_timer_single_count_duration_reg_t data)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg = data;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_clear_SINGLE_COUNT_DURATION_reg(const void *const                               hw,
                                                            hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg &= ~mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonsleeptimersleeptimer_toggle_SINGLE_COUNT_DURATION_reg(const void *const                               hw,
                                                             hri_aon_sleep_timer_single_count_duration_reg_t mask)
{
	AON_SLEEP_TIMER_CRITICAL_SECTION_ENTER();
	((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg ^= mask;
	AON_SLEEP_TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_sleep_timer_single_count_duration_reg_t
hri_aonsleeptimersleeptimer_read_SINGLE_COUNT_DURATION_reg(const void *const hw)
{
	return ((AonSleepTimer *)hw)->SINGLE_COUNT_DURATION.reg;
}

static inline hri_aon_sleep_timer_current_count_value_reg_t
hri_aonsleeptimersleeptimer_get_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_bf(
    const void *const hw, hri_aon_sleep_timer_current_count_value_reg_t mask)
{
	return (((AonSleepTimer *)hw)->CURRENT_COUNT_VALUE.reg
	        & AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE(mask))
	       >> AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Pos;
}

static inline hri_aon_sleep_timer_current_count_value_reg_t
hri_aonsleeptimersleeptimer_read_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_bf(const void *const hw)
{
	return (((AonSleepTimer *)hw)->CURRENT_COUNT_VALUE.reg
	        & AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Msk)
	       >> AON_SLEEP_TIMER_CURRENT_COUNT_VALUE_CURRENT_COUNT_VALUE_Pos;
}

static inline hri_aon_sleep_timer_current_count_value_reg_t
hri_aonsleeptimersleeptimer_get_CURRENT_COUNT_VALUE_reg(const void *const                             hw,
                                                        hri_aon_sleep_timer_current_count_value_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonSleepTimer *)hw)->CURRENT_COUNT_VALUE.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_sleep_timer_current_count_value_reg_t
hri_aonsleeptimersleeptimer_read_CURRENT_COUNT_VALUE_reg(const void *const hw)
{
	return ((AonSleepTimer *)hw)->CURRENT_COUNT_VALUE.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_AON_SLEEP_TIMER_B11_H_INCLUDED */
#endif /* _SAMB11_AON_SLEEP_TIMER_COMPONENT_ */
