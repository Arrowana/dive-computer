/**
 * \file
 *
 * \brief SAM AON_PWR_SEQ
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

#ifdef _SAMB11_AON_PWR_SEQ_COMPONENT_
#ifndef _HRI_AON_PWR_SEQ_B11_H_INCLUDED_
#define _HRI_AON_PWR_SEQ_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_AON_PWR_SEQ_CRITICAL_SECTIONS)
#define AON_PWR_SEQ_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define AON_PWR_SEQ_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define AON_PWR_SEQ_CRITICAL_SECTION_ENTER()
#define AON_PWR_SEQ_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_aon_pwr_seq_active_request_reg_t;
typedef uint16_t hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t;
typedef uint16_t hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t;
typedef uint16_t hri_aon_pwr_seq_on_delay_0_ctrl_reg_t;
typedef uint16_t hri_aon_pwr_seq_pd_wakeup_bits_reg_t;
typedef uint16_t hri_aon_pwr_seq_serviced_request_reg_t;
typedef uint16_t hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t;
typedef uint32_t hri_aon_pwr_seq_logic_fsm_states_reg_t;
typedef uint32_t hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t;
typedef uint32_t hri_aon_pwr_seq_off_delay_0_ctrl_reg_t;
typedef uint32_t hri_aon_pwr_seq_off_delay_1_ctrl_reg_t;
typedef uint32_t hri_aon_pwr_seq_on_delay_1_ctrl_reg_t;
typedef uint8_t  hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t;
typedef uint8_t  hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t;
typedef uint8_t  hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t;
typedef uint8_t  hri_aon_pwr_seq_raw_wakeup_bits_reg_t;

static inline void hri_aonpwrseqpwrseq_set_GPIO_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg |= AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_GPIO_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Msk) >> AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_GPIO_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Pos;
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_GPIO_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_GPIO_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_GPIO_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_GPIO_WAKEUP_CTRL_reg(const void *const                      hw,
                                                                hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_get_GPIO_WAKEUP_CTRL_reg(const void *const hw, hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_GPIO_WAKEUP_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_GPIO_WAKEUP_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_GPIO_WAKEUP_CTRL_reg(const void *const                      hw,
                                                                   hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_gpio_wakeup_ctrl_reg_t hri_aonpwrseqpwrseq_read_GPIO_WAKEUP_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->GPIO_WAKEUP_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_AON_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg |= AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_AON_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Msk) >> AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_AON_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Pos;
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_AON_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_AON_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_AON_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg |= AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_AON_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Msk) >> AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_AON_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Pos;
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_AON_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_AON_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_AON_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_AON_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                  hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_get_AON_ST_WAKEUP_CTRL_reg(const void *const hw, hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_AON_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_AON_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_AON_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                     hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_aon_st_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_read_AON_ST_WAKEUP_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->AON_ST_WAKEUP_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg |= AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Msk) >> AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Pos;
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_WAKEUP_CTRL_PD7_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg |= AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_WAKEUP_CTRL_PD7_ENABLE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Msk) >> AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_WAKEUP_CTRL_PD7_ENABLE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Pos;
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_WAKEUP_CTRL_PD7_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_WAKEUP_CTRL_PD7_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_LPMCU_WAKEUP_CTRL_PD7_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_WAKEUP_CTRL_reg(const void *const                       hw,
                                                                 hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_get_LPMCU_WAKEUP_CTRL_reg(const void *const hw, hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_WAKEUP_CTRL_reg(const void *const                       hw,
                                                                   hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_WAKEUP_CTRL_reg(const void *const                       hw,
                                                                   hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_WAKEUP_CTRL_reg(const void *const                       hw,
                                                                    hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_lpmcu_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_read_LPMCU_WAKEUP_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->LPMCU_WAKEUP_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg |= AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Msk) >> AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Pos;
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_ARM_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg |= AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Msk) >> AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	tmp |= value << AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Pos;
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg &= ~AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg ^= AON_PWR_SEQ_BLE_ST_WAKEUP_CTRL_BLE_ENABLE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_BLE_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                  hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_get_BLE_ST_WAKEUP_CTRL_reg(const void *const hw, hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_BLE_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_BLE_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_BLE_ST_WAKEUP_CTRL_reg(const void *const                        hw,
                                                                     hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_ble_st_wakeup_ctrl_reg_t
hri_aonpwrseqpwrseq_read_BLE_ST_WAKEUP_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->BLE_ST_WAKEUP_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Msk) >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_ARM_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Msk) >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_BLE_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Msk) >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD6_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Msk) >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD7_SLEEP_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Msk)
	      >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2A_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Msk)
	      >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD2B_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Msk)
	      >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD3_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Msk)
	      >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD5_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Msk)
	      >> AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Msk;
	tmp |= value << AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Pos;
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= AON_PWR_SEQ_LPMCU_SLEEP_1_CTRL_PD8_RETENTION_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_LPMCU_SLEEP_1_CTRL_reg(const void *const                        hw,
                                                                  hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_LPMCU_SLEEP_1_CTRL_reg(const void *const hw, hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_LPMCU_SLEEP_1_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_LPMCU_SLEEP_1_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_LPMCU_SLEEP_1_CTRL_reg(const void *const                        hw,
                                                                     hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_lpmcu_sleep_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_LPMCU_SLEEP_1_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->LPMCU_SLEEP_1_CTRL.reg;
}

static inline void
hri_aonpwrseqpwrseq_set_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const                      hw,
                                                           hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const                      hw,
                                                           hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY(mask)) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const                      hw,
                                                             hri_aon_pwr_seq_off_delay_0_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY(data);
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const                      hw,
                                                             hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const                      hw,
                                                              hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_Msk) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_CLOCK_EN_EARLY_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const                      hw,
                                                                       hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const hw, hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE(mask)) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_0_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE(data);
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const                      hw,
                                                                          hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_0_CTRL_ISOLATE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE_Msk) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_ISOLATE_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_0_CTRL_RESETN_bf(const void *const                      hw,
                                                                      hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_0_CTRL_RESETN_bf(const void *const hw, hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN(mask)) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_0_CTRL_RESETN_bf(const void *const                      hw,
                                                                        hri_aon_pwr_seq_off_delay_0_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN(data);
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_0_CTRL_RESETN_bf(const void *const                      hw,
                                                                        hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_0_CTRL_RESETN_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_0_CTRL_RESETN_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN_Msk) >> AON_PWR_SEQ_OFF_DELAY_0_CTRL_RESETN_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_0_CTRL_reg(const void *const                      hw,
                                                                hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_0_CTRL_reg(const void *const hw, hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_0_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_off_delay_0_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_0_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_0_CTRL_reg(const void *const                      hw,
                                                                   hri_aon_pwr_seq_off_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_0_ctrl_reg_t hri_aonpwrseqpwrseq_read_OFF_DELAY_0_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->OFF_DELAY_0_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const                      hw,
                                                                     hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const hw, hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM(mask)) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const                      hw,
                                                                       hri_aon_pwr_seq_off_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM(data);
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const                      hw,
                                                                       hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const                      hw,
                                                                        hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_1_CTRL_BTRIM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM_Msk) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_BTRIM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const                      hw,
                                                                       hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const hw, hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N(mask)) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N(data);
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const                      hw,
                                                                          hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_1_CTRL_STDBY_N_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N_Msk) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_STDBY_N_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const hw, hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD(mask)) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const                      hw,
                                                                           hri_aon_pwr_seq_off_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD(data);
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const                      hw,
                                                                           hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const                      hw,
                                                                            hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_1_CTRL_POWER_VDD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD_Msk) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDD_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const                      hw,
                                                                         hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const hw, hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM(mask)) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const                      hw,
                                                                           hri_aon_pwr_seq_off_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM_Msk;
	tmp |= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM(data);
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const                      hw,
                                                                           hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const                      hw,
                                                                            hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_OFF_DELAY_1_CTRL_POWER_VDM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM_Msk) >> AON_PWR_SEQ_OFF_DELAY_1_CTRL_POWER_VDM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_OFF_DELAY_1_CTRL_reg(const void *const                      hw,
                                                                hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_OFF_DELAY_1_CTRL_reg(const void *const hw, hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_OFF_DELAY_1_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_off_delay_1_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_OFF_DELAY_1_CTRL_reg(const void *const                      hw,
                                                                  hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_OFF_DELAY_1_CTRL_reg(const void *const                      hw,
                                                                   hri_aon_pwr_seq_off_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_off_delay_1_ctrl_reg_t hri_aonpwrseqpwrseq_read_OFF_DELAY_1_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->OFF_DELAY_1_CTRL.reg;
}

static inline void
hri_aonpwrseqpwrseq_set_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const                     hw,
                                                              hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const                     hw,
                                                              hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM(mask))
	      >> AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const                     hw,
                                                                hri_aon_pwr_seq_on_delay_0_ctrl_reg_t data)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM(data);
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const                     hw,
                                                                hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_Msk)
	      >> AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_ARM_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_set_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const                     hw,
                                                              hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const                     hw,
                                                              hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE(mask))
	      >> AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const                     hw,
                                                                hri_aon_pwr_seq_on_delay_0_ctrl_reg_t data)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE(data);
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const                     hw,
                                                                hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_Msk)
	      >> AON_PWR_SEQ_ON_DELAY_0_CTRL_CLOCK_EN_EARLY_BLE_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_0_CTRL_reg(const void *const                     hw,
                                                               hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_0_CTRL_reg(const void *const hw, hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_0_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_0_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_0_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_0_CTRL_reg(const void *const                     hw,
                                                                  hri_aon_pwr_seq_on_delay_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_0_ctrl_reg_t hri_aonpwrseqpwrseq_read_ON_DELAY_0_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->ON_DELAY_0_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_1_CTRL_BTRIM_bf(const void *const                     hw,
                                                                    hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_1_CTRL_BTRIM_bf(const void *const hw, hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM(mask)) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_1_CTRL_BTRIM_bf(const void *const                     hw,
                                                                      hri_aon_pwr_seq_on_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM(data);
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_1_CTRL_BTRIM_bf(const void *const                     hw,
                                                                      hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_1_CTRL_BTRIM_bf(const void *const                     hw,
                                                                       hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_1_CTRL_BTRIM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM_Msk) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_BTRIM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const                     hw,
                                                                      hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const hw, hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N(mask)) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const                     hw,
                                                                        hri_aon_pwr_seq_on_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N(data);
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const                     hw,
                                                                        hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const                     hw,
                                                                         hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_1_CTRL_STDBY_N_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N_Msk) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_STDBY_N_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const                     hw,
                                                                        hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const hw, hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD(mask)) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const                     hw,
                                                                          hri_aon_pwr_seq_on_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD(data);
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const                     hw,
                                                                          hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const                     hw,
                                                                           hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_1_CTRL_POWER_VDD_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD_Msk) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDD_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const                     hw,
                                                                        hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg |= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const hw, hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM(mask)) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const                     hw,
                                                                          hri_aon_pwr_seq_on_delay_1_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM_Msk;
	tmp |= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM(data);
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const                     hw,
                                                                          hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg &= ~AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const                     hw,
                                                                           hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg ^= AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_read_ON_DELAY_1_CTRL_POWER_VDM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM_Msk) >> AON_PWR_SEQ_ON_DELAY_1_CTRL_POWER_VDM_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_ON_DELAY_1_CTRL_reg(const void *const                     hw,
                                                               hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t
hri_aonpwrseqpwrseq_get_ON_DELAY_1_CTRL_reg(const void *const hw, hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_ON_DELAY_1_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_1_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_ON_DELAY_1_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_ON_DELAY_1_CTRL_reg(const void *const                     hw,
                                                                  hri_aon_pwr_seq_on_delay_1_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_on_delay_1_ctrl_reg_t hri_aonpwrseqpwrseq_read_ON_DELAY_1_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->ON_DELAY_1_CTRL.reg;
}

static inline void
hri_aonpwrseqpwrseq_set_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const                            hw,
                                                      hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg |= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_get_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const                            hw,
                                                      hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF(mask)) >> AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const                            hw,
                                                        hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t data)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF_Msk;
	tmp |= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF(data);
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const                            hw,
                                                        hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg &= ~AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const                            hw,
                                                         hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg ^= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_read_VDD_DCDC_EN_DELAY_CTRL_OFF_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF_Msk) >> AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_OFF_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_set_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const                            hw,
                                                     hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg |= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_get_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const                            hw,
                                                     hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON(mask)) >> AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON_Pos;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const                            hw,
                                                       hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t data)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON_Msk;
	tmp |= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON(data);
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const                            hw,
                                                       hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg &= ~AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const                            hw,
                                                        hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg ^= AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON(mask);
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_read_VDD_DCDC_EN_DELAY_CTRL_ON_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON_Msk) >> AON_PWR_SEQ_VDD_DCDC_EN_DELAY_CTRL_ON_Pos;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_set_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const                            hw,
                                                                      hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_get_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const                            hw,
                                                   hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_aonpwrseqpwrseq_write_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const                            hw,
                                                     hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_clear_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const                            hw,
                                                     hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aonpwrseqpwrseq_toggle_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const                            hw,
                                                      hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_vdd_dcdc_en_delay_ctrl_reg_t
hri_aonpwrseqpwrseq_read_VDD_DCDC_EN_DELAY_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->VDD_DCDC_EN_DELAY_CTRL.reg;
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_bit(const void *const hw,
                                                                                           bool              value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_bit(const void *const hw,
                                                                                          bool              value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_PD0_LOW_VOLTAGE_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_ENABLE_CLOCK_GATE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_VAL_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_VDD_DCDC_EN_EN_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_CORE_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp = (tmp & AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Msk)
	      >> AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Pos;
	return (bool)tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_bit(const void *const hw,
                                                                                          bool              value)
{
	uint16_t tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Msk;
	tmp |= value << AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Pos;
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = tmp;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_bit(const void *const hw)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= AON_PWR_SEQ_MISC_BYPASS_0_CTRL_FORCE_ON_BLE_MEMORIES_Msk;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_set_MISC_BYPASS_0_CTRL_reg(const void *const                        hw,
                                                                  hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg |= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t
hri_aonpwrseqpwrseq_get_MISC_BYPASS_0_CTRL_reg(const void *const hw, hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aonpwrseqpwrseq_write_MISC_BYPASS_0_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t data)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg = data;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_clear_MISC_BYPASS_0_CTRL_reg(const void *const                        hw,
                                                                    hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg &= ~mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aonpwrseqpwrseq_toggle_MISC_BYPASS_0_CTRL_reg(const void *const                        hw,
                                                                     hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t mask)
{
	AON_PWR_SEQ_CRITICAL_SECTION_ENTER();
	((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg ^= mask;
	AON_PWR_SEQ_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_pwr_seq_misc_bypass_0_ctrl_reg_t
hri_aonpwrseqpwrseq_read_MISC_BYPASS_0_CTRL_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->MISC_BYPASS_0_CTRL.reg;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_GPIO_0_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_0_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_0_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_GPIO_1_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_1_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_1_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_GPIO_2_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_2_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_GPIO_2_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_AON_ST_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_AON_ST_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_AON_ST_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_LPMCU_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_LPMCU_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_LPMCU_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_BLE_ST_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg & AON_PWR_SEQ_RAW_WAKEUP_BITS_BLE_ST_Msk)
	       >> AON_PWR_SEQ_RAW_WAKEUP_BITS_BLE_ST_Pos;
}

static inline hri_aon_pwr_seq_raw_wakeup_bits_reg_t
hri_aonpwrseqpwrseq_get_RAW_WAKEUP_BITS_reg(const void *const hw, hri_aon_pwr_seq_raw_wakeup_bits_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_pwr_seq_raw_wakeup_bits_reg_t hri_aonpwrseqpwrseq_read_RAW_WAKEUP_BITS_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->RAW_WAKEUP_BITS.reg;
}

static inline bool hri_aonpwrseqpwrseq_get_PD_WAKEUP_BITS_ARM_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg & AON_PWR_SEQ_PD_WAKEUP_BITS_ARM_Msk)
	       >> AON_PWR_SEQ_PD_WAKEUP_BITS_ARM_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_PD_WAKEUP_BITS_BLE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg & AON_PWR_SEQ_PD_WAKEUP_BITS_BLE_Msk)
	       >> AON_PWR_SEQ_PD_WAKEUP_BITS_BLE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_PD_WAKEUP_BITS_PD6_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg & AON_PWR_SEQ_PD_WAKEUP_BITS_PD6_Msk)
	       >> AON_PWR_SEQ_PD_WAKEUP_BITS_PD6_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_PD_WAKEUP_BITS_PD7_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg & AON_PWR_SEQ_PD_WAKEUP_BITS_PD7_Msk)
	       >> AON_PWR_SEQ_PD_WAKEUP_BITS_PD7_Pos;
}

static inline hri_aon_pwr_seq_pd_wakeup_bits_reg_t
hri_aonpwrseqpwrseq_get_PD_WAKEUP_BITS_reg(const void *const hw, hri_aon_pwr_seq_pd_wakeup_bits_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_pwr_seq_pd_wakeup_bits_reg_t hri_aonpwrseqpwrseq_read_PD_WAKEUP_BITS_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->PD_WAKEUP_BITS.reg;
}

static inline bool hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_GPIO_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->SERVICED_REQUEST.reg & AON_PWR_SEQ_SERVICED_REQUEST_GPIO_WAKEUP_Msk)
	       >> AON_PWR_SEQ_SERVICED_REQUEST_GPIO_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_AON_ST_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->SERVICED_REQUEST.reg & AON_PWR_SEQ_SERVICED_REQUEST_AON_ST_WAKEUP_Msk)
	       >> AON_PWR_SEQ_SERVICED_REQUEST_AON_ST_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_LPMCU_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->SERVICED_REQUEST.reg & AON_PWR_SEQ_SERVICED_REQUEST_LPMCU_WAKEUP_Msk)
	       >> AON_PWR_SEQ_SERVICED_REQUEST_LPMCU_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_BLE_ST_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->SERVICED_REQUEST.reg & AON_PWR_SEQ_SERVICED_REQUEST_BLE_ST_WAKEUP_Msk)
	       >> AON_PWR_SEQ_SERVICED_REQUEST_BLE_ST_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_SLEEP_1_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->SERVICED_REQUEST.reg & AON_PWR_SEQ_SERVICED_REQUEST_SLEEP_1_Msk)
	       >> AON_PWR_SEQ_SERVICED_REQUEST_SLEEP_1_Pos;
}

static inline hri_aon_pwr_seq_serviced_request_reg_t
hri_aonpwrseqpwrseq_get_SERVICED_REQUEST_reg(const void *const hw, hri_aon_pwr_seq_serviced_request_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->SERVICED_REQUEST.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_pwr_seq_serviced_request_reg_t hri_aonpwrseqpwrseq_read_SERVICED_REQUEST_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->SERVICED_REQUEST.reg;
}

static inline bool hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_GPIO_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg & AON_PWR_SEQ_ACTIVE_REQUEST_GPIO_WAKEUP_Msk)
	       >> AON_PWR_SEQ_ACTIVE_REQUEST_GPIO_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_AON_ST_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg & AON_PWR_SEQ_ACTIVE_REQUEST_AON_ST_WAKEUP_Msk)
	       >> AON_PWR_SEQ_ACTIVE_REQUEST_AON_ST_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_LPMCU_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg & AON_PWR_SEQ_ACTIVE_REQUEST_LPMCU_WAKEUP_Msk)
	       >> AON_PWR_SEQ_ACTIVE_REQUEST_LPMCU_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_BLE_ST_WAKEUP_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg & AON_PWR_SEQ_ACTIVE_REQUEST_BLE_ST_WAKEUP_Msk)
	       >> AON_PWR_SEQ_ACTIVE_REQUEST_BLE_ST_WAKEUP_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_SLEEP_1_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg & AON_PWR_SEQ_ACTIVE_REQUEST_SLEEP_1_Msk)
	       >> AON_PWR_SEQ_ACTIVE_REQUEST_SLEEP_1_Pos;
}

static inline hri_aon_pwr_seq_active_request_reg_t
hri_aonpwrseqpwrseq_get_ACTIVE_REQUEST_reg(const void *const hw, hri_aon_pwr_seq_active_request_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_pwr_seq_active_request_reg_t hri_aonpwrseqpwrseq_read_ACTIVE_REQUEST_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->ACTIVE_REQUEST.reg;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_BLE_ON_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_BLE_ON_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_BLE_ON_STATE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_BLE_OFF_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_BLE_OFF_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_BLE_OFF_STATE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_PD6_ON_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_PD6_ON_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_PD6_ON_STATE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_PD6_OFF_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_PD6_OFF_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_PD6_OFF_STATE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_PD7_ON_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_PD7_ON_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_PD7_ON_STATE_Pos;
}

static inline bool hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_PD7_OFF_STATE_bit(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_PD7_OFF_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_PD7_OFF_STATE_Pos;
}

static inline hri_aon_pwr_seq_logic_fsm_states_reg_t
hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_MAIN_FSM_STATE_bf(const void *const                      hw,
                                                           hri_aon_pwr_seq_logic_fsm_states_reg_t mask)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_MAIN_FSM_STATE(mask))
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_MAIN_FSM_STATE_Pos;
}

static inline hri_aon_pwr_seq_logic_fsm_states_reg_t
hri_aonpwrseqpwrseq_read_LOGIC_FSM_STATES_MAIN_FSM_STATE_bf(const void *const hw)
{
	return (((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg & AON_PWR_SEQ_LOGIC_FSM_STATES_MAIN_FSM_STATE_Msk)
	       >> AON_PWR_SEQ_LOGIC_FSM_STATES_MAIN_FSM_STATE_Pos;
}

static inline hri_aon_pwr_seq_logic_fsm_states_reg_t
hri_aonpwrseqpwrseq_get_LOGIC_FSM_STATES_reg(const void *const hw, hri_aon_pwr_seq_logic_fsm_states_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_pwr_seq_logic_fsm_states_reg_t hri_aonpwrseqpwrseq_read_LOGIC_FSM_STATES_reg(const void *const hw)
{
	return ((AonPwrSeq *)hw)->LOGIC_FSM_STATES.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_AON_PWR_SEQ_B11_H_INCLUDED */
#endif /* _SAMB11_AON_PWR_SEQ_COMPONENT_ */
