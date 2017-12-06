/**
 * \file
 *
 * \brief SAM AON_GP_REGS
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

#ifdef _SAMB11_AON_GP_REGS_COMPONENT_
#ifndef _HRI_AON_GP_REGS_B11_H_INCLUDED_
#define _HRI_AON_GP_REGS_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_AON_GP_REGS_CRITICAL_SECTIONS)
#define AON_GP_REGS_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define AON_GP_REGS_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define AON_GP_REGS_CRITICAL_SECTION_ENTER()
#define AON_GP_REGS_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_aon_gp_regs_aon_pinmux_sel_reg_t;
typedef uint16_t hri_aon_gp_regs_rf_pmu_regs_2_reg_t;
typedef uint32_t hri_aon_gp_regs_aon_misc_ctrl_reg_t;
typedef uint32_t hri_aon_gp_regs_aon_pmu_ctrl_reg_t;
typedef uint32_t hri_aon_gp_regs_aon_reset_ctrl_reg_t;
typedef uint32_t hri_aon_gp_regs_rf_pmu_regs_0_reg_t;
typedef uint32_t hri_aon_gp_regs_rf_pmu_regs_1_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_bo_out_status_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_btrim_active_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_btrim_retention_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_global_reset_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t;
typedef uint8_t  hri_aon_gp_regs_aon_pull_enable_reg_t;
typedef uint8_t  hri_aon_gp_regs_clear_brown_out_reg_reg_t;
typedef uint8_t  hri_aon_gp_regs_io_pads_control_reg_t;
typedef uint8_t  hri_aon_gp_regs_ms_gpio_mode_reg_t;

static inline void hri_aongpregsgpregs_set_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const                    hw,
                                                                           hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_get_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const hw, hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(mask)) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Msk;
	tmp |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(data);
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const                    hw,
                                                                              hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg ^= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_read_AON_PINMUX_SEL_AO_GPIO_0_SEL_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Msk) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_0_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const                    hw,
                                                                           hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_get_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const hw, hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(mask)) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Msk;
	tmp |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(data);
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const                    hw,
                                                                              hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg ^= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_read_AON_PINMUX_SEL_AO_GPIO_1_SEL_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Msk) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_1_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const                    hw,
                                                                           hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_get_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const hw, hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(mask)) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Msk;
	tmp |= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(data);
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const                    hw,
                                                                             hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg &= ~AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const                    hw,
                                                                              hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg ^= AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_read_AON_PINMUX_SEL_AO_GPIO_2_SEL_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Msk) >> AON_GP_REGS_AON_PINMUX_SEL_AO_GPIO_2_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PINMUX_SEL_reg(const void *const                    hw,
                                                              hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t
hri_aongpregsgpregs_get_AON_PINMUX_SEL_reg(const void *const hw, hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PINMUX_SEL_reg(const void *const                    hw,
                                                                hri_aon_gp_regs_aon_pinmux_sel_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PINMUX_SEL_reg(const void *const                    hw,
                                                                hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PINMUX_SEL_reg(const void *const                    hw,
                                                                 hri_aon_gp_regs_aon_pinmux_sel_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PINMUX_SEL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pinmux_sel_reg_t hri_aongpregsgpregs_read_AON_PINMUX_SEL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_PINMUX_SEL.reg;
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_REGS_4TO1_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_RTC_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_RTC_CLK_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_RTC_CLK_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_RTC_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_RTC_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_RTC_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_EFUSE_LDO_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_EFUSE_LDO_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_EFUSE_LDO_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_EFUSE_LDO_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_EFUSE_LDO_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_EFUSE_LDO_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_MUX_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_MUX_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_MUX_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_MUX_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_MUX_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_SENS_ADC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_SENS_ADC_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_SENS_ADC_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_SENS_ADC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_SENS_ADC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_SENS_ADC_RST_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_SENS_ADC_RST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_SENS_ADC_RST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_SENS_ADC_RST_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_SENS_ADC_RST_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_SENS_ADC_RST_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_BGR_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_BGR_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_BGR_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_BGR_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_BGR_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_BGR_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_2MHZ_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Msk)
	      >> AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Msk;
	tmp |= value << AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Pos;
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_26MHZ_CLK_FORCE_OFF_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const                  hw,
                                                                            hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const hw, hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(mask)) >> AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const                  hw,
                                                                              hri_aon_gp_regs_aon_pmu_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Msk;
	tmp |= AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(data);
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const                  hw,
                                                                              hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const                  hw,
                                                                               hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_read_AON_PMU_CTRL_PMU_RETN_VAL_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_RETN_VAL_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const                  hw,
                                                                     hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const hw, hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(mask)) >> AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const                  hw,
                                                                       hri_aon_gp_regs_aon_pmu_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Msk;
	tmp |= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(data);
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const                  hw,
                                                                       hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const                  hw,
                                                                        hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_read_AON_PMU_CTRL_PMU_MUX_A_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_A_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const                  hw,
                                                                       hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_get_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const hw, hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(mask)) >> AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const                  hw,
                                                                         hri_aon_gp_regs_aon_pmu_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Msk;
	tmp |= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(data);
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const                  hw,
                                                                         hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const                  hw,
                                                                          hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_read_AON_PMU_CTRL_PMU_MUX_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Msk) >> AON_GP_REGS_AON_PMU_CTRL_PMU_MUX_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_PMU_CTRL_reg(const void *const                  hw,
                                                            hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t
hri_aongpregsgpregs_get_AON_PMU_CTRL_reg(const void *const hw, hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PMU_CTRL_reg(const void *const                  hw,
                                                              hri_aon_gp_regs_aon_pmu_ctrl_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PMU_CTRL_reg(const void *const                  hw,
                                                              hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PMU_CTRL_reg(const void *const                  hw,
                                                               hri_aon_gp_regs_aon_pmu_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PMU_CTRL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pmu_ctrl_reg_t hri_aongpregsgpregs_read_AON_PMU_CTRL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_PMU_CTRL.reg;
}

static inline void hri_aongpregsgpregs_set_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg |= AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Msk) >> AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Msk;
	tmp |= value << AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Pos;
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg &= ~AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg ^= AON_GP_REGS_AON_BLE_LP_CTRL_WAKEUP_LP_LATCH_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg |= AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Msk)
	      >> AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_bit(const void *const hw,
                                                                                         bool              value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Pos;
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg &= ~AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg ^= AON_GP_REGS_AON_BLE_LP_CTRL_DEEP_SLEEP_STAT_SYNC_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_BLE_LP_CTRL_reg(const void *const                     hw,
                                                               hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t
hri_aongpregsgpregs_get_AON_BLE_LP_CTRL_reg(const void *const hw, hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_BLE_LP_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_BLE_LP_CTRL_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_BLE_LP_CTRL_reg(const void *const                     hw,
                                                                  hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_ble_lp_ctrl_reg_t hri_aongpregsgpregs_read_AON_BLE_LP_CTRL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_BLE_LP_CTRL.reg;
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw,
                                                                                             bool              value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_USE_RTC_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw,
                                                                                             bool              value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_USE_EXT_32KHZ_CLK_SLEEP_TIMER_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_LPMCU_BOOT_RESET_MUXSEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_LPMCU_USE_BOOT_REGS_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_bit(const void *const hw,
                                                                                           bool              value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_bit(const void *const hw,
                                                                                            bool              value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_LPMCU_CPU_RESET_OVERRIDE_VAL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_USE_2M_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_USE_OSC2M_AS_TB_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_AON_SLEEP_TIMER_CLK_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_AON_EXT_32KHZ_OUT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_USE_RTC_AON_PWR_SEQ_CLK_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_INVERT_WAKEUP_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_FORCE_OFF_XO_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_FORCE_OFF_XO_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Msk) >> AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_FORCE_OFF_XO_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_FORCE_OFF_XO_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_FORCE_OFF_XO_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_FORCE_OFF_XO_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Msk)
	      >> AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Msk;
	tmp |= value << AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Pos;
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= AON_GP_REGS_AON_MISC_CTRL_FORCE_XO_TO_BYPASS_MODE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_MISC_CTRL_reg(const void *const                   hw,
                                                             hri_aon_gp_regs_aon_misc_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_misc_ctrl_reg_t
hri_aongpregsgpregs_get_AON_MISC_CTRL_reg(const void *const hw, hri_aon_gp_regs_aon_misc_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_MISC_CTRL_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_aon_misc_ctrl_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_MISC_CTRL_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_aon_misc_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_MISC_CTRL_reg(const void *const                   hw,
                                                                hri_aon_gp_regs_aon_misc_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_MISC_CTRL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_misc_ctrl_reg_t hri_aongpregsgpregs_read_AON_MISC_CTRL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_MISC_CTRL.reg;
}

static inline void hri_aongpregsgpregs_set_AON_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg |= AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp = (tmp & AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Msk) >> AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp &= ~AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	tmp |= value << AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Pos;
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg &= ~AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_GLOBAL_RESET_GLOBAL_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg ^= AON_GP_REGS_AON_GLOBAL_RESET_GLOBAL_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg |= AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp = (tmp & AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Msk)
	      >> AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp &= ~AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Msk;
	tmp |= value << AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Pos;
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg &= ~AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg ^= AON_GP_REGS_AON_GLOBAL_RESET_SLEEP_TIMER_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_GLOBAL_RESET_BLE_LP_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg |= AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_GLOBAL_RESET_BLE_LP_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp = (tmp & AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Msk) >> AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_GLOBAL_RESET_BLE_LP_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp &= ~AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Msk;
	tmp |= value << AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Pos;
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_GLOBAL_RESET_BLE_LP_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg &= ~AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_GLOBAL_RESET_BLE_LP_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg ^= AON_GP_REGS_AON_GLOBAL_RESET_BLE_LP_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_GLOBAL_RESET_PD4_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg |= AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_GLOBAL_RESET_PD4_RSTN_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp = (tmp & AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Msk) >> AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_GLOBAL_RESET_PD4_RSTN_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp &= ~AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Msk;
	tmp |= value << AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Pos;
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_GLOBAL_RESET_PD4_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg &= ~AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_GLOBAL_RESET_PD4_RSTN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg ^= AON_GP_REGS_AON_GLOBAL_RESET_PD4_RSTN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_GLOBAL_RESET_reg(const void *const                      hw,
                                                                hri_aon_gp_regs_aon_global_reset_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_global_reset_reg_t
hri_aongpregsgpregs_get_AON_GLOBAL_RESET_reg(const void *const hw, hri_aon_gp_regs_aon_global_reset_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_GLOBAL_RESET_reg(const void *const                      hw,
                                                                  hri_aon_gp_regs_aon_global_reset_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_GLOBAL_RESET_reg(const void *const                      hw,
                                                                  hri_aon_gp_regs_aon_global_reset_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_GLOBAL_RESET_reg(const void *const                      hw,
                                                                   hri_aon_gp_regs_aon_global_reset_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_global_reset_reg_t hri_aongpregsgpregs_read_AON_GLOBAL_RESET_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_GLOBAL_RESET.reg;
}

static inline void hri_aongpregsgpregs_set_AON_PULL_ENABLE_AO_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg |= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PULL_ENABLE_AO_GPIO_0_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp = (tmp & AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Msk) >> AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PULL_ENABLE_AO_GPIO_0_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Msk;
	tmp |= value << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Pos;
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PULL_ENABLE_AO_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PULL_ENABLE_AO_GPIO_0_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg ^= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_0_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PULL_ENABLE_AO_GPIO_1_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg |= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PULL_ENABLE_AO_GPIO_1_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp = (tmp & AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Msk) >> AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PULL_ENABLE_AO_GPIO_1_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Msk;
	tmp |= value << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Pos;
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PULL_ENABLE_AO_GPIO_1_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PULL_ENABLE_AO_GPIO_1_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg ^= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_1_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PULL_ENABLE_AO_GPIO_2_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg |= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_AON_PULL_ENABLE_AO_GPIO_2_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp = (tmp & AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Msk) >> AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PULL_ENABLE_AO_GPIO_2_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Msk;
	tmp |= value << AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Pos;
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PULL_ENABLE_AO_GPIO_2_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg &= ~AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PULL_ENABLE_AO_GPIO_2_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg ^= AON_GP_REGS_AON_PULL_ENABLE_AO_GPIO_2_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_AON_PULL_ENABLE_reg(const void *const                     hw,
                                                               hri_aon_gp_regs_aon_pull_enable_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pull_enable_reg_t
hri_aongpregsgpregs_get_AON_PULL_ENABLE_reg(const void *const hw, hri_aon_gp_regs_aon_pull_enable_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_PULL_ENABLE_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_aon_pull_enable_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_PULL_ENABLE_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_aon_pull_enable_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_PULL_ENABLE_reg(const void *const                     hw,
                                                                  hri_aon_gp_regs_aon_pull_enable_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_PULL_ENABLE.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_pull_enable_reg_t hri_aongpregsgpregs_read_AON_PULL_ENABLE_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_PULL_ENABLE.reg;
}

static inline void hri_aongpregsgpregs_set_AON_RESET_CTRL_PD1_COUNT_bf(const void *const                    hw,
                                                                       hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg |= AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_get_AON_RESET_CTRL_PD1_COUNT_bf(const void *const hw, hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(mask)) >> AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_RESET_CTRL_PD1_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Msk;
	tmp |= AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(data);
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_RESET_CTRL_PD1_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg &= ~AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_RESET_CTRL_PD1_COUNT_bf(const void *const                    hw,
                                                                          hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg ^= AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_read_AON_RESET_CTRL_PD1_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Msk) >> AON_GP_REGS_AON_RESET_CTRL_PD1_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_RESET_CTRL_PD4_COUNT_bf(const void *const                    hw,
                                                                       hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg |= AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_get_AON_RESET_CTRL_PD4_COUNT_bf(const void *const hw, hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(mask)) >> AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_RESET_CTRL_PD4_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Msk;
	tmp |= AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(data);
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_RESET_CTRL_PD4_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg &= ~AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_RESET_CTRL_PD4_COUNT_bf(const void *const                    hw,
                                                                          hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg ^= AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_read_AON_RESET_CTRL_PD4_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Msk) >> AON_GP_REGS_AON_RESET_CTRL_PD4_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_RESET_CTRL_PD6_COUNT_bf(const void *const                    hw,
                                                                       hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg |= AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_get_AON_RESET_CTRL_PD6_COUNT_bf(const void *const hw, hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(mask)) >> AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_RESET_CTRL_PD6_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp &= ~AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Msk;
	tmp |= AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(data);
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_RESET_CTRL_PD6_COUNT_bf(const void *const                    hw,
                                                                         hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg &= ~AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_RESET_CTRL_PD6_COUNT_bf(const void *const                    hw,
                                                                          hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg ^= AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_read_AON_RESET_CTRL_PD6_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp = (tmp & AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Msk) >> AON_GP_REGS_AON_RESET_CTRL_PD6_COUNT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_RESET_CTRL_reg(const void *const                    hw,
                                                              hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t
hri_aongpregsgpregs_get_AON_RESET_CTRL_reg(const void *const hw, hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_RESET_CTRL_reg(const void *const                    hw,
                                                                hri_aon_gp_regs_aon_reset_ctrl_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_RESET_CTRL_reg(const void *const                    hw,
                                                                hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_RESET_CTRL_reg(const void *const                    hw,
                                                                 hri_aon_gp_regs_aon_reset_ctrl_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_RESET_CTRL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_reset_ctrl_reg_t hri_aongpregsgpregs_read_AON_RESET_CTRL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_RESET_CTRL.reg;
}

static inline void
hri_aongpregsgpregs_set_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const                      hw,
                                                             hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg |= AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_active_reg_t
hri_aongpregsgpregs_get_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const                      hw,
                                                             hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg;
	tmp = (tmp & AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(mask))
	      >> AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const                      hw,
                                                               hri_aon_gp_regs_aon_btrim_active_reg_t data)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg;
	tmp &= ~AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Msk;
	tmp |= AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(data);
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const                      hw,
                                                               hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg &= ~AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const                      hw,
                                                                hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg ^= AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_active_reg_t
hri_aongpregsgpregs_read_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg;
	tmp = (tmp & AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Msk)
	      >> AON_GP_REGS_AON_BTRIM_ACTIVE_AON_BTRIM_ACTIVE_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_BTRIM_ACTIVE_reg(const void *const                      hw,
                                                                hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_active_reg_t
hri_aongpregsgpregs_get_AON_BTRIM_ACTIVE_reg(const void *const hw, hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_BTRIM_ACTIVE_reg(const void *const                      hw,
                                                                  hri_aon_gp_regs_aon_btrim_active_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_BTRIM_ACTIVE_reg(const void *const                      hw,
                                                                  hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_BTRIM_ACTIVE_reg(const void *const                      hw,
                                                                   hri_aon_gp_regs_aon_btrim_active_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_active_reg_t hri_aongpregsgpregs_read_AON_BTRIM_ACTIVE_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_BTRIM_ACTIVE.reg;
}

static inline void
hri_aongpregsgpregs_set_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg |= AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_retention_reg_t
hri_aongpregsgpregs_get_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg;
	tmp = (tmp & AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(mask))
	      >> AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_btrim_retention_reg_t data)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg;
	tmp &= ~AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Msk;
	tmp |= AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(data);
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg &= ~AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const                         hw,
                                                                      hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg ^= AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_retention_reg_t
hri_aongpregsgpregs_read_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg;
	tmp = (tmp & AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Msk)
	      >> AON_GP_REGS_AON_BTRIM_RETENTION_AON_BTRIM_RETENTION_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_BTRIM_RETENTION_reg(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_retention_reg_t
hri_aongpregsgpregs_get_AON_BTRIM_RETENTION_reg(const void *const hw, hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_BTRIM_RETENTION_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_btrim_retention_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_BTRIM_RETENTION_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_BTRIM_RETENTION_reg(const void *const                         hw,
                                                                      hri_aon_gp_regs_aon_btrim_retention_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_btrim_retention_reg_t
hri_aongpregsgpregs_read_AON_BTRIM_RETENTION_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_BTRIM_RETENTION.reg;
}

static inline void
hri_aongpregsgpregs_set_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(const void *const                           hw,
                                                                       hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg |= AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t
hri_aongpregsgpregs_get_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(const void *const                           hw,
                                                                       hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg;
	tmp = (tmp & AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(mask))
	      >> AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(
    const void *const hw, hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t data)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg;
	tmp &= ~AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Msk;
	tmp |= AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(data);
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(
    const void *const hw, hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg &= ~AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(
    const void *const hw, hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg ^= AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t
hri_aongpregsgpregs_read_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg;
	tmp = (tmp & AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Msk)
	      >> AON_GP_REGS_AON_LPMCU_SCRATCH_PAD_AON_LPMCU_SCRATCH_PAD_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_LPMCU_SCRATCH_PAD_reg(const void *const                           hw,
                                                                     hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t
hri_aongpregsgpregs_get_AON_LPMCU_SCRATCH_PAD_reg(const void *const                           hw,
                                                  hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_LPMCU_SCRATCH_PAD_reg(const void *const                           hw,
                                                                       hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_LPMCU_SCRATCH_PAD_reg(const void *const                           hw,
                                                                       hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_AON_LPMCU_SCRATCH_PAD_reg(const void *const                           hw,
                                                     hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_scratch_pad_reg_t
hri_aongpregsgpregs_read_AON_LPMCU_SCRATCH_PAD_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_LPMCU_SCRATCH_PAD.reg;
}

static inline void
hri_aongpregsgpregs_set_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg |= AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t
hri_aongpregsgpregs_get_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg;
	tmp = (tmp & AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(mask))
	      >> AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t data)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg;
	tmp &= ~AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Msk;
	tmp |= AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(data);
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg &= ~AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const                         hw,
                                                                      hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg ^= AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t
hri_aongpregsgpregs_read_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg;
	tmp = (tmp & AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Msk)
	      >> AON_GP_REGS_AON_LPMCU_COLD_BOOT_AON_LPMCU_COLD_BOOT_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_AON_LPMCU_COLD_BOOT_reg(const void *const                         hw,
                                                                   hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t
hri_aongpregsgpregs_get_AON_LPMCU_COLD_BOOT_reg(const void *const hw, hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_AON_LPMCU_COLD_BOOT_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_AON_LPMCU_COLD_BOOT_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_AON_LPMCU_COLD_BOOT_reg(const void *const                         hw,
                                                                      hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_aon_lpmcu_cold_boot_reg_t
hri_aongpregsgpregs_read_AON_LPMCU_COLD_BOOT_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_LPMCU_COLD_BOOT.reg;
}

static inline void hri_aongpregsgpregs_set_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg |= AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg;
	tmp = (tmp & AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Msk)
	      >> AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_bit(const void *const hw,
                                                                                         bool              value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg;
	tmp &= ~AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Msk;
	tmp |= value << AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Pos;
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg &= ~AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg ^= AON_GP_REGS_CLEAR_BROWN_OUT_REG_CLEAR_BROWN_OUT_REG_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_CLEAR_BROWN_OUT_REG_reg(const void *const                         hw,
                                                                   hri_aon_gp_regs_clear_brown_out_reg_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_clear_brown_out_reg_reg_t
hri_aongpregsgpregs_get_CLEAR_BROWN_OUT_REG_reg(const void *const hw, hri_aon_gp_regs_clear_brown_out_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_CLEAR_BROWN_OUT_REG_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_clear_brown_out_reg_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_CLEAR_BROWN_OUT_REG_reg(const void *const                         hw,
                                                                     hri_aon_gp_regs_clear_brown_out_reg_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_CLEAR_BROWN_OUT_REG_reg(const void *const                         hw,
                                                                      hri_aon_gp_regs_clear_brown_out_reg_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_clear_brown_out_reg_reg_t
hri_aongpregsgpregs_read_CLEAR_BROWN_OUT_REG_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->CLEAR_BROWN_OUT_REG.reg;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_CLK_EDGE_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_0_CLK_EDGE_SEL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_CLK_EDGE_SEL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_CLK_EDGE_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_CLK_EDGE_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_CLK_EDGE_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_CLK_2_4_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_0_CLK_2_4_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_CLK_2_4_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_CLK_2_4_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_CLK_2_4_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_CLK_2_4_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_RESET_FSM_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_0_RESET_FSM_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_RESET_FSM_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_RESET_FSM_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_RESET_FSM_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_RESET_FSM_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_EN_TRISTATE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_0_EN_TRISTATE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_EN_TRISTATE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_EN_TRISTATE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_EN_TRISTATE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_EN_TRISTATE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_CLK_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_0_CLK_SEL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_CLK_SEL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_CLK_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_CLK_SEL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_CLK_SEL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_VOUT_CTRL_BUCK_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_VOUT_CTRL_BUCK_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_VREG_FILT_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_VREG_FILT_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_CLK_DIV_bf(const void *const                   hw,
                                                                    hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_CLK_DIV_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_CLK_DIV_bf(const void *const                   hw,
                                                                      hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_CLK_DIV_bf(const void *const                   hw,
                                                                      hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_CLK_DIV_bf(const void *const                   hw,
                                                                       hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_CLK_DIV_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_CLK_DIV_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const                   hw,
                                                                          hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_TRISTATE_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_TRISTATE_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_OFFSETP_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_OFFSETP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_OFFSETN_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_OFFSETN_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const                   hw,
                                                                      hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const                   hw,
                                                                        hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const                   hw,
                                                                        hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_0_P_SW_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_0_P_SW_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_0_reg(const void *const                   hw,
                                                             hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_0_reg(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_0_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_0_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_0_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_0_reg(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_0_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_0.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_0_reg_t hri_aongpregsgpregs_read_RF_PMU_REGS_0_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->RF_PMU_REGS_0.reg;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_BOD_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_1_BOD_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_BOD_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_BOD_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_BOD_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_BOD_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_LPD_CLK_INJECT_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_EFUSE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_1_EFUSE_LDO_BYP_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_EFUSE_LDO_BYP_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_EFUSE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_EFUSE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_PIERCE_RES_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_1_PIERCE_RES_CTRL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_PIERCE_RES_CTRL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_PIERCE_RES_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_PIERCE_RES_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_RES_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_SADC_CHN_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_1_SADC_CHN_CTRL_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_SADC_CHN_CTRL_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_SADC_CHN_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_SADC_CHN_CTRL_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_CTRL_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const                   hw,
                                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const                   hw,
                                                            hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(mask))
	      >> AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_BIAS_RES_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_SADC_REF_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_REF_SEL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_set_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const                   hw,
                                                             hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const                   hw,
                                                             hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(mask))
	      >> AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Msk)
	      >> AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_VOUT_CTRL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_set_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(mask))
	      >> AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const                   hw,
                                                                 hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Msk)
	      >> AON_GP_REGS_RF_PMU_REGS_1_EFUSE_LDO_IBIAS_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_PIERCE_GM_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_PIERCE_GM_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const                   hw,
                                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_PIERCE_CAP_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_PIERCE_CAP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_SADC_CHN_SEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_CHN_SEL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_CODE_IN_bf(const void *const                   hw,
                                                                    hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_CODE_IN_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_CODE_IN_bf(const void *const                   hw,
                                                                      hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_CODE_IN_bf(const void *const                   hw,
                                                                      hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_CODE_IN_bf(const void *const                   hw,
                                                                       hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_CODE_IN(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_CODE_IN_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_CODE_IN_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const                   hw,
                                                                         hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(mask)) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	uint32_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const                   hw,
                                                                            hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_1_SADC_LP_CTRL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_1_SADC_LP_CTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_1_reg(const void *const                   hw,
                                                             hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_1_reg(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_1_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_1_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_1_reg(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_1_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_1.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_1_reg_t hri_aongpregsgpregs_read_RF_PMU_REGS_1_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->RF_PMU_REGS_1.reg;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_BYP_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_OFFSET_CAL_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_2_OFFSET_CAL_EN_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_OFFSET_CAL_EN_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_OFFSET_CAL_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_OFFSET_CAL_EN_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_OFFSET_CAL_EN_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_RESERVED_7_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_RF_PMU_REGS_2_RESERVED_7_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_RESERVED_7_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Msk;
	tmp |= value << AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Pos;
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_RESERVED_7_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_RESERVED_7_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_RESERVED_7_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const                   hw,
                                                                               hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const                   hw,
                                                            hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(mask))
	      >> AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos;
	return tmp;
}

static inline void
hri_aongpregsgpregs_write_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_2_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_clear_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const                   hw,
                                                              hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_DIG_CORE_LDO_VCTRL_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const                   hw,
                                                                        hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(mask)) >> AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const                   hw,
                                                                          hri_aon_gp_regs_rf_pmu_regs_2_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const                   hw,
                                                                          hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_2_REF_HP_MODE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_REF_HP_MODE_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(mask)) >> AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_2_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_2_CLK_CTRL_26MHZ_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_CLK_CTRL_26MHZ_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const                   hw,
                                                                           hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(mask)) >> AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_2_reg_t data)
{
	uint16_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= ~AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Msk;
	tmp |= AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(data);
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const                   hw,
                                                                             hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const                   hw,
                                                                              hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13(mask);
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_read_RF_PMU_REGS_2_RESERVED_15_13_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp = (tmp & AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Msk) >> AON_GP_REGS_RF_PMU_REGS_2_RESERVED_15_13_Pos;
	return tmp;
}

static inline void hri_aongpregsgpregs_set_RF_PMU_REGS_2_reg(const void *const                   hw,
                                                             hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t
hri_aongpregsgpregs_get_RF_PMU_REGS_2_reg(const void *const hw, hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_RF_PMU_REGS_2_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_2_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_RF_PMU_REGS_2_reg(const void *const                   hw,
                                                               hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_RF_PMU_REGS_2_reg(const void *const                   hw,
                                                                hri_aon_gp_regs_rf_pmu_regs_2_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->RF_PMU_REGS_2.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_rf_pmu_regs_2_reg_t hri_aongpregsgpregs_read_RF_PMU_REGS_2_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->RF_PMU_REGS_2.reg;
}

static inline void hri_aongpregsgpregs_set_MS_GPIO_MODE_ANALOG_ENABLE_44_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg |= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_MS_GPIO_MODE_ANALOG_ENABLE_44_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp = (tmp & AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Msk) >> AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_MS_GPIO_MODE_ANALOG_ENABLE_44_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Msk;
	tmp |= value << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Pos;
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_MS_GPIO_MODE_ANALOG_ENABLE_44_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_MS_GPIO_MODE_ANALOG_ENABLE_44_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg ^= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_44_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_MS_GPIO_MODE_ANALOG_ENABLE_45_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg |= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_MS_GPIO_MODE_ANALOG_ENABLE_45_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp = (tmp & AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Msk) >> AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_MS_GPIO_MODE_ANALOG_ENABLE_45_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Msk;
	tmp |= value << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Pos;
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_MS_GPIO_MODE_ANALOG_ENABLE_45_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_MS_GPIO_MODE_ANALOG_ENABLE_45_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg ^= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_45_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_MS_GPIO_MODE_ANALOG_ENABLE_46_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg |= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_MS_GPIO_MODE_ANALOG_ENABLE_46_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp = (tmp & AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Msk) >> AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_MS_GPIO_MODE_ANALOG_ENABLE_46_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Msk;
	tmp |= value << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Pos;
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_MS_GPIO_MODE_ANALOG_ENABLE_46_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_MS_GPIO_MODE_ANALOG_ENABLE_46_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg ^= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_46_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_MS_GPIO_MODE_ANALOG_ENABLE_47_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg |= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_MS_GPIO_MODE_ANALOG_ENABLE_47_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp = (tmp & AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Msk) >> AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_MS_GPIO_MODE_ANALOG_ENABLE_47_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Msk;
	tmp |= value << AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Pos;
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_MS_GPIO_MODE_ANALOG_ENABLE_47_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg &= ~AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_MS_GPIO_MODE_ANALOG_ENABLE_47_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg ^= AON_GP_REGS_MS_GPIO_MODE_ANALOG_ENABLE_47_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_MS_GPIO_MODE_reg(const void *const                  hw,
                                                            hri_aon_gp_regs_ms_gpio_mode_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_ms_gpio_mode_reg_t
hri_aongpregsgpregs_get_MS_GPIO_MODE_reg(const void *const hw, hri_aon_gp_regs_ms_gpio_mode_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_MS_GPIO_MODE_reg(const void *const                  hw,
                                                              hri_aon_gp_regs_ms_gpio_mode_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_MS_GPIO_MODE_reg(const void *const                  hw,
                                                              hri_aon_gp_regs_ms_gpio_mode_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_MS_GPIO_MODE_reg(const void *const                  hw,
                                                               hri_aon_gp_regs_ms_gpio_mode_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->MS_GPIO_MODE.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_ms_gpio_mode_reg_t hri_aongpregsgpregs_read_MS_GPIO_MODE_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->MS_GPIO_MODE.reg;
}

static inline void hri_aongpregsgpregs_set_IO_PADS_CONTROL_LATCH_ENABLE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg |= AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_aongpregsgpregs_get_IO_PADS_CONTROL_LATCH_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->IO_PADS_CONTROL.reg;
	tmp = (tmp & AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Msk) >> AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_aongpregsgpregs_write_IO_PADS_CONTROL_LATCH_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((AonGpRegs *)hw)->IO_PADS_CONTROL.reg;
	tmp &= ~AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Msk;
	tmp |= value << AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Pos;
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg = tmp;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_IO_PADS_CONTROL_LATCH_ENABLE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg &= ~AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_IO_PADS_CONTROL_LATCH_ENABLE_bit(const void *const hw)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg ^= AON_GP_REGS_IO_PADS_CONTROL_LATCH_ENABLE_Msk;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_set_IO_PADS_CONTROL_reg(const void *const                     hw,
                                                               hri_aon_gp_regs_io_pads_control_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg |= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_io_pads_control_reg_t
hri_aongpregsgpregs_get_IO_PADS_CONTROL_reg(const void *const hw, hri_aon_gp_regs_io_pads_control_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->IO_PADS_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_aongpregsgpregs_write_IO_PADS_CONTROL_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_io_pads_control_reg_t data)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg = data;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_clear_IO_PADS_CONTROL_reg(const void *const                     hw,
                                                                 hri_aon_gp_regs_io_pads_control_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg &= ~mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_aongpregsgpregs_toggle_IO_PADS_CONTROL_reg(const void *const                     hw,
                                                                  hri_aon_gp_regs_io_pads_control_reg_t mask)
{
	AON_GP_REGS_CRITICAL_SECTION_ENTER();
	((AonGpRegs *)hw)->IO_PADS_CONTROL.reg ^= mask;
	AON_GP_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_aon_gp_regs_io_pads_control_reg_t hri_aongpregsgpregs_read_IO_PADS_CONTROL_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->IO_PADS_CONTROL.reg;
}

static inline bool hri_aongpregsgpregs_get_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS_bit(const void *const hw)
{
	return (((AonGpRegs *)hw)->AON_BO_OUT_STATUS.reg & AON_GP_REGS_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS_Msk)
	       >> AON_GP_REGS_AON_BO_OUT_STATUS_AON_BO_OUT_STATUS_Pos;
}

static inline hri_aon_gp_regs_aon_bo_out_status_reg_t
hri_aongpregsgpregs_get_AON_BO_OUT_STATUS_reg(const void *const hw, hri_aon_gp_regs_aon_bo_out_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((AonGpRegs *)hw)->AON_BO_OUT_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_aon_gp_regs_aon_bo_out_status_reg_t
hri_aongpregsgpregs_read_AON_BO_OUT_STATUS_reg(const void *const hw)
{
	return ((AonGpRegs *)hw)->AON_BO_OUT_STATUS.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_AON_GP_REGS_B11_H_INCLUDED */
#endif /* _SAMB11_AON_GP_REGS_COMPONENT_ */
