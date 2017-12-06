/**
 * \file
 *
 * \brief SAM LP_CLK_CAL_REGS
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

#ifdef _SAMB11_LP_CLK_CAL_REGS_COMPONENT_
#ifndef _HRI_LP_CLK_CAL_REGS_B11_H_INCLUDED_
#define _HRI_LP_CLK_CAL_REGS_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_LP_CLK_CAL_REGS_CRITICAL_SECTIONS)
#define LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER()
#define LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_lp_clk_cal_regs_config_reg_reg_t;
typedef uint32_t hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t;
typedef uint32_t hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t;
typedef uint8_t  hri_lp_clk_cal_regs_calib_status_reg_reg_t;

static inline void hri_lpclkcalregsclkcalregs_set_CONFIG_REG_START_RTC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg |= LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_lpclkcalregsclkcalregs_get_CONFIG_REG_START_RTC_CALIB_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Msk) >> LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Pos;
	return (bool)tmp;
}

static inline void hri_lpclkcalregsclkcalregs_write_CONFIG_REG_START_RTC_CALIB_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp &= ~LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Msk;
	tmp |= value << LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Pos;
	((LpClkCalRegs *)hw)->CONFIG_REG.reg = tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_clear_CONFIG_REG_START_RTC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg &= ~LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_toggle_CONFIG_REG_START_RTC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg ^= LP_CLK_CAL_REGS_CONFIG_REG_START_RTC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_set_CONFIG_REG_START_OSC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg |= LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_lpclkcalregsclkcalregs_get_CONFIG_REG_START_OSC_CALIB_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Msk) >> LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Pos;
	return (bool)tmp;
}

static inline void hri_lpclkcalregsclkcalregs_write_CONFIG_REG_START_OSC_CALIB_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp &= ~LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Msk;
	tmp |= value << LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Pos;
	((LpClkCalRegs *)hw)->CONFIG_REG.reg = tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_clear_CONFIG_REG_START_OSC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg &= ~LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_toggle_CONFIG_REG_START_OSC_CALIB_bit(const void *const hw)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg ^= LP_CLK_CAL_REGS_CONFIG_REG_START_OSC_CALIB_Msk;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_lpclkcalregsclkcalregs_set_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const                    hw,
                                                               hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg |= LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const                    hw,
                                                               hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(mask))
	      >> LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos;
	return tmp;
}

static inline void
hri_lpclkcalregsclkcalregs_write_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const                    hw,
                                                                 hri_lp_clk_cal_regs_config_reg_reg_t data)
{
	uint16_t tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp &= ~LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Msk;
	tmp |= LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(data);
	((LpClkCalRegs *)hw)->CONFIG_REG.reg = tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_lpclkcalregsclkcalregs_clear_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const                    hw,
                                                                 hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg &= ~LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_lpclkcalregsclkcalregs_toggle_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const                    hw,
                                                                  hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg ^= LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CONFIG_REG_NUMBER_CALIB_CLKS_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Msk) >> LP_CLK_CAL_REGS_CONFIG_REG_NUMBER_CALIB_CLKS_Pos;
	return tmp;
}

static inline void hri_lpclkcalregsclkcalregs_set_CONFIG_REG_IRQ_CONTROL_bf(const void *const                    hw,
                                                                            hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg |= LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CONFIG_REG_IRQ_CONTROL_bf(const void *const                    hw,
                                                         hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(mask)) >> LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos;
	return tmp;
}

static inline void hri_lpclkcalregsclkcalregs_write_CONFIG_REG_IRQ_CONTROL_bf(const void *const                    hw,
                                                                              hri_lp_clk_cal_regs_config_reg_reg_t data)
{
	uint16_t tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp &= ~LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Msk;
	tmp |= LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(data);
	((LpClkCalRegs *)hw)->CONFIG_REG.reg = tmp;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_clear_CONFIG_REG_IRQ_CONTROL_bf(const void *const                    hw,
                                                                              hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg &= ~LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_lpclkcalregsclkcalregs_toggle_CONFIG_REG_IRQ_CONTROL_bf(const void *const                    hw,
                                                            hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg ^= LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL(mask);
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CONFIG_REG_IRQ_CONTROL_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp = (tmp & LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Msk) >> LP_CLK_CAL_REGS_CONFIG_REG_IRQ_CONTROL_Pos;
	return tmp;
}

static inline void hri_lpclkcalregsclkcalregs_set_CONFIG_REG_reg(const void *const                    hw,
                                                                 hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg |= mask;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CONFIG_REG_reg(const void *const hw, hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_lpclkcalregsclkcalregs_write_CONFIG_REG_reg(const void *const                    hw,
                                                                   hri_lp_clk_cal_regs_config_reg_reg_t data)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg = data;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_clear_CONFIG_REG_reg(const void *const                    hw,
                                                                   hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg &= ~mask;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline void hri_lpclkcalregsclkcalregs_toggle_CONFIG_REG_reg(const void *const                    hw,
                                                                    hri_lp_clk_cal_regs_config_reg_reg_t mask)
{
	LP_CLK_CAL_REGS_CRITICAL_SECTION_ENTER();
	((LpClkCalRegs *)hw)->CONFIG_REG.reg ^= mask;
	LP_CLK_CAL_REGS_CRITICAL_SECTION_LEAVE();
}

static inline hri_lp_clk_cal_regs_config_reg_reg_t hri_lpclkcalregsclkcalregs_read_CONFIG_REG_reg(const void *const hw)
{
	return ((LpClkCalRegs *)hw)->CONFIG_REG.reg;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_OSC_COUNT_REG_CAL_DONE_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_DONE_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_DONE_Pos;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_bf(const void *const                             hw,
                                                                     hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t mask)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT(mask))
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_bf(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_FRAC_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_bf(const void *const                             hw,
                                                                    hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t mask)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT(mask))
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_bf(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_OSC_COUNT_REG_CAL_INT_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_OSC_COUNT_REG_reg(const void *const                             hw,
                                                       hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_lp_clk_cal_regs_calib_osc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_OSC_COUNT_REG_reg(const void *const hw)
{
	return ((LpClkCalRegs *)hw)->CALIB_OSC_COUNT_REG.reg;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_NO_CAL_IN_PROGRESS_Pos;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_RTC_COUNT_REG_CAL_DONE_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_DONE_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_DONE_Pos;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_bf(const void *const                             hw,
                                                                     hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t mask)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT(mask))
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_bf(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_FRAC_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_bf(const void *const                             hw,
                                                                    hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t mask)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT(mask))
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_bf(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg & LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_RTC_COUNT_REG_CAL_INT_COUNT_Pos;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_RTC_COUNT_REG_reg(const void *const                             hw,
                                                       hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_lp_clk_cal_regs_calib_rtc_count_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_RTC_COUNT_REG_reg(const void *const hw)
{
	return ((LpClkCalRegs *)hw)->CALIB_RTC_COUNT_REG.reg;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_STATUS_REG_CALIBRATION_OSC_DONE_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg & LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_OSC_DONE_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_OSC_DONE_Pos;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_STATUS_REG_CALIBRATION_RTC_DONE_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg & LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_RTC_DONE_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_STATUS_REG_CALIBRATION_RTC_DONE_Pos;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_STATUS_REG_OSC_CAL_RUNNING_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg & LP_CLK_CAL_REGS_CALIB_STATUS_REG_OSC_CAL_RUNNING_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_STATUS_REG_OSC_CAL_RUNNING_Pos;
}

static inline bool hri_lpclkcalregsclkcalregs_get_CALIB_STATUS_REG_RTC_CAL_RUNNING_bit(const void *const hw)
{
	return (((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg & LP_CLK_CAL_REGS_CALIB_STATUS_REG_RTC_CAL_RUNNING_Msk)
	       >> LP_CLK_CAL_REGS_CALIB_STATUS_REG_RTC_CAL_RUNNING_Pos;
}

static inline hri_lp_clk_cal_regs_calib_status_reg_reg_t
hri_lpclkcalregsclkcalregs_get_CALIB_STATUS_REG_reg(const void *const                          hw,
                                                    hri_lp_clk_cal_regs_calib_status_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_lp_clk_cal_regs_calib_status_reg_reg_t
hri_lpclkcalregsclkcalregs_read_CALIB_STATUS_REG_reg(const void *const hw)
{
	return ((LpClkCalRegs *)hw)->CALIB_STATUS_REG.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_LP_CLK_CAL_REGS_B11_H_INCLUDED */
#endif /* _SAMB11_LP_CLK_CAL_REGS_COMPONENT_ */
