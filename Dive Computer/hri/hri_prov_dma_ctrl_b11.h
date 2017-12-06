/**
 * \file
 *
 * \brief SAM PROV_DMA_CTRL
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

#ifdef _SAMB11_PROV_DMA_CTRL_COMPONENT_
#ifndef _HRI_PROV_DMA_CTRL_B11_H_INCLUDED_
#define _HRI_PROV_DMA_CTRL_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_PROV_DMA_CTRL_CRITICAL_SECTIONS)
#define PROV_DMA_CTRL_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define PROV_DMA_CTRL_CRITICAL_SECTION_ENTER()
#define PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch0_resrict_reg_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch1_resrict_reg_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch2_resrict_reg_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t;
typedef uint16_t hri_prov_dma_ctrl_ch3_resrict_reg_reg_t;
typedef uint16_t hri_prov_dma_ctrl_core_def_status1_reg_t;
typedef uint16_t hri_prov_dma_ctrl_core_priority_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_count_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_static_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_static_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_static_reg2_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch0_static_reg4_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_count_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_static_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_static_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_static_reg2_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch1_static_reg4_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_count_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_static_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_static_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_static_reg2_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch2_static_reg4_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_count_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_static_reg0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_static_reg1_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_static_reg2_reg_t;
typedef uint32_t hri_prov_dma_ctrl_ch3_static_reg4_reg_t;
typedef uint32_t hri_prov_dma_ctrl_core_def_status0_reg_t;
typedef uint32_t hri_prov_dma_ctrl_periph_rx_ctrl_reg_t;
typedef uint32_t hri_prov_dma_ctrl_periph_tx_ctrl_reg_t;
typedef uint32_t hri_prov_dma_ctrl_user_def_status_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_ch_active_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_ch_start_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch0_int_status_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_ch_active_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_ch_start_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch1_int_status_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_ch_active_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_ch_start_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch2_int_status_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_ch_active_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_ch_start_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_ch3_int_status_reg_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_core_ch_start_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_core_clkdiv_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_core_idle_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_core_int_status_reg_t;
typedef uint8_t  hri_prov_dma_ctrl_core_joint_mode_reg_t;

static inline void hri_provdmactrldmactrl_write_CH0_CH_START_REG_reg(const void *const                        hw,
                                                                     hri_prov_dma_ctrl_ch0_ch_start_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_START_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_write_CH1_CH_START_REG_reg(const void *const                        hw,
                                                                     hri_prov_dma_ctrl_ch1_ch_start_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_START_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_write_CH2_CH_START_REG_reg(const void *const                        hw,
                                                                     hri_prov_dma_ctrl_ch2_ch_start_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_START_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_write_CH3_CH_START_REG_reg(const void *const                        hw,
                                                                     hri_prov_dma_ctrl_ch3_ch_start_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_START_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_write_CORE_CH_START_reg(const void *const                     hw,
                                                                  hri_prov_dma_ctrl_core_ch_start_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CH_START.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg |= PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(mask)) >> PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg ^= PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t
hri_provdmactrldmactrl_read_CH0_CMD_REG0_RD_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG0_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG0_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg0_reg_t hri_provdmactrldmactrl_read_CH0_CMD_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CMD_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg |= PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(mask)) >> PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg ^= PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t
hri_provdmactrldmactrl_read_CH0_CMD_REG1_WR_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG1_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG1_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg1_reg_t hri_provdmactrldmactrl_read_CH0_CMD_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CMD_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                          hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg |= PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const hw, hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(mask)) >> PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(data);
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                             hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg ^= PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t
hri_provdmactrldmactrl_read_CH0_CMD_REG2_BUFFER_SIZE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG2_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG2_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg2_reg_t hri_provdmactrldmactrl_read_CH0_CMD_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CMD_REG2.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg |= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG3_CMD_SET_INT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Pos;
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg ^= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg |= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG3_CMD_LAST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Pos;
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg ^= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg |= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(mask)) >> PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(data);
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg ^= PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t
hri_provdmactrldmactrl_read_CH0_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Msk) >> PROV_DMA_CTRL_CH0_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_CMD_REG3_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH0_CMD_REG3_reg(const void *const hw, hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CMD_REG3_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_cmd_reg3_reg_t hri_provdmactrldmactrl_read_CH0_CMD_REG3_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CMD_REG3.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg |= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG0_RD_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg |= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH0_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg |= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(mask)) >> PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch0_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG0_RD_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG0_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG0_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch0_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_STATIC_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg |= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG1_WR_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg |= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH0_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg |= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(mask)) >> PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch0_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG1_WR_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG1_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG1_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch0_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_STATIC_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg |= PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_STATIC_REG2_JOINT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG2_JOINT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Pos;
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                                          hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg |= PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                       hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(mask)) >> PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch0_static_reg2_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG2_END_SWAP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG2_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG2_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch0_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_STATIC_REG2.reg;
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg |= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg |= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH0_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg |= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg |= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH0_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH0_STATIC_REG4_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH0_STATIC_REG4_reg(const void *const hw, hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg4_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_STATIC_REG4_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch0_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH0_STATIC_REG4_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_STATIC_REG4.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Msk)
	      >> PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_bit(const void *const hw,
                                                                                        bool              value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Pos;
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_CH_ENABLE_REG_CH0_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH0_CH_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_ch_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH0_CH_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CH_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Msk) >> PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH0_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                                      hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_get_CH0_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                   hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH0_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH0_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH0_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                      hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_read_CH0_INT_RAWSTAT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_INT_RAWSTAT_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Msk) >> PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH0_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t
hri_provdmactrldmactrl_get_CH0_INT_CLEAR_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_clear_reg_reg_t
hri_provdmactrldmactrl_read_CH0_INT_CLEAR_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_INT_CLEAR_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Msk) >> PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH0_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH0_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                     hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH0_INT_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH0_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH0_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                        hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH0_INT_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_INT_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg |= PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(mask)) >> PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg ^= PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t
hri_provdmactrldmactrl_read_CH1_CMD_REG0_RD_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG0_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG0_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg0_reg_t hri_provdmactrldmactrl_read_CH1_CMD_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CMD_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg |= PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(mask)) >> PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg ^= PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t
hri_provdmactrldmactrl_read_CH1_CMD_REG1_WR_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG1_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG1_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg1_reg_t hri_provdmactrldmactrl_read_CH1_CMD_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CMD_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                          hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg |= PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const hw, hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(mask)) >> PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(data);
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                             hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg ^= PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t
hri_provdmactrldmactrl_read_CH1_CMD_REG2_BUFFER_SIZE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG2_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG2_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg2_reg_t hri_provdmactrldmactrl_read_CH1_CMD_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CMD_REG2.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg |= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG3_CMD_SET_INT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Pos;
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg ^= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg |= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG3_CMD_LAST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Pos;
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg ^= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg |= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(mask)) >> PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(data);
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg ^= PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t
hri_provdmactrldmactrl_read_CH1_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Msk) >> PROV_DMA_CTRL_CH1_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_CMD_REG3_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH1_CMD_REG3_reg(const void *const hw, hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CMD_REG3_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_cmd_reg3_reg_t hri_provdmactrldmactrl_read_CH1_CMD_REG3_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CMD_REG3.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg |= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG0_RD_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg |= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH1_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg |= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(mask)) >> PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch1_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG0_RD_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG0_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG0_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch1_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_STATIC_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg |= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG1_WR_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg |= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH1_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg |= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(mask)) >> PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch1_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG1_WR_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG1_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG1_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch1_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_STATIC_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg |= PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_STATIC_REG2_JOINT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG2_JOINT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Pos;
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                                          hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg |= PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                       hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(mask)) >> PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch1_static_reg2_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG2_END_SWAP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG2_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG2_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch1_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_STATIC_REG2.reg;
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg |= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg |= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH1_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg |= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg |= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH1_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH1_STATIC_REG4_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH1_STATIC_REG4_reg(const void *const hw, hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg4_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_STATIC_REG4_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch1_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH1_STATIC_REG4_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_STATIC_REG4.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Msk)
	      >> PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_bit(const void *const hw,
                                                                                        bool              value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Pos;
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_CH_ENABLE_REG_CH1_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH1_CH_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_ch_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH1_CH_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CH_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Msk) >> PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH1_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                                      hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_get_CH1_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                   hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH1_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH1_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH1_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                      hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_read_CH1_INT_RAWSTAT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_INT_RAWSTAT_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Msk) >> PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH1_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t
hri_provdmactrldmactrl_get_CH1_INT_CLEAR_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_clear_reg_reg_t
hri_provdmactrldmactrl_read_CH1_INT_CLEAR_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_INT_CLEAR_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Msk) >> PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH1_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH1_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                     hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH1_INT_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH1_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH1_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                        hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH1_INT_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_INT_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg |= PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(mask)) >> PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg ^= PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t
hri_provdmactrldmactrl_read_CH2_CMD_REG0_RD_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG0_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG0_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg0_reg_t hri_provdmactrldmactrl_read_CH2_CMD_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CMD_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg |= PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(mask)) >> PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg ^= PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t
hri_provdmactrldmactrl_read_CH2_CMD_REG1_WR_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG1_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG1_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg1_reg_t hri_provdmactrldmactrl_read_CH2_CMD_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CMD_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                          hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg |= PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const hw, hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(mask)) >> PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(data);
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                             hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg ^= PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t
hri_provdmactrldmactrl_read_CH2_CMD_REG2_BUFFER_SIZE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG2_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG2_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg2_reg_t hri_provdmactrldmactrl_read_CH2_CMD_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CMD_REG2.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg |= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG3_CMD_SET_INT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Pos;
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg ^= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg |= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG3_CMD_LAST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Pos;
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg ^= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg |= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(mask)) >> PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(data);
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg ^= PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t
hri_provdmactrldmactrl_read_CH2_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Msk) >> PROV_DMA_CTRL_CH2_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_CMD_REG3_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH2_CMD_REG3_reg(const void *const hw, hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CMD_REG3_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_cmd_reg3_reg_t hri_provdmactrldmactrl_read_CH2_CMD_REG3_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CMD_REG3.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg |= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG0_RD_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg |= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH2_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg |= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(mask)) >> PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch2_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG0_RD_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG0_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG0_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch2_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_STATIC_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg |= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG1_WR_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg |= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH2_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg |= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(mask)) >> PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch2_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG1_WR_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG1_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG1_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch2_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_STATIC_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg |= PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_STATIC_REG2_JOINT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG2_JOINT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Pos;
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                                          hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg |= PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                       hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(mask)) >> PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch2_static_reg2_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG2_END_SWAP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG2_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG2_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch2_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_STATIC_REG2.reg;
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg |= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg |= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH2_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg |= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg |= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH2_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH2_STATIC_REG4_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH2_STATIC_REG4_reg(const void *const hw, hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg4_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_STATIC_REG4_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch2_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH2_STATIC_REG4_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_STATIC_REG4.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Msk)
	      >> PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_bit(const void *const hw,
                                                                                        bool              value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Pos;
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_CH_ENABLE_REG_CH2_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH2_CH_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_ch_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH2_CH_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CH_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Msk) >> PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH2_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                                      hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_get_CH2_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                   hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH2_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH2_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH2_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                      hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_read_CH2_INT_RAWSTAT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_INT_RAWSTAT_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Msk) >> PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH2_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t
hri_provdmactrldmactrl_get_CH2_INT_CLEAR_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_clear_reg_reg_t
hri_provdmactrldmactrl_read_CH2_INT_CLEAR_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_INT_CLEAR_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Msk) >> PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH2_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH2_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                     hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH2_INT_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH2_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH2_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                        hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH2_INT_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_INT_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg |= PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(mask)) >> PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg ^= PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t
hri_provdmactrldmactrl_read_CH3_CMD_REG0_RD_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG0_RD_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG0_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG0_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG0_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg0_reg_t hri_provdmactrldmactrl_read_CH3_CMD_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CMD_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg |= PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(mask)) >> PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(data);
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg ^= PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t
hri_provdmactrldmactrl_read_CH3_CMD_REG1_WR_START_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG1_WR_START_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG1_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG1_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG1_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg1_reg_t hri_provdmactrldmactrl_read_CH3_CMD_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CMD_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                          hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg |= PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const hw, hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(mask)) >> PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(data);
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const                    hw,
                                                                             hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg ^= PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t
hri_provdmactrldmactrl_read_CH3_CMD_REG2_BUFFER_SIZE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG2_BUFFER_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG2_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG2_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG2_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg2_reg_t hri_provdmactrldmactrl_read_CH3_CMD_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CMD_REG2.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg |= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG3_CMD_SET_INT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Pos;
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG3_CMD_SET_INT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg ^= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_SET_INT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg |= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG3_CMD_LAST_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Pos;
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG3_CMD_LAST_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg ^= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_LAST_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                            hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg |= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                         hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(mask)) >> PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Msk;
	tmp |= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(data);
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                                              hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg &= ~PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const                    hw,
                                                            hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg ^= PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t
hri_provdmactrldmactrl_read_CH3_CMD_REG3_CMD_NEXT_ADDR_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Msk) >> PROV_DMA_CTRL_CH3_CMD_REG3_CMD_NEXT_ADDR_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_CMD_REG3_reg(const void *const                    hw,
                                                               hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t
hri_provdmactrldmactrl_get_CH3_CMD_REG3_reg(const void *const hw, hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CMD_REG3_reg(const void *const                    hw,
                                                                 hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CMD_REG3_reg(const void *const                    hw,
                                                                  hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_cmd_reg3_reg_t hri_provdmactrldmactrl_read_CH3_CMD_REG3_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CMD_REG3.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg |= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG0_RD_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG0_RD_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg |= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH3_STATIC_REG0_RD_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg |= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(mask)) >> PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch3_static_reg0_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG0_RD_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG0_RD_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG0_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG0_reg(const void *const hw, hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg0_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG0_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG0_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch3_static_reg0_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg0_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_STATIC_REG0.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg |= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG1_WR_INCR_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Pos;
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG1_WR_INCR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_INCR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg |= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(mask))
	      >> PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const                       hw,
                                                                   hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Msk)
	      >> PROV_DMA_CTRL_CH3_STATIC_REG1_WR_BURST_MAX_SIZE_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                                           hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg |= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                        hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(mask)) >> PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch3_static_reg1_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const                       hw,
                                                           hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG1_WR_TOKENS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG1_WR_TOKENS_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG1_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG1_reg(const void *const hw, hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg1_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG1_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG1_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch3_static_reg1_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg1_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_STATIC_REG1.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg |= PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_STATIC_REG2_JOINT_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG2_JOINT_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Pos;
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG2_JOINT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG2_JOINT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                                          hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg |= PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                       hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(mask)) >> PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch3_static_reg2_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                         hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG2_END_SWAP_bf(const void *const                       hw,
                                                          hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG2_END_SWAP_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG2_END_SWAP_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG2_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg2_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG2_reg(const void *const hw, hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg2_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG2_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG2_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch3_static_reg2_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg2_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG2_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_STATIC_REG2.reg;
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg |= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG4_RD_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg |= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG4_RD_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH3_STATIC_REG4_RD_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg |= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                            hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(mask)) >> PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const                       hw,
                                                               hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG4_WR_PERIPH_NUM_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Msk) >> PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg |= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                              hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(mask))
	      >> PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg4_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Msk;
	tmp |= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(data);
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg &= ~PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const                       hw,
                                                                 hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg ^= PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG4_WR_PERIPH_DELAY_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Msk)
	      >> PROV_DMA_CTRL_CH3_STATIC_REG4_WR_PERIPH_DELAY_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CH3_STATIC_REG4_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_get_CH3_STATIC_REG4_reg(const void *const hw, hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg4_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_STATIC_REG4_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_STATIC_REG4_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_ch3_static_reg4_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_static_reg4_reg_t
hri_provdmactrldmactrl_read_CH3_STATIC_REG4_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_STATIC_REG4.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Msk)
	      >> PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_bit(const void *const hw,
                                                                                        bool              value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Pos;
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_CH_ENABLE_REG_CH3_CH_ENABLE_REG_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH3_CH_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_CH_ENABLE_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_ch_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH3_CH_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CH_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Msk) >> PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= PROV_DMA_CTRL_CH3_INT_RAWSTAT_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                                      hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_get_CH3_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                   hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CH3_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CH3_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                     hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CH3_INT_RAWSTAT_REG_reg(const void *const                           hw,
                                                      hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_rawstat_reg_reg_t
hri_provdmactrldmactrl_read_CH3_INT_RAWSTAT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_INT_RAWSTAT_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Msk) >> PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= PROV_DMA_CTRL_CH3_INT_CLEAR_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                    hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t
hri_provdmactrldmactrl_get_CH3_INT_CLEAR_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                      hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_CLEAR_REG_reg(const void *const                         hw,
                                                                       hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_clear_reg_reg_t
hri_provdmactrldmactrl_read_CH3_INT_CLEAR_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_INT_CLEAR_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_CH_END_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk)
	      >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp = (tmp & PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Msk) >> PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_WDT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Msk;
	tmp |= value << PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Pos;
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= PROV_DMA_CTRL_CH3_INT_ENABLE_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CH3_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                     hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t
hri_provdmactrldmactrl_get_CH3_INT_ENABLE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CH3_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CH3_INT_ENABLE_REG_reg(const void *const                          hw,
                                                                        hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_enable_reg_reg_t
hri_provdmactrldmactrl_read_CH3_INT_ENABLE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_INT_ENABLE_REG.reg;
}

static inline void hri_provdmactrldmactrl_set_CORE_JOINT_MODE_CORE_JOINT_MODE_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg |= PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CORE_JOINT_MODE_CORE_JOINT_MODE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Msk)
	      >> PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_JOINT_MODE_CORE_JOINT_MODE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Msk;
	tmp |= value << PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Pos;
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_JOINT_MODE_CORE_JOINT_MODE_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg &= ~PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_JOINT_MODE_CORE_JOINT_MODE_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg ^= PROV_DMA_CTRL_CORE_JOINT_MODE_CORE_JOINT_MODE_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CORE_JOINT_MODE_reg(const void *const                       hw,
                                                                  hri_prov_dma_ctrl_core_joint_mode_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_joint_mode_reg_t
hri_provdmactrldmactrl_get_CORE_JOINT_MODE_reg(const void *const hw, hri_prov_dma_ctrl_core_joint_mode_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_JOINT_MODE_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_core_joint_mode_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_JOINT_MODE_reg(const void *const                       hw,
                                                                    hri_prov_dma_ctrl_core_joint_mode_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_JOINT_MODE_reg(const void *const                       hw,
                                                                     hri_prov_dma_ctrl_core_joint_mode_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_joint_mode_reg_t
hri_provdmactrldmactrl_read_CORE_JOINT_MODE_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_JOINT_MODE.reg;
}

static inline void hri_provdmactrldmactrl_set_CORE_PRIORITY_RD_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CORE_PRIORITY_RD_PRIO_TOP_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_PRIORITY_RD_PRIO_TOP_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Msk;
	tmp |= value << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Pos;
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_PRIORITY_RD_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_PRIORITY_RD_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CORE_PRIORITY_RD_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CORE_PRIORITY_RD_PRIO_HIGH_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_PRIORITY_RD_PRIO_HIGH_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Msk;
	tmp |= value << PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Pos;
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_PRIORITY_RD_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_PRIORITY_RD_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CORE_PRIORITY_WR_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CORE_PRIORITY_WR_PRIO_TOP_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_PRIORITY_WR_PRIO_TOP_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Msk;
	tmp |= value << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Pos;
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_PRIORITY_WR_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_PRIORITY_WR_PRIO_TOP_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_set_CORE_PRIORITY_WR_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CORE_PRIORITY_WR_PRIO_HIGH_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Pos;
	return (bool)tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_PRIORITY_WR_PRIO_HIGH_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Msk;
	tmp |= value << PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Pos;
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_PRIORITY_WR_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_PRIORITY_WR_PRIO_HIGH_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_set_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                            hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_get_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                            hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(mask)) >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                              hri_prov_dma_ctrl_core_priority_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(data);
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                              hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_read_CORE_PRIORITY_RD_PRIO_TOP_NUM_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_TOP_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                             hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_get_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                             hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(mask))
	      >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(data);
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                                hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_read_CORE_PRIORITY_RD_PRIO_HIGH_NUM_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_RD_PRIO_HIGH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                            hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_get_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                            hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(mask)) >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                              hri_prov_dma_ctrl_core_priority_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(data);
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                              hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_read_CORE_PRIORITY_WR_PRIO_TOP_NUM_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_TOP_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_set_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                             hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_get_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                             hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(mask))
	      >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Pos;
	return tmp;
}

static inline void
hri_provdmactrldmactrl_write_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t data)
{
	uint16_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Msk;
	tmp |= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(data);
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_clear_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                               hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_provdmactrldmactrl_toggle_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const                     hw,
                                                                hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_read_CORE_PRIORITY_WR_PRIO_HIGH_NUM_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Msk) >> PROV_DMA_CTRL_CORE_PRIORITY_WR_PRIO_HIGH_NUM_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CORE_PRIORITY_reg(const void *const                     hw,
                                                                hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t
hri_provdmactrldmactrl_get_CORE_PRIORITY_reg(const void *const hw, hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_PRIORITY_reg(const void *const                     hw,
                                                                  hri_prov_dma_ctrl_core_priority_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_PRIORITY_reg(const void *const                     hw,
                                                                  hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_PRIORITY_reg(const void *const                     hw,
                                                                   hri_prov_dma_ctrl_core_priority_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_priority_reg_t hri_provdmactrldmactrl_read_CORE_PRIORITY_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_PRIORITY.reg;
}

static inline void hri_provdmactrldmactrl_set_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const                   hw,
                                                                         hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg |= PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_clkdiv_reg_t
hri_provdmactrldmactrl_get_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const hw, hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(mask)) >> PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const                   hw,
                                                                           hri_prov_dma_ctrl_core_clkdiv_reg_t data)
{
	uint8_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg;
	tmp &= ~PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Msk;
	tmp |= PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(data);
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const                   hw,
                                                                           hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg &= ~PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const                   hw,
                                                                            hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg ^= PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_clkdiv_reg_t
hri_provdmactrldmactrl_read_CORE_CLKDIV_CORE_CLKDIV_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg;
	tmp = (tmp & PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Msk) >> PROV_DMA_CTRL_CORE_CLKDIV_CORE_CLKDIV_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_CORE_CLKDIV_reg(const void *const                   hw,
                                                              hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_clkdiv_reg_t
hri_provdmactrldmactrl_get_CORE_CLKDIV_reg(const void *const hw, hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_CORE_CLKDIV_reg(const void *const                   hw,
                                                                hri_prov_dma_ctrl_core_clkdiv_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_CORE_CLKDIV_reg(const void *const                   hw,
                                                                hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_CORE_CLKDIV_reg(const void *const                   hw,
                                                                 hri_prov_dma_ctrl_core_clkdiv_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_core_clkdiv_reg_t hri_provdmactrldmactrl_read_CORE_CLKDIV_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_CLKDIV.reg;
}

static inline void hri_provdmactrldmactrl_set_PERIPH_RX_CTRL_RX_REQ_bf(const void *const                      hw,
                                                                       hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg |= PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_rx_ctrl_reg_t
hri_provdmactrldmactrl_get_PERIPH_RX_CTRL_RX_REQ_bf(const void *const hw, hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg;
	tmp = (tmp & PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(mask)) >> PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_PERIPH_RX_CTRL_RX_REQ_bf(const void *const                      hw,
                                                                         hri_prov_dma_ctrl_periph_rx_ctrl_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg;
	tmp &= ~PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Msk;
	tmp |= PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(data);
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_PERIPH_RX_CTRL_RX_REQ_bf(const void *const                      hw,
                                                                         hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg &= ~PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_PERIPH_RX_CTRL_RX_REQ_bf(const void *const                      hw,
                                                                          hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg ^= PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_rx_ctrl_reg_t
hri_provdmactrldmactrl_read_PERIPH_RX_CTRL_RX_REQ_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg;
	tmp = (tmp & PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Msk) >> PROV_DMA_CTRL_PERIPH_RX_CTRL_RX_REQ_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_PERIPH_RX_CTRL_reg(const void *const                      hw,
                                                                 hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_rx_ctrl_reg_t
hri_provdmactrldmactrl_get_PERIPH_RX_CTRL_reg(const void *const hw, hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_PERIPH_RX_CTRL_reg(const void *const                      hw,
                                                                   hri_prov_dma_ctrl_periph_rx_ctrl_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_PERIPH_RX_CTRL_reg(const void *const                      hw,
                                                                   hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_PERIPH_RX_CTRL_reg(const void *const                      hw,
                                                                    hri_prov_dma_ctrl_periph_rx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_rx_ctrl_reg_t
hri_provdmactrldmactrl_read_PERIPH_RX_CTRL_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->PERIPH_RX_CTRL.reg;
}

static inline void hri_provdmactrldmactrl_set_PERIPH_TX_CTRL_TX_REQ_bf(const void *const                      hw,
                                                                       hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg |= PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_tx_ctrl_reg_t
hri_provdmactrldmactrl_get_PERIPH_TX_CTRL_TX_REQ_bf(const void *const hw, hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg;
	tmp = (tmp & PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(mask)) >> PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_PERIPH_TX_CTRL_TX_REQ_bf(const void *const                      hw,
                                                                         hri_prov_dma_ctrl_periph_tx_ctrl_reg_t data)
{
	uint32_t tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg;
	tmp &= ~PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Msk;
	tmp |= PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(data);
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg = tmp;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_PERIPH_TX_CTRL_TX_REQ_bf(const void *const                      hw,
                                                                         hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg &= ~PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_PERIPH_TX_CTRL_TX_REQ_bf(const void *const                      hw,
                                                                          hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg ^= PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ(mask);
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_tx_ctrl_reg_t
hri_provdmactrldmactrl_read_PERIPH_TX_CTRL_TX_REQ_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg;
	tmp = (tmp & PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Msk) >> PROV_DMA_CTRL_PERIPH_TX_CTRL_TX_REQ_Pos;
	return tmp;
}

static inline void hri_provdmactrldmactrl_set_PERIPH_TX_CTRL_reg(const void *const                      hw,
                                                                 hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg |= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_tx_ctrl_reg_t
hri_provdmactrldmactrl_get_PERIPH_TX_CTRL_reg(const void *const hw, hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_write_PERIPH_TX_CTRL_reg(const void *const                      hw,
                                                                   hri_prov_dma_ctrl_periph_tx_ctrl_reg_t data)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg = data;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_clear_PERIPH_TX_CTRL_reg(const void *const                      hw,
                                                                   hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg &= ~mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline void hri_provdmactrldmactrl_toggle_PERIPH_TX_CTRL_reg(const void *const                      hw,
                                                                    hri_prov_dma_ctrl_periph_tx_ctrl_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg ^= mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_periph_tx_ctrl_reg_t
hri_provdmactrldmactrl_read_PERIPH_TX_CTRL_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->PERIPH_TX_CTRL.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_ALLOW_FULL_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_BURST_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_FULL_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_ALLOW_JOINT_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_JOINT_BURST_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_ALLOW_JOINT_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_RESRICT_REG_SIMPLE_MEM_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg & PROV_DMA_CTRL_CH0_RESRICT_REG_SIMPLE_MEM_Msk)
	       >> PROV_DMA_CTRL_CH0_RESRICT_REG_SIMPLE_MEM_Pos;
}

static inline hri_prov_dma_ctrl_ch0_resrict_reg_reg_t
hri_provdmactrldmactrl_get_CH0_RESRICT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_resrict_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch0_resrict_reg_reg_t
hri_provdmactrldmactrl_read_CH0_RESRICT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_RESRICT_REG.reg;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH0_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const                             hw,
                                                           hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP(mask))
	       >> PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH0_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Msk)
	       >> PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const                             hw,
                                                                hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS(mask))
	       >> PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Msk)
	       >> PROV_DMA_CTRL_CH0_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH0_FIFO_FULLNESS_REG_reg(const void *const                             hw,
                                                     hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch0_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH0_FIFO_FULLNESS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_FIFO_FULLNESS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH0_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos;
}

static inline hri_prov_dma_ctrl_ch0_ch_active_reg_reg_t
hri_provdmactrldmactrl_get_CH0_CH_ACTIVE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_ch_active_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_CH_ACTIVE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch0_ch_active_reg_reg_t
hri_provdmactrldmactrl_read_CH0_CH_ACTIVE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_CH_ACTIVE_REG.reg;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t
hri_provdmactrldmactrl_get_CH0_COUNT_REG_BUFF_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch0_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg & PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT(mask))
	       >> PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t
hri_provdmactrldmactrl_read_CH0_COUNT_REG_BUFF_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg & PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH0_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t
hri_provdmactrldmactrl_get_CH0_COUNT_REG_INT_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch0_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg & PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT(mask))
	       >> PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t
hri_provdmactrldmactrl_read_CH0_COUNT_REG_INT_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg & PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH0_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t
hri_provdmactrldmactrl_get_CH0_COUNT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch0_count_reg_reg_t hri_provdmactrldmactrl_read_CH0_COUNT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_COUNT_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_ALLOW_FULL_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_BURST_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_FULL_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_ALLOW_JOINT_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_JOINT_BURST_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_ALLOW_JOINT_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_RESRICT_REG_SIMPLE_MEM_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg & PROV_DMA_CTRL_CH1_RESRICT_REG_SIMPLE_MEM_Msk)
	       >> PROV_DMA_CTRL_CH1_RESRICT_REG_SIMPLE_MEM_Pos;
}

static inline hri_prov_dma_ctrl_ch1_resrict_reg_reg_t
hri_provdmactrldmactrl_get_CH1_RESRICT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_resrict_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch1_resrict_reg_reg_t
hri_provdmactrldmactrl_read_CH1_RESRICT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_RESRICT_REG.reg;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH1_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const                             hw,
                                                           hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP(mask))
	       >> PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH1_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Msk)
	       >> PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const                             hw,
                                                                hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS(mask))
	       >> PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Msk)
	       >> PROV_DMA_CTRL_CH1_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH1_FIFO_FULLNESS_REG_reg(const void *const                             hw,
                                                     hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch1_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH1_FIFO_FULLNESS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_FIFO_FULLNESS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH1_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos;
}

static inline hri_prov_dma_ctrl_ch1_ch_active_reg_reg_t
hri_provdmactrldmactrl_get_CH1_CH_ACTIVE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_ch_active_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_CH_ACTIVE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch1_ch_active_reg_reg_t
hri_provdmactrldmactrl_read_CH1_CH_ACTIVE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_CH_ACTIVE_REG.reg;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t
hri_provdmactrldmactrl_get_CH1_COUNT_REG_BUFF_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch1_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg & PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT(mask))
	       >> PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t
hri_provdmactrldmactrl_read_CH1_COUNT_REG_BUFF_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg & PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH1_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t
hri_provdmactrldmactrl_get_CH1_COUNT_REG_INT_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch1_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg & PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT(mask))
	       >> PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t
hri_provdmactrldmactrl_read_CH1_COUNT_REG_INT_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg & PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH1_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t
hri_provdmactrldmactrl_get_CH1_COUNT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch1_count_reg_reg_t hri_provdmactrldmactrl_read_CH1_COUNT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_COUNT_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_ALLOW_FULL_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_BURST_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_FULL_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_ALLOW_JOINT_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_JOINT_BURST_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_ALLOW_JOINT_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_RESRICT_REG_SIMPLE_MEM_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg & PROV_DMA_CTRL_CH2_RESRICT_REG_SIMPLE_MEM_Msk)
	       >> PROV_DMA_CTRL_CH2_RESRICT_REG_SIMPLE_MEM_Pos;
}

static inline hri_prov_dma_ctrl_ch2_resrict_reg_reg_t
hri_provdmactrldmactrl_get_CH2_RESRICT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_resrict_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch2_resrict_reg_reg_t
hri_provdmactrldmactrl_read_CH2_RESRICT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_RESRICT_REG.reg;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH2_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const                             hw,
                                                           hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP(mask))
	       >> PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH2_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Msk)
	       >> PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const                             hw,
                                                                hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS(mask))
	       >> PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Msk)
	       >> PROV_DMA_CTRL_CH2_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH2_FIFO_FULLNESS_REG_reg(const void *const                             hw,
                                                     hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch2_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH2_FIFO_FULLNESS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_FIFO_FULLNESS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH2_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos;
}

static inline hri_prov_dma_ctrl_ch2_ch_active_reg_reg_t
hri_provdmactrldmactrl_get_CH2_CH_ACTIVE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_ch_active_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_CH_ACTIVE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch2_ch_active_reg_reg_t
hri_provdmactrldmactrl_read_CH2_CH_ACTIVE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_CH_ACTIVE_REG.reg;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t
hri_provdmactrldmactrl_get_CH2_COUNT_REG_BUFF_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch2_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg & PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT(mask))
	       >> PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t
hri_provdmactrldmactrl_read_CH2_COUNT_REG_BUFF_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg & PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH2_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t
hri_provdmactrldmactrl_get_CH2_COUNT_REG_INT_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch2_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg & PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT(mask))
	       >> PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t
hri_provdmactrldmactrl_read_CH2_COUNT_REG_INT_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg & PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH2_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t
hri_provdmactrldmactrl_get_CH2_COUNT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch2_count_reg_reg_t hri_provdmactrldmactrl_read_CH2_COUNT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_COUNT_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_RD_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_WR_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_ALLOW_FULL_FIFO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_FIFO_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_FIFO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_ALLOW_FULL_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_BURST_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_FULL_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_ALLOW_JOINT_BURST_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_JOINT_BURST_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_ALLOW_JOINT_BURST_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_RESRICT_REG_SIMPLE_MEM_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg & PROV_DMA_CTRL_CH3_RESRICT_REG_SIMPLE_MEM_Msk)
	       >> PROV_DMA_CTRL_CH3_RESRICT_REG_SIMPLE_MEM_Pos;
}

static inline hri_prov_dma_ctrl_ch3_resrict_reg_reg_t
hri_provdmactrldmactrl_get_CH3_RESRICT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_resrict_reg_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch3_resrict_reg_reg_t
hri_provdmactrldmactrl_read_CH3_RESRICT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_RESRICT_REG.reg;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH3_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const                             hw,
                                                           hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP(mask))
	       >> PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH3_FIFO_FULLNESS_REG_RD_GAP_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Msk)
	       >> PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_RD_GAP_Pos;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const                             hw,
                                                                hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS(mask))
	       >> PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg & PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Msk)
	       >> PROV_DMA_CTRL_CH3_FIFO_FULLNESS_REG_WR_FULLNESS_Pos;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_get_CH3_FIFO_FULLNESS_REG_reg(const void *const                             hw,
                                                     hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch3_fifo_fullness_reg_reg_t
hri_provdmactrldmactrl_read_CH3_FIFO_FULLNESS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_FIFO_FULLNESS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_RD_ACTIVE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_CH_ACTIVE_REG.reg & PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE_Msk)
	       >> PROV_DMA_CTRL_CH3_CH_ACTIVE_REG_CH_WR_ACTIVE_Pos;
}

static inline hri_prov_dma_ctrl_ch3_ch_active_reg_reg_t
hri_provdmactrldmactrl_get_CH3_CH_ACTIVE_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_ch_active_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_CH_ACTIVE_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch3_ch_active_reg_reg_t
hri_provdmactrldmactrl_read_CH3_CH_ACTIVE_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_CH_ACTIVE_REG.reg;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t
hri_provdmactrldmactrl_get_CH3_COUNT_REG_BUFF_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch3_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg & PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT(mask))
	       >> PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t
hri_provdmactrldmactrl_read_CH3_COUNT_REG_BUFF_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg & PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH3_COUNT_REG_BUFF_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t
hri_provdmactrldmactrl_get_CH3_COUNT_REG_INT_COUNT_bf(const void *const hw, hri_prov_dma_ctrl_ch3_count_reg_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg & PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT(mask))
	       >> PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t
hri_provdmactrldmactrl_read_CH3_COUNT_REG_INT_COUNT_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg & PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Msk)
	       >> PROV_DMA_CTRL_CH3_COUNT_REG_INT_COUNT_Pos;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t
hri_provdmactrldmactrl_get_CH3_COUNT_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_count_reg_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_ch3_count_reg_reg_t hri_provdmactrldmactrl_read_CH3_COUNT_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_COUNT_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CORE_INT_STATUS_CHANNEL_0_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg & PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_0_Msk)
	       >> PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_0_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_INT_STATUS_CHANNEL_1_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg & PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_1_Msk)
	       >> PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_1_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_INT_STATUS_CHANNEL_2_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg & PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_2_Msk)
	       >> PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_2_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_INT_STATUS_CHANNEL_3_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg & PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_3_Msk)
	       >> PROV_DMA_CTRL_CORE_INT_STATUS_CHANNEL_3_Pos;
}

static inline hri_prov_dma_ctrl_core_int_status_reg_t
hri_provdmactrldmactrl_get_CORE_INT_STATUS_reg(const void *const hw, hri_prov_dma_ctrl_core_int_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_core_int_status_reg_t
hri_provdmactrldmactrl_read_CORE_INT_STATUS_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_INT_STATUS.reg;
}

static inline bool hri_provdmactrldmactrl_get_CORE_IDLE_CORE_IDLE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_IDLE.reg & PROV_DMA_CTRL_CORE_IDLE_CORE_IDLE_Msk)
	       >> PROV_DMA_CTRL_CORE_IDLE_CORE_IDLE_Pos;
}

static inline hri_prov_dma_ctrl_core_idle_reg_t
hri_provdmactrldmactrl_get_CORE_IDLE_reg(const void *const hw, hri_prov_dma_ctrl_core_idle_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_IDLE.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_core_idle_reg_t hri_provdmactrldmactrl_read_CORE_IDLE_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_IDLE.reg;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_DUAL_CORE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_DUAL_CORE_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_DUAL_CORE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_IC_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_IC_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_IC_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_IC_DUAL_PORT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_IC_DUAL_PORT_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_IC_DUAL_PORT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_CLKGATE_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_CLKGATE_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_CLKGATE_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_PORT0_MUX_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_PORT0_MUX_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_PORT0_MUX_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_PORT1_MUX_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_PORT1_MUX_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_PORT1_MUX_Pos;
}

static inline bool hri_provdmactrldmactrl_get_USER_DEF_STATUS_PROJ_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_PROJ_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_PROJ_Pos;
}

static inline hri_prov_dma_ctrl_user_def_status_reg_t
hri_provdmactrldmactrl_get_USER_DEF_STATUS_INT_NUM_bf(const void *const                       hw,
                                                      hri_prov_dma_ctrl_user_def_status_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM(mask))
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Pos;
}

static inline hri_prov_dma_ctrl_user_def_status_reg_t
hri_provdmactrldmactrl_read_USER_DEF_STATUS_INT_NUM_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg & PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Msk)
	       >> PROV_DMA_CTRL_USER_DEF_STATUS_INT_NUM_Pos;
}

static inline hri_prov_dma_ctrl_user_def_status_reg_t
hri_provdmactrldmactrl_get_USER_DEF_STATUS_reg(const void *const hw, hri_prov_dma_ctrl_user_def_status_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_user_def_status_reg_t
hri_provdmactrldmactrl_read_USER_DEF_STATUS_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->USER_DEF_STATUS.reg;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_AHB_BUS_32_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_AHB_BUS_32_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_AHB_BUS_32_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_CH_NUM_bf(const void *const                        hw,
                                                      hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_CH_NUM_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_CH_NUM_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_FIFO_SIZE_bf(const void *const                        hw,
                                                         hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_FIFO_SIZE_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_FIFO_SIZE_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_WCMD_DEPTH_bf(const void *const                        hw,
                                                          hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_WCMD_DEPTH_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_WCMD_DEPTH_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_RCMD_DEPTH_bf(const void *const                        hw,
                                                          hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_RCMD_DEPTH_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_RCMD_DEPTH_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_ADDR_BITS_bf(const void *const                        hw,
                                                         hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_ADDR_BITS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_ADDR_BITS_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_BUFF_BITS_bf(const void *const                        hw,
                                                         hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS(mask))
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_BUFF_BITS_bf(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg & PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS0_BUFF_BITS_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS0_reg(const void *const hw, hri_prov_dma_ctrl_core_def_status0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_core_def_status0_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS0_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_DEF_STATUS0.reg;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_WDT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_WDT_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_WDT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_AHB_TIMEOUT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_AHB_TIMEOUT_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_AHB_TIMEOUT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_TOKENS_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_TOKENS_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_TOKENS_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_PRIO_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_PRIO_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_PRIO_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_OUTS_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_OUTS_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_OUTS_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_WAIT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_WAIT_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_WAIT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_BLOCK_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_BLOCK_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_BLOCK_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_JOINT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_JOINT_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_JOINT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_INDEPENDENT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_INDEPENDENT_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_INDEPENDENT_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_PERIPH_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_PERIPH_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_PERIPH_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_LISTS_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_LISTS_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_LISTS_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_END_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_END_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_END_Pos;
}

static inline bool hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_CLKDIV_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg & PROV_DMA_CTRL_CORE_DEF_STATUS1_CLKDIV_Msk)
	       >> PROV_DMA_CTRL_CORE_DEF_STATUS1_CLKDIV_Pos;
}

static inline hri_prov_dma_ctrl_core_def_status1_reg_t
hri_provdmactrldmactrl_get_CORE_DEF_STATUS1_reg(const void *const hw, hri_prov_dma_ctrl_core_def_status1_reg_t mask)
{
	uint16_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_prov_dma_ctrl_core_def_status1_reg_t
hri_provdmactrldmactrl_read_CORE_DEF_STATUS1_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CORE_DEF_STATUS1.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT_Msk)
	       >> PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH0_INT_STATUS_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_status_reg_reg_t
hri_provdmactrldmactrl_get_CH0_INT_STATUS_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch0_int_status_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_clear_CH0_INT_STATUS_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch0_int_status_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg = mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch0_int_status_reg_reg_t
hri_provdmactrldmactrl_read_CH0_INT_STATUS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH0_INT_STATUS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT_Msk)
	       >> PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH1_INT_STATUS_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_status_reg_reg_t
hri_provdmactrldmactrl_get_CH1_INT_STATUS_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch1_int_status_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_clear_CH1_INT_STATUS_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch1_int_status_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg = mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch1_int_status_reg_reg_t
hri_provdmactrldmactrl_read_CH1_INT_STATUS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH1_INT_STATUS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT_Msk)
	       >> PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH2_INT_STATUS_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_status_reg_reg_t
hri_provdmactrldmactrl_get_CH2_INT_STATUS_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch2_int_status_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_clear_CH2_INT_STATUS_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch2_int_status_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg = mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch2_int_status_reg_reg_t
hri_provdmactrldmactrl_read_CH2_INT_STATUS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH2_INT_STATUS_REG.reg;
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_CH_END_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_CH_END_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_RD_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_RD_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_WR_SLVERR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_WR_SLVERR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_FIFO_OVERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_OVERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_FIFO_UNDERFLOW_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_TIMEOUT_RD_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_RD_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_TIMEOUT_WR_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_TIMEOUT_WR_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	return (((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg & PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT_Msk)
	       >> PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT_Pos;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_WDT_bit(const void *const hw)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = PROV_DMA_CTRL_CH3_INT_STATUS_REG_WDT_Msk;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_status_reg_reg_t
hri_provdmactrldmactrl_get_CH3_INT_STATUS_REG_reg(const void *const hw, hri_prov_dma_ctrl_ch3_int_status_reg_reg_t mask)
{
	uint8_t tmp;
	tmp = ((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_provdmactrldmactrl_clear_CH3_INT_STATUS_REG_reg(const void *const                          hw,
                                                                       hri_prov_dma_ctrl_ch3_int_status_reg_reg_t mask)
{
	PROV_DMA_CTRL_CRITICAL_SECTION_ENTER();
	((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg = mask;
	PROV_DMA_CTRL_CRITICAL_SECTION_LEAVE();
}

static inline hri_prov_dma_ctrl_ch3_int_status_reg_reg_t
hri_provdmactrldmactrl_read_CH3_INT_STATUS_REG_reg(const void *const hw)
{
	return ((ProvDmaCtrl *)hw)->CH3_INT_STATUS_REG.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_PROV_DMA_CTRL_B11_H_INCLUDED */
#endif /* _SAMB11_PROV_DMA_CTRL_COMPONENT_ */
