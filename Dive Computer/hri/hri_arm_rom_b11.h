/**
 * \file
 *
 * \brief SAM ARM_ROM
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

#ifdef _SAMB11_ARM_ROM_COMPONENT_
#ifndef _HRI_ARM_ROM_B11_H_INCLUDED_
#define _HRI_ARM_ROM_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_ARM_ROM_CRITICAL_SECTIONS)
#define ARM_ROM_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define ARM_ROM_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define ARM_ROM_CRITICAL_SECTION_ENTER()
#define ARM_ROM_CRITICAL_SECTION_LEAVE()
#endif

typedef uint32_t hri_arm_rom_rom_bpu_reg_t;
typedef uint32_t hri_arm_rom_rom_dwt_reg_t;
typedef uint32_t hri_arm_rom_rom_eot_reg_t;
typedef uint32_t hri_arm_rom_rom_scs_reg_t;
typedef uint8_t  hri_arm_rom_rom_cid0_reg_t;
typedef uint8_t  hri_arm_rom_rom_cid1_reg_t;
typedef uint8_t  hri_arm_rom_rom_cid2_reg_t;
typedef uint8_t  hri_arm_rom_rom_cid3_reg_t;
typedef uint8_t  hri_arm_rom_rom_csmt_reg_t;
typedef uint8_t  hri_arm_rom_rom_pid0_reg_t;
typedef uint8_t  hri_arm_rom_rom_pid1_reg_t;
typedef uint8_t  hri_arm_rom_rom_pid2_reg_t;
typedef uint8_t  hri_arm_rom_rom_pid3_reg_t;
typedef uint8_t  hri_arm_rom_rom_pid4_reg_t;

static inline hri_arm_rom_rom_scs_reg_t hri_armromrom_get_ROM_SCS_ROM_SCS_bf(const void *const         hw,
                                                                             hri_arm_rom_rom_scs_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_SCS.reg & ARM_ROM_ROM_SCS_ROM_SCS(mask)) >> ARM_ROM_ROM_SCS_ROM_SCS_Pos;
}

static inline hri_arm_rom_rom_scs_reg_t hri_armromrom_read_ROM_SCS_ROM_SCS_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_SCS.reg & ARM_ROM_ROM_SCS_ROM_SCS_Msk) >> ARM_ROM_ROM_SCS_ROM_SCS_Pos;
}

static inline hri_arm_rom_rom_scs_reg_t hri_armromrom_get_ROM_SCS_reg(const void *const         hw,
                                                                      hri_arm_rom_rom_scs_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmRom *)hw)->ROM_SCS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_scs_reg_t hri_armromrom_read_ROM_SCS_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_SCS.reg;
}

static inline hri_arm_rom_rom_dwt_reg_t hri_armromrom_get_ROM_DWT_ROM_DWT_bf(const void *const         hw,
                                                                             hri_arm_rom_rom_dwt_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_DWT.reg & ARM_ROM_ROM_DWT_ROM_DWT(mask)) >> ARM_ROM_ROM_DWT_ROM_DWT_Pos;
}

static inline hri_arm_rom_rom_dwt_reg_t hri_armromrom_read_ROM_DWT_ROM_DWT_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_DWT.reg & ARM_ROM_ROM_DWT_ROM_DWT_Msk) >> ARM_ROM_ROM_DWT_ROM_DWT_Pos;
}

static inline hri_arm_rom_rom_dwt_reg_t hri_armromrom_get_ROM_DWT_reg(const void *const         hw,
                                                                      hri_arm_rom_rom_dwt_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmRom *)hw)->ROM_DWT.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_dwt_reg_t hri_armromrom_read_ROM_DWT_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_DWT.reg;
}

static inline hri_arm_rom_rom_bpu_reg_t hri_armromrom_get_ROM_BPU_ROM_BPU_bf(const void *const         hw,
                                                                             hri_arm_rom_rom_bpu_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_BPU.reg & ARM_ROM_ROM_BPU_ROM_BPU(mask)) >> ARM_ROM_ROM_BPU_ROM_BPU_Pos;
}

static inline hri_arm_rom_rom_bpu_reg_t hri_armromrom_read_ROM_BPU_ROM_BPU_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_BPU.reg & ARM_ROM_ROM_BPU_ROM_BPU_Msk) >> ARM_ROM_ROM_BPU_ROM_BPU_Pos;
}

static inline hri_arm_rom_rom_bpu_reg_t hri_armromrom_get_ROM_BPU_reg(const void *const         hw,
                                                                      hri_arm_rom_rom_bpu_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmRom *)hw)->ROM_BPU.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_bpu_reg_t hri_armromrom_read_ROM_BPU_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_BPU.reg;
}

static inline hri_arm_rom_rom_eot_reg_t hri_armromrom_get_ROM_EOT_ROM_EOT_bf(const void *const         hw,
                                                                             hri_arm_rom_rom_eot_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_EOT.reg & ARM_ROM_ROM_EOT_ROM_EOT(mask)) >> ARM_ROM_ROM_EOT_ROM_EOT_Pos;
}

static inline hri_arm_rom_rom_eot_reg_t hri_armromrom_read_ROM_EOT_ROM_EOT_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_EOT.reg & ARM_ROM_ROM_EOT_ROM_EOT_Msk) >> ARM_ROM_ROM_EOT_ROM_EOT_Pos;
}

static inline hri_arm_rom_rom_eot_reg_t hri_armromrom_get_ROM_EOT_reg(const void *const         hw,
                                                                      hri_arm_rom_rom_eot_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ArmRom *)hw)->ROM_EOT.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_eot_reg_t hri_armromrom_read_ROM_EOT_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_EOT.reg;
}

static inline bool hri_armromrom_get_ROM_CSMT_ROM_CSMT_bit(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_CSMT.reg & ARM_ROM_ROM_CSMT_ROM_CSMT_Msk) >> ARM_ROM_ROM_CSMT_ROM_CSMT_Pos;
}

static inline hri_arm_rom_rom_csmt_reg_t hri_armromrom_get_ROM_CSMT_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_csmt_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_CSMT.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_csmt_reg_t hri_armromrom_read_ROM_CSMT_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_CSMT.reg;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_get_ROM_PID4_JEP106_C_CODE_bf(const void *const          hw,
                                                                                     hri_arm_rom_rom_pid4_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID4.reg & ARM_ROM_ROM_PID4_JEP106_C_CODE(mask)) >> ARM_ROM_ROM_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_read_ROM_PID4_JEP106_C_CODE_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID4.reg & ARM_ROM_ROM_PID4_JEP106_C_CODE_Msk) >> ARM_ROM_ROM_PID4_JEP106_C_CODE_Pos;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_get_ROM_PID4_BLOCK_COUNT_bf(const void *const          hw,
                                                                                   hri_arm_rom_rom_pid4_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID4.reg & ARM_ROM_ROM_PID4_BLOCK_COUNT(mask)) >> ARM_ROM_ROM_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_read_ROM_PID4_BLOCK_COUNT_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID4.reg & ARM_ROM_ROM_PID4_BLOCK_COUNT_Msk) >> ARM_ROM_ROM_PID4_BLOCK_COUNT_Pos;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_get_ROM_PID4_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_pid4_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_PID4.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_pid4_reg_t hri_armromrom_read_ROM_PID4_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_PID4.reg;
}

static inline hri_arm_rom_rom_pid0_reg_t hri_armromrom_get_ROM_PID0_PART_NUMBER_bf(const void *const          hw,
                                                                                   hri_arm_rom_rom_pid0_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID0.reg & ARM_ROM_ROM_PID0_PART_NUMBER(mask)) >> ARM_ROM_ROM_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid0_reg_t hri_armromrom_read_ROM_PID0_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID0.reg & ARM_ROM_ROM_PID0_PART_NUMBER_Msk) >> ARM_ROM_ROM_PID0_PART_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid0_reg_t hri_armromrom_get_ROM_PID0_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_pid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_PID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_pid0_reg_t hri_armromrom_read_ROM_PID0_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_PID0.reg;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_get_ROM_PID1_PART_NUMBER_bf(const void *const          hw,
                                                                                   hri_arm_rom_rom_pid1_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID1.reg & ARM_ROM_ROM_PID1_PART_NUMBER(mask)) >> ARM_ROM_ROM_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_read_ROM_PID1_PART_NUMBER_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID1.reg & ARM_ROM_ROM_PID1_PART_NUMBER_Msk) >> ARM_ROM_ROM_PID1_PART_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_get_ROM_PID1_JEP106_ID_3_0_bf(const void *const          hw,
                                                                                     hri_arm_rom_rom_pid1_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID1.reg & ARM_ROM_ROM_PID1_JEP106_ID_3_0(mask)) >> ARM_ROM_ROM_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_read_ROM_PID1_JEP106_ID_3_0_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID1.reg & ARM_ROM_ROM_PID1_JEP106_ID_3_0_Msk) >> ARM_ROM_ROM_PID1_JEP106_ID_3_0_Pos;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_get_ROM_PID1_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_pid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_PID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_pid1_reg_t hri_armromrom_read_ROM_PID1_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_PID1.reg;
}

static inline bool hri_armromrom_get_ROM_PID2_JEDEC_USED_bit(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID2.reg & ARM_ROM_ROM_PID2_JEDEC_USED_Msk) >> ARM_ROM_ROM_PID2_JEDEC_USED_Pos;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_get_ROM_PID2_JEP106_ID_6_4_bf(const void *const          hw,
                                                                                     hri_arm_rom_rom_pid2_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID2.reg & ARM_ROM_ROM_PID2_JEP106_ID_6_4(mask)) >> ARM_ROM_ROM_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_read_ROM_PID2_JEP106_ID_6_4_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID2.reg & ARM_ROM_ROM_PID2_JEP106_ID_6_4_Msk) >> ARM_ROM_ROM_PID2_JEP106_ID_6_4_Pos;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_get_ROM_PID2_REVISION_bf(const void *const          hw,
                                                                                hri_arm_rom_rom_pid2_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID2.reg & ARM_ROM_ROM_PID2_REVISION(mask)) >> ARM_ROM_ROM_PID2_REVISION_Pos;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_read_ROM_PID2_REVISION_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID2.reg & ARM_ROM_ROM_PID2_REVISION_Msk) >> ARM_ROM_ROM_PID2_REVISION_Pos;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_get_ROM_PID2_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_pid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_PID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_pid2_reg_t hri_armromrom_read_ROM_PID2_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_PID2.reg;
}

static inline hri_arm_rom_rom_pid3_reg_t
hri_armromrom_get_ROM_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw, hri_arm_rom_rom_pid3_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID3.reg & ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER(mask))
	       >> ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid3_reg_t hri_armromrom_read_ROM_PID3_CUSTOMER_MOD_NUMBER_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID3.reg & ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Msk)
	       >> ARM_ROM_ROM_PID3_CUSTOMER_MOD_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid3_reg_t hri_armromrom_get_ROM_PID3_ECO_REV_NUMBER_bf(const void *const          hw,
                                                                                      hri_arm_rom_rom_pid3_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_PID3.reg & ARM_ROM_ROM_PID3_ECO_REV_NUMBER(mask))
	       >> ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid3_reg_t hri_armromrom_read_ROM_PID3_ECO_REV_NUMBER_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_PID3.reg & ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Msk) >> ARM_ROM_ROM_PID3_ECO_REV_NUMBER_Pos;
}

static inline hri_arm_rom_rom_pid3_reg_t hri_armromrom_get_ROM_PID3_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_pid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_PID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_pid3_reg_t hri_armromrom_read_ROM_PID3_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_PID3.reg;
}

static inline hri_arm_rom_rom_cid0_reg_t hri_armromrom_get_ROM_CID0_ROM_CID0_bf(const void *const          hw,
                                                                                hri_arm_rom_rom_cid0_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_CID0.reg & ARM_ROM_ROM_CID0_ROM_CID0(mask)) >> ARM_ROM_ROM_CID0_ROM_CID0_Pos;
}

static inline hri_arm_rom_rom_cid0_reg_t hri_armromrom_read_ROM_CID0_ROM_CID0_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_CID0.reg & ARM_ROM_ROM_CID0_ROM_CID0_Msk) >> ARM_ROM_ROM_CID0_ROM_CID0_Pos;
}

static inline hri_arm_rom_rom_cid0_reg_t hri_armromrom_get_ROM_CID0_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_cid0_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_CID0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_cid0_reg_t hri_armromrom_read_ROM_CID0_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_CID0.reg;
}

static inline hri_arm_rom_rom_cid1_reg_t hri_armromrom_get_ROM_CID1_ROM_CID1_bf(const void *const          hw,
                                                                                hri_arm_rom_rom_cid1_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_CID1.reg & ARM_ROM_ROM_CID1_ROM_CID1(mask)) >> ARM_ROM_ROM_CID1_ROM_CID1_Pos;
}

static inline hri_arm_rom_rom_cid1_reg_t hri_armromrom_read_ROM_CID1_ROM_CID1_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_CID1.reg & ARM_ROM_ROM_CID1_ROM_CID1_Msk) >> ARM_ROM_ROM_CID1_ROM_CID1_Pos;
}

static inline hri_arm_rom_rom_cid1_reg_t hri_armromrom_get_ROM_CID1_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_cid1_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_CID1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_cid1_reg_t hri_armromrom_read_ROM_CID1_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_CID1.reg;
}

static inline hri_arm_rom_rom_cid2_reg_t hri_armromrom_get_ROM_CID2_ROM_CID2_bf(const void *const          hw,
                                                                                hri_arm_rom_rom_cid2_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_CID2.reg & ARM_ROM_ROM_CID2_ROM_CID2(mask)) >> ARM_ROM_ROM_CID2_ROM_CID2_Pos;
}

static inline hri_arm_rom_rom_cid2_reg_t hri_armromrom_read_ROM_CID2_ROM_CID2_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_CID2.reg & ARM_ROM_ROM_CID2_ROM_CID2_Msk) >> ARM_ROM_ROM_CID2_ROM_CID2_Pos;
}

static inline hri_arm_rom_rom_cid2_reg_t hri_armromrom_get_ROM_CID2_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_cid2_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_CID2.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_cid2_reg_t hri_armromrom_read_ROM_CID2_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_CID2.reg;
}

static inline hri_arm_rom_rom_cid3_reg_t hri_armromrom_get_ROM_CID3_ROM_CID3_bf(const void *const          hw,
                                                                                hri_arm_rom_rom_cid3_reg_t mask)
{
	return (((ArmRom *)hw)->ROM_CID3.reg & ARM_ROM_ROM_CID3_ROM_CID3(mask)) >> ARM_ROM_ROM_CID3_ROM_CID3_Pos;
}

static inline hri_arm_rom_rom_cid3_reg_t hri_armromrom_read_ROM_CID3_ROM_CID3_bf(const void *const hw)
{
	return (((ArmRom *)hw)->ROM_CID3.reg & ARM_ROM_ROM_CID3_ROM_CID3_Msk) >> ARM_ROM_ROM_CID3_ROM_CID3_Pos;
}

static inline hri_arm_rom_rom_cid3_reg_t hri_armromrom_get_ROM_CID3_reg(const void *const          hw,
                                                                        hri_arm_rom_rom_cid3_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ArmRom *)hw)->ROM_CID3.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_arm_rom_rom_cid3_reg_t hri_armromrom_read_ROM_CID3_reg(const void *const hw)
{
	return ((ArmRom *)hw)->ROM_CID3.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_ARM_ROM_B11_H_INCLUDED */
#endif /* _SAMB11_ARM_ROM_COMPONENT_ */
