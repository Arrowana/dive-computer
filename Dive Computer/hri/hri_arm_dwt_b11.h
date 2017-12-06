/**
 * \file
 *
 * \brief SAM ARM_DWT
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

#ifdef _SAMB11_ARM_DWT_COMPONENT_
#ifndef _HRI_ARM_DWT_B11_H_INCLUDED_
#define _HRI_ARM_DWT_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_ARM_DWT_CRITICAL_SECTIONS)
#define ARM_DWT_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define ARM_DWT_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define ARM_DWT_CRITICAL_SECTION_ENTER()
#define ARM_DWT_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_arm_dwt_dwt_comp0_reg_t;
typedef uint32_t hri_arm_dwt_dwt_comp1_reg_t;
typedef uint32_t hri_arm_dwt_dwt_ctrl_reg_t;
typedef uint32_t hri_arm_dwt_dwt_function0_reg_t;
typedef uint32_t hri_arm_dwt_dwt_function1_reg_t;
typedef uint32_t hri_arm_dwt_dwt_pcsr_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_cid0_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_cid1_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_cid2_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_cid3_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_mask0_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_mask1_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_pid0_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_pid1_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_pid2_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_pid3_reg_t;
typedef uint8_t  hri_arm_dwt_dwt_pid4_reg_t;

static inline void hri_armdwtdwt_set_DWT_COMP0_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg |= ARM_DWT_DWT_COMP0_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp0_reg_t hri_armdwtdwt_get_DWT_COMP0_COMP_bf(const void *const           hw,
                                                                              hri_arm_dwt_dwt_comp0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP0.reg;
	tmp = (tmp & ARM_DWT_DWT_COMP0_COMP(mask)) >> ARM_DWT_DWT_COMP0_COMP_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_COMP0_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t data)
{
	uint32_t tmp;
	ARM_DWT_CRITICAL_SECTION_ENTER();
	tmp = ((ArmDwt *)hw)->DWT_COMP0.reg;
	tmp &= ~ARM_DWT_DWT_COMP0_COMP_Msk;
	tmp |= ARM_DWT_DWT_COMP0_COMP(data);
	((ArmDwt *)hw)->DWT_COMP0.reg = tmp;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_COMP0_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg &= ~ARM_DWT_DWT_COMP0_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_COMP0_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg ^= ARM_DWT_DWT_COMP0_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp0_reg_t hri_armdwtdwt_read_DWT_COMP0_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP0.reg;
	tmp = (tmp & ARM_DWT_DWT_COMP0_COMP_Msk) >> ARM_DWT_DWT_COMP0_COMP_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_set_DWT_COMP0_reg(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg |= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp0_reg_t hri_armdwtdwt_get_DWT_COMP0_reg(const void *const           hw,
                                                                          hri_arm_dwt_dwt_comp0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_COMP0_reg(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t data)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg = data;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_COMP0_reg(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg &= ~mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_COMP0_reg(const void *const hw, hri_arm_dwt_dwt_comp0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP0.reg ^= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp0_reg_t hri_armdwtdwt_read_DWT_COMP0_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_COMP0.reg;
}

static inline void hri_armdwtdwt_set_DWT_MASK0_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg |= ARM_DWT_DWT_MASK0_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask0_reg_t hri_armdwtdwt_get_DWT_MASK0_MASK_VALUE_bf(const void *const           hw,
                                                                                    hri_arm_dwt_dwt_mask0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK0.reg;
	tmp = (tmp & ARM_DWT_DWT_MASK0_MASK_VALUE(mask)) >> ARM_DWT_DWT_MASK0_MASK_VALUE_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_MASK0_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t data)
{
	uint8_t tmp;
	ARM_DWT_CRITICAL_SECTION_ENTER();
	tmp = ((ArmDwt *)hw)->DWT_MASK0.reg;
	tmp &= ~ARM_DWT_DWT_MASK0_MASK_VALUE_Msk;
	tmp |= ARM_DWT_DWT_MASK0_MASK_VALUE(data);
	((ArmDwt *)hw)->DWT_MASK0.reg = tmp;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_MASK0_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg &= ~ARM_DWT_DWT_MASK0_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_MASK0_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg ^= ARM_DWT_DWT_MASK0_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask0_reg_t hri_armdwtdwt_read_DWT_MASK0_MASK_VALUE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK0.reg;
	tmp = (tmp & ARM_DWT_DWT_MASK0_MASK_VALUE_Msk) >> ARM_DWT_DWT_MASK0_MASK_VALUE_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_set_DWT_MASK0_reg(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg |= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask0_reg_t hri_armdwtdwt_get_DWT_MASK0_reg(const void *const           hw,
                                                                          hri_arm_dwt_dwt_mask0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_MASK0_reg(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t data)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg = data;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_MASK0_reg(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg &= ~mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_MASK0_reg(const void *const hw, hri_arm_dwt_dwt_mask0_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK0.reg ^= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask0_reg_t hri_armdwtdwt_read_DWT_MASK0_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_MASK0.reg;
}

static inline void hri_armdwtdwt_set_DWT_COMP1_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg |= ARM_DWT_DWT_COMP1_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp1_reg_t hri_armdwtdwt_get_DWT_COMP1_COMP_bf(const void *const           hw,
                                                                              hri_arm_dwt_dwt_comp1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP1.reg;
	tmp = (tmp & ARM_DWT_DWT_COMP1_COMP(mask)) >> ARM_DWT_DWT_COMP1_COMP_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_COMP1_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t data)
{
	uint32_t tmp;
	ARM_DWT_CRITICAL_SECTION_ENTER();
	tmp = ((ArmDwt *)hw)->DWT_COMP1.reg;
	tmp &= ~ARM_DWT_DWT_COMP1_COMP_Msk;
	tmp |= ARM_DWT_DWT_COMP1_COMP(data);
	((ArmDwt *)hw)->DWT_COMP1.reg = tmp;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_COMP1_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg &= ~ARM_DWT_DWT_COMP1_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_COMP1_COMP_bf(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg ^= ARM_DWT_DWT_COMP1_COMP(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp1_reg_t hri_armdwtdwt_read_DWT_COMP1_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP1.reg;
	tmp = (tmp & ARM_DWT_DWT_COMP1_COMP_Msk) >> ARM_DWT_DWT_COMP1_COMP_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_set_DWT_COMP1_reg(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg |= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp1_reg_t hri_armdwtdwt_get_DWT_COMP1_reg(const void *const           hw,
                                                                          hri_arm_dwt_dwt_comp1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_COMP1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_COMP1_reg(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t data)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg = data;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_COMP1_reg(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg &= ~mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_COMP1_reg(const void *const hw, hri_arm_dwt_dwt_comp1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_COMP1.reg ^= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_comp1_reg_t hri_armdwtdwt_read_DWT_COMP1_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_COMP1.reg;
}

static inline void hri_armdwtdwt_set_DWT_MASK1_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg |= ARM_DWT_DWT_MASK1_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask1_reg_t hri_armdwtdwt_get_DWT_MASK1_MASK_VALUE_bf(const void *const           hw,
                                                                                    hri_arm_dwt_dwt_mask1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK1.reg;
	tmp = (tmp & ARM_DWT_DWT_MASK1_MASK_VALUE(mask)) >> ARM_DWT_DWT_MASK1_MASK_VALUE_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_MASK1_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t data)
{
	uint8_t tmp;
	ARM_DWT_CRITICAL_SECTION_ENTER();
	tmp = ((ArmDwt *)hw)->DWT_MASK1.reg;
	tmp &= ~ARM_DWT_DWT_MASK1_MASK_VALUE_Msk;
	tmp |= ARM_DWT_DWT_MASK1_MASK_VALUE(data);
	((ArmDwt *)hw)->DWT_MASK1.reg = tmp;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_MASK1_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg &= ~ARM_DWT_DWT_MASK1_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_MASK1_MASK_VALUE_bf(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg ^= ARM_DWT_DWT_MASK1_MASK_VALUE(mask);
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask1_reg_t hri_armdwtdwt_read_DWT_MASK1_MASK_VALUE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK1.reg;
	tmp = (tmp & ARM_DWT_DWT_MASK1_MASK_VALUE_Msk) >> ARM_DWT_DWT_MASK1_MASK_VALUE_Pos;
	return tmp;
}

static inline void hri_armdwtdwt_set_DWT_MASK1_reg(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg |= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask1_reg_t hri_armdwtdwt_get_DWT_MASK1_reg(const void *const           hw,
                                                                          hri_arm_dwt_dwt_mask1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_MASK1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armdwtdwt_write_DWT_MASK1_reg(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t data)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg = data;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_clear_DWT_MASK1_reg(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg &= ~mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armdwtdwt_toggle_DWT_MASK1_reg(const void *const hw, hri_arm_dwt_dwt_mask1_reg_t mask)
{
	ARM_DWT_CRITICAL_SECTION_ENTER();
	((ArmDwt *)hw)->DWT_MASK1.reg ^= mask;
	ARM_DWT_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_dwt_dwt_mask1_reg_t hri_armdwtdwt_read_DWT_MASK1_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_MASK1.reg;
}

static inline hri_arm_dwt_dwt_ctrl_reg_t hri_armdwtdwt_get_DWT_CTRL_NUMCOMP_bf(const void *const          hw,
                                                                               hri_arm_dwt_dwt_ctrl_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_CTRL.reg & ARM_DWT_DWT_CTRL_NUMCOMP(mask)) >> ARM_DWT_DWT_CTRL_NUMCOMP_Pos;
}

static inline hri_arm_dwt_dwt_ctrl_reg_t hri_armdwtdwt_read_DWT_CTRL_NUMCOMP_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_CTRL.reg & ARM_DWT_DWT_CTRL_NUMCOMP_Msk) >> ARM_DWT_DWT_CTRL_NUMCOMP_Pos;
}

static inline hri_arm_dwt_dwt_ctrl_reg_t hri_armdwtdwt_get_DWT_CTRL_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_ctrl_reg_t hri_armdwtdwt_read_DWT_CTRL_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_CTRL.reg;
}

static inline hri_arm_dwt_dwt_pcsr_reg_t hri_armdwtdwt_get_DWT_PCSR_EIASAMPLE_bf(const void *const          hw,
                                                                                 hri_arm_dwt_dwt_pcsr_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PCSR.reg & ARM_DWT_DWT_PCSR_EIASAMPLE(mask)) >> ARM_DWT_DWT_PCSR_EIASAMPLE_Pos;
}

static inline hri_arm_dwt_dwt_pcsr_reg_t hri_armdwtdwt_read_DWT_PCSR_EIASAMPLE_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PCSR.reg & ARM_DWT_DWT_PCSR_EIASAMPLE_Msk) >> ARM_DWT_DWT_PCSR_EIASAMPLE_Pos;
}

static inline hri_arm_dwt_dwt_pcsr_reg_t hri_armdwtdwt_get_DWT_PCSR_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pcsr_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PCSR.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pcsr_reg_t hri_armdwtdwt_read_DWT_PCSR_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PCSR.reg;
}

static inline bool hri_armdwtdwt_get_DWT_FUNCTION0_MATCHED_bit(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION0.reg & ARM_DWT_DWT_FUNCTION0_MATCHED_Msk) >> ARM_DWT_DWT_FUNCTION0_MATCHED_Pos;
}

static inline hri_arm_dwt_dwt_function0_reg_t
hri_armdwtdwt_get_DWT_FUNCTION0_FUNCTION_bf(const void *const hw, hri_arm_dwt_dwt_function0_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION0.reg & ARM_DWT_DWT_FUNCTION0_FUNCTION(mask))
	       >> ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos;
}

static inline hri_arm_dwt_dwt_function0_reg_t hri_armdwtdwt_read_DWT_FUNCTION0_FUNCTION_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION0.reg & ARM_DWT_DWT_FUNCTION0_FUNCTION_Msk)
	       >> ARM_DWT_DWT_FUNCTION0_FUNCTION_Pos;
}

static inline hri_arm_dwt_dwt_function0_reg_t hri_armdwtdwt_get_DWT_FUNCTION0_reg(const void *const               hw,
                                                                                  hri_arm_dwt_dwt_function0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_FUNCTION0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_function0_reg_t hri_armdwtdwt_read_DWT_FUNCTION0_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_FUNCTION0.reg;
}

static inline bool hri_armdwtdwt_get_DWT_FUNCTION1_MATCHED_bit(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION1.reg & ARM_DWT_DWT_FUNCTION1_MATCHED_Msk) >> ARM_DWT_DWT_FUNCTION1_MATCHED_Pos;
}

static inline hri_arm_dwt_dwt_function1_reg_t
hri_armdwtdwt_get_DWT_FUNCTION1_FUNCTION_bf(const void *const hw, hri_arm_dwt_dwt_function1_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION1.reg & ARM_DWT_DWT_FUNCTION1_FUNCTION(mask))
	       >> ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos;
}

static inline hri_arm_dwt_dwt_function1_reg_t hri_armdwtdwt_read_DWT_FUNCTION1_FUNCTION_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_FUNCTION1.reg & ARM_DWT_DWT_FUNCTION1_FUNCTION_Msk)
	       >> ARM_DWT_DWT_FUNCTION1_FUNCTION_Pos;
}

static inline hri_arm_dwt_dwt_function1_reg_t hri_armdwtdwt_get_DWT_FUNCTION1_reg(const void *const               hw,
                                                                                  hri_arm_dwt_dwt_function1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_FUNCTION1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_function1_reg_t hri_armdwtdwt_read_DWT_FUNCTION1_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_FUNCTION1.reg;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_get_DWT_PID4_JEP106_C_CODE_bf(const void *const          hw,
                                                                                     hri_arm_dwt_dwt_pid4_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID4.reg & ARM_DWT_DWT_PID4_JEP106_C_CODE(mask)) >> ARM_DWT_DWT_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_read_DWT_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID4.reg & ARM_DWT_DWT_PID4_JEP106_C_CODE_Msk) >> ARM_DWT_DWT_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_get_DWT_PID4_BLOCK_COUNT_bf(const void *const          hw,
                                                                                   hri_arm_dwt_dwt_pid4_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID4.reg & ARM_DWT_DWT_PID4_BLOCK_COUNT(mask)) >> ARM_DWT_DWT_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_read_DWT_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID4.reg & ARM_DWT_DWT_PID4_BLOCK_COUNT_Msk) >> ARM_DWT_DWT_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_get_DWT_PID4_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pid4_reg_t hri_armdwtdwt_read_DWT_PID4_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PID4.reg;
}

static inline hri_arm_dwt_dwt_pid0_reg_t hri_armdwtdwt_get_DWT_PID0_PART_NUMBER_bf(const void *const          hw,
                                                                                   hri_arm_dwt_dwt_pid0_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID0.reg & ARM_DWT_DWT_PID0_PART_NUMBER(mask)) >> ARM_DWT_DWT_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid0_reg_t hri_armdwtdwt_read_DWT_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID0.reg & ARM_DWT_DWT_PID0_PART_NUMBER_Msk) >> ARM_DWT_DWT_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid0_reg_t hri_armdwtdwt_get_DWT_PID0_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pid0_reg_t hri_armdwtdwt_read_DWT_PID0_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PID0.reg;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_get_DWT_PID1_PART_NUMBER_bf(const void *const          hw,
                                                                                   hri_arm_dwt_dwt_pid1_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID1.reg & ARM_DWT_DWT_PID1_PART_NUMBER(mask)) >> ARM_DWT_DWT_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_read_DWT_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID1.reg & ARM_DWT_DWT_PID1_PART_NUMBER_Msk) >> ARM_DWT_DWT_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_get_DWT_PID1_JEP106_ID_3_0_bf(const void *const          hw,
                                                                                     hri_arm_dwt_dwt_pid1_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID1.reg & ARM_DWT_DWT_PID1_JEP106_ID_3_0(mask)) >> ARM_DWT_DWT_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_read_DWT_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID1.reg & ARM_DWT_DWT_PID1_JEP106_ID_3_0_Msk) >> ARM_DWT_DWT_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_get_DWT_PID1_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pid1_reg_t hri_armdwtdwt_read_DWT_PID1_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PID1.reg;
}

static inline bool hri_armdwtdwt_get_DWT_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID2.reg & ARM_DWT_DWT_PID2_JEDEC_USED_Msk) >> ARM_DWT_DWT_PID2_JEDEC_USED_Pos;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_get_DWT_PID2_JEP106_ID_6_4_bf(const void *const          hw,
                                                                                     hri_arm_dwt_dwt_pid2_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID2.reg & ARM_DWT_DWT_PID2_JEP106_ID_6_4(mask)) >> ARM_DWT_DWT_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_read_DWT_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID2.reg & ARM_DWT_DWT_PID2_JEP106_ID_6_4_Msk) >> ARM_DWT_DWT_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_get_DWT_PID2_REVISION_bf(const void *const          hw,
                                                                                hri_arm_dwt_dwt_pid2_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID2.reg & ARM_DWT_DWT_PID2_REVISION(mask)) >> ARM_DWT_DWT_PID2_REVISION_Pos;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_read_DWT_PID2_REVISION_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID2.reg & ARM_DWT_DWT_PID2_REVISION_Msk) >> ARM_DWT_DWT_PID2_REVISION_Pos;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_get_DWT_PID2_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pid2_reg_t hri_armdwtdwt_read_DWT_PID2_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PID2.reg;
}

static inline hri_arm_dwt_dwt_pid3_reg_t
hri_armdwtdwt_get_DWT_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw, hri_arm_dwt_dwt_pid3_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID3.reg & ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER(mask))
	       >> ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid3_reg_t hri_armdwtdwt_read_DWT_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID3.reg & ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> ARM_DWT_DWT_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid3_reg_t hri_armdwtdwt_get_DWT_PID3_ECO_REV_NUMBER_bf(const void *const          hw,
                                                                                      hri_arm_dwt_dwt_pid3_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_PID3.reg & ARM_DWT_DWT_PID3_ECO_REV_NUMBER(mask))
	       >> ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid3_reg_t hri_armdwtdwt_read_DWT_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_PID3.reg & ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Msk) >> ARM_DWT_DWT_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_dwt_dwt_pid3_reg_t hri_armdwtdwt_get_DWT_PID3_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_pid3_reg_t hri_armdwtdwt_read_DWT_PID3_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_PID3.reg;
}

static inline hri_arm_dwt_dwt_cid0_reg_t hri_armdwtdwt_get_DWT_CID0_DWT_CID0_bf(const void *const          hw,
                                                                                hri_arm_dwt_dwt_cid0_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_CID0.reg & ARM_DWT_DWT_CID0_DWT_CID0(mask)) >> ARM_DWT_DWT_CID0_DWT_CID0_Pos;
}

static inline hri_arm_dwt_dwt_cid0_reg_t hri_armdwtdwt_read_DWT_CID0_DWT_CID0_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_CID0.reg & ARM_DWT_DWT_CID0_DWT_CID0_Msk) >> ARM_DWT_DWT_CID0_DWT_CID0_Pos;
}

static inline hri_arm_dwt_dwt_cid0_reg_t hri_armdwtdwt_get_DWT_CID0_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_cid0_reg_t hri_armdwtdwt_read_DWT_CID0_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_CID0.reg;
}

static inline hri_arm_dwt_dwt_cid1_reg_t hri_armdwtdwt_get_DWT_CID1_DWT_CID1_bf(const void *const          hw,
                                                                                hri_arm_dwt_dwt_cid1_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_CID1.reg & ARM_DWT_DWT_CID1_DWT_CID1(mask)) >> ARM_DWT_DWT_CID1_DWT_CID1_Pos;
}

static inline hri_arm_dwt_dwt_cid1_reg_t hri_armdwtdwt_read_DWT_CID1_DWT_CID1_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_CID1.reg & ARM_DWT_DWT_CID1_DWT_CID1_Msk) >> ARM_DWT_DWT_CID1_DWT_CID1_Pos;
}

static inline hri_arm_dwt_dwt_cid1_reg_t hri_armdwtdwt_get_DWT_CID1_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_cid1_reg_t hri_armdwtdwt_read_DWT_CID1_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_CID1.reg;
}

static inline hri_arm_dwt_dwt_cid2_reg_t hri_armdwtdwt_get_DWT_CID2_DWT_CID2_bf(const void *const          hw,
                                                                                hri_arm_dwt_dwt_cid2_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_CID2.reg & ARM_DWT_DWT_CID2_DWT_CID2(mask)) >> ARM_DWT_DWT_CID2_DWT_CID2_Pos;
}

static inline hri_arm_dwt_dwt_cid2_reg_t hri_armdwtdwt_read_DWT_CID2_DWT_CID2_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_CID2.reg & ARM_DWT_DWT_CID2_DWT_CID2_Msk) >> ARM_DWT_DWT_CID2_DWT_CID2_Pos;
}

static inline hri_arm_dwt_dwt_cid2_reg_t hri_armdwtdwt_get_DWT_CID2_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_cid2_reg_t hri_armdwtdwt_read_DWT_CID2_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_CID2.reg;
}

static inline hri_arm_dwt_dwt_cid3_reg_t hri_armdwtdwt_get_DWT_CID3_DWT_CID3_bf(const void *const          hw,
                                                                                hri_arm_dwt_dwt_cid3_reg_t mask)
{
	return (((ArmDwt *)hw)->DWT_CID3.reg & ARM_DWT_DWT_CID3_DWT_CID3(mask)) >> ARM_DWT_DWT_CID3_DWT_CID3_Pos;
}

static inline hri_arm_dwt_dwt_cid3_reg_t hri_armdwtdwt_read_DWT_CID3_DWT_CID3_bf(const void *const hw)
{
	return (((ArmDwt *)hw)->DWT_CID3.reg & ARM_DWT_DWT_CID3_DWT_CID3_Msk) >> ARM_DWT_DWT_CID3_DWT_CID3_Pos;
}

static inline hri_arm_dwt_dwt_cid3_reg_t hri_armdwtdwt_get_DWT_CID3_reg(const void *const          hw,
                                                                        hri_arm_dwt_dwt_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmDwt *)hw)->DWT_CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_dwt_dwt_cid3_reg_t hri_armdwtdwt_read_DWT_CID3_reg(const void *const hw)
{
	return ((ArmDwt *)hw)->DWT_CID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_ARM_DWT_B11_H_INCLUDED */
#endif /* _SAMB11_ARM_DWT_COMPONENT_ */
