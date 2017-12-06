/**
 * \file
 *
 * \brief SAM EFUSE_MISC_REGS
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

#ifdef _SAMB11_EFUSE_MISC_REGS_COMPONENT_
#ifndef _HRI_EFUSE_MISC_REGS_B11_H_INCLUDED_
#define _HRI_EFUSE_MISC_REGS_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_EFUSE_MISC_REGS_CRITICAL_SECTIONS)
#define EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER()
#define EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_efuse_misc_regs_efuse_1_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_1_status_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_2_status_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_3_status_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_4_status_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_5_status_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_control_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_prog_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_prog_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_prog_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_prog_3_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_status_0_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_status_1_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_status_2_reg_t;
typedef uint32_t hri_efuse_misc_regs_efuse_6_status_3_reg_t;
typedef uint8_t  hri_efuse_misc_regs_efuse_global_reset_reg_t;
typedef uint8_t  hri_efuse_misc_regs_efuse_misc_ctrl_reg_t;

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_1_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_2_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_3_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_4_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_5_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= EFUSE_MISC_REGS_EFUSE_GLOBAL_RESET_EFUSE_6_RSTN_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_GLOBAL_RESET_reg(const void *const                            hw,
                                                     hri_efuse_misc_regs_efuse_global_reset_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_global_reset_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_GLOBAL_RESET_reg(const void *const                            hw,
                                                     hri_efuse_misc_regs_efuse_global_reset_reg_t mask)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_GLOBAL_RESET_reg(const void *const                            hw,
                                                       hri_efuse_misc_regs_efuse_global_reset_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_GLOBAL_RESET_reg(const void *const                            hw,
                                                       hri_efuse_misc_regs_efuse_global_reset_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_GLOBAL_RESET_reg(const void *const                            hw,
                                                        hri_efuse_misc_regs_efuse_global_reset_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_global_reset_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_GLOBAL_RESET_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_GLOBAL_RESET.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_1_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_1_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_1_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_CONTROL.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_2_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_2_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_2_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_CONTROL.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_3_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_3_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_3_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_CONTROL.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_4_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_4_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_4_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_CONTROL.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_5_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_5_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_5_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_CONTROL.reg;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Msk) >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_FORCE_LOAD_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_FORCE_LOAD_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FORCE_LOAD_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_START_PROGRAM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_START_PROGRAM_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_START_PROGRAM_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Pos;
	return (bool)tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Msk;
	tmp |= value << EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Pos;
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_bit(const void *const hw)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_EFUSE_LOAD_DONE_Msk;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_CONTROL_FIRST_READ_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_READ_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_CONTROL_FIRST_PROG_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_FIRST_PROG_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                    hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_PROG_CLK_H_COUNT_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                               hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_6_control_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                 hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const                         hw,
                                                                  hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_CONTROL_DEBUG_BUS_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_CONTROL_DEBUG_BUS_SEL_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_CONTROL_reg(const void *const                         hw,
                                                                     hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_CONTROL_reg(const void *const hw, hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_6_control_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_CONTROL_reg(const void *const                         hw,
                                                                       hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_CONTROL_reg(const void *const                         hw,
                                                                        hri_efuse_misc_regs_efuse_6_control_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_control_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_CONTROL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_CONTROL.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_0_EFUSE_1_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_0_EFUSE_1_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_1_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_1_EFUSE_1_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_1_EFUSE_1_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_1_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_2_EFUSE_1_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_2_EFUSE_1_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_1_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_3_EFUSE_1_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_1_PROG_3_EFUSE_1_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_1_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_1_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_1_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_1_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_1_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_1_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_PROG_3.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_0_EFUSE_2_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_0_EFUSE_2_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_2_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_1_EFUSE_2_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_1_EFUSE_2_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_2_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_2_EFUSE_2_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_2_EFUSE_2_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_2_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_3_EFUSE_2_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_2_PROG_3_EFUSE_2_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_2_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_2_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_2_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_2_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_2_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_2_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_PROG_3.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_0_EFUSE_3_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_0_EFUSE_3_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_3_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_1_EFUSE_3_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_1_EFUSE_3_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_3_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_2_EFUSE_3_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_2_EFUSE_3_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_3_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_3_EFUSE_3_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_3_PROG_3_EFUSE_3_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_3_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_3_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_3_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_3_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_3_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_3_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_PROG_3.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_0_EFUSE_4_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_0_EFUSE_4_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_4_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_1_EFUSE_4_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_1_EFUSE_4_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_4_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_2_EFUSE_4_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_2_EFUSE_4_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_4_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_3_EFUSE_4_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_4_PROG_3_EFUSE_4_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_4_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_4_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_4_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_4_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_4_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_4_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_PROG_3.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_0_EFUSE_5_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_0_EFUSE_5_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_5_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_1_EFUSE_5_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_1_EFUSE_5_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_5_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_2_EFUSE_5_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_2_EFUSE_5_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_5_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_3_EFUSE_5_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_5_PROG_3_EFUSE_5_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_5_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_5_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_5_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_5_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_5_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_5_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_PROG_3.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg |= EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_0_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg ^= EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_0_EFUSE_6_PROG_0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_0_EFUSE_6_PROG_0_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_0_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_0_reg(const void *const hw, hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_0_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_0_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_0_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_6_prog_0_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_0.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg |= EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_1_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg ^= EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_1_EFUSE_6_PROG_1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_1_EFUSE_6_PROG_1_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_1_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_1_reg(const void *const hw, hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_1_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_1_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_1_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_6_prog_1_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_1.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg |= EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_2_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg ^= EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_2_EFUSE_6_PROG_2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_2_EFUSE_6_PROG_2_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_2_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_2_reg(const void *const hw, hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_2_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_2_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_2_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_6_prog_2_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_2.reg;
}

static inline void
hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg |= EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const                        hw,
                                                               hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(mask))
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Pos;
	return tmp;
}

static inline void
hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_3_reg_t data)
{
	uint32_t tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg;
	tmp &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Msk;
	tmp |= EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(data);
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg = tmp;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const                        hw,
                                                                 hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg &= ~EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const                        hw,
                                                                  hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg ^= EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3(mask);
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_3_EFUSE_6_PROG_3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg;
	tmp = (tmp & EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Msk)
	      >> EFUSE_MISC_REGS_EFUSE_6_PROG_3_EFUSE_6_PROG_3_Pos;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_set_EFUSE_6_PROG_3_reg(const void *const                        hw,
                                                                    hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg |= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_PROG_3_reg(const void *const hw, hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_efusemiscregsmiscregs_write_EFUSE_6_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_3_reg_t data)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg = data;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_clear_EFUSE_6_PROG_3_reg(const void *const                        hw,
                                                                      hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg &= ~mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_efusemiscregsmiscregs_toggle_EFUSE_6_PROG_3_reg(const void *const                        hw,
                                                                       hri_efuse_misc_regs_efuse_6_prog_3_reg_t mask)
{
	EFUSE_MISC_REGS_CRITICAL_SECTION_ENTER();
	((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg ^= mask;
	EFUSE_MISC_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_efuse_misc_regs_efuse_6_prog_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_PROG_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_PROG_3.reg;
}

static inline hri_efuse_misc_regs_efuse_1_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_1_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_0_EFUSE_1_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_1_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_1_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_1_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_1_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_1_EFUSE_1_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_1_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_1_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_1_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_1_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_2_EFUSE_1_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_1_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_1_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_1_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_1_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_1_STATUS_3_EFUSE_1_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_1_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_1_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_1_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_1_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_1_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_1_STATUS_3.reg;
}

static inline hri_efuse_misc_regs_efuse_2_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_2_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_0_EFUSE_2_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_2_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_2_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_2_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_2_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_1_EFUSE_2_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_2_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_2_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_2_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_2_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_2_EFUSE_2_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_2_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_2_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_2_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_2_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_2_STATUS_3_EFUSE_2_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_2_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_2_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_2_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_2_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_2_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_2_STATUS_3.reg;
}

static inline hri_efuse_misc_regs_efuse_3_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_3_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_0_EFUSE_3_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_3_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_3_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_3_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_3_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_1_EFUSE_3_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_3_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_3_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_3_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_3_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_2_EFUSE_3_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_3_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_3_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_3_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_3_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_3_STATUS_3_EFUSE_3_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_3_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_3_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_3_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_3_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_3_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_3_STATUS_3.reg;
}

static inline hri_efuse_misc_regs_efuse_4_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_4_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_0_EFUSE_4_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_4_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_4_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_4_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_4_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_1_EFUSE_4_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_4_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_4_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_4_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_4_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_2_EFUSE_4_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_4_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_4_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_4_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_4_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_4_STATUS_3_EFUSE_4_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_4_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_4_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_4_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_4_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_4_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_4_STATUS_3.reg;
}

static inline hri_efuse_misc_regs_efuse_5_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_5_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_0_EFUSE_5_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_5_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_5_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_5_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_5_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_1_EFUSE_5_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_5_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_5_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_5_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_5_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_2_EFUSE_5_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_5_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_5_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_5_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_5_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_5_STATUS_3_EFUSE_5_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_5_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_5_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_5_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_5_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_5_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_5_STATUS_3.reg;
}

static inline hri_efuse_misc_regs_efuse_6_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_6_status_0_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0(mask))
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_0.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_0_EFUSE_6_STATUS_0_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_0_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_0_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_6_status_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_6_status_0_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_0_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_0.reg;
}

static inline hri_efuse_misc_regs_efuse_6_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_6_status_1_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1(mask))
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_1.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_1_EFUSE_6_STATUS_1_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_1_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_1_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_6_status_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_6_status_1_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_1_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_1.reg;
}

static inline hri_efuse_misc_regs_efuse_6_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_6_status_2_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2(mask))
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_2.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_2_EFUSE_6_STATUS_2_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_2_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_2_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_6_status_2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_6_status_2_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_2_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_2.reg;
}

static inline hri_efuse_misc_regs_efuse_6_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_bf(const void *const                          hw,
                                                                   hri_efuse_misc_regs_efuse_6_status_3_reg_t mask)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3(mask))
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_bf(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_3.reg & EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_6_STATUS_3_EFUSE_6_STATUS_3_Pos;
}

static inline hri_efuse_misc_regs_efuse_6_status_3_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_6_STATUS_3_reg(const void *const                          hw,
                                                   hri_efuse_misc_regs_efuse_6_status_3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_6_status_3_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_6_STATUS_3_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_6_STATUS_3.reg;
}

static inline bool hri_efusemiscregsmiscregs_get_EFUSE_MISC_CTRL_OUT_OF_RESET_bit(const void *const hw)
{
	return (((EfuseMiscRegs *)hw)->EFUSE_MISC_CTRL.reg & EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OUT_OF_RESET_Msk)
	       >> EFUSE_MISC_REGS_EFUSE_MISC_CTRL_OUT_OF_RESET_Pos;
}

static inline hri_efuse_misc_regs_efuse_misc_ctrl_reg_t
hri_efusemiscregsmiscregs_get_EFUSE_MISC_CTRL_reg(const void *const hw, hri_efuse_misc_regs_efuse_misc_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((EfuseMiscRegs *)hw)->EFUSE_MISC_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_efuse_misc_regs_efuse_misc_ctrl_reg_t
hri_efusemiscregsmiscregs_read_EFUSE_MISC_CTRL_reg(const void *const hw)
{
	return ((EfuseMiscRegs *)hw)->EFUSE_MISC_CTRL.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_EFUSE_MISC_REGS_B11_H_INCLUDED */
#endif /* _SAMB11_EFUSE_MISC_REGS_COMPONENT_ */
