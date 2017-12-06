/**
 * \file
 *
 * \brief SAM WDT
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

#ifdef _SAMB11_WDT_COMPONENT_
#ifndef _HRI_WDT_B11_H_INCLUDED_
#define _HRI_WDT_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_WDT_CRITICAL_SECTIONS)
#define WDT_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define WDT_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define WDT_CRITICAL_SECTION_ENTER()
#define WDT_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_wdt_wdogload_reg_t;
typedef uint32_t hri_wdt_wdoglock_reg_t;
typedef uint32_t hri_wdt_wdogvalue_reg_t;
typedef uint8_t  hri_wdt_wdogcontrol_reg_t;
typedef uint8_t  hri_wdt_wdogintclr_reg_t;
typedef uint8_t  hri_wdt_wdogitcr_reg_t;
typedef uint8_t  hri_wdt_wdogitop_reg_t;
typedef uint8_t  hri_wdt_wdogmis_reg_t;
typedef uint8_t  hri_wdt_wdogpcellid0_reg_t;
typedef uint8_t  hri_wdt_wdogpcellid1_reg_t;
typedef uint8_t  hri_wdt_wdogpcellid2_reg_t;
typedef uint8_t  hri_wdt_wdogpcellid3_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid0_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid1_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid2_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid3_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid4_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid5_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid6_reg_t;
typedef uint8_t  hri_wdt_wdogperiphid7_reg_t;
typedef uint8_t  hri_wdt_wdogris_reg_t;

static inline void hri_wdt_write_WDOGINTCLR_reg(const void *const hw, hri_wdt_wdogintclr_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGINTCLR.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGLOAD_WDOGLOAD_bf(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg |= WDT_WDOGLOAD_WDOGLOAD(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogload_reg_t hri_wdt_get_WDOGLOAD_WDOGLOAD_bf(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOAD.reg;
	tmp = (tmp & WDT_WDOGLOAD_WDOGLOAD(mask)) >> WDT_WDOGLOAD_WDOGLOAD_Pos;
	return tmp;
}

static inline void hri_wdt_write_WDOGLOAD_WDOGLOAD_bf(const void *const hw, hri_wdt_wdogload_reg_t data)
{
	uint32_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGLOAD.reg;
	tmp &= ~WDT_WDOGLOAD_WDOGLOAD_Msk;
	tmp |= WDT_WDOGLOAD_WDOGLOAD(data);
	((Wdt *)hw)->WDOGLOAD.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGLOAD_WDOGLOAD_bf(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg &= ~WDT_WDOGLOAD_WDOGLOAD(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGLOAD_WDOGLOAD_bf(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg ^= WDT_WDOGLOAD_WDOGLOAD(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogload_reg_t hri_wdt_read_WDOGLOAD_WDOGLOAD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOAD.reg;
	tmp = (tmp & WDT_WDOGLOAD_WDOGLOAD_Msk) >> WDT_WDOGLOAD_WDOGLOAD_Pos;
	return tmp;
}

static inline void hri_wdt_set_WDOGLOAD_reg(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg |= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogload_reg_t hri_wdt_get_WDOGLOAD_reg(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_wdt_write_WDOGLOAD_reg(const void *const hw, hri_wdt_wdogload_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGLOAD_reg(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg &= ~mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGLOAD_reg(const void *const hw, hri_wdt_wdogload_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOAD.reg ^= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogload_reg_t hri_wdt_read_WDOGLOAD_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGLOAD.reg;
}

static inline void hri_wdt_set_WDOGCONTROL_INTEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg |= WDT_WDOGCONTROL_INTEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGCONTROL_INTEN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGCONTROL.reg;
	tmp = (tmp & WDT_WDOGCONTROL_INTEN_Msk) >> WDT_WDOGCONTROL_INTEN_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGCONTROL_INTEN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGCONTROL.reg;
	tmp &= ~WDT_WDOGCONTROL_INTEN_Msk;
	tmp |= value << WDT_WDOGCONTROL_INTEN_Pos;
	((Wdt *)hw)->WDOGCONTROL.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGCONTROL_INTEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg &= ~WDT_WDOGCONTROL_INTEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGCONTROL_INTEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg ^= WDT_WDOGCONTROL_INTEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGCONTROL_RESEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg |= WDT_WDOGCONTROL_RESEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGCONTROL_RESEN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGCONTROL.reg;
	tmp = (tmp & WDT_WDOGCONTROL_RESEN_Msk) >> WDT_WDOGCONTROL_RESEN_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGCONTROL_RESEN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGCONTROL.reg;
	tmp &= ~WDT_WDOGCONTROL_RESEN_Msk;
	tmp |= value << WDT_WDOGCONTROL_RESEN_Pos;
	((Wdt *)hw)->WDOGCONTROL.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGCONTROL_RESEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg &= ~WDT_WDOGCONTROL_RESEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGCONTROL_RESEN_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg ^= WDT_WDOGCONTROL_RESEN_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGCONTROL_reg(const void *const hw, hri_wdt_wdogcontrol_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg |= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogcontrol_reg_t hri_wdt_get_WDOGCONTROL_reg(const void *const         hw,
                                                                    hri_wdt_wdogcontrol_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGCONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_wdt_write_WDOGCONTROL_reg(const void *const hw, hri_wdt_wdogcontrol_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGCONTROL_reg(const void *const hw, hri_wdt_wdogcontrol_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg &= ~mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGCONTROL_reg(const void *const hw, hri_wdt_wdogcontrol_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGCONTROL.reg ^= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogcontrol_reg_t hri_wdt_read_WDOGCONTROL_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGCONTROL.reg;
}

static inline void hri_wdt_set_WDOGLOCK_ENABLE_STATUS_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg |= WDT_WDOGLOCK_ENABLE_STATUS_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGLOCK_ENABLE_STATUS_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp = (tmp & WDT_WDOGLOCK_ENABLE_STATUS_Msk) >> WDT_WDOGLOCK_ENABLE_STATUS_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGLOCK_ENABLE_STATUS_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp &= ~WDT_WDOGLOCK_ENABLE_STATUS_Msk;
	tmp |= value << WDT_WDOGLOCK_ENABLE_STATUS_Pos;
	((Wdt *)hw)->WDOGLOCK.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGLOCK_ENABLE_STATUS_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg &= ~WDT_WDOGLOCK_ENABLE_STATUS_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGLOCK_ENABLE_STATUS_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg ^= WDT_WDOGLOCK_ENABLE_STATUS_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg |= WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdoglock_reg_t hri_wdt_get_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const      hw,
                                                                                    hri_wdt_wdoglock_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp = (tmp & WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(mask)) >> WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Pos;
	return tmp;
}

static inline void hri_wdt_write_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const hw, hri_wdt_wdoglock_reg_t data)
{
	uint32_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp &= ~WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Msk;
	tmp |= WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(data);
	((Wdt *)hw)->WDOGLOCK.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg &= ~WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg ^= WDT_WDOGLOCK_ENABLE_REGISTER_WRITES(mask);
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdoglock_reg_t hri_wdt_read_WDOGLOCK_ENABLE_REGISTER_WRITES_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp = (tmp & WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Msk) >> WDT_WDOGLOCK_ENABLE_REGISTER_WRITES_Pos;
	return tmp;
}

static inline void hri_wdt_set_WDOGLOCK_reg(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg |= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdoglock_reg_t hri_wdt_get_WDOGLOCK_reg(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGLOCK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_wdt_write_WDOGLOCK_reg(const void *const hw, hri_wdt_wdoglock_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGLOCK_reg(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg &= ~mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGLOCK_reg(const void *const hw, hri_wdt_wdoglock_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGLOCK.reg ^= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdoglock_reg_t hri_wdt_read_WDOGLOCK_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGLOCK.reg;
}

static inline void hri_wdt_set_WDOGITCR_ENABLE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg |= WDT_WDOGITCR_ENABLE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGITCR_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGITCR.reg;
	tmp = (tmp & WDT_WDOGITCR_ENABLE_Msk) >> WDT_WDOGITCR_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGITCR_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGITCR.reg;
	tmp &= ~WDT_WDOGITCR_ENABLE_Msk;
	tmp |= value << WDT_WDOGITCR_ENABLE_Pos;
	((Wdt *)hw)->WDOGITCR.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGITCR_ENABLE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg &= ~WDT_WDOGITCR_ENABLE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGITCR_ENABLE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg ^= WDT_WDOGITCR_ENABLE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGITCR_reg(const void *const hw, hri_wdt_wdogitcr_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg |= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogitcr_reg_t hri_wdt_get_WDOGITCR_reg(const void *const hw, hri_wdt_wdogitcr_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGITCR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_wdt_write_WDOGITCR_reg(const void *const hw, hri_wdt_wdogitcr_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGITCR_reg(const void *const hw, hri_wdt_wdogitcr_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg &= ~mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGITCR_reg(const void *const hw, hri_wdt_wdogitcr_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITCR.reg ^= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogitcr_reg_t hri_wdt_read_WDOGITCR_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGITCR.reg;
}

static inline void hri_wdt_set_WDOGITOP_WDOGRES_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg |= WDT_WDOGITOP_WDOGRES_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGITOP_WDOGRES_VALUE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGITOP.reg;
	tmp = (tmp & WDT_WDOGITOP_WDOGRES_VALUE_Msk) >> WDT_WDOGITOP_WDOGRES_VALUE_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGITOP_WDOGRES_VALUE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGITOP.reg;
	tmp &= ~WDT_WDOGITOP_WDOGRES_VALUE_Msk;
	tmp |= value << WDT_WDOGITOP_WDOGRES_VALUE_Pos;
	((Wdt *)hw)->WDOGITOP.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGITOP_WDOGRES_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg &= ~WDT_WDOGITOP_WDOGRES_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGITOP_WDOGRES_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg ^= WDT_WDOGITOP_WDOGRES_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGITOP_WDOGINT_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg |= WDT_WDOGITOP_WDOGINT_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_wdt_get_WDOGITOP_WDOGINT_VALUE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGITOP.reg;
	tmp = (tmp & WDT_WDOGITOP_WDOGINT_VALUE_Msk) >> WDT_WDOGITOP_WDOGINT_VALUE_Pos;
	return (bool)tmp;
}

static inline void hri_wdt_write_WDOGITOP_WDOGINT_VALUE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	WDT_CRITICAL_SECTION_ENTER();
	tmp = ((Wdt *)hw)->WDOGITOP.reg;
	tmp &= ~WDT_WDOGITOP_WDOGINT_VALUE_Msk;
	tmp |= value << WDT_WDOGITOP_WDOGINT_VALUE_Pos;
	((Wdt *)hw)->WDOGITOP.reg = tmp;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGITOP_WDOGINT_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg &= ~WDT_WDOGITOP_WDOGINT_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGITOP_WDOGINT_VALUE_bit(const void *const hw)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg ^= WDT_WDOGITOP_WDOGINT_VALUE_Msk;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_set_WDOGITOP_reg(const void *const hw, hri_wdt_wdogitop_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg |= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogitop_reg_t hri_wdt_get_WDOGITOP_reg(const void *const hw, hri_wdt_wdogitop_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGITOP.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_wdt_write_WDOGITOP_reg(const void *const hw, hri_wdt_wdogitop_reg_t data)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg = data;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_clear_WDOGITOP_reg(const void *const hw, hri_wdt_wdogitop_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg &= ~mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_wdt_toggle_WDOGITOP_reg(const void *const hw, hri_wdt_wdogitop_reg_t mask)
{
	WDT_CRITICAL_SECTION_ENTER();
	((Wdt *)hw)->WDOGITOP.reg ^= mask;
	WDT_CRITICAL_SECTION_LEAVE();
}

static inline hri_wdt_wdogitop_reg_t hri_wdt_read_WDOGITOP_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGITOP.reg;
}

static inline hri_wdt_wdogvalue_reg_t hri_wdt_get_WDOGVALUE_WDOGVALUE_bf(const void *const       hw,
                                                                         hri_wdt_wdogvalue_reg_t mask)
{
	return (((Wdt *)hw)->WDOGVALUE.reg & WDT_WDOGVALUE_WDOGVALUE(mask)) >> WDT_WDOGVALUE_WDOGVALUE_Pos;
}

static inline hri_wdt_wdogvalue_reg_t hri_wdt_read_WDOGVALUE_WDOGVALUE_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGVALUE.reg & WDT_WDOGVALUE_WDOGVALUE_Msk) >> WDT_WDOGVALUE_WDOGVALUE_Pos;
}

static inline hri_wdt_wdogvalue_reg_t hri_wdt_get_WDOGVALUE_reg(const void *const hw, hri_wdt_wdogvalue_reg_t mask)
{
	uint32_t tmp;
	tmp = ((Wdt *)hw)->WDOGVALUE.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogvalue_reg_t hri_wdt_read_WDOGVALUE_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGVALUE.reg;
}

static inline bool hri_wdt_get_WDOGRIS_WDOGRIS_bit(const void *const hw)
{
	return (((Wdt *)hw)->WDOGRIS.reg & WDT_WDOGRIS_WDOGRIS_Msk) >> WDT_WDOGRIS_WDOGRIS_Pos;
}

static inline hri_wdt_wdogris_reg_t hri_wdt_get_WDOGRIS_reg(const void *const hw, hri_wdt_wdogris_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGRIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogris_reg_t hri_wdt_read_WDOGRIS_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGRIS.reg;
}

static inline bool hri_wdt_get_WDOGMIS_WDOGMIS_bit(const void *const hw)
{
	return (((Wdt *)hw)->WDOGMIS.reg & WDT_WDOGMIS_WDOGMIS_Msk) >> WDT_WDOGMIS_WDOGMIS_Pos;
}

static inline hri_wdt_wdogmis_reg_t hri_wdt_get_WDOGMIS_reg(const void *const hw, hri_wdt_wdogmis_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGMIS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogmis_reg_t hri_wdt_read_WDOGMIS_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGMIS.reg;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_get_WDOGPERIPHID4_JEP106_C_CODE_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid4_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID4.reg & WDT_WDOGPERIPHID4_JEP106_C_CODE(mask))
	       >> WDT_WDOGPERIPHID4_JEP106_C_CODE_Pos;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_read_WDOGPERIPHID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID4.reg & WDT_WDOGPERIPHID4_JEP106_C_CODE_Msk)
	       >> WDT_WDOGPERIPHID4_JEP106_C_CODE_Pos;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_get_WDOGPERIPHID4_BLOCK_COUNT_bf(const void *const           hw,
                                                                                   hri_wdt_wdogperiphid4_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID4.reg & WDT_WDOGPERIPHID4_BLOCK_COUNT(mask)) >> WDT_WDOGPERIPHID4_BLOCK_COUNT_Pos;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_read_WDOGPERIPHID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID4.reg & WDT_WDOGPERIPHID4_BLOCK_COUNT_Msk) >> WDT_WDOGPERIPHID4_BLOCK_COUNT_Pos;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_get_WDOGPERIPHID4_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid4_reg_t hri_wdt_read_WDOGPERIPHID4_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID4.reg;
}

static inline hri_wdt_wdogperiphid5_reg_t hri_wdt_get_WDOGPERIPHID5_WDOGPERIPHID5_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid5_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID5.reg & WDT_WDOGPERIPHID5_WDOGPERIPHID5(mask))
	       >> WDT_WDOGPERIPHID5_WDOGPERIPHID5_Pos;
}

static inline hri_wdt_wdogperiphid5_reg_t hri_wdt_read_WDOGPERIPHID5_WDOGPERIPHID5_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID5.reg & WDT_WDOGPERIPHID5_WDOGPERIPHID5_Msk)
	       >> WDT_WDOGPERIPHID5_WDOGPERIPHID5_Pos;
}

static inline hri_wdt_wdogperiphid5_reg_t hri_wdt_get_WDOGPERIPHID5_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid5_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID5.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid5_reg_t hri_wdt_read_WDOGPERIPHID5_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID5.reg;
}

static inline hri_wdt_wdogperiphid6_reg_t hri_wdt_get_WDOGPERIPHID6_WDOGPERIPHID6_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid6_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID6.reg & WDT_WDOGPERIPHID6_WDOGPERIPHID6(mask))
	       >> WDT_WDOGPERIPHID6_WDOGPERIPHID6_Pos;
}

static inline hri_wdt_wdogperiphid6_reg_t hri_wdt_read_WDOGPERIPHID6_WDOGPERIPHID6_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID6.reg & WDT_WDOGPERIPHID6_WDOGPERIPHID6_Msk)
	       >> WDT_WDOGPERIPHID6_WDOGPERIPHID6_Pos;
}

static inline hri_wdt_wdogperiphid6_reg_t hri_wdt_get_WDOGPERIPHID6_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid6_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID6.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid6_reg_t hri_wdt_read_WDOGPERIPHID6_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID6.reg;
}

static inline hri_wdt_wdogperiphid7_reg_t hri_wdt_get_WDOGPERIPHID7_WDOGPERIPHID7_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid7_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID7.reg & WDT_WDOGPERIPHID7_WDOGPERIPHID7(mask))
	       >> WDT_WDOGPERIPHID7_WDOGPERIPHID7_Pos;
}

static inline hri_wdt_wdogperiphid7_reg_t hri_wdt_read_WDOGPERIPHID7_WDOGPERIPHID7_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID7.reg & WDT_WDOGPERIPHID7_WDOGPERIPHID7_Msk)
	       >> WDT_WDOGPERIPHID7_WDOGPERIPHID7_Pos;
}

static inline hri_wdt_wdogperiphid7_reg_t hri_wdt_get_WDOGPERIPHID7_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid7_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID7.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid7_reg_t hri_wdt_read_WDOGPERIPHID7_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID7.reg;
}

static inline hri_wdt_wdogperiphid0_reg_t hri_wdt_get_WDOGPERIPHID0_PART_NUMBER_bf(const void *const           hw,
                                                                                   hri_wdt_wdogperiphid0_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID0.reg & WDT_WDOGPERIPHID0_PART_NUMBER(mask)) >> WDT_WDOGPERIPHID0_PART_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid0_reg_t hri_wdt_read_WDOGPERIPHID0_PART_NUMBER_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID0.reg & WDT_WDOGPERIPHID0_PART_NUMBER_Msk) >> WDT_WDOGPERIPHID0_PART_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid0_reg_t hri_wdt_get_WDOGPERIPHID0_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid0_reg_t hri_wdt_read_WDOGPERIPHID0_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID0.reg;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_get_WDOGPERIPHID1_PART_NUMBER_bf(const void *const           hw,
                                                                                   hri_wdt_wdogperiphid1_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID1.reg & WDT_WDOGPERIPHID1_PART_NUMBER(mask)) >> WDT_WDOGPERIPHID1_PART_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_read_WDOGPERIPHID1_PART_NUMBER_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID1.reg & WDT_WDOGPERIPHID1_PART_NUMBER_Msk) >> WDT_WDOGPERIPHID1_PART_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_get_WDOGPERIPHID1_JEP106_ID_3_0_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid1_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID1.reg & WDT_WDOGPERIPHID1_JEP106_ID_3_0(mask))
	       >> WDT_WDOGPERIPHID1_JEP106_ID_3_0_Pos;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_read_WDOGPERIPHID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID1.reg & WDT_WDOGPERIPHID1_JEP106_ID_3_0_Msk)
	       >> WDT_WDOGPERIPHID1_JEP106_ID_3_0_Pos;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_get_WDOGPERIPHID1_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid1_reg_t hri_wdt_read_WDOGPERIPHID1_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID1.reg;
}

static inline bool hri_wdt_get_WDOGPERIPHID2_JEDEC_USED_bit(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID2.reg & WDT_WDOGPERIPHID2_JEDEC_USED_Msk) >> WDT_WDOGPERIPHID2_JEDEC_USED_Pos;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_get_WDOGPERIPHID2_JEP106_ID_6_4_bf(const void *const           hw,
                                                                                     hri_wdt_wdogperiphid2_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID2.reg & WDT_WDOGPERIPHID2_JEP106_ID_6_4(mask))
	       >> WDT_WDOGPERIPHID2_JEP106_ID_6_4_Pos;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_read_WDOGPERIPHID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID2.reg & WDT_WDOGPERIPHID2_JEP106_ID_6_4_Msk)
	       >> WDT_WDOGPERIPHID2_JEP106_ID_6_4_Pos;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_get_WDOGPERIPHID2_REVISION_bf(const void *const           hw,
                                                                                hri_wdt_wdogperiphid2_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID2.reg & WDT_WDOGPERIPHID2_REVISION(mask)) >> WDT_WDOGPERIPHID2_REVISION_Pos;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_read_WDOGPERIPHID2_REVISION_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID2.reg & WDT_WDOGPERIPHID2_REVISION_Msk) >> WDT_WDOGPERIPHID2_REVISION_Pos;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_get_WDOGPERIPHID2_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid2_reg_t hri_wdt_read_WDOGPERIPHID2_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID2.reg;
}

static inline hri_wdt_wdogperiphid3_reg_t
hri_wdt_get_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw, hri_wdt_wdogperiphid3_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID3.reg & WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER(mask))
	       >> WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid3_reg_t hri_wdt_read_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID3.reg & WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> WDT_WDOGPERIPHID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid3_reg_t hri_wdt_get_WDOGPERIPHID3_ECO_REV_NUMBER_bf(const void *const           hw,
                                                                                      hri_wdt_wdogperiphid3_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPERIPHID3.reg & WDT_WDOGPERIPHID3_ECO_REV_NUMBER(mask))
	       >> WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid3_reg_t hri_wdt_read_WDOGPERIPHID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPERIPHID3.reg & WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Msk)
	       >> WDT_WDOGPERIPHID3_ECO_REV_NUMBER_Pos;
}

static inline hri_wdt_wdogperiphid3_reg_t hri_wdt_get_WDOGPERIPHID3_reg(const void *const           hw,
                                                                        hri_wdt_wdogperiphid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPERIPHID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogperiphid3_reg_t hri_wdt_read_WDOGPERIPHID3_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPERIPHID3.reg;
}

static inline hri_wdt_wdogpcellid0_reg_t hri_wdt_get_WDOGPCELLID0_WDOGPCELLID0_bf(const void *const          hw,
                                                                                  hri_wdt_wdogpcellid0_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPCELLID0.reg & WDT_WDOGPCELLID0_WDOGPCELLID0(mask)) >> WDT_WDOGPCELLID0_WDOGPCELLID0_Pos;
}

static inline hri_wdt_wdogpcellid0_reg_t hri_wdt_read_WDOGPCELLID0_WDOGPCELLID0_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPCELLID0.reg & WDT_WDOGPCELLID0_WDOGPCELLID0_Msk) >> WDT_WDOGPCELLID0_WDOGPCELLID0_Pos;
}

static inline hri_wdt_wdogpcellid0_reg_t hri_wdt_get_WDOGPCELLID0_reg(const void *const          hw,
                                                                      hri_wdt_wdogpcellid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPCELLID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogpcellid0_reg_t hri_wdt_read_WDOGPCELLID0_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPCELLID0.reg;
}

static inline hri_wdt_wdogpcellid1_reg_t hri_wdt_get_WDOGPCELLID1_WDOGPCELLID1_bf(const void *const          hw,
                                                                                  hri_wdt_wdogpcellid1_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPCELLID1.reg & WDT_WDOGPCELLID1_WDOGPCELLID1(mask)) >> WDT_WDOGPCELLID1_WDOGPCELLID1_Pos;
}

static inline hri_wdt_wdogpcellid1_reg_t hri_wdt_read_WDOGPCELLID1_WDOGPCELLID1_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPCELLID1.reg & WDT_WDOGPCELLID1_WDOGPCELLID1_Msk) >> WDT_WDOGPCELLID1_WDOGPCELLID1_Pos;
}

static inline hri_wdt_wdogpcellid1_reg_t hri_wdt_get_WDOGPCELLID1_reg(const void *const          hw,
                                                                      hri_wdt_wdogpcellid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPCELLID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogpcellid1_reg_t hri_wdt_read_WDOGPCELLID1_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPCELLID1.reg;
}

static inline hri_wdt_wdogpcellid2_reg_t hri_wdt_get_WDOGPCELLID2_WDOGPCELLID2_bf(const void *const          hw,
                                                                                  hri_wdt_wdogpcellid2_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPCELLID2.reg & WDT_WDOGPCELLID2_WDOGPCELLID2(mask)) >> WDT_WDOGPCELLID2_WDOGPCELLID2_Pos;
}

static inline hri_wdt_wdogpcellid2_reg_t hri_wdt_read_WDOGPCELLID2_WDOGPCELLID2_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPCELLID2.reg & WDT_WDOGPCELLID2_WDOGPCELLID2_Msk) >> WDT_WDOGPCELLID2_WDOGPCELLID2_Pos;
}

static inline hri_wdt_wdogpcellid2_reg_t hri_wdt_get_WDOGPCELLID2_reg(const void *const          hw,
                                                                      hri_wdt_wdogpcellid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPCELLID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogpcellid2_reg_t hri_wdt_read_WDOGPCELLID2_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPCELLID2.reg;
}

static inline hri_wdt_wdogpcellid3_reg_t hri_wdt_get_WDOGPCELLID3_WDOGPCELLID3_bf(const void *const          hw,
                                                                                  hri_wdt_wdogpcellid3_reg_t mask)
{
	return (((Wdt *)hw)->WDOGPCELLID3.reg & WDT_WDOGPCELLID3_WDOGPCELLID3(mask)) >> WDT_WDOGPCELLID3_WDOGPCELLID3_Pos;
}

static inline hri_wdt_wdogpcellid3_reg_t hri_wdt_read_WDOGPCELLID3_WDOGPCELLID3_bf(const void *const hw)
{
	return (((Wdt *)hw)->WDOGPCELLID3.reg & WDT_WDOGPCELLID3_WDOGPCELLID3_Msk) >> WDT_WDOGPCELLID3_WDOGPCELLID3_Pos;
}

static inline hri_wdt_wdogpcellid3_reg_t hri_wdt_get_WDOGPCELLID3_reg(const void *const          hw,
                                                                      hri_wdt_wdogpcellid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Wdt *)hw)->WDOGPCELLID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_wdt_wdogpcellid3_reg_t hri_wdt_read_WDOGPCELLID3_reg(const void *const hw)
{
	return ((Wdt *)hw)->WDOGPCELLID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_WDT_B11_H_INCLUDED */
#endif /* _SAMB11_WDT_COMPONENT_ */
