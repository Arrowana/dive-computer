/**
 * \file
 *
 * \brief SAM GPIO
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

#ifdef _SAMB11_GPIO_COMPONENT_
#ifndef _HRI_GPIO_B11_H_INCLUDED_
#define _HRI_GPIO_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_GPIO_CRITICAL_SECTIONS)
#define GPIO_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define GPIO_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define GPIO_CRITICAL_SECTION_ENTER()
#define GPIO_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_gpio_data_reg_t;
typedef uint16_t hri_gpio_dataout_reg_t;
typedef uint16_t hri_gpio_intenclr_reg_t;
typedef uint16_t hri_gpio_intenset_reg_t;
typedef uint16_t hri_gpio_intpolclr_reg_t;
typedef uint16_t hri_gpio_intpolset_reg_t;
typedef uint16_t hri_gpio_intstatusclear_reg_t;
typedef uint16_t hri_gpio_inttypeclr_reg_t;
typedef uint16_t hri_gpio_inttypeset_reg_t;
typedef uint16_t hri_gpio_outenclr_reg_t;
typedef uint16_t hri_gpio_outenset_reg_t;
typedef uint8_t  hri_gpio_cid0_reg_t;
typedef uint8_t  hri_gpio_cid1_reg_t;
typedef uint8_t  hri_gpio_cid2_reg_t;
typedef uint8_t  hri_gpio_cid3_reg_t;
typedef uint8_t  hri_gpio_pid0_reg_t;
typedef uint8_t  hri_gpio_pid1_reg_t;
typedef uint8_t  hri_gpio_pid2_reg_t;
typedef uint8_t  hri_gpio_pid3_reg_t;
typedef uint8_t  hri_gpio_pid4_reg_t;
typedef uint8_t  hri_gpio_pid5_reg_t;
typedef uint8_t  hri_gpio_pid6_reg_t;
typedef uint8_t  hri_gpio_pid7_reg_t;

static inline void hri_gpio_set_DATA_VALUE_bf(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg |= GPIO_DATA_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_data_reg_t hri_gpio_get_DATA_VALUE_bf(const void *const hw, hri_gpio_data_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATA.reg;
	tmp = (tmp & GPIO_DATA_VALUE(mask)) >> GPIO_DATA_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_DATA_VALUE_bf(const void *const hw, hri_gpio_data_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->DATA.reg;
	tmp &= ~GPIO_DATA_VALUE_Msk;
	tmp |= GPIO_DATA_VALUE(data);
	((Gpio *)hw)->DATA.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_DATA_VALUE_bf(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg &= ~GPIO_DATA_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_DATA_VALUE_bf(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg ^= GPIO_DATA_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_data_reg_t hri_gpio_read_DATA_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATA.reg;
	tmp = (tmp & GPIO_DATA_VALUE_Msk) >> GPIO_DATA_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_DATA_reg(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_data_reg_t hri_gpio_get_DATA_reg(const void *const hw, hri_gpio_data_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATA.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_DATA_reg(const void *const hw, hri_gpio_data_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_DATA_reg(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_DATA_reg(const void *const hw, hri_gpio_data_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATA.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_data_reg_t hri_gpio_read_DATA_reg(const void *const hw)
{
	return ((Gpio *)hw)->DATA.reg;
}

static inline void hri_gpio_set_DATAOUT_VALUE_bf(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg |= GPIO_DATAOUT_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_dataout_reg_t hri_gpio_get_DATAOUT_VALUE_bf(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATAOUT.reg;
	tmp = (tmp & GPIO_DATAOUT_VALUE(mask)) >> GPIO_DATAOUT_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_DATAOUT_VALUE_bf(const void *const hw, hri_gpio_dataout_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->DATAOUT.reg;
	tmp &= ~GPIO_DATAOUT_VALUE_Msk;
	tmp |= GPIO_DATAOUT_VALUE(data);
	((Gpio *)hw)->DATAOUT.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_DATAOUT_VALUE_bf(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg &= ~GPIO_DATAOUT_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_DATAOUT_VALUE_bf(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg ^= GPIO_DATAOUT_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_dataout_reg_t hri_gpio_read_DATAOUT_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATAOUT.reg;
	tmp = (tmp & GPIO_DATAOUT_VALUE_Msk) >> GPIO_DATAOUT_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_DATAOUT_reg(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_dataout_reg_t hri_gpio_get_DATAOUT_reg(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->DATAOUT.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_DATAOUT_reg(const void *const hw, hri_gpio_dataout_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_DATAOUT_reg(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_DATAOUT_reg(const void *const hw, hri_gpio_dataout_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->DATAOUT.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_dataout_reg_t hri_gpio_read_DATAOUT_reg(const void *const hw)
{
	return ((Gpio *)hw)->DATAOUT.reg;
}

static inline void hri_gpio_set_OUTENSET_VALUE_bf(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg |= GPIO_OUTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenset_reg_t hri_gpio_get_OUTENSET_VALUE_bf(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENSET.reg;
	tmp = (tmp & GPIO_OUTENSET_VALUE(mask)) >> GPIO_OUTENSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_OUTENSET_VALUE_bf(const void *const hw, hri_gpio_outenset_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->OUTENSET.reg;
	tmp &= ~GPIO_OUTENSET_VALUE_Msk;
	tmp |= GPIO_OUTENSET_VALUE(data);
	((Gpio *)hw)->OUTENSET.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_OUTENSET_VALUE_bf(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg &= ~GPIO_OUTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_OUTENSET_VALUE_bf(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg ^= GPIO_OUTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenset_reg_t hri_gpio_read_OUTENSET_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENSET.reg;
	tmp = (tmp & GPIO_OUTENSET_VALUE_Msk) >> GPIO_OUTENSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_OUTENSET_reg(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenset_reg_t hri_gpio_get_OUTENSET_reg(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENSET.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_OUTENSET_reg(const void *const hw, hri_gpio_outenset_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_OUTENSET_reg(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_OUTENSET_reg(const void *const hw, hri_gpio_outenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENSET.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenset_reg_t hri_gpio_read_OUTENSET_reg(const void *const hw)
{
	return ((Gpio *)hw)->OUTENSET.reg;
}

static inline void hri_gpio_set_OUTENCLR_VALUE_bf(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg |= GPIO_OUTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenclr_reg_t hri_gpio_get_OUTENCLR_VALUE_bf(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENCLR.reg;
	tmp = (tmp & GPIO_OUTENCLR_VALUE(mask)) >> GPIO_OUTENCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_OUTENCLR_VALUE_bf(const void *const hw, hri_gpio_outenclr_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->OUTENCLR.reg;
	tmp &= ~GPIO_OUTENCLR_VALUE_Msk;
	tmp |= GPIO_OUTENCLR_VALUE(data);
	((Gpio *)hw)->OUTENCLR.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_OUTENCLR_VALUE_bf(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg &= ~GPIO_OUTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_OUTENCLR_VALUE_bf(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg ^= GPIO_OUTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenclr_reg_t hri_gpio_read_OUTENCLR_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENCLR.reg;
	tmp = (tmp & GPIO_OUTENCLR_VALUE_Msk) >> GPIO_OUTENCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_OUTENCLR_reg(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenclr_reg_t hri_gpio_get_OUTENCLR_reg(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->OUTENCLR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_OUTENCLR_reg(const void *const hw, hri_gpio_outenclr_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_OUTENCLR_reg(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_OUTENCLR_reg(const void *const hw, hri_gpio_outenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->OUTENCLR.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_outenclr_reg_t hri_gpio_read_OUTENCLR_reg(const void *const hw)
{
	return ((Gpio *)hw)->OUTENCLR.reg;
}

static inline void hri_gpio_set_INTENSET_VALUE_bf(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg |= GPIO_INTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenset_reg_t hri_gpio_get_INTENSET_VALUE_bf(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENSET.reg;
	tmp = (tmp & GPIO_INTENSET_VALUE(mask)) >> GPIO_INTENSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTENSET_VALUE_bf(const void *const hw, hri_gpio_intenset_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTENSET.reg;
	tmp &= ~GPIO_INTENSET_VALUE_Msk;
	tmp |= GPIO_INTENSET_VALUE(data);
	((Gpio *)hw)->INTENSET.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTENSET_VALUE_bf(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg &= ~GPIO_INTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTENSET_VALUE_bf(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg ^= GPIO_INTENSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenset_reg_t hri_gpio_read_INTENSET_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENSET.reg;
	tmp = (tmp & GPIO_INTENSET_VALUE_Msk) >> GPIO_INTENSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTENSET_reg(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenset_reg_t hri_gpio_get_INTENSET_reg(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENSET.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTENSET_reg(const void *const hw, hri_gpio_intenset_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTENSET_reg(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTENSET_reg(const void *const hw, hri_gpio_intenset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENSET.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenset_reg_t hri_gpio_read_INTENSET_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTENSET.reg;
}

static inline void hri_gpio_set_INTENCLR_VALUE_bf(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg |= GPIO_INTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenclr_reg_t hri_gpio_get_INTENCLR_VALUE_bf(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENCLR.reg;
	tmp = (tmp & GPIO_INTENCLR_VALUE(mask)) >> GPIO_INTENCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTENCLR_VALUE_bf(const void *const hw, hri_gpio_intenclr_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTENCLR.reg;
	tmp &= ~GPIO_INTENCLR_VALUE_Msk;
	tmp |= GPIO_INTENCLR_VALUE(data);
	((Gpio *)hw)->INTENCLR.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTENCLR_VALUE_bf(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg &= ~GPIO_INTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTENCLR_VALUE_bf(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg ^= GPIO_INTENCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenclr_reg_t hri_gpio_read_INTENCLR_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENCLR.reg;
	tmp = (tmp & GPIO_INTENCLR_VALUE_Msk) >> GPIO_INTENCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTENCLR_reg(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenclr_reg_t hri_gpio_get_INTENCLR_reg(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTENCLR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTENCLR_reg(const void *const hw, hri_gpio_intenclr_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTENCLR_reg(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTENCLR_reg(const void *const hw, hri_gpio_intenclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTENCLR.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intenclr_reg_t hri_gpio_read_INTENCLR_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTENCLR.reg;
}

static inline void hri_gpio_set_INTTYPESET_VALUE_bf(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg |= GPIO_INTTYPESET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeset_reg_t hri_gpio_get_INTTYPESET_VALUE_bf(const void *const         hw,
                                                                         hri_gpio_inttypeset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPESET.reg;
	tmp = (tmp & GPIO_INTTYPESET_VALUE(mask)) >> GPIO_INTTYPESET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTTYPESET_VALUE_bf(const void *const hw, hri_gpio_inttypeset_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTTYPESET.reg;
	tmp &= ~GPIO_INTTYPESET_VALUE_Msk;
	tmp |= GPIO_INTTYPESET_VALUE(data);
	((Gpio *)hw)->INTTYPESET.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTTYPESET_VALUE_bf(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg &= ~GPIO_INTTYPESET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTTYPESET_VALUE_bf(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg ^= GPIO_INTTYPESET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeset_reg_t hri_gpio_read_INTTYPESET_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPESET.reg;
	tmp = (tmp & GPIO_INTTYPESET_VALUE_Msk) >> GPIO_INTTYPESET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTTYPESET_reg(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeset_reg_t hri_gpio_get_INTTYPESET_reg(const void *const         hw,
                                                                    hri_gpio_inttypeset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPESET.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTTYPESET_reg(const void *const hw, hri_gpio_inttypeset_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTTYPESET_reg(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTTYPESET_reg(const void *const hw, hri_gpio_inttypeset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPESET.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeset_reg_t hri_gpio_read_INTTYPESET_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTTYPESET.reg;
}

static inline void hri_gpio_set_INTTYPECLR_VALUE_bf(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg |= GPIO_INTTYPECLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeclr_reg_t hri_gpio_get_INTTYPECLR_VALUE_bf(const void *const         hw,
                                                                         hri_gpio_inttypeclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPECLR.reg;
	tmp = (tmp & GPIO_INTTYPECLR_VALUE(mask)) >> GPIO_INTTYPECLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTTYPECLR_VALUE_bf(const void *const hw, hri_gpio_inttypeclr_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTTYPECLR.reg;
	tmp &= ~GPIO_INTTYPECLR_VALUE_Msk;
	tmp |= GPIO_INTTYPECLR_VALUE(data);
	((Gpio *)hw)->INTTYPECLR.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTTYPECLR_VALUE_bf(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg &= ~GPIO_INTTYPECLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTTYPECLR_VALUE_bf(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg ^= GPIO_INTTYPECLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeclr_reg_t hri_gpio_read_INTTYPECLR_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPECLR.reg;
	tmp = (tmp & GPIO_INTTYPECLR_VALUE_Msk) >> GPIO_INTTYPECLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTTYPECLR_reg(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeclr_reg_t hri_gpio_get_INTTYPECLR_reg(const void *const         hw,
                                                                    hri_gpio_inttypeclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTTYPECLR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTTYPECLR_reg(const void *const hw, hri_gpio_inttypeclr_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTTYPECLR_reg(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTTYPECLR_reg(const void *const hw, hri_gpio_inttypeclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTTYPECLR.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_inttypeclr_reg_t hri_gpio_read_INTTYPECLR_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTTYPECLR.reg;
}

static inline void hri_gpio_set_INTPOLSET_VALUE_bf(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg |= GPIO_INTPOLSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolset_reg_t hri_gpio_get_INTPOLSET_VALUE_bf(const void *const        hw,
                                                                       hri_gpio_intpolset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLSET.reg;
	tmp = (tmp & GPIO_INTPOLSET_VALUE(mask)) >> GPIO_INTPOLSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTPOLSET_VALUE_bf(const void *const hw, hri_gpio_intpolset_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTPOLSET.reg;
	tmp &= ~GPIO_INTPOLSET_VALUE_Msk;
	tmp |= GPIO_INTPOLSET_VALUE(data);
	((Gpio *)hw)->INTPOLSET.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTPOLSET_VALUE_bf(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg &= ~GPIO_INTPOLSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTPOLSET_VALUE_bf(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg ^= GPIO_INTPOLSET_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolset_reg_t hri_gpio_read_INTPOLSET_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLSET.reg;
	tmp = (tmp & GPIO_INTPOLSET_VALUE_Msk) >> GPIO_INTPOLSET_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTPOLSET_reg(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolset_reg_t hri_gpio_get_INTPOLSET_reg(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLSET.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTPOLSET_reg(const void *const hw, hri_gpio_intpolset_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTPOLSET_reg(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTPOLSET_reg(const void *const hw, hri_gpio_intpolset_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLSET.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolset_reg_t hri_gpio_read_INTPOLSET_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTPOLSET.reg;
}

static inline void hri_gpio_set_INTPOLCLR_VALUE_bf(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg |= GPIO_INTPOLCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolclr_reg_t hri_gpio_get_INTPOLCLR_VALUE_bf(const void *const        hw,
                                                                       hri_gpio_intpolclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLCLR.reg;
	tmp = (tmp & GPIO_INTPOLCLR_VALUE(mask)) >> GPIO_INTPOLCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_write_INTPOLCLR_VALUE_bf(const void *const hw, hri_gpio_intpolclr_reg_t data)
{
	uint16_t tmp;
	GPIO_CRITICAL_SECTION_ENTER();
	tmp = ((Gpio *)hw)->INTPOLCLR.reg;
	tmp &= ~GPIO_INTPOLCLR_VALUE_Msk;
	tmp |= GPIO_INTPOLCLR_VALUE(data);
	((Gpio *)hw)->INTPOLCLR.reg = tmp;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTPOLCLR_VALUE_bf(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg &= ~GPIO_INTPOLCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTPOLCLR_VALUE_bf(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg ^= GPIO_INTPOLCLR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolclr_reg_t hri_gpio_read_INTPOLCLR_VALUE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLCLR.reg;
	tmp = (tmp & GPIO_INTPOLCLR_VALUE_Msk) >> GPIO_INTPOLCLR_VALUE_Pos;
	return tmp;
}

static inline void hri_gpio_set_INTPOLCLR_reg(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg |= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolclr_reg_t hri_gpio_get_INTPOLCLR_reg(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTPOLCLR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_write_INTPOLCLR_reg(const void *const hw, hri_gpio_intpolclr_reg_t data)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg = data;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_clear_INTPOLCLR_reg(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg &= ~mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline void hri_gpio_toggle_INTPOLCLR_reg(const void *const hw, hri_gpio_intpolclr_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTPOLCLR.reg ^= mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intpolclr_reg_t hri_gpio_read_INTPOLCLR_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTPOLCLR.reg;
}

static inline hri_gpio_pid4_reg_t hri_gpio_get_PID4_JEP106_C_CODE_bf(const void *const hw, hri_gpio_pid4_reg_t mask)
{
	return (((Gpio *)hw)->PID4.reg & GPIO_PID4_JEP106_C_CODE(mask)) >> GPIO_PID4_JEP106_C_CODE_Pos;
}

static inline hri_gpio_pid4_reg_t hri_gpio_read_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID4.reg & GPIO_PID4_JEP106_C_CODE_Msk) >> GPIO_PID4_JEP106_C_CODE_Pos;
}

static inline hri_gpio_pid4_reg_t hri_gpio_get_PID4_BLOCK_COUNT_bf(const void *const hw, hri_gpio_pid4_reg_t mask)
{
	return (((Gpio *)hw)->PID4.reg & GPIO_PID4_BLOCK_COUNT(mask)) >> GPIO_PID4_BLOCK_COUNT_Pos;
}

static inline hri_gpio_pid4_reg_t hri_gpio_read_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID4.reg & GPIO_PID4_BLOCK_COUNT_Msk) >> GPIO_PID4_BLOCK_COUNT_Pos;
}

static inline hri_gpio_pid4_reg_t hri_gpio_get_PID4_reg(const void *const hw, hri_gpio_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid4_reg_t hri_gpio_read_PID4_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID4.reg;
}

static inline hri_gpio_pid5_reg_t hri_gpio_get_PID5_PID5_bf(const void *const hw, hri_gpio_pid5_reg_t mask)
{
	return (((Gpio *)hw)->PID5.reg & GPIO_PID5_PID5(mask)) >> GPIO_PID5_PID5_Pos;
}

static inline hri_gpio_pid5_reg_t hri_gpio_read_PID5_PID5_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID5.reg & GPIO_PID5_PID5_Msk) >> GPIO_PID5_PID5_Pos;
}

static inline hri_gpio_pid5_reg_t hri_gpio_get_PID5_reg(const void *const hw, hri_gpio_pid5_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID5.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid5_reg_t hri_gpio_read_PID5_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID5.reg;
}

static inline hri_gpio_pid6_reg_t hri_gpio_get_PID6_PID6_bf(const void *const hw, hri_gpio_pid6_reg_t mask)
{
	return (((Gpio *)hw)->PID6.reg & GPIO_PID6_PID6(mask)) >> GPIO_PID6_PID6_Pos;
}

static inline hri_gpio_pid6_reg_t hri_gpio_read_PID6_PID6_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID6.reg & GPIO_PID6_PID6_Msk) >> GPIO_PID6_PID6_Pos;
}

static inline hri_gpio_pid6_reg_t hri_gpio_get_PID6_reg(const void *const hw, hri_gpio_pid6_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID6.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid6_reg_t hri_gpio_read_PID6_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID6.reg;
}

static inline hri_gpio_pid7_reg_t hri_gpio_get_PID7_PID7_bf(const void *const hw, hri_gpio_pid7_reg_t mask)
{
	return (((Gpio *)hw)->PID7.reg & GPIO_PID7_PID7(mask)) >> GPIO_PID7_PID7_Pos;
}

static inline hri_gpio_pid7_reg_t hri_gpio_read_PID7_PID7_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID7.reg & GPIO_PID7_PID7_Msk) >> GPIO_PID7_PID7_Pos;
}

static inline hri_gpio_pid7_reg_t hri_gpio_get_PID7_reg(const void *const hw, hri_gpio_pid7_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID7.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid7_reg_t hri_gpio_read_PID7_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID7.reg;
}

static inline hri_gpio_pid0_reg_t hri_gpio_get_PID0_PART_NUMBER_bf(const void *const hw, hri_gpio_pid0_reg_t mask)
{
	return (((Gpio *)hw)->PID0.reg & GPIO_PID0_PART_NUMBER(mask)) >> GPIO_PID0_PART_NUMBER_Pos;
}

static inline hri_gpio_pid0_reg_t hri_gpio_read_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID0.reg & GPIO_PID0_PART_NUMBER_Msk) >> GPIO_PID0_PART_NUMBER_Pos;
}

static inline hri_gpio_pid0_reg_t hri_gpio_get_PID0_reg(const void *const hw, hri_gpio_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid0_reg_t hri_gpio_read_PID0_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID0.reg;
}

static inline hri_gpio_pid1_reg_t hri_gpio_get_PID1_PART_NUMBER_bf(const void *const hw, hri_gpio_pid1_reg_t mask)
{
	return (((Gpio *)hw)->PID1.reg & GPIO_PID1_PART_NUMBER(mask)) >> GPIO_PID1_PART_NUMBER_Pos;
}

static inline hri_gpio_pid1_reg_t hri_gpio_read_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID1.reg & GPIO_PID1_PART_NUMBER_Msk) >> GPIO_PID1_PART_NUMBER_Pos;
}

static inline hri_gpio_pid1_reg_t hri_gpio_get_PID1_JEP106_ID_3_0_bf(const void *const hw, hri_gpio_pid1_reg_t mask)
{
	return (((Gpio *)hw)->PID1.reg & GPIO_PID1_JEP106_ID_3_0(mask)) >> GPIO_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_gpio_pid1_reg_t hri_gpio_read_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID1.reg & GPIO_PID1_JEP106_ID_3_0_Msk) >> GPIO_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_gpio_pid1_reg_t hri_gpio_get_PID1_reg(const void *const hw, hri_gpio_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid1_reg_t hri_gpio_read_PID1_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID1.reg;
}

static inline bool hri_gpio_get_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((Gpio *)hw)->PID2.reg & GPIO_PID2_JEDEC_USED_Msk) >> GPIO_PID2_JEDEC_USED_Pos;
}

static inline hri_gpio_pid2_reg_t hri_gpio_get_PID2_JEP106_ID_6_4_bf(const void *const hw, hri_gpio_pid2_reg_t mask)
{
	return (((Gpio *)hw)->PID2.reg & GPIO_PID2_JEP106_ID_6_4(mask)) >> GPIO_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_gpio_pid2_reg_t hri_gpio_read_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID2.reg & GPIO_PID2_JEP106_ID_6_4_Msk) >> GPIO_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_gpio_pid2_reg_t hri_gpio_get_PID2_REVISION_bf(const void *const hw, hri_gpio_pid2_reg_t mask)
{
	return (((Gpio *)hw)->PID2.reg & GPIO_PID2_REVISION(mask)) >> GPIO_PID2_REVISION_Pos;
}

static inline hri_gpio_pid2_reg_t hri_gpio_read_PID2_REVISION_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID2.reg & GPIO_PID2_REVISION_Msk) >> GPIO_PID2_REVISION_Pos;
}

static inline hri_gpio_pid2_reg_t hri_gpio_get_PID2_reg(const void *const hw, hri_gpio_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid2_reg_t hri_gpio_read_PID2_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID2.reg;
}

static inline hri_gpio_pid3_reg_t hri_gpio_get_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const   hw,
                                                                           hri_gpio_pid3_reg_t mask)
{
	return (((Gpio *)hw)->PID3.reg & GPIO_PID3_CUSTOMER_MOD_NUMBER(mask)) >> GPIO_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_gpio_pid3_reg_t hri_gpio_read_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID3.reg & GPIO_PID3_CUSTOMER_MOD_NUMBER_Msk) >> GPIO_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_gpio_pid3_reg_t hri_gpio_get_PID3_ECO_REV_NUMBER_bf(const void *const hw, hri_gpio_pid3_reg_t mask)
{
	return (((Gpio *)hw)->PID3.reg & GPIO_PID3_ECO_REV_NUMBER(mask)) >> GPIO_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_gpio_pid3_reg_t hri_gpio_read_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((Gpio *)hw)->PID3.reg & GPIO_PID3_ECO_REV_NUMBER_Msk) >> GPIO_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_gpio_pid3_reg_t hri_gpio_get_PID3_reg(const void *const hw, hri_gpio_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_pid3_reg_t hri_gpio_read_PID3_reg(const void *const hw)
{
	return ((Gpio *)hw)->PID3.reg;
}

static inline hri_gpio_cid0_reg_t hri_gpio_get_CID0_CID0_bf(const void *const hw, hri_gpio_cid0_reg_t mask)
{
	return (((Gpio *)hw)->CID0.reg & GPIO_CID0_CID0(mask)) >> GPIO_CID0_CID0_Pos;
}

static inline hri_gpio_cid0_reg_t hri_gpio_read_CID0_CID0_bf(const void *const hw)
{
	return (((Gpio *)hw)->CID0.reg & GPIO_CID0_CID0_Msk) >> GPIO_CID0_CID0_Pos;
}

static inline hri_gpio_cid0_reg_t hri_gpio_get_CID0_reg(const void *const hw, hri_gpio_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_cid0_reg_t hri_gpio_read_CID0_reg(const void *const hw)
{
	return ((Gpio *)hw)->CID0.reg;
}

static inline hri_gpio_cid1_reg_t hri_gpio_get_CID1_CID1_bf(const void *const hw, hri_gpio_cid1_reg_t mask)
{
	return (((Gpio *)hw)->CID1.reg & GPIO_CID1_CID1(mask)) >> GPIO_CID1_CID1_Pos;
}

static inline hri_gpio_cid1_reg_t hri_gpio_read_CID1_CID1_bf(const void *const hw)
{
	return (((Gpio *)hw)->CID1.reg & GPIO_CID1_CID1_Msk) >> GPIO_CID1_CID1_Pos;
}

static inline hri_gpio_cid1_reg_t hri_gpio_get_CID1_reg(const void *const hw, hri_gpio_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_cid1_reg_t hri_gpio_read_CID1_reg(const void *const hw)
{
	return ((Gpio *)hw)->CID1.reg;
}

static inline hri_gpio_cid2_reg_t hri_gpio_get_CID2_CID2_bf(const void *const hw, hri_gpio_cid2_reg_t mask)
{
	return (((Gpio *)hw)->CID2.reg & GPIO_CID2_CID2(mask)) >> GPIO_CID2_CID2_Pos;
}

static inline hri_gpio_cid2_reg_t hri_gpio_read_CID2_CID2_bf(const void *const hw)
{
	return (((Gpio *)hw)->CID2.reg & GPIO_CID2_CID2_Msk) >> GPIO_CID2_CID2_Pos;
}

static inline hri_gpio_cid2_reg_t hri_gpio_get_CID2_reg(const void *const hw, hri_gpio_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_cid2_reg_t hri_gpio_read_CID2_reg(const void *const hw)
{
	return ((Gpio *)hw)->CID2.reg;
}

static inline hri_gpio_cid3_reg_t hri_gpio_get_CID3_CID3_bf(const void *const hw, hri_gpio_cid3_reg_t mask)
{
	return (((Gpio *)hw)->CID3.reg & GPIO_CID3_CID3(mask)) >> GPIO_CID3_CID3_Pos;
}

static inline hri_gpio_cid3_reg_t hri_gpio_read_CID3_CID3_bf(const void *const hw)
{
	return (((Gpio *)hw)->CID3.reg & GPIO_CID3_CID3_Msk) >> GPIO_CID3_CID3_Pos;
}

static inline hri_gpio_cid3_reg_t hri_gpio_get_CID3_reg(const void *const hw, hri_gpio_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Gpio *)hw)->CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_gpio_cid3_reg_t hri_gpio_read_CID3_reg(const void *const hw)
{
	return ((Gpio *)hw)->CID3.reg;
}

static inline hri_gpio_intstatusclear_reg_t hri_gpio_get_INTSTATUSCLEAR_VALUE_bf(const void *const             hw,
                                                                                 hri_gpio_intstatusclear_reg_t mask)
{
	return (((Gpio *)hw)->INTSTATUSCLEAR.reg & GPIO_INTSTATUSCLEAR_VALUE(mask)) >> GPIO_INTSTATUSCLEAR_VALUE_Pos;
}

static inline void hri_gpio_clear_INTSTATUSCLEAR_VALUE_bf(const void *const hw, hri_gpio_intstatusclear_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTSTATUSCLEAR.reg = GPIO_INTSTATUSCLEAR_VALUE(mask);
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intstatusclear_reg_t hri_gpio_read_INTSTATUSCLEAR_VALUE_bf(const void *const hw)
{
	return (((Gpio *)hw)->INTSTATUSCLEAR.reg & GPIO_INTSTATUSCLEAR_VALUE_Msk) >> GPIO_INTSTATUSCLEAR_VALUE_Pos;
}

static inline hri_gpio_intstatusclear_reg_t hri_gpio_get_INTSTATUSCLEAR_reg(const void *const             hw,
                                                                            hri_gpio_intstatusclear_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Gpio *)hw)->INTSTATUSCLEAR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_gpio_clear_INTSTATUSCLEAR_reg(const void *const hw, hri_gpio_intstatusclear_reg_t mask)
{
	GPIO_CRITICAL_SECTION_ENTER();
	((Gpio *)hw)->INTSTATUSCLEAR.reg = mask;
	GPIO_CRITICAL_SECTION_LEAVE();
}

static inline hri_gpio_intstatusclear_reg_t hri_gpio_read_INTSTATUSCLEAR_reg(const void *const hw)
{
	return ((Gpio *)hw)->INTSTATUSCLEAR.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_GPIO_B11_H_INCLUDED */
#endif /* _SAMB11_GPIO_COMPONENT_ */
