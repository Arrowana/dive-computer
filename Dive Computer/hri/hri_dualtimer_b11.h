/**
 * \file
 *
 * \brief SAM DUALTIMER
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

#ifdef _SAMB11_DUALTIMER_COMPONENT_
#ifndef _HRI_DUALTIMER_B11_H_INCLUDED_
#define _HRI_DUALTIMER_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_DUALTIMER_CRITICAL_SECTIONS)
#define DUALTIMER_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define DUALTIMER_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define DUALTIMER_CRITICAL_SECTION_ENTER()
#define DUALTIMER_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_dualtimer_timer1bgload_reg_t;
typedef uint32_t hri_dualtimer_timer1load_reg_t;
typedef uint32_t hri_dualtimer_timer1value_reg_t;
typedef uint32_t hri_dualtimer_timer2bgload_reg_t;
typedef uint32_t hri_dualtimer_timer2load_reg_t;
typedef uint32_t hri_dualtimer_timer2value_reg_t;
typedef uint8_t  hri_dualtimer_timer1control_reg_t;
typedef uint8_t  hri_dualtimer_timer1intclr_reg_t;
typedef uint8_t  hri_dualtimer_timer1mis_reg_t;
typedef uint8_t  hri_dualtimer_timer1ris_reg_t;
typedef uint8_t  hri_dualtimer_timer2control_reg_t;
typedef uint8_t  hri_dualtimer_timer2intclr_reg_t;
typedef uint8_t  hri_dualtimer_timer2mis_reg_t;
typedef uint8_t  hri_dualtimer_timer2ris_reg_t;
typedef uint8_t  hri_dualtimer_timeritcr_reg_t;
typedef uint8_t  hri_dualtimer_timeritop_reg_t;
typedef uint8_t  hri_dualtimer_timerpcellid0_reg_t;
typedef uint8_t  hri_dualtimer_timerpcellid1_reg_t;
typedef uint8_t  hri_dualtimer_timerpcellid2_reg_t;
typedef uint8_t  hri_dualtimer_timerpcellid3_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid0_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid1_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid2_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid3_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid4_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid5_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid6_reg_t;
typedef uint8_t  hri_dualtimer_timerperiphid7_reg_t;

static inline void hri_dualtimer_write_TIMER1INTCLR_reg(const void *const hw, hri_dualtimer_timer1intclr_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1INTCLR.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_write_TIMER2INTCLR_reg(const void *const hw, hri_dualtimer_timer2intclr_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2INTCLR.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_write_TIMERITOP_reg(const void *const hw, hri_dualtimer_timeritop_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITOP.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1LOAD_TIMER1LOAD_bf(const void *const hw, hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg |= DUALTIMER_TIMER1LOAD_TIMER1LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1load_reg_t
hri_dualtimer_get_TIMER1LOAD_TIMER1LOAD_bf(const void *const hw, hri_dualtimer_timer1load_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1LOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER1LOAD_TIMER1LOAD(mask)) >> DUALTIMER_TIMER1LOAD_TIMER1LOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1LOAD_TIMER1LOAD_bf(const void *const              hw,
                                                                hri_dualtimer_timer1load_reg_t data)
{
	uint32_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1LOAD.reg;
	tmp &= ~DUALTIMER_TIMER1LOAD_TIMER1LOAD_Msk;
	tmp |= DUALTIMER_TIMER1LOAD_TIMER1LOAD(data);
	((Dualtimer *)hw)->TIMER1LOAD.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1LOAD_TIMER1LOAD_bf(const void *const              hw,
                                                                hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg &= ~DUALTIMER_TIMER1LOAD_TIMER1LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1LOAD_TIMER1LOAD_bf(const void *const              hw,
                                                                 hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg ^= DUALTIMER_TIMER1LOAD_TIMER1LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1load_reg_t hri_dualtimer_read_TIMER1LOAD_TIMER1LOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1LOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER1LOAD_TIMER1LOAD_Msk) >> DUALTIMER_TIMER1LOAD_TIMER1LOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER1LOAD_reg(const void *const hw, hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1load_reg_t hri_dualtimer_get_TIMER1LOAD_reg(const void *const              hw,
                                                                              hri_dualtimer_timer1load_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1LOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1LOAD_reg(const void *const hw, hri_dualtimer_timer1load_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1LOAD_reg(const void *const hw, hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1LOAD_reg(const void *const hw, hri_dualtimer_timer1load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1LOAD.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1load_reg_t hri_dualtimer_read_TIMER1LOAD_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1LOAD.reg;
}

static inline void hri_dualtimer_set_TIMER1CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk) >> DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_ONE_SHOT_COUNT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk) >> DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_TIMER_SIZE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_RESERVED4_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_RESERVED4_Msk) >> DUALTIMER_TIMER1CONTROL_RESERVED4_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_RESERVED4_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_RESERVED4_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_RESERVED4_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Msk) >> DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_INTERRUPT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_TIMER_MODE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk) >> DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_TIMER_MODE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_TIMER_MODE_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER1CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Msk) >> DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_TIMER_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Msk;
	tmp |= value << DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Pos;
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER1CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                               hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= DUALTIMER_TIMER1CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1control_reg_t
hri_dualtimer_get_TIMER1CONTROL_TIMERPRE_bf(const void *const hw, hri_dualtimer_timer1control_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_TIMERPRE(mask)) >> DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                 hri_dualtimer_timer1control_reg_t data)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER1CONTROL_TIMERPRE_Msk;
	tmp |= DUALTIMER_TIMER1CONTROL_TIMERPRE(data);
	((Dualtimer *)hw)->TIMER1CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                 hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~DUALTIMER_TIMER1CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                  hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= DUALTIMER_TIMER1CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1control_reg_t hri_dualtimer_read_TIMER1CONTROL_TIMERPRE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER1CONTROL_TIMERPRE_Msk) >> DUALTIMER_TIMER1CONTROL_TIMERPRE_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER1CONTROL_reg(const void *const hw, hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1control_reg_t
hri_dualtimer_get_TIMER1CONTROL_reg(const void *const hw, hri_dualtimer_timer1control_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1CONTROL_reg(const void *const hw, hri_dualtimer_timer1control_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1CONTROL_reg(const void *const hw, hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1CONTROL_reg(const void *const hw, hri_dualtimer_timer1control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1CONTROL.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1control_reg_t hri_dualtimer_read_TIMER1CONTROL_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1CONTROL.reg;
}

static inline void hri_dualtimer_set_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const                hw,
                                                                  hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg |= DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1bgload_reg_t
hri_dualtimer_get_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const hw, hri_dualtimer_timer1bgload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1BGLOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(mask)) >> DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const                hw,
                                                                    hri_dualtimer_timer1bgload_reg_t data)
{
	uint32_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER1BGLOAD.reg;
	tmp &= ~DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Msk;
	tmp |= DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(data);
	((Dualtimer *)hw)->TIMER1BGLOAD.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const                hw,
                                                                    hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg &= ~DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const                hw,
                                                                     hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg ^= DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1bgload_reg_t hri_dualtimer_read_TIMER1BGLOAD_TIMER1BGLOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1BGLOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Msk) >> DUALTIMER_TIMER1BGLOAD_TIMER1BGLOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER1BGLOAD_reg(const void *const hw, hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1bgload_reg_t hri_dualtimer_get_TIMER1BGLOAD_reg(const void *const                hw,
                                                                                  hri_dualtimer_timer1bgload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1BGLOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER1BGLOAD_reg(const void *const hw, hri_dualtimer_timer1bgload_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER1BGLOAD_reg(const void *const hw, hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER1BGLOAD_reg(const void *const hw, hri_dualtimer_timer1bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER1BGLOAD.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer1bgload_reg_t hri_dualtimer_read_TIMER1BGLOAD_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1BGLOAD.reg;
}

static inline void hri_dualtimer_set_TIMER2LOAD_TIMER2LOAD_bf(const void *const hw, hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg |= DUALTIMER_TIMER2LOAD_TIMER2LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2load_reg_t
hri_dualtimer_get_TIMER2LOAD_TIMER2LOAD_bf(const void *const hw, hri_dualtimer_timer2load_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2LOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER2LOAD_TIMER2LOAD(mask)) >> DUALTIMER_TIMER2LOAD_TIMER2LOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2LOAD_TIMER2LOAD_bf(const void *const              hw,
                                                                hri_dualtimer_timer2load_reg_t data)
{
	uint32_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2LOAD.reg;
	tmp &= ~DUALTIMER_TIMER2LOAD_TIMER2LOAD_Msk;
	tmp |= DUALTIMER_TIMER2LOAD_TIMER2LOAD(data);
	((Dualtimer *)hw)->TIMER2LOAD.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2LOAD_TIMER2LOAD_bf(const void *const              hw,
                                                                hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg &= ~DUALTIMER_TIMER2LOAD_TIMER2LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2LOAD_TIMER2LOAD_bf(const void *const              hw,
                                                                 hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg ^= DUALTIMER_TIMER2LOAD_TIMER2LOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2load_reg_t hri_dualtimer_read_TIMER2LOAD_TIMER2LOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2LOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER2LOAD_TIMER2LOAD_Msk) >> DUALTIMER_TIMER2LOAD_TIMER2LOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER2LOAD_reg(const void *const hw, hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2load_reg_t hri_dualtimer_get_TIMER2LOAD_reg(const void *const              hw,
                                                                              hri_dualtimer_timer2load_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2LOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2LOAD_reg(const void *const hw, hri_dualtimer_timer2load_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2LOAD_reg(const void *const hw, hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2LOAD_reg(const void *const hw, hri_dualtimer_timer2load_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2LOAD.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2load_reg_t hri_dualtimer_read_TIMER2LOAD_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2LOAD.reg;
}

static inline void hri_dualtimer_set_TIMER2CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk) >> DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_ONE_SHOT_COUNT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_ONE_SHOT_COUNT_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_ONE_SHOT_COUNT_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk) >> DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_TIMER_SIZE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_TIMER_SIZE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_TIMER_SIZE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_RESERVED4_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_RESERVED4_Msk) >> DUALTIMER_TIMER2CONTROL_RESERVED4_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_RESERVED4_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_RESERVED4_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_RESERVED4_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_RESERVED4_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_RESERVED4_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Msk) >> DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_INTERRUPT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_INTERRUPT_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_TIMER_MODE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk) >> DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_TIMER_MODE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_TIMER_MODE_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_TIMER_MODE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_TIMER_MODE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMER2CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Msk) >> DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_TIMER_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Msk;
	tmp |= value << DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Pos;
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_TIMER_ENABLE_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_TIMER_ENABLE_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMER2CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                               hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= DUALTIMER_TIMER2CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2control_reg_t
hri_dualtimer_get_TIMER2CONTROL_TIMERPRE_bf(const void *const hw, hri_dualtimer_timer2control_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_TIMERPRE(mask)) >> DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                 hri_dualtimer_timer2control_reg_t data)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= ~DUALTIMER_TIMER2CONTROL_TIMERPRE_Msk;
	tmp |= DUALTIMER_TIMER2CONTROL_TIMERPRE(data);
	((Dualtimer *)hw)->TIMER2CONTROL.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                 hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~DUALTIMER_TIMER2CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_TIMERPRE_bf(const void *const                 hw,
                                                                  hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= DUALTIMER_TIMER2CONTROL_TIMERPRE(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2control_reg_t hri_dualtimer_read_TIMER2CONTROL_TIMERPRE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp = (tmp & DUALTIMER_TIMER2CONTROL_TIMERPRE_Msk) >> DUALTIMER_TIMER2CONTROL_TIMERPRE_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER2CONTROL_reg(const void *const hw, hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2control_reg_t
hri_dualtimer_get_TIMER2CONTROL_reg(const void *const hw, hri_dualtimer_timer2control_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2CONTROL_reg(const void *const hw, hri_dualtimer_timer2control_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2CONTROL_reg(const void *const hw, hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2CONTROL_reg(const void *const hw, hri_dualtimer_timer2control_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2CONTROL.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2control_reg_t hri_dualtimer_read_TIMER2CONTROL_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2CONTROL.reg;
}

static inline void hri_dualtimer_set_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const                hw,
                                                                  hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg |= DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2bgload_reg_t
hri_dualtimer_get_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const hw, hri_dualtimer_timer2bgload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2BGLOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(mask)) >> DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const                hw,
                                                                    hri_dualtimer_timer2bgload_reg_t data)
{
	uint32_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMER2BGLOAD.reg;
	tmp &= ~DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Msk;
	tmp |= DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(data);
	((Dualtimer *)hw)->TIMER2BGLOAD.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const                hw,
                                                                    hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg &= ~DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const                hw,
                                                                     hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg ^= DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD(mask);
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2bgload_reg_t hri_dualtimer_read_TIMER2BGLOAD_TIMER2BGLOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2BGLOAD.reg;
	tmp = (tmp & DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Msk) >> DUALTIMER_TIMER2BGLOAD_TIMER2BGLOAD_Pos;
	return tmp;
}

static inline void hri_dualtimer_set_TIMER2BGLOAD_reg(const void *const hw, hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2bgload_reg_t hri_dualtimer_get_TIMER2BGLOAD_reg(const void *const                hw,
                                                                                  hri_dualtimer_timer2bgload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2BGLOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMER2BGLOAD_reg(const void *const hw, hri_dualtimer_timer2bgload_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMER2BGLOAD_reg(const void *const hw, hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMER2BGLOAD_reg(const void *const hw, hri_dualtimer_timer2bgload_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMER2BGLOAD.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timer2bgload_reg_t hri_dualtimer_read_TIMER2BGLOAD_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2BGLOAD.reg;
}

static inline void hri_dualtimer_set_TIMERITCR_TIMERITCR_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg |= DUALTIMER_TIMERITCR_TIMERITCR_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_dualtimer_get_TIMERITCR_TIMERITCR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERITCR.reg;
	tmp = (tmp & DUALTIMER_TIMERITCR_TIMERITCR_Msk) >> DUALTIMER_TIMERITCR_TIMERITCR_Pos;
	return (bool)tmp;
}

static inline void hri_dualtimer_write_TIMERITCR_TIMERITCR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	DUALTIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Dualtimer *)hw)->TIMERITCR.reg;
	tmp &= ~DUALTIMER_TIMERITCR_TIMERITCR_Msk;
	tmp |= value << DUALTIMER_TIMERITCR_TIMERITCR_Pos;
	((Dualtimer *)hw)->TIMERITCR.reg = tmp;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMERITCR_TIMERITCR_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg &= ~DUALTIMER_TIMERITCR_TIMERITCR_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMERITCR_TIMERITCR_bit(const void *const hw)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg ^= DUALTIMER_TIMERITCR_TIMERITCR_Msk;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_set_TIMERITCR_reg(const void *const hw, hri_dualtimer_timeritcr_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg |= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timeritcr_reg_t hri_dualtimer_get_TIMERITCR_reg(const void *const             hw,
                                                                            hri_dualtimer_timeritcr_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERITCR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_dualtimer_write_TIMERITCR_reg(const void *const hw, hri_dualtimer_timeritcr_reg_t data)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg = data;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_clear_TIMERITCR_reg(const void *const hw, hri_dualtimer_timeritcr_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg &= ~mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_dualtimer_toggle_TIMERITCR_reg(const void *const hw, hri_dualtimer_timeritcr_reg_t mask)
{
	DUALTIMER_CRITICAL_SECTION_ENTER();
	((Dualtimer *)hw)->TIMERITCR.reg ^= mask;
	DUALTIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_dualtimer_timeritcr_reg_t hri_dualtimer_read_TIMERITCR_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERITCR.reg;
}

static inline hri_dualtimer_timer1value_reg_t
hri_dualtimer_get_TIMER1VALUE_TIMER1VALUE_bf(const void *const hw, hri_dualtimer_timer1value_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMER1VALUE.reg & DUALTIMER_TIMER1VALUE_TIMER1VALUE(mask))
	       >> DUALTIMER_TIMER1VALUE_TIMER1VALUE_Pos;
}

static inline hri_dualtimer_timer1value_reg_t hri_dualtimer_read_TIMER1VALUE_TIMER1VALUE_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER1VALUE.reg & DUALTIMER_TIMER1VALUE_TIMER1VALUE_Msk)
	       >> DUALTIMER_TIMER1VALUE_TIMER1VALUE_Pos;
}

static inline hri_dualtimer_timer1value_reg_t hri_dualtimer_get_TIMER1VALUE_reg(const void *const               hw,
                                                                                hri_dualtimer_timer1value_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1VALUE.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer1value_reg_t hri_dualtimer_read_TIMER1VALUE_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1VALUE.reg;
}

static inline bool hri_dualtimer_get_TIMER1RIS_TIMER1RIS_bit(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER1RIS.reg & DUALTIMER_TIMER1RIS_TIMER1RIS_Msk) >> DUALTIMER_TIMER1RIS_TIMER1RIS_Pos;
}

static inline hri_dualtimer_timer1ris_reg_t hri_dualtimer_get_TIMER1RIS_reg(const void *const             hw,
                                                                            hri_dualtimer_timer1ris_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1RIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer1ris_reg_t hri_dualtimer_read_TIMER1RIS_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1RIS.reg;
}

static inline bool hri_dualtimer_get_TIMER1MIS_TIMER1MIS_bit(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER1MIS.reg & DUALTIMER_TIMER1MIS_TIMER1MIS_Msk) >> DUALTIMER_TIMER1MIS_TIMER1MIS_Pos;
}

static inline hri_dualtimer_timer1mis_reg_t hri_dualtimer_get_TIMER1MIS_reg(const void *const             hw,
                                                                            hri_dualtimer_timer1mis_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER1MIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer1mis_reg_t hri_dualtimer_read_TIMER1MIS_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER1MIS.reg;
}

static inline hri_dualtimer_timer2value_reg_t
hri_dualtimer_get_TIMER2VALUE_TIMER2VALUE_bf(const void *const hw, hri_dualtimer_timer2value_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMER2VALUE.reg & DUALTIMER_TIMER2VALUE_TIMER2VALUE(mask))
	       >> DUALTIMER_TIMER2VALUE_TIMER2VALUE_Pos;
}

static inline hri_dualtimer_timer2value_reg_t hri_dualtimer_read_TIMER2VALUE_TIMER2VALUE_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER2VALUE.reg & DUALTIMER_TIMER2VALUE_TIMER2VALUE_Msk)
	       >> DUALTIMER_TIMER2VALUE_TIMER2VALUE_Pos;
}

static inline hri_dualtimer_timer2value_reg_t hri_dualtimer_get_TIMER2VALUE_reg(const void *const               hw,
                                                                                hri_dualtimer_timer2value_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2VALUE.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer2value_reg_t hri_dualtimer_read_TIMER2VALUE_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2VALUE.reg;
}

static inline bool hri_dualtimer_get_TIMER2RIS_TIMER2RIS_bit(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER2RIS.reg & DUALTIMER_TIMER2RIS_TIMER2RIS_Msk) >> DUALTIMER_TIMER2RIS_TIMER2RIS_Pos;
}

static inline hri_dualtimer_timer2ris_reg_t hri_dualtimer_get_TIMER2RIS_reg(const void *const             hw,
                                                                            hri_dualtimer_timer2ris_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2RIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer2ris_reg_t hri_dualtimer_read_TIMER2RIS_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2RIS.reg;
}

static inline bool hri_dualtimer_get_TIMER2MIS_TIMER2MIS_bit(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMER2MIS.reg & DUALTIMER_TIMER2MIS_TIMER2MIS_Msk) >> DUALTIMER_TIMER2MIS_TIMER2MIS_Pos;
}

static inline hri_dualtimer_timer2mis_reg_t hri_dualtimer_get_TIMER2MIS_reg(const void *const             hw,
                                                                            hri_dualtimer_timer2mis_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMER2MIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timer2mis_reg_t hri_dualtimer_read_TIMER2MIS_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMER2MIS.reg;
}

static inline hri_dualtimer_timerperiphid4_reg_t
hri_dualtimer_get_TIMERPERIPHID4_JEP106_C_CODE_bf(const void *const hw, hri_dualtimer_timerperiphid4_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID4.reg & DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE(mask))
	       >> DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Pos;
}

static inline hri_dualtimer_timerperiphid4_reg_t
hri_dualtimer_read_TIMERPERIPHID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID4.reg & DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Msk)
	       >> DUALTIMER_TIMERPERIPHID4_JEP106_C_CODE_Pos;
}

static inline hri_dualtimer_timerperiphid4_reg_t
hri_dualtimer_get_TIMERPERIPHID4_BLOCK_COUNT_bf(const void *const hw, hri_dualtimer_timerperiphid4_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID4.reg & DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT(mask))
	       >> DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Pos;
}

static inline hri_dualtimer_timerperiphid4_reg_t hri_dualtimer_read_TIMERPERIPHID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID4.reg & DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Msk)
	       >> DUALTIMER_TIMERPERIPHID4_BLOCK_COUNT_Pos;
}

static inline hri_dualtimer_timerperiphid4_reg_t
hri_dualtimer_get_TIMERPERIPHID4_reg(const void *const hw, hri_dualtimer_timerperiphid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid4_reg_t hri_dualtimer_read_TIMERPERIPHID4_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID4.reg;
}

static inline hri_dualtimer_timerperiphid5_reg_t
hri_dualtimer_get_TIMERPERIPHID5_TIMERPERIPHID5_bf(const void *const hw, hri_dualtimer_timerperiphid5_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID5.reg & DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5(mask))
	       >> DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Pos;
}

static inline hri_dualtimer_timerperiphid5_reg_t
hri_dualtimer_read_TIMERPERIPHID5_TIMERPERIPHID5_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID5.reg & DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Msk)
	       >> DUALTIMER_TIMERPERIPHID5_TIMERPERIPHID5_Pos;
}

static inline hri_dualtimer_timerperiphid5_reg_t
hri_dualtimer_get_TIMERPERIPHID5_reg(const void *const hw, hri_dualtimer_timerperiphid5_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID5.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid5_reg_t hri_dualtimer_read_TIMERPERIPHID5_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID5.reg;
}

static inline hri_dualtimer_timerperiphid6_reg_t
hri_dualtimer_get_TIMERPERIPHID6_TIMERPERIPHID6_bf(const void *const hw, hri_dualtimer_timerperiphid6_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID6.reg & DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6(mask))
	       >> DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Pos;
}

static inline hri_dualtimer_timerperiphid6_reg_t
hri_dualtimer_read_TIMERPERIPHID6_TIMERPERIPHID6_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID6.reg & DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Msk)
	       >> DUALTIMER_TIMERPERIPHID6_TIMERPERIPHID6_Pos;
}

static inline hri_dualtimer_timerperiphid6_reg_t
hri_dualtimer_get_TIMERPERIPHID6_reg(const void *const hw, hri_dualtimer_timerperiphid6_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID6.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid6_reg_t hri_dualtimer_read_TIMERPERIPHID6_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID6.reg;
}

static inline hri_dualtimer_timerperiphid7_reg_t
hri_dualtimer_get_TIMERPERIPHID7_TIMERPERIPHID7_bf(const void *const hw, hri_dualtimer_timerperiphid7_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID7.reg & DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7(mask))
	       >> DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Pos;
}

static inline hri_dualtimer_timerperiphid7_reg_t
hri_dualtimer_read_TIMERPERIPHID7_TIMERPERIPHID7_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID7.reg & DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Msk)
	       >> DUALTIMER_TIMERPERIPHID7_TIMERPERIPHID7_Pos;
}

static inline hri_dualtimer_timerperiphid7_reg_t
hri_dualtimer_get_TIMERPERIPHID7_reg(const void *const hw, hri_dualtimer_timerperiphid7_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID7.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid7_reg_t hri_dualtimer_read_TIMERPERIPHID7_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID7.reg;
}

static inline hri_dualtimer_timerperiphid0_reg_t
hri_dualtimer_get_TIMERPERIPHID0_PART_NUMBER_bf(const void *const hw, hri_dualtimer_timerperiphid0_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID0.reg & DUALTIMER_TIMERPERIPHID0_PART_NUMBER(mask))
	       >> DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid0_reg_t hri_dualtimer_read_TIMERPERIPHID0_PART_NUMBER_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID0.reg & DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Msk)
	       >> DUALTIMER_TIMERPERIPHID0_PART_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid0_reg_t
hri_dualtimer_get_TIMERPERIPHID0_reg(const void *const hw, hri_dualtimer_timerperiphid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid0_reg_t hri_dualtimer_read_TIMERPERIPHID0_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID0.reg;
}

static inline hri_dualtimer_timerperiphid1_reg_t
hri_dualtimer_get_TIMERPERIPHID1_PART_NUMBER_bf(const void *const hw, hri_dualtimer_timerperiphid1_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID1.reg & DUALTIMER_TIMERPERIPHID1_PART_NUMBER(mask))
	       >> DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid1_reg_t hri_dualtimer_read_TIMERPERIPHID1_PART_NUMBER_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID1.reg & DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Msk)
	       >> DUALTIMER_TIMERPERIPHID1_PART_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid1_reg_t
hri_dualtimer_get_TIMERPERIPHID1_JEP106_ID_3_0_bf(const void *const hw, hri_dualtimer_timerperiphid1_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID1.reg & DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0(mask))
	       >> DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Pos;
}

static inline hri_dualtimer_timerperiphid1_reg_t
hri_dualtimer_read_TIMERPERIPHID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID1.reg & DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Msk)
	       >> DUALTIMER_TIMERPERIPHID1_JEP106_ID_3_0_Pos;
}

static inline hri_dualtimer_timerperiphid1_reg_t
hri_dualtimer_get_TIMERPERIPHID1_reg(const void *const hw, hri_dualtimer_timerperiphid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid1_reg_t hri_dualtimer_read_TIMERPERIPHID1_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID1.reg;
}

static inline bool hri_dualtimer_get_TIMERPERIPHID2_JEDEC_USED_bit(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID2.reg & DUALTIMER_TIMERPERIPHID2_JEDEC_USED_Msk)
	       >> DUALTIMER_TIMERPERIPHID2_JEDEC_USED_Pos;
}

static inline hri_dualtimer_timerperiphid2_reg_t
hri_dualtimer_get_TIMERPERIPHID2_JEP106_ID_6_4_bf(const void *const hw, hri_dualtimer_timerperiphid2_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID2.reg & DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4(mask))
	       >> DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Pos;
}

static inline hri_dualtimer_timerperiphid2_reg_t
hri_dualtimer_read_TIMERPERIPHID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID2.reg & DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Msk)
	       >> DUALTIMER_TIMERPERIPHID2_JEP106_ID_6_4_Pos;
}

static inline hri_dualtimer_timerperiphid2_reg_t
hri_dualtimer_get_TIMERPERIPHID2_REVISION_bf(const void *const hw, hri_dualtimer_timerperiphid2_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID2.reg & DUALTIMER_TIMERPERIPHID2_REVISION(mask))
	       >> DUALTIMER_TIMERPERIPHID2_REVISION_Pos;
}

static inline hri_dualtimer_timerperiphid2_reg_t hri_dualtimer_read_TIMERPERIPHID2_REVISION_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID2.reg & DUALTIMER_TIMERPERIPHID2_REVISION_Msk)
	       >> DUALTIMER_TIMERPERIPHID2_REVISION_Pos;
}

static inline hri_dualtimer_timerperiphid2_reg_t
hri_dualtimer_get_TIMERPERIPHID2_reg(const void *const hw, hri_dualtimer_timerperiphid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid2_reg_t hri_dualtimer_read_TIMERPERIPHID2_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID2.reg;
}

static inline hri_dualtimer_timerperiphid3_reg_t
hri_dualtimer_get_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw, hri_dualtimer_timerperiphid3_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID3.reg & DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER(mask))
	       >> DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid3_reg_t
hri_dualtimer_read_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID3.reg & DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> DUALTIMER_TIMERPERIPHID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid3_reg_t
hri_dualtimer_get_TIMERPERIPHID3_ECO_REV_NUMBER_bf(const void *const hw, hri_dualtimer_timerperiphid3_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID3.reg & DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER(mask))
	       >> DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid3_reg_t
hri_dualtimer_read_TIMERPERIPHID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPERIPHID3.reg & DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Msk)
	       >> DUALTIMER_TIMERPERIPHID3_ECO_REV_NUMBER_Pos;
}

static inline hri_dualtimer_timerperiphid3_reg_t
hri_dualtimer_get_TIMERPERIPHID3_reg(const void *const hw, hri_dualtimer_timerperiphid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPERIPHID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerperiphid3_reg_t hri_dualtimer_read_TIMERPERIPHID3_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPERIPHID3.reg;
}

static inline hri_dualtimer_timerpcellid0_reg_t
hri_dualtimer_get_TIMERPCELLID0_TIMERPCELLID0_bf(const void *const hw, hri_dualtimer_timerpcellid0_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPCELLID0.reg & DUALTIMER_TIMERPCELLID0_TIMERPCELLID0(mask))
	       >> DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Pos;
}

static inline hri_dualtimer_timerpcellid0_reg_t hri_dualtimer_read_TIMERPCELLID0_TIMERPCELLID0_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPCELLID0.reg & DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Msk)
	       >> DUALTIMER_TIMERPCELLID0_TIMERPCELLID0_Pos;
}

static inline hri_dualtimer_timerpcellid0_reg_t
hri_dualtimer_get_TIMERPCELLID0_reg(const void *const hw, hri_dualtimer_timerpcellid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPCELLID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerpcellid0_reg_t hri_dualtimer_read_TIMERPCELLID0_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPCELLID0.reg;
}

static inline hri_dualtimer_timerpcellid1_reg_t
hri_dualtimer_get_TIMERPCELLID1_TIMERPCELLID1_bf(const void *const hw, hri_dualtimer_timerpcellid1_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPCELLID1.reg & DUALTIMER_TIMERPCELLID1_TIMERPCELLID1(mask))
	       >> DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Pos;
}

static inline hri_dualtimer_timerpcellid1_reg_t hri_dualtimer_read_TIMERPCELLID1_TIMERPCELLID1_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPCELLID1.reg & DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Msk)
	       >> DUALTIMER_TIMERPCELLID1_TIMERPCELLID1_Pos;
}

static inline hri_dualtimer_timerpcellid1_reg_t
hri_dualtimer_get_TIMERPCELLID1_reg(const void *const hw, hri_dualtimer_timerpcellid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPCELLID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerpcellid1_reg_t hri_dualtimer_read_TIMERPCELLID1_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPCELLID1.reg;
}

static inline hri_dualtimer_timerpcellid2_reg_t
hri_dualtimer_get_TIMERPCELLID2_TIMERPCELLID2_bf(const void *const hw, hri_dualtimer_timerpcellid2_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPCELLID2.reg & DUALTIMER_TIMERPCELLID2_TIMERPCELLID2(mask))
	       >> DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Pos;
}

static inline hri_dualtimer_timerpcellid2_reg_t hri_dualtimer_read_TIMERPCELLID2_TIMERPCELLID2_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPCELLID2.reg & DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Msk)
	       >> DUALTIMER_TIMERPCELLID2_TIMERPCELLID2_Pos;
}

static inline hri_dualtimer_timerpcellid2_reg_t
hri_dualtimer_get_TIMERPCELLID2_reg(const void *const hw, hri_dualtimer_timerpcellid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPCELLID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerpcellid2_reg_t hri_dualtimer_read_TIMERPCELLID2_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPCELLID2.reg;
}

static inline hri_dualtimer_timerpcellid3_reg_t
hri_dualtimer_get_TIMERPCELLID3_TIMERPCELLID3_bf(const void *const hw, hri_dualtimer_timerpcellid3_reg_t mask)
{
	return (((Dualtimer *)hw)->TIMERPCELLID3.reg & DUALTIMER_TIMERPCELLID3_TIMERPCELLID3(mask))
	       >> DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Pos;
}

static inline hri_dualtimer_timerpcellid3_reg_t hri_dualtimer_read_TIMERPCELLID3_TIMERPCELLID3_bf(const void *const hw)
{
	return (((Dualtimer *)hw)->TIMERPCELLID3.reg & DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Msk)
	       >> DUALTIMER_TIMERPCELLID3_TIMERPCELLID3_Pos;
}

static inline hri_dualtimer_timerpcellid3_reg_t
hri_dualtimer_get_TIMERPCELLID3_reg(const void *const hw, hri_dualtimer_timerpcellid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Dualtimer *)hw)->TIMERPCELLID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_dualtimer_timerpcellid3_reg_t hri_dualtimer_read_TIMERPCELLID3_reg(const void *const hw)
{
	return ((Dualtimer *)hw)->TIMERPCELLID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_DUALTIMER_B11_H_INCLUDED */
#endif /* _SAMB11_DUALTIMER_COMPONENT_ */
