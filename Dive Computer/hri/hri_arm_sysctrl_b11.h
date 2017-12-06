/**
 * \file
 *
 * \brief SAM ARM_SYSCTRL
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

#ifdef _SAMB11_ARM_SYSCTRL_COMPONENT_
#ifndef _HRI_ARM_SYSCTRL_B11_H_INCLUDED_
#define _HRI_ARM_SYSCTRL_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_ARM_SYSCTRL_CRITICAL_SECTIONS)
#define ARM_SYSCTRL_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define ARM_SYSCTRL_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define ARM_SYSCTRL_CRITICAL_SECTION_ENTER()
#define ARM_SYSCTRL_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_arm_sysctrl_ccr_reg_t;
typedef uint16_t hri_arm_sysctrl_shcsr_reg_t;
typedef uint32_t hri_arm_sysctrl_actlr_reg_t;
typedef uint32_t hri_arm_sysctrl_aircr_reg_t;
typedef uint32_t hri_arm_sysctrl_cpuid_reg_t;
typedef uint32_t hri_arm_sysctrl_dcrdr_reg_t;
typedef uint32_t hri_arm_sysctrl_dcrsr_reg_t;
typedef uint32_t hri_arm_sysctrl_demcr_reg_t;
typedef uint32_t hri_arm_sysctrl_dhcsr_reg_t;
typedef uint32_t hri_arm_sysctrl_icsr_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_icer_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_icpr_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr0_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr1_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr2_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr3_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr4_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr5_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr6_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ipr7_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_iser_reg_t;
typedef uint32_t hri_arm_sysctrl_nvic_ispr_reg_t;
typedef uint32_t hri_arm_sysctrl_shpr2_reg_t;
typedef uint32_t hri_arm_sysctrl_shpr3_reg_t;
typedef uint32_t hri_arm_sysctrl_syst_calib_reg_t;
typedef uint32_t hri_arm_sysctrl_syst_csr_reg_t;
typedef uint32_t hri_arm_sysctrl_syst_cvr_reg_t;
typedef uint32_t hri_arm_sysctrl_syst_rvr_reg_t;
typedef uint8_t  hri_arm_sysctrl_dfsr_reg_t;
typedef uint8_t  hri_arm_sysctrl_scr_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_cid0_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_cid1_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_cid2_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_cid3_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_pid0_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_pid1_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_pid2_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_pid3_reg_t;
typedef uint8_t  hri_arm_sysctrl_scs_pid4_reg_t;

static inline void hri_armsysctrlsysctrl_set_SYST_CSR_ENABLE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg |= ARM_SYSCTRL_SYST_CSR_ENABLE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CSR_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CSR_ENABLE_Msk) >> ARM_SYSCTRL_SYST_CSR_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CSR_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_CSR_ENABLE_Msk;
	tmp |= value << ARM_SYSCTRL_SYST_CSR_ENABLE_Pos;
	((ArmSysctrl *)hw)->SYST_CSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CSR_ENABLE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg &= ~ARM_SYSCTRL_SYST_CSR_ENABLE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CSR_ENABLE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg ^= ARM_SYSCTRL_SYST_CSR_ENABLE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SYST_CSR_TICKINT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg |= ARM_SYSCTRL_SYST_CSR_TICKINT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CSR_TICKINT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CSR_TICKINT_Msk) >> ARM_SYSCTRL_SYST_CSR_TICKINT_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CSR_TICKINT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_CSR_TICKINT_Msk;
	tmp |= value << ARM_SYSCTRL_SYST_CSR_TICKINT_Pos;
	((ArmSysctrl *)hw)->SYST_CSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CSR_TICKINT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg &= ~ARM_SYSCTRL_SYST_CSR_TICKINT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CSR_TICKINT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg ^= ARM_SYSCTRL_SYST_CSR_TICKINT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SYST_CSR_CLKSOURCE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg |= ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CSR_CLKSOURCE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Msk) >> ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CSR_CLKSOURCE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Msk;
	tmp |= value << ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Pos;
	((ArmSysctrl *)hw)->SYST_CSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CSR_CLKSOURCE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg &= ~ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CSR_CLKSOURCE_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg ^= ARM_SYSCTRL_SYST_CSR_CLKSOURCE_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SYST_CSR_COUNTFLAG_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg |= ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CSR_COUNTFLAG_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Msk) >> ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CSR_COUNTFLAG_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Msk;
	tmp |= value << ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Pos;
	((ArmSysctrl *)hw)->SYST_CSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CSR_COUNTFLAG_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg &= ~ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CSR_COUNTFLAG_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg ^= ARM_SYSCTRL_SYST_CSR_COUNTFLAG_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SYST_CSR_reg(const void *const hw, hri_arm_sysctrl_syst_csr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_csr_reg_t hri_armsysctrlsysctrl_get_SYST_CSR_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_syst_csr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CSR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CSR_reg(const void *const hw, hri_arm_sysctrl_syst_csr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CSR_reg(const void *const hw, hri_arm_sysctrl_syst_csr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CSR_reg(const void *const hw, hri_arm_sysctrl_syst_csr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CSR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_csr_reg_t hri_armsysctrlsysctrl_read_SYST_CSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SYST_CSR.reg;
}

static inline void hri_armsysctrlsysctrl_set_SYST_RVR_SYST_RVR_bf(const void *const              hw,
                                                                  hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg |= ARM_SYSCTRL_SYST_RVR_SYST_RVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_rvr_reg_t
hri_armsysctrlsysctrl_get_SYST_RVR_SYST_RVR_bf(const void *const hw, hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_RVR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_RVR_SYST_RVR(mask)) >> ARM_SYSCTRL_SYST_RVR_SYST_RVR_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_RVR_SYST_RVR_bf(const void *const              hw,
                                                                    hri_arm_sysctrl_syst_rvr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_RVR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_RVR_SYST_RVR_Msk;
	tmp |= ARM_SYSCTRL_SYST_RVR_SYST_RVR(data);
	((ArmSysctrl *)hw)->SYST_RVR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_RVR_SYST_RVR_bf(const void *const              hw,
                                                                    hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg &= ~ARM_SYSCTRL_SYST_RVR_SYST_RVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_RVR_SYST_RVR_bf(const void *const              hw,
                                                                     hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg ^= ARM_SYSCTRL_SYST_RVR_SYST_RVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_rvr_reg_t hri_armsysctrlsysctrl_read_SYST_RVR_SYST_RVR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_RVR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_RVR_SYST_RVR_Msk) >> ARM_SYSCTRL_SYST_RVR_SYST_RVR_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_SYST_RVR_reg(const void *const hw, hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_rvr_reg_t hri_armsysctrlsysctrl_get_SYST_RVR_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_RVR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_RVR_reg(const void *const hw, hri_arm_sysctrl_syst_rvr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_RVR_reg(const void *const hw, hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_RVR_reg(const void *const hw, hri_arm_sysctrl_syst_rvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_RVR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_rvr_reg_t hri_armsysctrlsysctrl_read_SYST_RVR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SYST_RVR.reg;
}

static inline void hri_armsysctrlsysctrl_set_SYST_CVR_SYST_CVR_bf(const void *const              hw,
                                                                  hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg |= ARM_SYSCTRL_SYST_CVR_SYST_CVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_cvr_reg_t
hri_armsysctrlsysctrl_get_SYST_CVR_SYST_CVR_bf(const void *const hw, hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CVR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CVR_SYST_CVR(mask)) >> ARM_SYSCTRL_SYST_CVR_SYST_CVR_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CVR_SYST_CVR_bf(const void *const              hw,
                                                                    hri_arm_sysctrl_syst_cvr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SYST_CVR.reg;
	tmp &= ~ARM_SYSCTRL_SYST_CVR_SYST_CVR_Msk;
	tmp |= ARM_SYSCTRL_SYST_CVR_SYST_CVR(data);
	((ArmSysctrl *)hw)->SYST_CVR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CVR_SYST_CVR_bf(const void *const              hw,
                                                                    hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg &= ~ARM_SYSCTRL_SYST_CVR_SYST_CVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CVR_SYST_CVR_bf(const void *const              hw,
                                                                     hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg ^= ARM_SYSCTRL_SYST_CVR_SYST_CVR(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_cvr_reg_t hri_armsysctrlsysctrl_read_SYST_CVR_SYST_CVR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CVR.reg;
	tmp = (tmp & ARM_SYSCTRL_SYST_CVR_SYST_CVR_Msk) >> ARM_SYSCTRL_SYST_CVR_SYST_CVR_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_SYST_CVR_reg(const void *const hw, hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_cvr_reg_t hri_armsysctrlsysctrl_get_SYST_CVR_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CVR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SYST_CVR_reg(const void *const hw, hri_arm_sysctrl_syst_cvr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SYST_CVR_reg(const void *const hw, hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SYST_CVR_reg(const void *const hw, hri_arm_sysctrl_syst_cvr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SYST_CVR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_syst_cvr_reg_t hri_armsysctrlsysctrl_read_SYST_CVR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SYST_CVR.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ISER_SETENA_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg |= ARM_SYSCTRL_NVIC_ISER_SETENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_iser_reg_t
hri_armsysctrlsysctrl_get_NVIC_ISER_SETENA_bf(const void *const hw, hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISER.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ISER_SETENA(mask)) >> ARM_SYSCTRL_NVIC_ISER_SETENA_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ISER_SETENA_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_iser_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_ISER.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_ISER_SETENA_Msk;
	tmp |= ARM_SYSCTRL_NVIC_ISER_SETENA(data);
	((ArmSysctrl *)hw)->NVIC_ISER.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ISER_SETENA_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg &= ~ARM_SYSCTRL_NVIC_ISER_SETENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ISER_SETENA_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg ^= ARM_SYSCTRL_NVIC_ISER_SETENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_iser_reg_t hri_armsysctrlsysctrl_read_NVIC_ISER_SETENA_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISER.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ISER_SETENA_Msk) >> ARM_SYSCTRL_NVIC_ISER_SETENA_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ISER_reg(const void *const hw, hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_iser_reg_t
hri_armsysctrlsysctrl_get_NVIC_ISER_reg(const void *const hw, hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISER.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ISER_reg(const void *const hw, hri_arm_sysctrl_nvic_iser_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ISER_reg(const void *const hw, hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ISER_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_iser_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISER.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_iser_reg_t hri_armsysctrlsysctrl_read_NVIC_ISER_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_ISER.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ICER_CLRENA_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg |= ARM_SYSCTRL_NVIC_ICER_CLRENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icer_reg_t
hri_armsysctrlsysctrl_get_NVIC_ICER_CLRENA_bf(const void *const hw, hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICER.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ICER_CLRENA(mask)) >> ARM_SYSCTRL_NVIC_ICER_CLRENA_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ICER_CLRENA_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_icer_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_ICER.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_ICER_CLRENA_Msk;
	tmp |= ARM_SYSCTRL_NVIC_ICER_CLRENA(data);
	((ArmSysctrl *)hw)->NVIC_ICER.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ICER_CLRENA_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg &= ~ARM_SYSCTRL_NVIC_ICER_CLRENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ICER_CLRENA_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg ^= ARM_SYSCTRL_NVIC_ICER_CLRENA(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icer_reg_t hri_armsysctrlsysctrl_read_NVIC_ICER_CLRENA_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICER.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ICER_CLRENA_Msk) >> ARM_SYSCTRL_NVIC_ICER_CLRENA_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ICER_reg(const void *const hw, hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icer_reg_t
hri_armsysctrlsysctrl_get_NVIC_ICER_reg(const void *const hw, hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICER.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ICER_reg(const void *const hw, hri_arm_sysctrl_nvic_icer_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ICER_reg(const void *const hw, hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ICER_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_icer_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICER.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icer_reg_t hri_armsysctrlsysctrl_read_NVIC_ICER_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_ICER.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ISPR_SETPEND_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg |= ARM_SYSCTRL_NVIC_ISPR_SETPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ispr_reg_t
hri_armsysctrlsysctrl_get_NVIC_ISPR_SETPEND_bf(const void *const hw, hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISPR.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ISPR_SETPEND(mask)) >> ARM_SYSCTRL_NVIC_ISPR_SETPEND_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ISPR_SETPEND_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ispr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_ISPR.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_ISPR_SETPEND_Msk;
	tmp |= ARM_SYSCTRL_NVIC_ISPR_SETPEND(data);
	((ArmSysctrl *)hw)->NVIC_ISPR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ISPR_SETPEND_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg &= ~ARM_SYSCTRL_NVIC_ISPR_SETPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ISPR_SETPEND_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg ^= ARM_SYSCTRL_NVIC_ISPR_SETPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ispr_reg_t hri_armsysctrlsysctrl_read_NVIC_ISPR_SETPEND_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISPR.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ISPR_SETPEND_Msk) >> ARM_SYSCTRL_NVIC_ISPR_SETPEND_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ISPR_reg(const void *const hw, hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ispr_reg_t
hri_armsysctrlsysctrl_get_NVIC_ISPR_reg(const void *const hw, hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ISPR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ISPR_reg(const void *const hw, hri_arm_sysctrl_nvic_ispr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ISPR_reg(const void *const hw, hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ISPR_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ispr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ISPR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ispr_reg_t hri_armsysctrlsysctrl_read_NVIC_ISPR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_ISPR.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ICPR_CLRPEND_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg |= ARM_SYSCTRL_NVIC_ICPR_CLRPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icpr_reg_t
hri_armsysctrlsysctrl_get_NVIC_ICPR_CLRPEND_bf(const void *const hw, hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICPR.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ICPR_CLRPEND(mask)) >> ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ICPR_CLRPEND_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_icpr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_ICPR.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Msk;
	tmp |= ARM_SYSCTRL_NVIC_ICPR_CLRPEND(data);
	((ArmSysctrl *)hw)->NVIC_ICPR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ICPR_CLRPEND_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg &= ~ARM_SYSCTRL_NVIC_ICPR_CLRPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ICPR_CLRPEND_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg ^= ARM_SYSCTRL_NVIC_ICPR_CLRPEND(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icpr_reg_t hri_armsysctrlsysctrl_read_NVIC_ICPR_CLRPEND_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICPR.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Msk) >> ARM_SYSCTRL_NVIC_ICPR_CLRPEND_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_ICPR_reg(const void *const hw, hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icpr_reg_t
hri_armsysctrlsysctrl_get_NVIC_ICPR_reg(const void *const hw, hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_ICPR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_ICPR_reg(const void *const hw, hri_arm_sysctrl_nvic_icpr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_ICPR_reg(const void *const hw, hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_ICPR_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_icpr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_ICPR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_icpr_reg_t hri_armsysctrlsysctrl_read_NVIC_ICPR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_ICPR.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR0_PRI_N0_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg |= ARM_SYSCTRL_NVIC_IPR0_PRI_N0(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR0_PRI_N0_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N0(mask)) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR0_PRI_N0_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR0_PRI_N0(data);
	((ArmSysctrl *)hw)->NVIC_IPR0.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR0_PRI_N0_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N0(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR0_PRI_N0_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg ^= ARM_SYSCTRL_NVIC_IPR0_PRI_N0(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR0_PRI_N0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Msk) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N0_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR0_PRI_N1_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg |= ARM_SYSCTRL_NVIC_IPR0_PRI_N1(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR0_PRI_N1_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N1(mask)) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR0_PRI_N1_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR0_PRI_N1(data);
	((ArmSysctrl *)hw)->NVIC_IPR0.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR0_PRI_N1_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N1(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR0_PRI_N1_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg ^= ARM_SYSCTRL_NVIC_IPR0_PRI_N1(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR0_PRI_N1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Msk) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N1_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR0_PRI_N2_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg |= ARM_SYSCTRL_NVIC_IPR0_PRI_N2(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR0_PRI_N2_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N2(mask)) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR0_PRI_N2_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR0_PRI_N2(data);
	((ArmSysctrl *)hw)->NVIC_IPR0.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR0_PRI_N2_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N2(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR0_PRI_N2_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg ^= ARM_SYSCTRL_NVIC_IPR0_PRI_N2(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR0_PRI_N2_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Msk) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N2_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR0_PRI_N3_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg |= ARM_SYSCTRL_NVIC_IPR0_PRI_N3(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR0_PRI_N3_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N3(mask)) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR0_PRI_N3_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR0_PRI_N3(data);
	((ArmSysctrl *)hw)->NVIC_IPR0.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR0_PRI_N3_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg &= ~ARM_SYSCTRL_NVIC_IPR0_PRI_N3(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR0_PRI_N3_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg ^= ARM_SYSCTRL_NVIC_IPR0_PRI_N3(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR0_PRI_N3_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Msk) >> ARM_SYSCTRL_NVIC_IPR0_PRI_N3_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR0_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR0_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR0_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR0_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR0_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr0_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR0.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr0_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR0_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR0.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR1_PRI_N4_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg |= ARM_SYSCTRL_NVIC_IPR1_PRI_N4(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR1_PRI_N4_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N4(mask)) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR1_PRI_N4_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR1_PRI_N4(data);
	((ArmSysctrl *)hw)->NVIC_IPR1.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR1_PRI_N4_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N4(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR1_PRI_N4_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg ^= ARM_SYSCTRL_NVIC_IPR1_PRI_N4(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR1_PRI_N4_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Msk) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N4_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR1_PRI_N5_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg |= ARM_SYSCTRL_NVIC_IPR1_PRI_N5(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR1_PRI_N5_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N5(mask)) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR1_PRI_N5_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR1_PRI_N5(data);
	((ArmSysctrl *)hw)->NVIC_IPR1.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR1_PRI_N5_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N5(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR1_PRI_N5_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg ^= ARM_SYSCTRL_NVIC_IPR1_PRI_N5(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR1_PRI_N5_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Msk) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N5_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR1_PRI_N6_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg |= ARM_SYSCTRL_NVIC_IPR1_PRI_N6(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR1_PRI_N6_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N6(mask)) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR1_PRI_N6_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR1_PRI_N6(data);
	((ArmSysctrl *)hw)->NVIC_IPR1.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR1_PRI_N6_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N6(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR1_PRI_N6_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg ^= ARM_SYSCTRL_NVIC_IPR1_PRI_N6(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR1_PRI_N6_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Msk) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N6_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR1_PRI_N7_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg |= ARM_SYSCTRL_NVIC_IPR1_PRI_N7(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR1_PRI_N7_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N7(mask)) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR1_PRI_N7_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR1_PRI_N7(data);
	((ArmSysctrl *)hw)->NVIC_IPR1.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR1_PRI_N7_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg &= ~ARM_SYSCTRL_NVIC_IPR1_PRI_N7(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR1_PRI_N7_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg ^= ARM_SYSCTRL_NVIC_IPR1_PRI_N7(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR1_PRI_N7_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Msk) >> ARM_SYSCTRL_NVIC_IPR1_PRI_N7_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR1_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR1_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR1_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR1_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR1_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr1_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR1.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr1_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR1_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR1.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR2_PRI_N8_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg |= ARM_SYSCTRL_NVIC_IPR2_PRI_N8(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR2_PRI_N8_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N8(mask)) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR2_PRI_N8_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr2_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR2_PRI_N8(data);
	((ArmSysctrl *)hw)->NVIC_IPR2.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR2_PRI_N8_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N8(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR2_PRI_N8_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg ^= ARM_SYSCTRL_NVIC_IPR2_PRI_N8(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR2_PRI_N8_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Msk) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N8_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR2_PRI_N9_bf(const void *const               hw,
                                                                 hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg |= ARM_SYSCTRL_NVIC_IPR2_PRI_N9(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR2_PRI_N9_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N9(mask)) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR2_PRI_N9_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr2_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR2_PRI_N9(data);
	((ArmSysctrl *)hw)->NVIC_IPR2.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR2_PRI_N9_bf(const void *const               hw,
                                                                   hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N9(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR2_PRI_N9_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg ^= ARM_SYSCTRL_NVIC_IPR2_PRI_N9(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR2_PRI_N9_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Msk) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N9_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR2_PRI_N10_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg |= ARM_SYSCTRL_NVIC_IPR2_PRI_N10(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR2_PRI_N10_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N10(mask)) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR2_PRI_N10_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR2_PRI_N10(data);
	((ArmSysctrl *)hw)->NVIC_IPR2.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR2_PRI_N10_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N10(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR2_PRI_N10_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg ^= ARM_SYSCTRL_NVIC_IPR2_PRI_N10(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR2_PRI_N10_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Msk) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N10_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR2_PRI_N11_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg |= ARM_SYSCTRL_NVIC_IPR2_PRI_N11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR2_PRI_N11_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N11(mask)) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR2_PRI_N11_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR2_PRI_N11(data);
	((ArmSysctrl *)hw)->NVIC_IPR2.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR2_PRI_N11_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg &= ~ARM_SYSCTRL_NVIC_IPR2_PRI_N11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR2_PRI_N11_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg ^= ARM_SYSCTRL_NVIC_IPR2_PRI_N11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR2_PRI_N11_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Msk) >> ARM_SYSCTRL_NVIC_IPR2_PRI_N11_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR2_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR2_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR2_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR2_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR2_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR2.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr2_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR2_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR2.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR3_PRI_N12_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg |= ARM_SYSCTRL_NVIC_IPR3_PRI_N12(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR3_PRI_N12_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N12(mask)) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR3_PRI_N12_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR3_PRI_N12(data);
	((ArmSysctrl *)hw)->NVIC_IPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR3_PRI_N12_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N12(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR3_PRI_N12_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg ^= ARM_SYSCTRL_NVIC_IPR3_PRI_N12(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR3_PRI_N12_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Msk) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N12_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR3_PRI_N13_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg |= ARM_SYSCTRL_NVIC_IPR3_PRI_N13(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR3_PRI_N13_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N13(mask)) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR3_PRI_N13_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR3_PRI_N13(data);
	((ArmSysctrl *)hw)->NVIC_IPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR3_PRI_N13_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N13(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR3_PRI_N13_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg ^= ARM_SYSCTRL_NVIC_IPR3_PRI_N13(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR3_PRI_N13_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Msk) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N13_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR3_PRI_N14_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg |= ARM_SYSCTRL_NVIC_IPR3_PRI_N14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR3_PRI_N14_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N14(mask)) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR3_PRI_N14_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR3_PRI_N14(data);
	((ArmSysctrl *)hw)->NVIC_IPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR3_PRI_N14_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR3_PRI_N14_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg ^= ARM_SYSCTRL_NVIC_IPR3_PRI_N14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR3_PRI_N14_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Msk) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N14_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR3_PRI_N15_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg |= ARM_SYSCTRL_NVIC_IPR3_PRI_N15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR3_PRI_N15_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N15(mask)) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR3_PRI_N15_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR3_PRI_N15(data);
	((ArmSysctrl *)hw)->NVIC_IPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR3_PRI_N15_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg &= ~ARM_SYSCTRL_NVIC_IPR3_PRI_N15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR3_PRI_N15_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg ^= ARM_SYSCTRL_NVIC_IPR3_PRI_N15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR3_PRI_N15_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Msk) >> ARM_SYSCTRL_NVIC_IPR3_PRI_N15_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR3_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR3_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR3_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR3_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR3_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR3.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr3_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR3_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR3.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR4_PRI_N16_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg |= ARM_SYSCTRL_NVIC_IPR4_PRI_N16(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR4_PRI_N16_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N16(mask)) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR4_PRI_N16_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR4_PRI_N16(data);
	((ArmSysctrl *)hw)->NVIC_IPR4.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR4_PRI_N16_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N16(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR4_PRI_N16_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg ^= ARM_SYSCTRL_NVIC_IPR4_PRI_N16(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR4_PRI_N16_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Msk) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N16_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR4_PRI_N17_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg |= ARM_SYSCTRL_NVIC_IPR4_PRI_N17(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR4_PRI_N17_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N17(mask)) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR4_PRI_N17_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR4_PRI_N17(data);
	((ArmSysctrl *)hw)->NVIC_IPR4.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR4_PRI_N17_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N17(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR4_PRI_N17_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg ^= ARM_SYSCTRL_NVIC_IPR4_PRI_N17(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR4_PRI_N17_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Msk) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N17_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR4_PRI_N18_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg |= ARM_SYSCTRL_NVIC_IPR4_PRI_N18(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR4_PRI_N18_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N18(mask)) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR4_PRI_N18_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR4_PRI_N18(data);
	((ArmSysctrl *)hw)->NVIC_IPR4.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR4_PRI_N18_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N18(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR4_PRI_N18_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg ^= ARM_SYSCTRL_NVIC_IPR4_PRI_N18(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR4_PRI_N18_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Msk) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N18_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR4_PRI_N19_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg |= ARM_SYSCTRL_NVIC_IPR4_PRI_N19(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR4_PRI_N19_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N19(mask)) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR4_PRI_N19_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR4_PRI_N19(data);
	((ArmSysctrl *)hw)->NVIC_IPR4.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR4_PRI_N19_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg &= ~ARM_SYSCTRL_NVIC_IPR4_PRI_N19(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR4_PRI_N19_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg ^= ARM_SYSCTRL_NVIC_IPR4_PRI_N19(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR4_PRI_N19_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Msk) >> ARM_SYSCTRL_NVIC_IPR4_PRI_N19_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR4_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR4_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR4_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR4_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR4_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr4_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR4.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr4_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR4_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR4.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR5_PRI_N20_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg |= ARM_SYSCTRL_NVIC_IPR5_PRI_N20(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR5_PRI_N20_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N20(mask)) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR5_PRI_N20_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR5_PRI_N20(data);
	((ArmSysctrl *)hw)->NVIC_IPR5.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR5_PRI_N20_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N20(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR5_PRI_N20_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg ^= ARM_SYSCTRL_NVIC_IPR5_PRI_N20(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR5_PRI_N20_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Msk) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N20_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR5_PRI_N21_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg |= ARM_SYSCTRL_NVIC_IPR5_PRI_N21(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR5_PRI_N21_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N21(mask)) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR5_PRI_N21_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR5_PRI_N21(data);
	((ArmSysctrl *)hw)->NVIC_IPR5.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR5_PRI_N21_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N21(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR5_PRI_N21_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg ^= ARM_SYSCTRL_NVIC_IPR5_PRI_N21(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR5_PRI_N21_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Msk) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N21_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR5_PRI_N22_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg |= ARM_SYSCTRL_NVIC_IPR5_PRI_N22(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR5_PRI_N22_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N22(mask)) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR5_PRI_N22_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR5_PRI_N22(data);
	((ArmSysctrl *)hw)->NVIC_IPR5.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR5_PRI_N22_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N22(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR5_PRI_N22_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg ^= ARM_SYSCTRL_NVIC_IPR5_PRI_N22(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR5_PRI_N22_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Msk) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N22_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR5_PRI_N23_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg |= ARM_SYSCTRL_NVIC_IPR5_PRI_N23(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR5_PRI_N23_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N23(mask)) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR5_PRI_N23_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR5_PRI_N23(data);
	((ArmSysctrl *)hw)->NVIC_IPR5.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR5_PRI_N23_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg &= ~ARM_SYSCTRL_NVIC_IPR5_PRI_N23(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR5_PRI_N23_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg ^= ARM_SYSCTRL_NVIC_IPR5_PRI_N23(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR5_PRI_N23_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Msk) >> ARM_SYSCTRL_NVIC_IPR5_PRI_N23_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR5_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR5_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR5_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR5_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR5_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr5_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR5.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr5_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR5_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR5.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR6_PRI_N24_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg |= ARM_SYSCTRL_NVIC_IPR6_PRI_N24(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR6_PRI_N24_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N24(mask)) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR6_PRI_N24_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR6_PRI_N24(data);
	((ArmSysctrl *)hw)->NVIC_IPR6.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR6_PRI_N24_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N24(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR6_PRI_N24_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg ^= ARM_SYSCTRL_NVIC_IPR6_PRI_N24(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR6_PRI_N24_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Msk) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N24_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR6_PRI_N25_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg |= ARM_SYSCTRL_NVIC_IPR6_PRI_N25(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR6_PRI_N25_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N25(mask)) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR6_PRI_N25_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR6_PRI_N25(data);
	((ArmSysctrl *)hw)->NVIC_IPR6.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR6_PRI_N25_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N25(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR6_PRI_N25_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg ^= ARM_SYSCTRL_NVIC_IPR6_PRI_N25(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR6_PRI_N25_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Msk) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N25_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR6_PRI_N26_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg |= ARM_SYSCTRL_NVIC_IPR6_PRI_N26(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR6_PRI_N26_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N26(mask)) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR6_PRI_N26_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR6_PRI_N26(data);
	((ArmSysctrl *)hw)->NVIC_IPR6.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR6_PRI_N26_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N26(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR6_PRI_N26_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg ^= ARM_SYSCTRL_NVIC_IPR6_PRI_N26(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR6_PRI_N26_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Msk) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N26_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR6_PRI_N27_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg |= ARM_SYSCTRL_NVIC_IPR6_PRI_N27(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR6_PRI_N27_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N27(mask)) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR6_PRI_N27_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR6_PRI_N27(data);
	((ArmSysctrl *)hw)->NVIC_IPR6.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR6_PRI_N27_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg &= ~ARM_SYSCTRL_NVIC_IPR6_PRI_N27(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR6_PRI_N27_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg ^= ARM_SYSCTRL_NVIC_IPR6_PRI_N27(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR6_PRI_N27_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Msk) >> ARM_SYSCTRL_NVIC_IPR6_PRI_N27_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR6_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR6_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR6_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR6_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR6_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr6_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR6.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr6_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR6_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR6.reg;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR7_PRI_N28_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg |= ARM_SYSCTRL_NVIC_IPR7_PRI_N28(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR7_PRI_N28_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N28(mask)) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR7_PRI_N28_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR7_PRI_N28(data);
	((ArmSysctrl *)hw)->NVIC_IPR7.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR7_PRI_N28_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N28(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR7_PRI_N28_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg ^= ARM_SYSCTRL_NVIC_IPR7_PRI_N28(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR7_PRI_N28_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Msk) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N28_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR7_PRI_N29_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg |= ARM_SYSCTRL_NVIC_IPR7_PRI_N29(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR7_PRI_N29_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N29(mask)) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR7_PRI_N29_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR7_PRI_N29(data);
	((ArmSysctrl *)hw)->NVIC_IPR7.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR7_PRI_N29_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N29(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR7_PRI_N29_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg ^= ARM_SYSCTRL_NVIC_IPR7_PRI_N29(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR7_PRI_N29_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Msk) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N29_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR7_PRI_N30_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg |= ARM_SYSCTRL_NVIC_IPR7_PRI_N30(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR7_PRI_N30_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N30(mask)) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR7_PRI_N30_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR7_PRI_N30(data);
	((ArmSysctrl *)hw)->NVIC_IPR7.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR7_PRI_N30_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N30(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR7_PRI_N30_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg ^= ARM_SYSCTRL_NVIC_IPR7_PRI_N30(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR7_PRI_N30_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Msk) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N30_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR7_PRI_N31_bf(const void *const               hw,
                                                                  hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg |= ARM_SYSCTRL_NVIC_IPR7_PRI_N31(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR7_PRI_N31_bf(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N31(mask)) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR7_PRI_N31_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Msk;
	tmp |= ARM_SYSCTRL_NVIC_IPR7_PRI_N31(data);
	((ArmSysctrl *)hw)->NVIC_IPR7.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR7_PRI_N31_bf(const void *const               hw,
                                                                    hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg &= ~ARM_SYSCTRL_NVIC_IPR7_PRI_N31(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR7_PRI_N31_bf(const void *const               hw,
                                                                     hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg ^= ARM_SYSCTRL_NVIC_IPR7_PRI_N31(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR7_PRI_N31_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp = (tmp & ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Msk) >> ARM_SYSCTRL_NVIC_IPR7_PRI_N31_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_NVIC_IPR7_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t
hri_armsysctrlsysctrl_get_NVIC_IPR7_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_NVIC_IPR7_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_NVIC_IPR7_reg(const void *const hw, hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_NVIC_IPR7_reg(const void *const               hw,
                                                              hri_arm_sysctrl_nvic_ipr7_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->NVIC_IPR7.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_nvic_ipr7_reg_t hri_armsysctrlsysctrl_read_NVIC_IPR7_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->NVIC_IPR7.reg;
}

static inline void hri_armsysctrlsysctrl_set_SCR_SLEEPONEXIT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg |= ARM_SYSCTRL_SCR_SLEEPONEXIT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SCR_SLEEPONEXIT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp = (tmp & ARM_SYSCTRL_SCR_SLEEPONEXIT_Msk) >> ARM_SYSCTRL_SCR_SLEEPONEXIT_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SCR_SLEEPONEXIT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp &= ~ARM_SYSCTRL_SCR_SLEEPONEXIT_Msk;
	tmp |= value << ARM_SYSCTRL_SCR_SLEEPONEXIT_Pos;
	((ArmSysctrl *)hw)->SCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SCR_SLEEPONEXIT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg &= ~ARM_SYSCTRL_SCR_SLEEPONEXIT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SCR_SLEEPONEXIT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg ^= ARM_SYSCTRL_SCR_SLEEPONEXIT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SCR_SLEEPDEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg |= ARM_SYSCTRL_SCR_SLEEPDEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SCR_SLEEPDEEP_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp = (tmp & ARM_SYSCTRL_SCR_SLEEPDEEP_Msk) >> ARM_SYSCTRL_SCR_SLEEPDEEP_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SCR_SLEEPDEEP_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp &= ~ARM_SYSCTRL_SCR_SLEEPDEEP_Msk;
	tmp |= value << ARM_SYSCTRL_SCR_SLEEPDEEP_Pos;
	((ArmSysctrl *)hw)->SCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SCR_SLEEPDEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg &= ~ARM_SYSCTRL_SCR_SLEEPDEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SCR_SLEEPDEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg ^= ARM_SYSCTRL_SCR_SLEEPDEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SCR_SEVONPEND_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg |= ARM_SYSCTRL_SCR_SEVONPEND_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SCR_SEVONPEND_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp = (tmp & ARM_SYSCTRL_SCR_SEVONPEND_Msk) >> ARM_SYSCTRL_SCR_SEVONPEND_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SCR_SEVONPEND_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp &= ~ARM_SYSCTRL_SCR_SEVONPEND_Msk;
	tmp |= value << ARM_SYSCTRL_SCR_SEVONPEND_Pos;
	((ArmSysctrl *)hw)->SCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SCR_SEVONPEND_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg &= ~ARM_SYSCTRL_SCR_SEVONPEND_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SCR_SEVONPEND_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg ^= ARM_SYSCTRL_SCR_SEVONPEND_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SCR_reg(const void *const hw, hri_arm_sysctrl_scr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_scr_reg_t hri_armsysctrlsysctrl_get_SCR_reg(const void *const         hw,
                                                                          hri_arm_sysctrl_scr_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SCR_reg(const void *const hw, hri_arm_sysctrl_scr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SCR_reg(const void *const hw, hri_arm_sysctrl_scr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SCR_reg(const void *const hw, hri_arm_sysctrl_scr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SCR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_scr_reg_t hri_armsysctrlsysctrl_read_SCR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCR.reg;
}

static inline void hri_armsysctrlsysctrl_set_SHPR2_PRI_11_bf(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg |= ARM_SYSCTRL_SHPR2_PRI_11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr2_reg_t hri_armsysctrlsysctrl_get_SHPR2_PRI_11_bf(const void *const           hw,
                                                                                    hri_arm_sysctrl_shpr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR2_PRI_11(mask)) >> ARM_SYSCTRL_SHPR2_PRI_11_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHPR2_PRI_11_bf(const void *const hw, hri_arm_sysctrl_shpr2_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SHPR2.reg;
	tmp &= ~ARM_SYSCTRL_SHPR2_PRI_11_Msk;
	tmp |= ARM_SYSCTRL_SHPR2_PRI_11(data);
	((ArmSysctrl *)hw)->SHPR2.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHPR2_PRI_11_bf(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg &= ~ARM_SYSCTRL_SHPR2_PRI_11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHPR2_PRI_11_bf(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg ^= ARM_SYSCTRL_SHPR2_PRI_11(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr2_reg_t hri_armsysctrlsysctrl_read_SHPR2_PRI_11_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR2.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR2_PRI_11_Msk) >> ARM_SYSCTRL_SHPR2_PRI_11_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_SHPR2_reg(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr2_reg_t hri_armsysctrlsysctrl_get_SHPR2_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_shpr2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHPR2_reg(const void *const hw, hri_arm_sysctrl_shpr2_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHPR2_reg(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHPR2_reg(const void *const hw, hri_arm_sysctrl_shpr2_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR2.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr2_reg_t hri_armsysctrlsysctrl_read_SHPR2_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SHPR2.reg;
}

static inline void hri_armsysctrlsysctrl_set_SHPR3_PRI_14_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg |= ARM_SYSCTRL_SHPR3_PRI_14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_get_SHPR3_PRI_14_bf(const void *const           hw,
                                                                                    hri_arm_sysctrl_shpr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR3_PRI_14(mask)) >> ARM_SYSCTRL_SHPR3_PRI_14_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHPR3_PRI_14_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp &= ~ARM_SYSCTRL_SHPR3_PRI_14_Msk;
	tmp |= ARM_SYSCTRL_SHPR3_PRI_14(data);
	((ArmSysctrl *)hw)->SHPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHPR3_PRI_14_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg &= ~ARM_SYSCTRL_SHPR3_PRI_14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHPR3_PRI_14_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg ^= ARM_SYSCTRL_SHPR3_PRI_14(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_read_SHPR3_PRI_14_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR3_PRI_14_Msk) >> ARM_SYSCTRL_SHPR3_PRI_14_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_SHPR3_PRI_15_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg |= ARM_SYSCTRL_SHPR3_PRI_15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_get_SHPR3_PRI_15_bf(const void *const           hw,
                                                                                    hri_arm_sysctrl_shpr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR3_PRI_15(mask)) >> ARM_SYSCTRL_SHPR3_PRI_15_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHPR3_PRI_15_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp &= ~ARM_SYSCTRL_SHPR3_PRI_15_Msk;
	tmp |= ARM_SYSCTRL_SHPR3_PRI_15(data);
	((ArmSysctrl *)hw)->SHPR3.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHPR3_PRI_15_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg &= ~ARM_SYSCTRL_SHPR3_PRI_15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHPR3_PRI_15_bf(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg ^= ARM_SYSCTRL_SHPR3_PRI_15(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_read_SHPR3_PRI_15_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp = (tmp & ARM_SYSCTRL_SHPR3_PRI_15_Msk) >> ARM_SYSCTRL_SHPR3_PRI_15_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_SHPR3_reg(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_get_SHPR3_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_shpr3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHPR3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHPR3_reg(const void *const hw, hri_arm_sysctrl_shpr3_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHPR3_reg(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHPR3_reg(const void *const hw, hri_arm_sysctrl_shpr3_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHPR3.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shpr3_reg_t hri_armsysctrlsysctrl_read_SHPR3_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SHPR3.reg;
}

static inline void hri_armsysctrlsysctrl_set_SHCSR_SVCALLPENDED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg |= ARM_SYSCTRL_SHCSR_SVCALLPENDED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_SHCSR_SVCALLPENDED_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_SHCSR_SVCALLPENDED_Msk) >> ARM_SYSCTRL_SHCSR_SVCALLPENDED_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHCSR_SVCALLPENDED_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->SHCSR.reg;
	tmp &= ~ARM_SYSCTRL_SHCSR_SVCALLPENDED_Msk;
	tmp |= value << ARM_SYSCTRL_SHCSR_SVCALLPENDED_Pos;
	((ArmSysctrl *)hw)->SHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHCSR_SVCALLPENDED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg &= ~ARM_SYSCTRL_SHCSR_SVCALLPENDED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHCSR_SVCALLPENDED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg ^= ARM_SYSCTRL_SHCSR_SVCALLPENDED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_SHCSR_reg(const void *const hw, hri_arm_sysctrl_shcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shcsr_reg_t hri_armsysctrlsysctrl_get_SHCSR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_shcsr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ArmSysctrl *)hw)->SHCSR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_SHCSR_reg(const void *const hw, hri_arm_sysctrl_shcsr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_SHCSR_reg(const void *const hw, hri_arm_sysctrl_shcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_SHCSR_reg(const void *const hw, hri_arm_sysctrl_shcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->SHCSR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_shcsr_reg_t hri_armsysctrlsysctrl_read_SHCSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SHCSR.reg;
}

static inline void hri_armsysctrlsysctrl_set_DFSR_HALTED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= ARM_SYSCTRL_DFSR_HALTED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DFSR_HALTED_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DFSR_HALTED_Msk) >> ARM_SYSCTRL_DFSR_HALTED_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_HALTED_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= ~ARM_SYSCTRL_DFSR_HALTED_Msk;
	tmp |= value << ARM_SYSCTRL_DFSR_HALTED_Pos;
	((ArmSysctrl *)hw)->DFSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_HALTED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~ARM_SYSCTRL_DFSR_HALTED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_HALTED_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= ARM_SYSCTRL_DFSR_HALTED_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DFSR_BKPT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= ARM_SYSCTRL_DFSR_BKPT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DFSR_BKPT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DFSR_BKPT_Msk) >> ARM_SYSCTRL_DFSR_BKPT_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_BKPT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= ~ARM_SYSCTRL_DFSR_BKPT_Msk;
	tmp |= value << ARM_SYSCTRL_DFSR_BKPT_Pos;
	((ArmSysctrl *)hw)->DFSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_BKPT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~ARM_SYSCTRL_DFSR_BKPT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_BKPT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= ARM_SYSCTRL_DFSR_BKPT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DFSR_DWTTRAP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= ARM_SYSCTRL_DFSR_DWTTRAP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DFSR_DWTTRAP_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DFSR_DWTTRAP_Msk) >> ARM_SYSCTRL_DFSR_DWTTRAP_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_DWTTRAP_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= ~ARM_SYSCTRL_DFSR_DWTTRAP_Msk;
	tmp |= value << ARM_SYSCTRL_DFSR_DWTTRAP_Pos;
	((ArmSysctrl *)hw)->DFSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_DWTTRAP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~ARM_SYSCTRL_DFSR_DWTTRAP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_DWTTRAP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= ARM_SYSCTRL_DFSR_DWTTRAP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DFSR_VCATCH_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= ARM_SYSCTRL_DFSR_VCATCH_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DFSR_VCATCH_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DFSR_VCATCH_Msk) >> ARM_SYSCTRL_DFSR_VCATCH_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_VCATCH_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= ~ARM_SYSCTRL_DFSR_VCATCH_Msk;
	tmp |= value << ARM_SYSCTRL_DFSR_VCATCH_Pos;
	((ArmSysctrl *)hw)->DFSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_VCATCH_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~ARM_SYSCTRL_DFSR_VCATCH_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_VCATCH_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= ARM_SYSCTRL_DFSR_VCATCH_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DFSR_EXTERNAL_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= ARM_SYSCTRL_DFSR_EXTERNAL_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DFSR_EXTERNAL_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DFSR_EXTERNAL_Msk) >> ARM_SYSCTRL_DFSR_EXTERNAL_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_EXTERNAL_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= ~ARM_SYSCTRL_DFSR_EXTERNAL_Msk;
	tmp |= value << ARM_SYSCTRL_DFSR_EXTERNAL_Pos;
	((ArmSysctrl *)hw)->DFSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_EXTERNAL_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~ARM_SYSCTRL_DFSR_EXTERNAL_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_EXTERNAL_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= ARM_SYSCTRL_DFSR_EXTERNAL_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DFSR_reg(const void *const hw, hri_arm_sysctrl_dfsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dfsr_reg_t hri_armsysctrlsysctrl_get_DFSR_reg(const void *const          hw,
                                                                            hri_arm_sysctrl_dfsr_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->DFSR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DFSR_reg(const void *const hw, hri_arm_sysctrl_dfsr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DFSR_reg(const void *const hw, hri_arm_sysctrl_dfsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DFSR_reg(const void *const hw, hri_arm_sysctrl_dfsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DFSR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dfsr_reg_t hri_armsysctrlsysctrl_read_DFSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->DFSR.reg;
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_C_DEBUGEN_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_C_DEBUGEN_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_C_DEBUGEN_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_C_DEBUGEN_Msk) >> ARM_SYSCTRL_DHCSR_C_DEBUGEN_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_C_DEBUGEN_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_C_DEBUGEN_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_C_DEBUGEN_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_C_DEBUGEN_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_C_DEBUGEN_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_C_DEBUGEN_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_C_DEBUGEN_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_C_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_C_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_C_HALT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_C_HALT_Msk) >> ARM_SYSCTRL_DHCSR_C_HALT_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_C_HALT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_C_HALT_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_C_HALT_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_C_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_C_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_C_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_C_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_C_STEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_C_STEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_C_STEP_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_C_STEP_Msk) >> ARM_SYSCTRL_DHCSR_C_STEP_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_C_STEP_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_C_STEP_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_C_STEP_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_C_STEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_C_STEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_C_STEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_C_STEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_C_MASKINTS_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_C_MASKINTS_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_C_MASKINTS_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_C_MASKINTS_Msk) >> ARM_SYSCTRL_DHCSR_C_MASKINTS_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_C_MASKINTS_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_C_MASKINTS_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_C_MASKINTS_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_C_MASKINTS_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_C_MASKINTS_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_C_MASKINTS_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_C_MASKINTS_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_REGRDY_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_REGRDY_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_REGRDY_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_REGRDY_Msk) >> ARM_SYSCTRL_DHCSR_S_REGRDY_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_REGRDY_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_REGRDY_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_REGRDY_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_REGRDY_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_REGRDY_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_REGRDY_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_REGRDY_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_HALT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_HALT_Msk) >> ARM_SYSCTRL_DHCSR_S_HALT_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_HALT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_HALT_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_HALT_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_HALT_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_HALT_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_SLEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_SLEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_SLEEP_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_SLEEP_Msk) >> ARM_SYSCTRL_DHCSR_S_SLEEP_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_SLEEP_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_SLEEP_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_SLEEP_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_SLEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_SLEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_SLEEP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_SLEEP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_LOCKUP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_LOCKUP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_LOCKUP_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_LOCKUP_Msk) >> ARM_SYSCTRL_DHCSR_S_LOCKUP_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_LOCKUP_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_LOCKUP_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_LOCKUP_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_LOCKUP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_LOCKUP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_LOCKUP_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_LOCKUP_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_RETIRE_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_RETIRE_ST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Msk) >> ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_RETIRE_ST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_RETIRE_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_RETIRE_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_RETIRE_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_S_RESET_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= ARM_SYSCTRL_DHCSR_S_RESET_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DHCSR_S_RESET_ST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DHCSR_S_RESET_ST_Msk) >> ARM_SYSCTRL_DHCSR_S_RESET_ST_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_S_RESET_ST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= ~ARM_SYSCTRL_DHCSR_S_RESET_ST_Msk;
	tmp |= value << ARM_SYSCTRL_DHCSR_S_RESET_ST_Pos;
	((ArmSysctrl *)hw)->DHCSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_S_RESET_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~ARM_SYSCTRL_DHCSR_S_RESET_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_S_RESET_ST_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= ARM_SYSCTRL_DHCSR_S_RESET_ST_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DHCSR_reg(const void *const hw, hri_arm_sysctrl_dhcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dhcsr_reg_t hri_armsysctrlsysctrl_get_DHCSR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_dhcsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DHCSR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DHCSR_reg(const void *const hw, hri_arm_sysctrl_dhcsr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DHCSR_reg(const void *const hw, hri_arm_sysctrl_dhcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DHCSR_reg(const void *const hw, hri_arm_sysctrl_dhcsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DHCSR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dhcsr_reg_t hri_armsysctrlsysctrl_read_DHCSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->DHCSR.reg;
}

static inline void hri_armsysctrlsysctrl_set_DCRSR_REGWNR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg |= ARM_SYSCTRL_DCRSR_REGWNR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DCRSR_REGWNR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DCRSR_REGWNR_Msk) >> ARM_SYSCTRL_DCRSR_REGWNR_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DCRSR_REGWNR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp &= ~ARM_SYSCTRL_DCRSR_REGWNR_Msk;
	tmp |= value << ARM_SYSCTRL_DCRSR_REGWNR_Pos;
	((ArmSysctrl *)hw)->DCRSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DCRSR_REGWNR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg &= ~ARM_SYSCTRL_DCRSR_REGWNR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DCRSR_REGWNR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg ^= ARM_SYSCTRL_DCRSR_REGWNR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DCRSR_REGSEL_bf(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg |= ARM_SYSCTRL_DCRSR_REGSEL(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrsr_reg_t hri_armsysctrlsysctrl_get_DCRSR_REGSEL_bf(const void *const           hw,
                                                                                    hri_arm_sysctrl_dcrsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DCRSR_REGSEL(mask)) >> ARM_SYSCTRL_DCRSR_REGSEL_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DCRSR_REGSEL_bf(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp &= ~ARM_SYSCTRL_DCRSR_REGSEL_Msk;
	tmp |= ARM_SYSCTRL_DCRSR_REGSEL(data);
	((ArmSysctrl *)hw)->DCRSR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DCRSR_REGSEL_bf(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg &= ~ARM_SYSCTRL_DCRSR_REGSEL(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DCRSR_REGSEL_bf(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg ^= ARM_SYSCTRL_DCRSR_REGSEL(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrsr_reg_t hri_armsysctrlsysctrl_read_DCRSR_REGSEL_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp = (tmp & ARM_SYSCTRL_DCRSR_REGSEL_Msk) >> ARM_SYSCTRL_DCRSR_REGSEL_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_DCRSR_reg(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrsr_reg_t hri_armsysctrlsysctrl_get_DCRSR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_dcrsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRSR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DCRSR_reg(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DCRSR_reg(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DCRSR_reg(const void *const hw, hri_arm_sysctrl_dcrsr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRSR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrsr_reg_t hri_armsysctrlsysctrl_read_DCRSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->DCRSR.reg;
}

static inline void hri_armsysctrlsysctrl_set_DCRDR_DBGTMP_bf(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg |= ARM_SYSCTRL_DCRDR_DBGTMP(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrdr_reg_t hri_armsysctrlsysctrl_get_DCRDR_DBGTMP_bf(const void *const           hw,
                                                                                    hri_arm_sysctrl_dcrdr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRDR.reg;
	tmp = (tmp & ARM_SYSCTRL_DCRDR_DBGTMP(mask)) >> ARM_SYSCTRL_DCRDR_DBGTMP_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DCRDR_DBGTMP_bf(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t data)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DCRDR.reg;
	tmp &= ~ARM_SYSCTRL_DCRDR_DBGTMP_Msk;
	tmp |= ARM_SYSCTRL_DCRDR_DBGTMP(data);
	((ArmSysctrl *)hw)->DCRDR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DCRDR_DBGTMP_bf(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg &= ~ARM_SYSCTRL_DCRDR_DBGTMP(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DCRDR_DBGTMP_bf(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg ^= ARM_SYSCTRL_DCRDR_DBGTMP(mask);
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrdr_reg_t hri_armsysctrlsysctrl_read_DCRDR_DBGTMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRDR.reg;
	tmp = (tmp & ARM_SYSCTRL_DCRDR_DBGTMP_Msk) >> ARM_SYSCTRL_DCRDR_DBGTMP_Pos;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_set_DCRDR_reg(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrdr_reg_t hri_armsysctrlsysctrl_get_DCRDR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_dcrdr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DCRDR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DCRDR_reg(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DCRDR_reg(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DCRDR_reg(const void *const hw, hri_arm_sysctrl_dcrdr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DCRDR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_dcrdr_reg_t hri_armsysctrlsysctrl_read_DCRDR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->DCRDR.reg;
}

static inline void hri_armsysctrlsysctrl_set_DEMCR_VC_CORERESET_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg |= ARM_SYSCTRL_DEMCR_VC_CORERESET_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DEMCR_VC_CORERESET_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp = (tmp & ARM_SYSCTRL_DEMCR_VC_CORERESET_Msk) >> ARM_SYSCTRL_DEMCR_VC_CORERESET_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DEMCR_VC_CORERESET_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp &= ~ARM_SYSCTRL_DEMCR_VC_CORERESET_Msk;
	tmp |= value << ARM_SYSCTRL_DEMCR_VC_CORERESET_Pos;
	((ArmSysctrl *)hw)->DEMCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DEMCR_VC_CORERESET_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg &= ~ARM_SYSCTRL_DEMCR_VC_CORERESET_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DEMCR_VC_CORERESET_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg ^= ARM_SYSCTRL_DEMCR_VC_CORERESET_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DEMCR_VC_HARDERR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg |= ARM_SYSCTRL_DEMCR_VC_HARDERR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DEMCR_VC_HARDERR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp = (tmp & ARM_SYSCTRL_DEMCR_VC_HARDERR_Msk) >> ARM_SYSCTRL_DEMCR_VC_HARDERR_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DEMCR_VC_HARDERR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp &= ~ARM_SYSCTRL_DEMCR_VC_HARDERR_Msk;
	tmp |= value << ARM_SYSCTRL_DEMCR_VC_HARDERR_Pos;
	((ArmSysctrl *)hw)->DEMCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DEMCR_VC_HARDERR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg &= ~ARM_SYSCTRL_DEMCR_VC_HARDERR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DEMCR_VC_HARDERR_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg ^= ARM_SYSCTRL_DEMCR_VC_HARDERR_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DEMCR_DWTENA_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg |= ARM_SYSCTRL_DEMCR_DWTENA_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armsysctrlsysctrl_get_DEMCR_DWTENA_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp = (tmp & ARM_SYSCTRL_DEMCR_DWTENA_Msk) >> ARM_SYSCTRL_DEMCR_DWTENA_Pos;
	return (bool)tmp;
}

static inline void hri_armsysctrlsysctrl_write_DEMCR_DWTENA_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp &= ~ARM_SYSCTRL_DEMCR_DWTENA_Msk;
	tmp |= value << ARM_SYSCTRL_DEMCR_DWTENA_Pos;
	((ArmSysctrl *)hw)->DEMCR.reg = tmp;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DEMCR_DWTENA_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg &= ~ARM_SYSCTRL_DEMCR_DWTENA_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DEMCR_DWTENA_bit(const void *const hw)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg ^= ARM_SYSCTRL_DEMCR_DWTENA_Msk;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_set_DEMCR_reg(const void *const hw, hri_arm_sysctrl_demcr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg |= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_demcr_reg_t hri_armsysctrlsysctrl_get_DEMCR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_demcr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->DEMCR.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armsysctrlsysctrl_write_DEMCR_reg(const void *const hw, hri_arm_sysctrl_demcr_reg_t data)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg = data;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_clear_DEMCR_reg(const void *const hw, hri_arm_sysctrl_demcr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg &= ~mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armsysctrlsysctrl_toggle_DEMCR_reg(const void *const hw, hri_arm_sysctrl_demcr_reg_t mask)
{
	ARM_SYSCTRL_CRITICAL_SECTION_ENTER();
	((ArmSysctrl *)hw)->DEMCR.reg ^= mask;
	ARM_SYSCTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_sysctrl_demcr_reg_t hri_armsysctrlsysctrl_read_DEMCR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->DEMCR.reg;
}

static inline hri_arm_sysctrl_actlr_reg_t hri_armsysctrlsysctrl_get_ACTLR_ACTLR_bf(const void *const           hw,
                                                                                   hri_arm_sysctrl_actlr_reg_t mask)
{
	return (((ArmSysctrl *)hw)->ACTLR.reg & ARM_SYSCTRL_ACTLR_ACTLR(mask)) >> ARM_SYSCTRL_ACTLR_ACTLR_Pos;
}

static inline hri_arm_sysctrl_actlr_reg_t hri_armsysctrlsysctrl_read_ACTLR_ACTLR_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ACTLR.reg & ARM_SYSCTRL_ACTLR_ACTLR_Msk) >> ARM_SYSCTRL_ACTLR_ACTLR_Pos;
}

static inline hri_arm_sysctrl_actlr_reg_t hri_armsysctrlsysctrl_get_ACTLR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_actlr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->ACTLR.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_actlr_reg_t hri_armsysctrlsysctrl_read_ACTLR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->ACTLR.reg;
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CALIB_SKEW_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SYST_CALIB.reg & ARM_SYSCTRL_SYST_CALIB_SKEW_Msk) >> ARM_SYSCTRL_SYST_CALIB_SKEW_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_SYST_CALIB_NOREF_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SYST_CALIB.reg & ARM_SYSCTRL_SYST_CALIB_NOREF_Msk) >> ARM_SYSCTRL_SYST_CALIB_NOREF_Pos;
}

static inline hri_arm_sysctrl_syst_calib_reg_t
hri_armsysctrlsysctrl_get_SYST_CALIB_TENMS_bf(const void *const hw, hri_arm_sysctrl_syst_calib_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SYST_CALIB.reg & ARM_SYSCTRL_SYST_CALIB_TENMS(mask))
	       >> ARM_SYSCTRL_SYST_CALIB_TENMS_Pos;
}

static inline hri_arm_sysctrl_syst_calib_reg_t hri_armsysctrlsysctrl_read_SYST_CALIB_TENMS_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SYST_CALIB.reg & ARM_SYSCTRL_SYST_CALIB_TENMS_Msk) >> ARM_SYSCTRL_SYST_CALIB_TENMS_Pos;
}

static inline hri_arm_sysctrl_syst_calib_reg_t
hri_armsysctrlsysctrl_get_SYST_CALIB_reg(const void *const hw, hri_arm_sysctrl_syst_calib_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->SYST_CALIB.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_syst_calib_reg_t hri_armsysctrlsysctrl_read_SYST_CALIB_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SYST_CALIB.reg;
}

static inline hri_arm_sysctrl_cpuid_reg_t hri_armsysctrlsysctrl_get_CPUID_CPUID_bf(const void *const           hw,
                                                                                   hri_arm_sysctrl_cpuid_reg_t mask)
{
	return (((ArmSysctrl *)hw)->CPUID.reg & ARM_SYSCTRL_CPUID_CPUID(mask)) >> ARM_SYSCTRL_CPUID_CPUID_Pos;
}

static inline hri_arm_sysctrl_cpuid_reg_t hri_armsysctrlsysctrl_read_CPUID_CPUID_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->CPUID.reg & ARM_SYSCTRL_CPUID_CPUID_Msk) >> ARM_SYSCTRL_CPUID_CPUID_Pos;
}

static inline hri_arm_sysctrl_cpuid_reg_t hri_armsysctrlsysctrl_get_CPUID_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_cpuid_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->CPUID.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_cpuid_reg_t hri_armsysctrlsysctrl_read_CPUID_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->CPUID.reg;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_ISRPENDING_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_ISRPENDING_Msk) >> ARM_SYSCTRL_ICSR_ISRPENDING_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_ISRPREEMPT_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_ISRPREEMPT_Msk) >> ARM_SYSCTRL_ICSR_ISRPREEMPT_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_PENDSTCLR_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_PENDSTCLR_Msk) >> ARM_SYSCTRL_ICSR_PENDSTCLR_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_PENDSTSET_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_PENDSTSET_Msk) >> ARM_SYSCTRL_ICSR_PENDSTSET_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_PENDSVCLR_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_PENDSVCLR_Msk) >> ARM_SYSCTRL_ICSR_PENDSVCLR_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_PENDSVSET_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_PENDSVSET_Msk) >> ARM_SYSCTRL_ICSR_PENDSVSET_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_ICSR_NMIPENDSET_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_NMIPENDSET_Msk) >> ARM_SYSCTRL_ICSR_NMIPENDSET_Pos;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_get_ICSR_VECTACTIVE_bf(const void *const          hw,
                                                                                      hri_arm_sysctrl_icsr_reg_t mask)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_VECTACTIVE(mask)) >> ARM_SYSCTRL_ICSR_VECTACTIVE_Pos;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_read_ICSR_VECTACTIVE_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_VECTACTIVE_Msk) >> ARM_SYSCTRL_ICSR_VECTACTIVE_Pos;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_get_ICSR_VECTPENDING_bf(const void *const          hw,
                                                                                       hri_arm_sysctrl_icsr_reg_t mask)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_VECTPENDING(mask)) >> ARM_SYSCTRL_ICSR_VECTPENDING_Pos;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_read_ICSR_VECTPENDING_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->ICSR.reg & ARM_SYSCTRL_ICSR_VECTPENDING_Msk) >> ARM_SYSCTRL_ICSR_VECTPENDING_Pos;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_get_ICSR_reg(const void *const          hw,
                                                                            hri_arm_sysctrl_icsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->ICSR.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_icsr_reg_t hri_armsysctrlsysctrl_read_ICSR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->ICSR.reg;
}

static inline bool hri_armsysctrlsysctrl_get_AIRCR_VECTCLRACTIVE_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->AIRCR.reg & ARM_SYSCTRL_AIRCR_VECTCLRACTIVE_Msk) >> ARM_SYSCTRL_AIRCR_VECTCLRACTIVE_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_AIRCR_SYSRESETREQ_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->AIRCR.reg & ARM_SYSCTRL_AIRCR_SYSRESETREQ_Msk) >> ARM_SYSCTRL_AIRCR_SYSRESETREQ_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_AIRCR_ENDIANNESS_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->AIRCR.reg & ARM_SYSCTRL_AIRCR_ENDIANNESS_Msk) >> ARM_SYSCTRL_AIRCR_ENDIANNESS_Pos;
}

static inline hri_arm_sysctrl_aircr_reg_t hri_armsysctrlsysctrl_get_AIRCR_VECTKEY_bf(const void *const           hw,
                                                                                     hri_arm_sysctrl_aircr_reg_t mask)
{
	return (((ArmSysctrl *)hw)->AIRCR.reg & ARM_SYSCTRL_AIRCR_VECTKEY(mask)) >> ARM_SYSCTRL_AIRCR_VECTKEY_Pos;
}

static inline hri_arm_sysctrl_aircr_reg_t hri_armsysctrlsysctrl_read_AIRCR_VECTKEY_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->AIRCR.reg & ARM_SYSCTRL_AIRCR_VECTKEY_Msk) >> ARM_SYSCTRL_AIRCR_VECTKEY_Pos;
}

static inline hri_arm_sysctrl_aircr_reg_t hri_armsysctrlsysctrl_get_AIRCR_reg(const void *const           hw,
                                                                              hri_arm_sysctrl_aircr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmSysctrl *)hw)->AIRCR.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_aircr_reg_t hri_armsysctrlsysctrl_read_AIRCR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->AIRCR.reg;
}

static inline bool hri_armsysctrlsysctrl_get_CCR_UNALIGN_TRP_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->CCR.reg & ARM_SYSCTRL_CCR_UNALIGN_TRP_Msk) >> ARM_SYSCTRL_CCR_UNALIGN_TRP_Pos;
}

static inline bool hri_armsysctrlsysctrl_get_CCR_STKALIGN_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->CCR.reg & ARM_SYSCTRL_CCR_STKALIGN_Msk) >> ARM_SYSCTRL_CCR_STKALIGN_Pos;
}

static inline hri_arm_sysctrl_ccr_reg_t hri_armsysctrlsysctrl_get_CCR_reg(const void *const         hw,
                                                                          hri_arm_sysctrl_ccr_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ArmSysctrl *)hw)->CCR.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_ccr_reg_t hri_armsysctrlsysctrl_read_CCR_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->CCR.reg;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t
hri_armsysctrlsysctrl_get_SCS_PID4_JEP106_C_CODE_bf(const void *const hw, hri_arm_sysctrl_scs_pid4_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID4.reg & ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE(mask))
	       >> ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t hri_armsysctrlsysctrl_read_SCS_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID4.reg & ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Msk)
	       >> ARM_SYSCTRL_SCS_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t
hri_armsysctrlsysctrl_get_SCS_PID4_BLOCK_COUNT_bf(const void *const hw, hri_arm_sysctrl_scs_pid4_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID4.reg & ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT(mask))
	       >> ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t hri_armsysctrlsysctrl_read_SCS_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID4.reg & ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Msk)
	       >> ARM_SYSCTRL_SCS_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t hri_armsysctrlsysctrl_get_SCS_PID4_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_pid4_reg_t hri_armsysctrlsysctrl_read_SCS_PID4_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_PID4.reg;
}

static inline hri_arm_sysctrl_scs_pid0_reg_t
hri_armsysctrlsysctrl_get_SCS_PID0_PART_NUMBER_bf(const void *const hw, hri_arm_sysctrl_scs_pid0_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID0.reg & ARM_SYSCTRL_SCS_PID0_PART_NUMBER(mask))
	       >> ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid0_reg_t hri_armsysctrlsysctrl_read_SCS_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID0.reg & ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Msk)
	       >> ARM_SYSCTRL_SCS_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid0_reg_t hri_armsysctrlsysctrl_get_SCS_PID0_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_pid0_reg_t hri_armsysctrlsysctrl_read_SCS_PID0_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_PID0.reg;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t
hri_armsysctrlsysctrl_get_SCS_PID1_PART_NUMBER_bf(const void *const hw, hri_arm_sysctrl_scs_pid1_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID1.reg & ARM_SYSCTRL_SCS_PID1_PART_NUMBER(mask))
	       >> ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t hri_armsysctrlsysctrl_read_SCS_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID1.reg & ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Msk)
	       >> ARM_SYSCTRL_SCS_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t
hri_armsysctrlsysctrl_get_SCS_PID1_JEP106_ID_3_0_bf(const void *const hw, hri_arm_sysctrl_scs_pid1_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID1.reg & ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0(mask))
	       >> ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t hri_armsysctrlsysctrl_read_SCS_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID1.reg & ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Msk)
	       >> ARM_SYSCTRL_SCS_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t hri_armsysctrlsysctrl_get_SCS_PID1_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_pid1_reg_t hri_armsysctrlsysctrl_read_SCS_PID1_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_PID1.reg;
}

static inline bool hri_armsysctrlsysctrl_get_SCS_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID2.reg & ARM_SYSCTRL_SCS_PID2_JEDEC_USED_Msk)
	       >> ARM_SYSCTRL_SCS_PID2_JEDEC_USED_Pos;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t
hri_armsysctrlsysctrl_get_SCS_PID2_JEP106_ID_6_4_bf(const void *const hw, hri_arm_sysctrl_scs_pid2_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID2.reg & ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4(mask))
	       >> ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t hri_armsysctrlsysctrl_read_SCS_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID2.reg & ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Msk)
	       >> ARM_SYSCTRL_SCS_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t
hri_armsysctrlsysctrl_get_SCS_PID2_REVISION_bf(const void *const hw, hri_arm_sysctrl_scs_pid2_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID2.reg & ARM_SYSCTRL_SCS_PID2_REVISION(mask))
	       >> ARM_SYSCTRL_SCS_PID2_REVISION_Pos;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t hri_armsysctrlsysctrl_read_SCS_PID2_REVISION_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID2.reg & ARM_SYSCTRL_SCS_PID2_REVISION_Msk) >> ARM_SYSCTRL_SCS_PID2_REVISION_Pos;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t hri_armsysctrlsysctrl_get_SCS_PID2_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_pid2_reg_t hri_armsysctrlsysctrl_read_SCS_PID2_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_PID2.reg;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t
hri_armsysctrlsysctrl_get_SCS_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw, hri_arm_sysctrl_scs_pid3_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID3.reg & ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER(mask))
	       >> ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t
hri_armsysctrlsysctrl_read_SCS_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID3.reg & ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> ARM_SYSCTRL_SCS_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t
hri_armsysctrlsysctrl_get_SCS_PID3_ECO_REV_NUMBER_bf(const void *const hw, hri_arm_sysctrl_scs_pid3_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_PID3.reg & ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER(mask))
	       >> ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t hri_armsysctrlsysctrl_read_SCS_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_PID3.reg & ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Msk)
	       >> ARM_SYSCTRL_SCS_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t hri_armsysctrlsysctrl_get_SCS_PID3_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_pid3_reg_t hri_armsysctrlsysctrl_read_SCS_PID3_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_PID3.reg;
}

static inline hri_arm_sysctrl_scs_cid0_reg_t
hri_armsysctrlsysctrl_get_SCS_CID0_SCS_CID0_bf(const void *const hw, hri_arm_sysctrl_scs_cid0_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_CID0.reg & ARM_SYSCTRL_SCS_CID0_SCS_CID0(mask))
	       >> ARM_SYSCTRL_SCS_CID0_SCS_CID0_Pos;
}

static inline hri_arm_sysctrl_scs_cid0_reg_t hri_armsysctrlsysctrl_read_SCS_CID0_SCS_CID0_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_CID0.reg & ARM_SYSCTRL_SCS_CID0_SCS_CID0_Msk) >> ARM_SYSCTRL_SCS_CID0_SCS_CID0_Pos;
}

static inline hri_arm_sysctrl_scs_cid0_reg_t hri_armsysctrlsysctrl_get_SCS_CID0_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_cid0_reg_t hri_armsysctrlsysctrl_read_SCS_CID0_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_CID0.reg;
}

static inline hri_arm_sysctrl_scs_cid1_reg_t
hri_armsysctrlsysctrl_get_SCS_CID1_SCS_CID1_bf(const void *const hw, hri_arm_sysctrl_scs_cid1_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_CID1.reg & ARM_SYSCTRL_SCS_CID1_SCS_CID1(mask))
	       >> ARM_SYSCTRL_SCS_CID1_SCS_CID1_Pos;
}

static inline hri_arm_sysctrl_scs_cid1_reg_t hri_armsysctrlsysctrl_read_SCS_CID1_SCS_CID1_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_CID1.reg & ARM_SYSCTRL_SCS_CID1_SCS_CID1_Msk) >> ARM_SYSCTRL_SCS_CID1_SCS_CID1_Pos;
}

static inline hri_arm_sysctrl_scs_cid1_reg_t hri_armsysctrlsysctrl_get_SCS_CID1_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_cid1_reg_t hri_armsysctrlsysctrl_read_SCS_CID1_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_CID1.reg;
}

static inline hri_arm_sysctrl_scs_cid2_reg_t
hri_armsysctrlsysctrl_get_SCS_CID2_SCS_CID2_bf(const void *const hw, hri_arm_sysctrl_scs_cid2_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_CID2.reg & ARM_SYSCTRL_SCS_CID2_SCS_CID2(mask))
	       >> ARM_SYSCTRL_SCS_CID2_SCS_CID2_Pos;
}

static inline hri_arm_sysctrl_scs_cid2_reg_t hri_armsysctrlsysctrl_read_SCS_CID2_SCS_CID2_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_CID2.reg & ARM_SYSCTRL_SCS_CID2_SCS_CID2_Msk) >> ARM_SYSCTRL_SCS_CID2_SCS_CID2_Pos;
}

static inline hri_arm_sysctrl_scs_cid2_reg_t hri_armsysctrlsysctrl_get_SCS_CID2_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_cid2_reg_t hri_armsysctrlsysctrl_read_SCS_CID2_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_CID2.reg;
}

static inline hri_arm_sysctrl_scs_cid3_reg_t
hri_armsysctrlsysctrl_get_SCS_CID3_SCS_CID3_bf(const void *const hw, hri_arm_sysctrl_scs_cid3_reg_t mask)
{
	return (((ArmSysctrl *)hw)->SCS_CID3.reg & ARM_SYSCTRL_SCS_CID3_SCS_CID3(mask))
	       >> ARM_SYSCTRL_SCS_CID3_SCS_CID3_Pos;
}

static inline hri_arm_sysctrl_scs_cid3_reg_t hri_armsysctrlsysctrl_read_SCS_CID3_SCS_CID3_bf(const void *const hw)
{
	return (((ArmSysctrl *)hw)->SCS_CID3.reg & ARM_SYSCTRL_SCS_CID3_SCS_CID3_Msk) >> ARM_SYSCTRL_SCS_CID3_SCS_CID3_Pos;
}

static inline hri_arm_sysctrl_scs_cid3_reg_t hri_armsysctrlsysctrl_get_SCS_CID3_reg(const void *const              hw,
                                                                                    hri_arm_sysctrl_scs_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmSysctrl *)hw)->SCS_CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_sysctrl_scs_cid3_reg_t hri_armsysctrlsysctrl_read_SCS_CID3_reg(const void *const hw)
{
	return ((ArmSysctrl *)hw)->SCS_CID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_ARM_SYSCTRL_B11_H_INCLUDED */
#endif /* _SAMB11_ARM_SYSCTRL_COMPONENT_ */
