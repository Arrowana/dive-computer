/**
 * \file
 *
 * \brief SAM TIMER
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

#ifdef _SAMB11_TIMER_COMPONENT_
#ifndef _HRI_TIMER_B11_H_INCLUDED_
#define _HRI_TIMER_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_TIMER_CRITICAL_SECTIONS)
#define TIMER_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define TIMER_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define TIMER_CRITICAL_SECTION_ENTER()
#define TIMER_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_timer_reload_reg_t;
typedef uint32_t hri_timer_value_reg_t;
typedef uint8_t  hri_timer_cid0_reg_t;
typedef uint8_t  hri_timer_cid1_reg_t;
typedef uint8_t  hri_timer_cid2_reg_t;
typedef uint8_t  hri_timer_cid3_reg_t;
typedef uint8_t  hri_timer_ctrl_reg_t;
typedef uint8_t  hri_timer_intstatusclear_reg_t;
typedef uint8_t  hri_timer_pid0_reg_t;
typedef uint8_t  hri_timer_pid1_reg_t;
typedef uint8_t  hri_timer_pid2_reg_t;
typedef uint8_t  hri_timer_pid3_reg_t;
typedef uint8_t  hri_timer_pid4_reg_t;
typedef uint8_t  hri_timer_pid5_reg_t;
typedef uint8_t  hri_timer_pid6_reg_t;
typedef uint8_t  hri_timer_pid7_reg_t;

static inline void hri_timer_set_CTRL_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg |= TIMER_CTRL_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_timer_get_CTRL_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp = (tmp & TIMER_CTRL_ENABLE_Msk) >> TIMER_CTRL_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_timer_write_CTRL_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp &= ~TIMER_CTRL_ENABLE_Msk;
	tmp |= value << TIMER_CTRL_ENABLE_Pos;
	((Timer *)hw)->CTRL.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_CTRL_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg &= ~TIMER_CTRL_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_CTRL_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg ^= TIMER_CTRL_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_set_CTRL_EXTERNAL_INPUT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg |= TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_timer_get_CTRL_EXTERNAL_INPUT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp = (tmp & TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Msk) >> TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_timer_write_CTRL_EXTERNAL_INPUT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp &= ~TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Msk;
	tmp |= value << TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Pos;
	((Timer *)hw)->CTRL.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_CTRL_EXTERNAL_INPUT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg &= ~TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_CTRL_EXTERNAL_INPUT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg ^= TIMER_CTRL_EXTERNAL_INPUT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_set_CTRL_EXTERNAL_INPUT_CLOCK_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg |= TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_timer_get_CTRL_EXTERNAL_INPUT_CLOCK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp = (tmp & TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Msk) >> TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Pos;
	return (bool)tmp;
}

static inline void hri_timer_write_CTRL_EXTERNAL_INPUT_CLOCK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp &= ~TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Msk;
	tmp |= value << TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Pos;
	((Timer *)hw)->CTRL.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_CTRL_EXTERNAL_INPUT_CLOCK_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg &= ~TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_CTRL_EXTERNAL_INPUT_CLOCK_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg ^= TIMER_CTRL_EXTERNAL_INPUT_CLOCK_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_set_CTRL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg |= TIMER_CTRL_INTERRUPT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_timer_get_CTRL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp = (tmp & TIMER_CTRL_INTERRUPT_ENABLE_Msk) >> TIMER_CTRL_INTERRUPT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_timer_write_CTRL_INTERRUPT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp &= ~TIMER_CTRL_INTERRUPT_ENABLE_Msk;
	tmp |= value << TIMER_CTRL_INTERRUPT_ENABLE_Pos;
	((Timer *)hw)->CTRL.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_CTRL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg &= ~TIMER_CTRL_INTERRUPT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_CTRL_INTERRUPT_ENABLE_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg ^= TIMER_CTRL_INTERRUPT_ENABLE_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_set_CTRL_reg(const void *const hw, hri_timer_ctrl_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg |= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_ctrl_reg_t hri_timer_get_CTRL_reg(const void *const hw, hri_timer_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_timer_write_CTRL_reg(const void *const hw, hri_timer_ctrl_reg_t data)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg = data;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_CTRL_reg(const void *const hw, hri_timer_ctrl_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg &= ~mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_CTRL_reg(const void *const hw, hri_timer_ctrl_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->CTRL.reg ^= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_ctrl_reg_t hri_timer_read_CTRL_reg(const void *const hw)
{
	return ((Timer *)hw)->CTRL.reg;
}

static inline void hri_timer_set_VALUE_VALUE_bf(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg |= TIMER_VALUE_VALUE(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_value_reg_t hri_timer_get_VALUE_VALUE_bf(const void *const hw, hri_timer_value_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->VALUE.reg;
	tmp = (tmp & TIMER_VALUE_VALUE(mask)) >> TIMER_VALUE_VALUE_Pos;
	return tmp;
}

static inline void hri_timer_write_VALUE_VALUE_bf(const void *const hw, hri_timer_value_reg_t data)
{
	uint32_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->VALUE.reg;
	tmp &= ~TIMER_VALUE_VALUE_Msk;
	tmp |= TIMER_VALUE_VALUE(data);
	((Timer *)hw)->VALUE.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_VALUE_VALUE_bf(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg &= ~TIMER_VALUE_VALUE(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_VALUE_VALUE_bf(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg ^= TIMER_VALUE_VALUE(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_value_reg_t hri_timer_read_VALUE_VALUE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->VALUE.reg;
	tmp = (tmp & TIMER_VALUE_VALUE_Msk) >> TIMER_VALUE_VALUE_Pos;
	return tmp;
}

static inline void hri_timer_set_VALUE_reg(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg |= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_value_reg_t hri_timer_get_VALUE_reg(const void *const hw, hri_timer_value_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->VALUE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_timer_write_VALUE_reg(const void *const hw, hri_timer_value_reg_t data)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg = data;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_VALUE_reg(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg &= ~mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_VALUE_reg(const void *const hw, hri_timer_value_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->VALUE.reg ^= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_value_reg_t hri_timer_read_VALUE_reg(const void *const hw)
{
	return ((Timer *)hw)->VALUE.reg;
}

static inline void hri_timer_set_RELOAD_RELOAD_bf(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg |= TIMER_RELOAD_RELOAD(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_reload_reg_t hri_timer_get_RELOAD_RELOAD_bf(const void *const hw, hri_timer_reload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->RELOAD.reg;
	tmp = (tmp & TIMER_RELOAD_RELOAD(mask)) >> TIMER_RELOAD_RELOAD_Pos;
	return tmp;
}

static inline void hri_timer_write_RELOAD_RELOAD_bf(const void *const hw, hri_timer_reload_reg_t data)
{
	uint32_t tmp;
	TIMER_CRITICAL_SECTION_ENTER();
	tmp = ((Timer *)hw)->RELOAD.reg;
	tmp &= ~TIMER_RELOAD_RELOAD_Msk;
	tmp |= TIMER_RELOAD_RELOAD(data);
	((Timer *)hw)->RELOAD.reg = tmp;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_RELOAD_RELOAD_bf(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg &= ~TIMER_RELOAD_RELOAD(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_RELOAD_RELOAD_bf(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg ^= TIMER_RELOAD_RELOAD(mask);
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_reload_reg_t hri_timer_read_RELOAD_RELOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->RELOAD.reg;
	tmp = (tmp & TIMER_RELOAD_RELOAD_Msk) >> TIMER_RELOAD_RELOAD_Pos;
	return tmp;
}

static inline void hri_timer_set_RELOAD_reg(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg |= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_reload_reg_t hri_timer_get_RELOAD_reg(const void *const hw, hri_timer_reload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Timer *)hw)->RELOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_timer_write_RELOAD_reg(const void *const hw, hri_timer_reload_reg_t data)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg = data;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_clear_RELOAD_reg(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg &= ~mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline void hri_timer_toggle_RELOAD_reg(const void *const hw, hri_timer_reload_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->RELOAD.reg ^= mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_reload_reg_t hri_timer_read_RELOAD_reg(const void *const hw)
{
	return ((Timer *)hw)->RELOAD.reg;
}

static inline hri_timer_pid4_reg_t hri_timer_get_PID4_JEP106_C_CODE_bf(const void *const hw, hri_timer_pid4_reg_t mask)
{
	return (((Timer *)hw)->PID4.reg & TIMER_PID4_JEP106_C_CODE(mask)) >> TIMER_PID4_JEP106_C_CODE_Pos;
}

static inline hri_timer_pid4_reg_t hri_timer_read_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((Timer *)hw)->PID4.reg & TIMER_PID4_JEP106_C_CODE_Msk) >> TIMER_PID4_JEP106_C_CODE_Pos;
}

static inline hri_timer_pid4_reg_t hri_timer_get_PID4_BLOCK_COUNT_bf(const void *const hw, hri_timer_pid4_reg_t mask)
{
	return (((Timer *)hw)->PID4.reg & TIMER_PID4_BLOCK_COUNT(mask)) >> TIMER_PID4_BLOCK_COUNT_Pos;
}

static inline hri_timer_pid4_reg_t hri_timer_read_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((Timer *)hw)->PID4.reg & TIMER_PID4_BLOCK_COUNT_Msk) >> TIMER_PID4_BLOCK_COUNT_Pos;
}

static inline hri_timer_pid4_reg_t hri_timer_get_PID4_reg(const void *const hw, hri_timer_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid4_reg_t hri_timer_read_PID4_reg(const void *const hw)
{
	return ((Timer *)hw)->PID4.reg;
}

static inline hri_timer_pid5_reg_t hri_timer_get_PID5_PID5_bf(const void *const hw, hri_timer_pid5_reg_t mask)
{
	return (((Timer *)hw)->PID5.reg & TIMER_PID5_PID5(mask)) >> TIMER_PID5_PID5_Pos;
}

static inline hri_timer_pid5_reg_t hri_timer_read_PID5_PID5_bf(const void *const hw)
{
	return (((Timer *)hw)->PID5.reg & TIMER_PID5_PID5_Msk) >> TIMER_PID5_PID5_Pos;
}

static inline hri_timer_pid5_reg_t hri_timer_get_PID5_reg(const void *const hw, hri_timer_pid5_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID5.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid5_reg_t hri_timer_read_PID5_reg(const void *const hw)
{
	return ((Timer *)hw)->PID5.reg;
}

static inline hri_timer_pid6_reg_t hri_timer_get_PID6_PID6_bf(const void *const hw, hri_timer_pid6_reg_t mask)
{
	return (((Timer *)hw)->PID6.reg & TIMER_PID6_PID6(mask)) >> TIMER_PID6_PID6_Pos;
}

static inline hri_timer_pid6_reg_t hri_timer_read_PID6_PID6_bf(const void *const hw)
{
	return (((Timer *)hw)->PID6.reg & TIMER_PID6_PID6_Msk) >> TIMER_PID6_PID6_Pos;
}

static inline hri_timer_pid6_reg_t hri_timer_get_PID6_reg(const void *const hw, hri_timer_pid6_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID6.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid6_reg_t hri_timer_read_PID6_reg(const void *const hw)
{
	return ((Timer *)hw)->PID6.reg;
}

static inline hri_timer_pid7_reg_t hri_timer_get_PID7_PID7_bf(const void *const hw, hri_timer_pid7_reg_t mask)
{
	return (((Timer *)hw)->PID7.reg & TIMER_PID7_PID7(mask)) >> TIMER_PID7_PID7_Pos;
}

static inline hri_timer_pid7_reg_t hri_timer_read_PID7_PID7_bf(const void *const hw)
{
	return (((Timer *)hw)->PID7.reg & TIMER_PID7_PID7_Msk) >> TIMER_PID7_PID7_Pos;
}

static inline hri_timer_pid7_reg_t hri_timer_get_PID7_reg(const void *const hw, hri_timer_pid7_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID7.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid7_reg_t hri_timer_read_PID7_reg(const void *const hw)
{
	return ((Timer *)hw)->PID7.reg;
}

static inline hri_timer_pid0_reg_t hri_timer_get_PID0_PART_NUMBER_bf(const void *const hw, hri_timer_pid0_reg_t mask)
{
	return (((Timer *)hw)->PID0.reg & TIMER_PID0_PART_NUMBER(mask)) >> TIMER_PID0_PART_NUMBER_Pos;
}

static inline hri_timer_pid0_reg_t hri_timer_read_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((Timer *)hw)->PID0.reg & TIMER_PID0_PART_NUMBER_Msk) >> TIMER_PID0_PART_NUMBER_Pos;
}

static inline hri_timer_pid0_reg_t hri_timer_get_PID0_reg(const void *const hw, hri_timer_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid0_reg_t hri_timer_read_PID0_reg(const void *const hw)
{
	return ((Timer *)hw)->PID0.reg;
}

static inline hri_timer_pid1_reg_t hri_timer_get_PID1_PART_NUMBER_bf(const void *const hw, hri_timer_pid1_reg_t mask)
{
	return (((Timer *)hw)->PID1.reg & TIMER_PID1_PART_NUMBER(mask)) >> TIMER_PID1_PART_NUMBER_Pos;
}

static inline hri_timer_pid1_reg_t hri_timer_read_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((Timer *)hw)->PID1.reg & TIMER_PID1_PART_NUMBER_Msk) >> TIMER_PID1_PART_NUMBER_Pos;
}

static inline hri_timer_pid1_reg_t hri_timer_get_PID1_JEP106_ID_3_0_bf(const void *const hw, hri_timer_pid1_reg_t mask)
{
	return (((Timer *)hw)->PID1.reg & TIMER_PID1_JEP106_ID_3_0(mask)) >> TIMER_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_timer_pid1_reg_t hri_timer_read_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((Timer *)hw)->PID1.reg & TIMER_PID1_JEP106_ID_3_0_Msk) >> TIMER_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_timer_pid1_reg_t hri_timer_get_PID1_reg(const void *const hw, hri_timer_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid1_reg_t hri_timer_read_PID1_reg(const void *const hw)
{
	return ((Timer *)hw)->PID1.reg;
}

static inline bool hri_timer_get_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((Timer *)hw)->PID2.reg & TIMER_PID2_JEDEC_USED_Msk) >> TIMER_PID2_JEDEC_USED_Pos;
}

static inline hri_timer_pid2_reg_t hri_timer_get_PID2_JEP106_ID_6_4_bf(const void *const hw, hri_timer_pid2_reg_t mask)
{
	return (((Timer *)hw)->PID2.reg & TIMER_PID2_JEP106_ID_6_4(mask)) >> TIMER_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_timer_pid2_reg_t hri_timer_read_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((Timer *)hw)->PID2.reg & TIMER_PID2_JEP106_ID_6_4_Msk) >> TIMER_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_timer_pid2_reg_t hri_timer_get_PID2_REVISION_bf(const void *const hw, hri_timer_pid2_reg_t mask)
{
	return (((Timer *)hw)->PID2.reg & TIMER_PID2_REVISION(mask)) >> TIMER_PID2_REVISION_Pos;
}

static inline hri_timer_pid2_reg_t hri_timer_read_PID2_REVISION_bf(const void *const hw)
{
	return (((Timer *)hw)->PID2.reg & TIMER_PID2_REVISION_Msk) >> TIMER_PID2_REVISION_Pos;
}

static inline hri_timer_pid2_reg_t hri_timer_get_PID2_reg(const void *const hw, hri_timer_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid2_reg_t hri_timer_read_PID2_reg(const void *const hw)
{
	return ((Timer *)hw)->PID2.reg;
}

static inline hri_timer_pid3_reg_t hri_timer_get_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const    hw,
                                                                             hri_timer_pid3_reg_t mask)
{
	return (((Timer *)hw)->PID3.reg & TIMER_PID3_CUSTOMER_MOD_NUMBER(mask)) >> TIMER_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_timer_pid3_reg_t hri_timer_read_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((Timer *)hw)->PID3.reg & TIMER_PID3_CUSTOMER_MOD_NUMBER_Msk) >> TIMER_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_timer_pid3_reg_t hri_timer_get_PID3_ECO_REV_NUMBER_bf(const void *const hw, hri_timer_pid3_reg_t mask)
{
	return (((Timer *)hw)->PID3.reg & TIMER_PID3_ECO_REV_NUMBER(mask)) >> TIMER_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_timer_pid3_reg_t hri_timer_read_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((Timer *)hw)->PID3.reg & TIMER_PID3_ECO_REV_NUMBER_Msk) >> TIMER_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_timer_pid3_reg_t hri_timer_get_PID3_reg(const void *const hw, hri_timer_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_pid3_reg_t hri_timer_read_PID3_reg(const void *const hw)
{
	return ((Timer *)hw)->PID3.reg;
}

static inline hri_timer_cid0_reg_t hri_timer_get_CID0_CID0_bf(const void *const hw, hri_timer_cid0_reg_t mask)
{
	return (((Timer *)hw)->CID0.reg & TIMER_CID0_CID0(mask)) >> TIMER_CID0_CID0_Pos;
}

static inline hri_timer_cid0_reg_t hri_timer_read_CID0_CID0_bf(const void *const hw)
{
	return (((Timer *)hw)->CID0.reg & TIMER_CID0_CID0_Msk) >> TIMER_CID0_CID0_Pos;
}

static inline hri_timer_cid0_reg_t hri_timer_get_CID0_reg(const void *const hw, hri_timer_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_cid0_reg_t hri_timer_read_CID0_reg(const void *const hw)
{
	return ((Timer *)hw)->CID0.reg;
}

static inline hri_timer_cid1_reg_t hri_timer_get_CID1_CID1_bf(const void *const hw, hri_timer_cid1_reg_t mask)
{
	return (((Timer *)hw)->CID1.reg & TIMER_CID1_CID1(mask)) >> TIMER_CID1_CID1_Pos;
}

static inline hri_timer_cid1_reg_t hri_timer_read_CID1_CID1_bf(const void *const hw)
{
	return (((Timer *)hw)->CID1.reg & TIMER_CID1_CID1_Msk) >> TIMER_CID1_CID1_Pos;
}

static inline hri_timer_cid1_reg_t hri_timer_get_CID1_reg(const void *const hw, hri_timer_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_cid1_reg_t hri_timer_read_CID1_reg(const void *const hw)
{
	return ((Timer *)hw)->CID1.reg;
}

static inline hri_timer_cid2_reg_t hri_timer_get_CID2_CID2_bf(const void *const hw, hri_timer_cid2_reg_t mask)
{
	return (((Timer *)hw)->CID2.reg & TIMER_CID2_CID2(mask)) >> TIMER_CID2_CID2_Pos;
}

static inline hri_timer_cid2_reg_t hri_timer_read_CID2_CID2_bf(const void *const hw)
{
	return (((Timer *)hw)->CID2.reg & TIMER_CID2_CID2_Msk) >> TIMER_CID2_CID2_Pos;
}

static inline hri_timer_cid2_reg_t hri_timer_get_CID2_reg(const void *const hw, hri_timer_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_cid2_reg_t hri_timer_read_CID2_reg(const void *const hw)
{
	return ((Timer *)hw)->CID2.reg;
}

static inline hri_timer_cid3_reg_t hri_timer_get_CID3_CID3_bf(const void *const hw, hri_timer_cid3_reg_t mask)
{
	return (((Timer *)hw)->CID3.reg & TIMER_CID3_CID3(mask)) >> TIMER_CID3_CID3_Pos;
}

static inline hri_timer_cid3_reg_t hri_timer_read_CID3_CID3_bf(const void *const hw)
{
	return (((Timer *)hw)->CID3.reg & TIMER_CID3_CID3_Msk) >> TIMER_CID3_CID3_Pos;
}

static inline hri_timer_cid3_reg_t hri_timer_get_CID3_reg(const void *const hw, hri_timer_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_timer_cid3_reg_t hri_timer_read_CID3_reg(const void *const hw)
{
	return ((Timer *)hw)->CID3.reg;
}

static inline bool hri_timer_get_INTSTATUSCLEAR_INTSTATUSCLEAR_bit(const void *const hw)
{
	return (((Timer *)hw)->INTSTATUSCLEAR.reg & TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR_Msk)
	       >> TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR_Pos;
}

static inline void hri_timer_clear_INTSTATUSCLEAR_INTSTATUSCLEAR_bit(const void *const hw)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->INTSTATUSCLEAR.reg = TIMER_INTSTATUSCLEAR_INTSTATUSCLEAR_Msk;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_intstatusclear_reg_t hri_timer_get_INTSTATUSCLEAR_reg(const void *const              hw,
                                                                              hri_timer_intstatusclear_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Timer *)hw)->INTSTATUSCLEAR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_timer_clear_INTSTATUSCLEAR_reg(const void *const hw, hri_timer_intstatusclear_reg_t mask)
{
	TIMER_CRITICAL_SECTION_ENTER();
	((Timer *)hw)->INTSTATUSCLEAR.reg = mask;
	TIMER_CRITICAL_SECTION_LEAVE();
}

static inline hri_timer_intstatusclear_reg_t hri_timer_read_INTSTATUSCLEAR_reg(const void *const hw)
{
	return ((Timer *)hw)->INTSTATUSCLEAR.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_TIMER_B11_H_INCLUDED */
#endif /* _SAMB11_TIMER_COMPONENT_ */
