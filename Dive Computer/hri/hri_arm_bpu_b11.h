/**
 * \file
 *
 * \brief SAM ARM_BPU
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

#ifdef _SAMB11_ARM_BPU_COMPONENT_
#ifndef _HRI_ARM_BPU_B11_H_INCLUDED_
#define _HRI_ARM_BPU_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_ARM_BPU_CRITICAL_SECTIONS)
#define ARM_BPU_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define ARM_BPU_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define ARM_BPU_CRITICAL_SECTION_ENTER()
#define ARM_BPU_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_arm_bpu_bp_comp0_reg_t;
typedef uint32_t hri_arm_bpu_bp_comp1_reg_t;
typedef uint32_t hri_arm_bpu_bp_comp2_reg_t;
typedef uint32_t hri_arm_bpu_bp_comp3_reg_t;
typedef uint8_t  hri_arm_bpu_bp_cid0_reg_t;
typedef uint8_t  hri_arm_bpu_bp_cid1_reg_t;
typedef uint8_t  hri_arm_bpu_bp_cid2_reg_t;
typedef uint8_t  hri_arm_bpu_bp_cid3_reg_t;
typedef uint8_t  hri_arm_bpu_bp_ctrl_reg_t;
typedef uint8_t  hri_arm_bpu_bp_pid0_reg_t;
typedef uint8_t  hri_arm_bpu_bp_pid1_reg_t;
typedef uint8_t  hri_arm_bpu_bp_pid2_reg_t;
typedef uint8_t  hri_arm_bpu_bp_pid3_reg_t;
typedef uint8_t  hri_arm_bpu_bp_pid4_reg_t;

static inline void hri_armbpubpu_set_BP_CTRL_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg |= ARM_BPU_BP_CTRL_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_CTRL_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp = (tmp & ARM_BPU_BP_CTRL_ENABLE_Msk) >> ARM_BPU_BP_CTRL_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_CTRL_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp &= ~ARM_BPU_BP_CTRL_ENABLE_Msk;
	tmp |= value << ARM_BPU_BP_CTRL_ENABLE_Pos;
	((ArmBpu *)hw)->BP_CTRL.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_CTRL_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg &= ~ARM_BPU_BP_CTRL_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_CTRL_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg ^= ARM_BPU_BP_CTRL_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_CTRL_KEY_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg |= ARM_BPU_BP_CTRL_KEY_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_CTRL_KEY_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp = (tmp & ARM_BPU_BP_CTRL_KEY_Msk) >> ARM_BPU_BP_CTRL_KEY_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_CTRL_KEY_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp &= ~ARM_BPU_BP_CTRL_KEY_Msk;
	tmp |= value << ARM_BPU_BP_CTRL_KEY_Pos;
	((ArmBpu *)hw)->BP_CTRL.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_CTRL_KEY_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg &= ~ARM_BPU_BP_CTRL_KEY_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_CTRL_KEY_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg ^= ARM_BPU_BP_CTRL_KEY_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_CTRL_NUM_CODE_bf(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg |= ARM_BPU_BP_CTRL_NUM_CODE(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_ctrl_reg_t hri_armbpubpu_get_BP_CTRL_NUM_CODE_bf(const void *const         hw,
                                                                              hri_arm_bpu_bp_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp = (tmp & ARM_BPU_BP_CTRL_NUM_CODE(mask)) >> ARM_BPU_BP_CTRL_NUM_CODE_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_CTRL_NUM_CODE_bf(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t data)
{
	uint8_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp &= ~ARM_BPU_BP_CTRL_NUM_CODE_Msk;
	tmp |= ARM_BPU_BP_CTRL_NUM_CODE(data);
	((ArmBpu *)hw)->BP_CTRL.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_CTRL_NUM_CODE_bf(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg &= ~ARM_BPU_BP_CTRL_NUM_CODE(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_CTRL_NUM_CODE_bf(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg ^= ARM_BPU_BP_CTRL_NUM_CODE(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_ctrl_reg_t hri_armbpubpu_read_BP_CTRL_NUM_CODE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp = (tmp & ARM_BPU_BP_CTRL_NUM_CODE_Msk) >> ARM_BPU_BP_CTRL_NUM_CODE_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_CTRL_reg(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg |= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_ctrl_reg_t hri_armbpubpu_get_BP_CTRL_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_CTRL_reg(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t data)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg = data;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_CTRL_reg(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg &= ~mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_CTRL_reg(const void *const hw, hri_arm_bpu_bp_ctrl_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_CTRL.reg ^= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_ctrl_reg_t hri_armbpubpu_read_BP_CTRL_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_CTRL.reg;
}

static inline void hri_armbpubpu_set_BP_COMP0_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg |= ARM_BPU_BP_COMP0_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_COMP0_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp = (tmp & ARM_BPU_BP_COMP0_ENABLE_Msk) >> ARM_BPU_BP_COMP0_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_COMP0_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp &= ~ARM_BPU_BP_COMP0_ENABLE_Msk;
	tmp |= value << ARM_BPU_BP_COMP0_ENABLE_Pos;
	((ArmBpu *)hw)->BP_COMP0.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP0_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg &= ~ARM_BPU_BP_COMP0_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP0_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg ^= ARM_BPU_BP_COMP0_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_COMP0_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg |= ARM_BPU_BP_COMP0_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_get_BP_COMP0_COMP_bf(const void *const          hw,
                                                                            hri_arm_bpu_bp_comp0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp = (tmp & ARM_BPU_BP_COMP0_COMP(mask)) >> ARM_BPU_BP_COMP0_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP0_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp &= ~ARM_BPU_BP_COMP0_COMP_Msk;
	tmp |= ARM_BPU_BP_COMP0_COMP(data);
	((ArmBpu *)hw)->BP_COMP0.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP0_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg &= ~ARM_BPU_BP_COMP0_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP0_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg ^= ARM_BPU_BP_COMP0_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_read_BP_COMP0_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp = (tmp & ARM_BPU_BP_COMP0_COMP_Msk) >> ARM_BPU_BP_COMP0_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP0_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg |= ARM_BPU_BP_COMP0_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_get_BP_COMP0_BP_MATCH_bf(const void *const          hw,
                                                                                hri_arm_bpu_bp_comp0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp = (tmp & ARM_BPU_BP_COMP0_BP_MATCH(mask)) >> ARM_BPU_BP_COMP0_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP0_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp &= ~ARM_BPU_BP_COMP0_BP_MATCH_Msk;
	tmp |= ARM_BPU_BP_COMP0_BP_MATCH(data);
	((ArmBpu *)hw)->BP_COMP0.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP0_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg &= ~ARM_BPU_BP_COMP0_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP0_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg ^= ARM_BPU_BP_COMP0_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_read_BP_COMP0_BP_MATCH_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp = (tmp & ARM_BPU_BP_COMP0_BP_MATCH_Msk) >> ARM_BPU_BP_COMP0_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP0_reg(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg |= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_get_BP_COMP0_reg(const void *const          hw,
                                                                        hri_arm_bpu_bp_comp0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP0_reg(const void *const hw, hri_arm_bpu_bp_comp0_reg_t data)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg = data;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP0_reg(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg &= ~mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP0_reg(const void *const hw, hri_arm_bpu_bp_comp0_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP0.reg ^= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp0_reg_t hri_armbpubpu_read_BP_COMP0_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_COMP0.reg;
}

static inline void hri_armbpubpu_set_BP_COMP1_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg |= ARM_BPU_BP_COMP1_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_COMP1_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp = (tmp & ARM_BPU_BP_COMP1_ENABLE_Msk) >> ARM_BPU_BP_COMP1_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_COMP1_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp &= ~ARM_BPU_BP_COMP1_ENABLE_Msk;
	tmp |= value << ARM_BPU_BP_COMP1_ENABLE_Pos;
	((ArmBpu *)hw)->BP_COMP1.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP1_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg &= ~ARM_BPU_BP_COMP1_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP1_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg ^= ARM_BPU_BP_COMP1_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_COMP1_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg |= ARM_BPU_BP_COMP1_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_get_BP_COMP1_COMP_bf(const void *const          hw,
                                                                            hri_arm_bpu_bp_comp1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp = (tmp & ARM_BPU_BP_COMP1_COMP(mask)) >> ARM_BPU_BP_COMP1_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP1_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp &= ~ARM_BPU_BP_COMP1_COMP_Msk;
	tmp |= ARM_BPU_BP_COMP1_COMP(data);
	((ArmBpu *)hw)->BP_COMP1.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP1_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg &= ~ARM_BPU_BP_COMP1_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP1_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg ^= ARM_BPU_BP_COMP1_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_read_BP_COMP1_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp = (tmp & ARM_BPU_BP_COMP1_COMP_Msk) >> ARM_BPU_BP_COMP1_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP1_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg |= ARM_BPU_BP_COMP1_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_get_BP_COMP1_BP_MATCH_bf(const void *const          hw,
                                                                                hri_arm_bpu_bp_comp1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp = (tmp & ARM_BPU_BP_COMP1_BP_MATCH(mask)) >> ARM_BPU_BP_COMP1_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP1_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp &= ~ARM_BPU_BP_COMP1_BP_MATCH_Msk;
	tmp |= ARM_BPU_BP_COMP1_BP_MATCH(data);
	((ArmBpu *)hw)->BP_COMP1.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP1_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg &= ~ARM_BPU_BP_COMP1_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP1_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg ^= ARM_BPU_BP_COMP1_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_read_BP_COMP1_BP_MATCH_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp = (tmp & ARM_BPU_BP_COMP1_BP_MATCH_Msk) >> ARM_BPU_BP_COMP1_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP1_reg(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg |= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_get_BP_COMP1_reg(const void *const          hw,
                                                                        hri_arm_bpu_bp_comp1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP1_reg(const void *const hw, hri_arm_bpu_bp_comp1_reg_t data)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg = data;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP1_reg(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg &= ~mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP1_reg(const void *const hw, hri_arm_bpu_bp_comp1_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP1.reg ^= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp1_reg_t hri_armbpubpu_read_BP_COMP1_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_COMP1.reg;
}

static inline void hri_armbpubpu_set_BP_COMP2_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg |= ARM_BPU_BP_COMP2_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_COMP2_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp = (tmp & ARM_BPU_BP_COMP2_ENABLE_Msk) >> ARM_BPU_BP_COMP2_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_COMP2_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp &= ~ARM_BPU_BP_COMP2_ENABLE_Msk;
	tmp |= value << ARM_BPU_BP_COMP2_ENABLE_Pos;
	((ArmBpu *)hw)->BP_COMP2.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP2_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg &= ~ARM_BPU_BP_COMP2_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP2_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg ^= ARM_BPU_BP_COMP2_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_COMP2_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg |= ARM_BPU_BP_COMP2_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_get_BP_COMP2_COMP_bf(const void *const          hw,
                                                                            hri_arm_bpu_bp_comp2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp = (tmp & ARM_BPU_BP_COMP2_COMP(mask)) >> ARM_BPU_BP_COMP2_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP2_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp &= ~ARM_BPU_BP_COMP2_COMP_Msk;
	tmp |= ARM_BPU_BP_COMP2_COMP(data);
	((ArmBpu *)hw)->BP_COMP2.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP2_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg &= ~ARM_BPU_BP_COMP2_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP2_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg ^= ARM_BPU_BP_COMP2_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_read_BP_COMP2_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp = (tmp & ARM_BPU_BP_COMP2_COMP_Msk) >> ARM_BPU_BP_COMP2_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP2_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg |= ARM_BPU_BP_COMP2_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_get_BP_COMP2_BP_MATCH_bf(const void *const          hw,
                                                                                hri_arm_bpu_bp_comp2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp = (tmp & ARM_BPU_BP_COMP2_BP_MATCH(mask)) >> ARM_BPU_BP_COMP2_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP2_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp &= ~ARM_BPU_BP_COMP2_BP_MATCH_Msk;
	tmp |= ARM_BPU_BP_COMP2_BP_MATCH(data);
	((ArmBpu *)hw)->BP_COMP2.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP2_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg &= ~ARM_BPU_BP_COMP2_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP2_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg ^= ARM_BPU_BP_COMP2_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_read_BP_COMP2_BP_MATCH_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp = (tmp & ARM_BPU_BP_COMP2_BP_MATCH_Msk) >> ARM_BPU_BP_COMP2_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP2_reg(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg |= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_get_BP_COMP2_reg(const void *const          hw,
                                                                        hri_arm_bpu_bp_comp2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP2_reg(const void *const hw, hri_arm_bpu_bp_comp2_reg_t data)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg = data;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP2_reg(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg &= ~mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP2_reg(const void *const hw, hri_arm_bpu_bp_comp2_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP2.reg ^= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp2_reg_t hri_armbpubpu_read_BP_COMP2_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_COMP2.reg;
}

static inline void hri_armbpubpu_set_BP_COMP3_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg |= ARM_BPU_BP_COMP3_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_armbpubpu_get_BP_COMP3_ENABLE_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp = (tmp & ARM_BPU_BP_COMP3_ENABLE_Msk) >> ARM_BPU_BP_COMP3_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_armbpubpu_write_BP_COMP3_ENABLE_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp &= ~ARM_BPU_BP_COMP3_ENABLE_Msk;
	tmp |= value << ARM_BPU_BP_COMP3_ENABLE_Pos;
	((ArmBpu *)hw)->BP_COMP3.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP3_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg &= ~ARM_BPU_BP_COMP3_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP3_ENABLE_bit(const void *const hw)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg ^= ARM_BPU_BP_COMP3_ENABLE_Msk;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_set_BP_COMP3_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg |= ARM_BPU_BP_COMP3_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_get_BP_COMP3_COMP_bf(const void *const          hw,
                                                                            hri_arm_bpu_bp_comp3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp = (tmp & ARM_BPU_BP_COMP3_COMP(mask)) >> ARM_BPU_BP_COMP3_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP3_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp &= ~ARM_BPU_BP_COMP3_COMP_Msk;
	tmp |= ARM_BPU_BP_COMP3_COMP(data);
	((ArmBpu *)hw)->BP_COMP3.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP3_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg &= ~ARM_BPU_BP_COMP3_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP3_COMP_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg ^= ARM_BPU_BP_COMP3_COMP(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_read_BP_COMP3_COMP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp = (tmp & ARM_BPU_BP_COMP3_COMP_Msk) >> ARM_BPU_BP_COMP3_COMP_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP3_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg |= ARM_BPU_BP_COMP3_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_get_BP_COMP3_BP_MATCH_bf(const void *const          hw,
                                                                                hri_arm_bpu_bp_comp3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp = (tmp & ARM_BPU_BP_COMP3_BP_MATCH(mask)) >> ARM_BPU_BP_COMP3_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP3_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t data)
{
	uint32_t tmp;
	ARM_BPU_CRITICAL_SECTION_ENTER();
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp &= ~ARM_BPU_BP_COMP3_BP_MATCH_Msk;
	tmp |= ARM_BPU_BP_COMP3_BP_MATCH(data);
	((ArmBpu *)hw)->BP_COMP3.reg = tmp;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP3_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg &= ~ARM_BPU_BP_COMP3_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP3_BP_MATCH_bf(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg ^= ARM_BPU_BP_COMP3_BP_MATCH(mask);
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_read_BP_COMP3_BP_MATCH_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp = (tmp & ARM_BPU_BP_COMP3_BP_MATCH_Msk) >> ARM_BPU_BP_COMP3_BP_MATCH_Pos;
	return tmp;
}

static inline void hri_armbpubpu_set_BP_COMP3_reg(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg |= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_get_BP_COMP3_reg(const void *const          hw,
                                                                        hri_arm_bpu_bp_comp3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmBpu *)hw)->BP_COMP3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_armbpubpu_write_BP_COMP3_reg(const void *const hw, hri_arm_bpu_bp_comp3_reg_t data)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg = data;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_clear_BP_COMP3_reg(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg &= ~mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline void hri_armbpubpu_toggle_BP_COMP3_reg(const void *const hw, hri_arm_bpu_bp_comp3_reg_t mask)
{
	ARM_BPU_CRITICAL_SECTION_ENTER();
	((ArmBpu *)hw)->BP_COMP3.reg ^= mask;
	ARM_BPU_CRITICAL_SECTION_LEAVE();
}

static inline hri_arm_bpu_bp_comp3_reg_t hri_armbpubpu_read_BP_COMP3_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_COMP3.reg;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_get_BP_PID4_JEP106_C_CODE_bf(const void *const         hw,
                                                                                   hri_arm_bpu_bp_pid4_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID4.reg & ARM_BPU_BP_PID4_JEP106_C_CODE(mask)) >> ARM_BPU_BP_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_read_BP_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID4.reg & ARM_BPU_BP_PID4_JEP106_C_CODE_Msk) >> ARM_BPU_BP_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_get_BP_PID4_BLOCK_COUNT_bf(const void *const         hw,
                                                                                 hri_arm_bpu_bp_pid4_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID4.reg & ARM_BPU_BP_PID4_BLOCK_COUNT(mask)) >> ARM_BPU_BP_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_read_BP_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID4.reg & ARM_BPU_BP_PID4_BLOCK_COUNT_Msk) >> ARM_BPU_BP_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_get_BP_PID4_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_pid4_reg_t hri_armbpubpu_read_BP_PID4_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_PID4.reg;
}

static inline hri_arm_bpu_bp_pid0_reg_t hri_armbpubpu_get_BP_PID0_PART_NUMBER_bf(const void *const         hw,
                                                                                 hri_arm_bpu_bp_pid0_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID0.reg & ARM_BPU_BP_PID0_PART_NUMBER(mask)) >> ARM_BPU_BP_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid0_reg_t hri_armbpubpu_read_BP_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID0.reg & ARM_BPU_BP_PID0_PART_NUMBER_Msk) >> ARM_BPU_BP_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid0_reg_t hri_armbpubpu_get_BP_PID0_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_pid0_reg_t hri_armbpubpu_read_BP_PID0_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_PID0.reg;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_get_BP_PID1_PART_NUMBER_bf(const void *const         hw,
                                                                                 hri_arm_bpu_bp_pid1_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID1.reg & ARM_BPU_BP_PID1_PART_NUMBER(mask)) >> ARM_BPU_BP_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_read_BP_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID1.reg & ARM_BPU_BP_PID1_PART_NUMBER_Msk) >> ARM_BPU_BP_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_get_BP_PID1_JEP106_ID_3_0_bf(const void *const         hw,
                                                                                   hri_arm_bpu_bp_pid1_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID1.reg & ARM_BPU_BP_PID1_JEP106_ID_3_0(mask)) >> ARM_BPU_BP_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_read_BP_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID1.reg & ARM_BPU_BP_PID1_JEP106_ID_3_0_Msk) >> ARM_BPU_BP_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_get_BP_PID1_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_pid1_reg_t hri_armbpubpu_read_BP_PID1_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_PID1.reg;
}

static inline bool hri_armbpubpu_get_BP_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID2.reg & ARM_BPU_BP_PID2_JEDEC_USED_Msk) >> ARM_BPU_BP_PID2_JEDEC_USED_Pos;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_get_BP_PID2_JEP106_ID_6_4_bf(const void *const         hw,
                                                                                   hri_arm_bpu_bp_pid2_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID2.reg & ARM_BPU_BP_PID2_JEP106_ID_6_4(mask)) >> ARM_BPU_BP_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_read_BP_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID2.reg & ARM_BPU_BP_PID2_JEP106_ID_6_4_Msk) >> ARM_BPU_BP_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_get_BP_PID2_REVISION_bf(const void *const         hw,
                                                                              hri_arm_bpu_bp_pid2_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID2.reg & ARM_BPU_BP_PID2_REVISION(mask)) >> ARM_BPU_BP_PID2_REVISION_Pos;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_read_BP_PID2_REVISION_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID2.reg & ARM_BPU_BP_PID2_REVISION_Msk) >> ARM_BPU_BP_PID2_REVISION_Pos;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_get_BP_PID2_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_pid2_reg_t hri_armbpubpu_read_BP_PID2_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_PID2.reg;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_get_BP_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const         hw,
                                                                                         hri_arm_bpu_bp_pid3_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID3.reg & ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER(mask))
	       >> ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_read_BP_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID3.reg & ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> ARM_BPU_BP_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_get_BP_PID3_ECO_REV_NUMBER_bf(const void *const         hw,
                                                                                    hri_arm_bpu_bp_pid3_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_PID3.reg & ARM_BPU_BP_PID3_ECO_REV_NUMBER(mask)) >> ARM_BPU_BP_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_read_BP_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_PID3.reg & ARM_BPU_BP_PID3_ECO_REV_NUMBER_Msk) >> ARM_BPU_BP_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_get_BP_PID3_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_pid3_reg_t hri_armbpubpu_read_BP_PID3_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_PID3.reg;
}

static inline hri_arm_bpu_bp_cid0_reg_t hri_armbpubpu_get_BP_CID0_BP_CID0_bf(const void *const         hw,
                                                                             hri_arm_bpu_bp_cid0_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_CID0.reg & ARM_BPU_BP_CID0_BP_CID0(mask)) >> ARM_BPU_BP_CID0_BP_CID0_Pos;
}

static inline hri_arm_bpu_bp_cid0_reg_t hri_armbpubpu_read_BP_CID0_BP_CID0_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_CID0.reg & ARM_BPU_BP_CID0_BP_CID0_Msk) >> ARM_BPU_BP_CID0_BP_CID0_Pos;
}

static inline hri_arm_bpu_bp_cid0_reg_t hri_armbpubpu_get_BP_CID0_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_cid0_reg_t hri_armbpubpu_read_BP_CID0_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_CID0.reg;
}

static inline hri_arm_bpu_bp_cid1_reg_t hri_armbpubpu_get_BP_CID1_BP_CID1_bf(const void *const         hw,
                                                                             hri_arm_bpu_bp_cid1_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_CID1.reg & ARM_BPU_BP_CID1_BP_CID1(mask)) >> ARM_BPU_BP_CID1_BP_CID1_Pos;
}

static inline hri_arm_bpu_bp_cid1_reg_t hri_armbpubpu_read_BP_CID1_BP_CID1_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_CID1.reg & ARM_BPU_BP_CID1_BP_CID1_Msk) >> ARM_BPU_BP_CID1_BP_CID1_Pos;
}

static inline hri_arm_bpu_bp_cid1_reg_t hri_armbpubpu_get_BP_CID1_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_cid1_reg_t hri_armbpubpu_read_BP_CID1_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_CID1.reg;
}

static inline hri_arm_bpu_bp_cid2_reg_t hri_armbpubpu_get_BP_CID2_BP_CID2_bf(const void *const         hw,
                                                                             hri_arm_bpu_bp_cid2_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_CID2.reg & ARM_BPU_BP_CID2_BP_CID2(mask)) >> ARM_BPU_BP_CID2_BP_CID2_Pos;
}

static inline hri_arm_bpu_bp_cid2_reg_t hri_armbpubpu_read_BP_CID2_BP_CID2_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_CID2.reg & ARM_BPU_BP_CID2_BP_CID2_Msk) >> ARM_BPU_BP_CID2_BP_CID2_Pos;
}

static inline hri_arm_bpu_bp_cid2_reg_t hri_armbpubpu_get_BP_CID2_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_cid2_reg_t hri_armbpubpu_read_BP_CID2_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_CID2.reg;
}

static inline hri_arm_bpu_bp_cid3_reg_t hri_armbpubpu_get_BP_CID3_BP_CID3_bf(const void *const         hw,
                                                                             hri_arm_bpu_bp_cid3_reg_t mask)
{
	return (((ArmBpu *)hw)->BP_CID3.reg & ARM_BPU_BP_CID3_BP_CID3(mask)) >> ARM_BPU_BP_CID3_BP_CID3_Pos;
}

static inline hri_arm_bpu_bp_cid3_reg_t hri_armbpubpu_read_BP_CID3_BP_CID3_bf(const void *const hw)
{
	return (((ArmBpu *)hw)->BP_CID3.reg & ARM_BPU_BP_CID3_BP_CID3_Msk) >> ARM_BPU_BP_CID3_BP_CID3_Pos;
}

static inline hri_arm_bpu_bp_cid3_reg_t hri_armbpubpu_get_BP_CID3_reg(const void *const         hw,
                                                                      hri_arm_bpu_bp_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmBpu *)hw)->BP_CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_bpu_bp_cid3_reg_t hri_armbpubpu_read_BP_CID3_reg(const void *const hw)
{
	return ((ArmBpu *)hw)->BP_CID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_ARM_BPU_B11_H_INCLUDED */
#endif /* _SAMB11_ARM_BPU_COMPONENT_ */
