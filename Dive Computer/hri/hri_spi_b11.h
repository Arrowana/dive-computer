/**
 * \file
 *
 * \brief SAM SPI
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

#ifdef _SAMB11_SPI_COMPONENT_
#ifndef _HRI_SPI_B11_H_INCLUDED_
#define _HRI_SPI_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_SPI_CRITICAL_SECTIONS)
#define SPI_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define SPI_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define SPI_CRITICAL_SECTION_ENTER()
#define SPI_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_spi_clk_divider_reg_t;
typedef uint8_t  hri_spi_bus_status_reg_t;
typedef uint8_t  hri_spi_clock_source_select_reg_t;
typedef uint8_t  hri_spi_configuration_reg_t;
typedef uint8_t  hri_spi_fault_enable_reg_t;
typedef uint8_t  hri_spi_master_mode_reg_t;
typedef uint8_t  hri_spi_module_enable_reg_t;
typedef uint8_t  hri_spi_receive_data_reg_t;
typedef uint8_t  hri_spi_receive_status_reg_t;
typedef uint8_t  hri_spi_rx_interrupt_mask_reg_t;
typedef uint8_t  hri_spi_transmit_data_reg_t;
typedef uint8_t  hri_spi_transmit_status_reg_t;
typedef uint8_t  hri_spi_tx_interrupt_mask_reg_t;

static inline void hri_spi_write_TRANSMIT_DATA_reg(const void *const hw, hri_spi_transmit_data_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TRANSMIT_DATA.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                            hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg |= SPI_CLOCK_SOURCE_SELECT_CLOCK(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clock_source_select_reg_t
hri_spi_get_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const hw, hri_spi_clock_source_select_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp = (tmp & SPI_CLOCK_SOURCE_SELECT_CLOCK(mask)) >> SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos;
	return tmp;
}

static inline void hri_spi_write_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                              hri_spi_clock_source_select_reg_t data)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp &= ~SPI_CLOCK_SOURCE_SELECT_CLOCK_Msk;
	tmp |= SPI_CLOCK_SOURCE_SELECT_CLOCK(data);
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                              hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg &= ~SPI_CLOCK_SOURCE_SELECT_CLOCK(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                               hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg ^= SPI_CLOCK_SOURCE_SELECT_CLOCK(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clock_source_select_reg_t hri_spi_read_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp = (tmp & SPI_CLOCK_SOURCE_SELECT_CLOCK_Msk) >> SPI_CLOCK_SOURCE_SELECT_CLOCK_Pos;
	return tmp;
}

static inline void hri_spi_set_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clock_source_select_reg_t
hri_spi_get_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_spi_clock_source_select_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_spi_clock_source_select_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_spi_clock_source_select_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->CLOCK_SOURCE_SELECT.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clock_source_select_reg_t hri_spi_read_CLOCK_SOURCE_SELECT_reg(const void *const hw)
{
	return ((Spi *)hw)->CLOCK_SOURCE_SELECT.reg;
}

static inline void hri_spi_set_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg |= SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clk_divider_reg_t hri_spi_get_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const         hw,
                                                                                    hri_spi_clk_divider_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Spi *)hw)->SPI_CLK_DIVIDER.reg;
	tmp = (tmp & SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(mask)) >> SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Pos;
	return tmp;
}

static inline void hri_spi_write_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const hw, hri_spi_clk_divider_reg_t data)
{
	uint16_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CLK_DIVIDER.reg;
	tmp &= ~SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Msk;
	tmp |= SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(data);
	((Spi *)hw)->SPI_CLK_DIVIDER.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg &= ~SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg ^= SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO(mask);
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clk_divider_reg_t hri_spi_read_CLK_DIVIDER_SPI_DIVIDE_RATIO_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Spi *)hw)->SPI_CLK_DIVIDER.reg;
	tmp = (tmp & SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Msk) >> SPI_CLK_DIVIDER_SPI_DIVIDE_RATIO_Pos;
	return tmp;
}

static inline void hri_spi_set_CLK_DIVIDER_reg(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clk_divider_reg_t hri_spi_get_CLK_DIVIDER_reg(const void *const         hw,
                                                                    hri_spi_clk_divider_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Spi *)hw)->SPI_CLK_DIVIDER.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_CLK_DIVIDER_reg(const void *const hw, hri_spi_clk_divider_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CLK_DIVIDER_reg(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CLK_DIVIDER_reg(const void *const hw, hri_spi_clk_divider_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CLK_DIVIDER.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_clk_divider_reg_t hri_spi_read_CLK_DIVIDER_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_CLK_DIVIDER.reg;
}

static inline void hri_spi_set_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg |= SPI_MODULE_ENABLE_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_MODULE_ENABLE.reg;
	tmp = (tmp & SPI_MODULE_ENABLE_ENABLE) >> SPI_MODULE_ENABLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_MODULE_ENABLE_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_MODULE_ENABLE.reg;
	tmp &= ~SPI_MODULE_ENABLE_ENABLE;
	tmp |= value << SPI_MODULE_ENABLE_ENABLE_Pos;
	((Spi *)hw)->SPI_MODULE_ENABLE.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg &= ~SPI_MODULE_ENABLE_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg ^= SPI_MODULE_ENABLE_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_MODULE_ENABLE_reg(const void *const hw, hri_spi_module_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_module_enable_reg_t hri_spi_get_MODULE_ENABLE_reg(const void *const           hw,
                                                                        hri_spi_module_enable_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_MODULE_ENABLE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_MODULE_ENABLE_reg(const void *const hw, hri_spi_module_enable_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_MODULE_ENABLE_reg(const void *const hw, hri_spi_module_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_MODULE_ENABLE_reg(const void *const hw, hri_spi_module_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MODULE_ENABLE.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_module_enable_reg_t hri_spi_read_MODULE_ENABLE_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_MODULE_ENABLE.reg;
}

static inline void hri_spi_set_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg |= SPI_MASTER_MODE_MASTER_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_MASTER_MODE.reg;
	tmp = (tmp & SPI_MASTER_MODE_MASTER_ENABLE) >> SPI_MASTER_MODE_MASTER_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_MASTER_MODE.reg;
	tmp &= ~SPI_MASTER_MODE_MASTER_ENABLE;
	tmp |= value << SPI_MASTER_MODE_MASTER_ENABLE_Pos;
	((Spi *)hw)->SPI_MASTER_MODE.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg &= ~SPI_MASTER_MODE_MASTER_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg ^= SPI_MASTER_MODE_MASTER_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_MASTER_MODE_reg(const void *const hw, hri_spi_master_mode_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_master_mode_reg_t hri_spi_get_MASTER_MODE_reg(const void *const         hw,
                                                                    hri_spi_master_mode_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_MASTER_MODE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_MASTER_MODE_reg(const void *const hw, hri_spi_master_mode_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_MASTER_MODE_reg(const void *const hw, hri_spi_master_mode_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_MASTER_MODE_reg(const void *const hw, hri_spi_master_mode_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_MASTER_MODE.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_master_mode_reg_t hri_spi_read_MASTER_MODE_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_MASTER_MODE.reg;
}

static inline void hri_spi_set_FAULT_ENABLE_FAULT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg |= SPI_FAULT_ENABLE_FAULT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_FAULT_ENABLE_FAULT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_FAULT_ENABLE.reg;
	tmp = (tmp & SPI_FAULT_ENABLE_FAULT_ENABLE) >> SPI_FAULT_ENABLE_FAULT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_FAULT_ENABLE_FAULT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_FAULT_ENABLE.reg;
	tmp &= ~SPI_FAULT_ENABLE_FAULT_ENABLE;
	tmp |= value << SPI_FAULT_ENABLE_FAULT_ENABLE_Pos;
	((Spi *)hw)->SPI_FAULT_ENABLE.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_FAULT_ENABLE_FAULT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg &= ~SPI_FAULT_ENABLE_FAULT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_FAULT_ENABLE_FAULT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg ^= SPI_FAULT_ENABLE_FAULT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_FAULT_ENABLE_reg(const void *const hw, hri_spi_fault_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_fault_enable_reg_t hri_spi_get_FAULT_ENABLE_reg(const void *const          hw,
                                                                      hri_spi_fault_enable_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_FAULT_ENABLE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_FAULT_ENABLE_reg(const void *const hw, hri_spi_fault_enable_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_FAULT_ENABLE_reg(const void *const hw, hri_spi_fault_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_FAULT_ENABLE_reg(const void *const hw, hri_spi_fault_enable_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_FAULT_ENABLE.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_fault_enable_reg_t hri_spi_read_FAULT_ENABLE_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_FAULT_ENABLE.reg;
}

static inline void hri_spi_set_CONFIGURATION_SCK_POLARITY_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_SCK_POLARITY;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_SCK_POLARITY_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_SCK_POLARITY) >> SPI_CONFIGURATION_SCK_POLARITY_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_SCK_POLARITY_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_SCK_POLARITY;
	tmp |= value << SPI_CONFIGURATION_SCK_POLARITY_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_SCK_POLARITY_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_SCK_POLARITY;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_SCK_POLARITY_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_SCK_POLARITY;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_SCK_PHASE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_SCK_PHASE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_SCK_PHASE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_SCK_PHASE) >> SPI_CONFIGURATION_SCK_PHASE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_SCK_PHASE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_SCK_PHASE;
	tmp |= value << SPI_CONFIGURATION_SCK_PHASE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_SCK_PHASE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_SCK_PHASE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_SCK_PHASE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_SCK_PHASE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_LSB_FIRST_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_LSB_FIRST_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_LSB_FIRST_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_LSB_FIRST_ENABLE) >> SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_LSB_FIRST_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_LSB_FIRST_ENABLE;
	tmp |= value << SPI_CONFIGURATION_LSB_FIRST_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_LSB_FIRST_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_LSB_FIRST_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_LSB_FIRST_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_LSB_FIRST_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_BIDIRECTIONAL_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_BIDIRECTIONAL_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE) >> SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_BIDIRECTIONAL_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE;
	tmp |= value << SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_BIDIRECTIONAL_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_BIDIRECTIONAL_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_BIDIRECTIONAL_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_OUTPUT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_OUTPUT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_OUTPUT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_OUTPUT_ENABLE) >> SPI_CONFIGURATION_OUTPUT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_OUTPUT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_OUTPUT_ENABLE;
	tmp |= value << SPI_CONFIGURATION_OUTPUT_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_OUTPUT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_OUTPUT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_OUTPUT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_OUTPUT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_SSN_SHIFT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_SSN_SHIFT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_SSN_SHIFT_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_SSN_SHIFT_ENABLE) >> SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_SSN_SHIFT_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_SSN_SHIFT_ENABLE;
	tmp |= value << SPI_CONFIGURATION_SSN_SHIFT_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_SSN_SHIFT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_SSN_SHIFT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_SSN_SHIFT_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_SSN_SHIFT_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_SSN_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_SSN_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_SSN_SYNC_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_SSN_SYNC_ENABLE) >> SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_SSN_SYNC_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_SSN_SYNC_ENABLE;
	tmp |= value << SPI_CONFIGURATION_SSN_SYNC_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_SSN_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_SSN_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_SSN_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_SSN_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_RX_DONE_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_CONFIGURATION_RX_DONE_SYNC_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp = (tmp & SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE) >> SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_CONFIGURATION_RX_DONE_SYNC_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= ~SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE;
	tmp |= value << SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE_Pos;
	((Spi *)hw)->SPI_CONFIGURATION.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_RX_DONE_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_RX_DONE_SYNC_ENABLE_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= SPI_CONFIGURATION_RX_DONE_SYNC_ENABLE;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_CONFIGURATION_reg(const void *const hw, hri_spi_configuration_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_configuration_reg_t hri_spi_get_CONFIGURATION_reg(const void *const           hw,
                                                                        hri_spi_configuration_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_CONFIGURATION.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_CONFIGURATION_reg(const void *const hw, hri_spi_configuration_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_CONFIGURATION_reg(const void *const hw, hri_spi_configuration_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_CONFIGURATION_reg(const void *const hw, hri_spi_configuration_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->SPI_CONFIGURATION.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_configuration_reg_t hri_spi_read_CONFIGURATION_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_CONFIGURATION.reg;
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk) >> SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	tmp |= value << SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= SPI_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk)
	      >> SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	tmp |= value << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk) >> SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	tmp |= value << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk)
	      >> SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	tmp |= value << SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= SPI_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk) >> SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	tmp |= value << SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= SPI_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_TX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_tx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_tx_interrupt_mask_reg_t hri_spi_get_TX_INTERRUPT_MASK_reg(const void *const               hw,
                                                                                hri_spi_tx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_TX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_tx_interrupt_mask_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_TX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_tx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_TX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_tx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->TX_INTERRUPT_MASK.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_tx_interrupt_mask_reg_t hri_spi_read_TX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((Spi *)hw)->TX_INTERRUPT_MASK.reg;
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_FAULT_DETECT_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spi_get_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk) >> SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_CRITICAL_SECTION_ENTER();
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	tmp |= value << SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= SPI_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_set_RX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_rx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg |= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_rx_interrupt_mask_reg_t hri_spi_get_RX_INTERRUPT_MASK_reg(const void *const               hw,
                                                                                hri_spi_rx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spi_write_RX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_rx_interrupt_mask_reg_t data)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg = data;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_clear_RX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_rx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg &= ~mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spi_toggle_RX_INTERRUPT_MASK_reg(const void *const hw, hri_spi_rx_interrupt_mask_reg_t mask)
{
	SPI_CRITICAL_SECTION_ENTER();
	((Spi *)hw)->RX_INTERRUPT_MASK.reg ^= mask;
	SPI_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_rx_interrupt_mask_reg_t hri_spi_read_RX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((Spi *)hw)->RX_INTERRUPT_MASK.reg;
}

static inline hri_spi_receive_data_reg_t hri_spi_get_RECEIVE_DATA_RX_BYTE_bf(const void *const          hw,
                                                                             hri_spi_receive_data_reg_t mask)
{
	return (((Spi *)hw)->RECEIVE_DATA.reg & SPI_RECEIVE_DATA_RX_BYTE(mask)) >> SPI_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_spi_receive_data_reg_t hri_spi_read_RECEIVE_DATA_RX_BYTE_bf(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_DATA.reg & SPI_RECEIVE_DATA_RX_BYTE_Msk) >> SPI_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_spi_receive_data_reg_t hri_spi_get_RECEIVE_DATA_reg(const void *const          hw,
                                                                      hri_spi_receive_data_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RECEIVE_DATA.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_spi_receive_data_reg_t hri_spi_read_RECEIVE_DATA_reg(const void *const hw)
{
	return ((Spi *)hw)->RECEIVE_DATA.reg;
}

static inline bool hri_spi_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(const void *const hw)
{
	return (((Spi *)hw)->TRANSMIT_STATUS.reg & SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk)
	       >> SPI_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos;
}

static inline bool hri_spi_get_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_bit(const void *const hw)
{
	return (((Spi *)hw)->TRANSMIT_STATUS.reg & SPI_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Msk)
	       >> SPI_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos;
}

static inline bool hri_spi_get_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_bit(const void *const hw)
{
	return (((Spi *)hw)->TRANSMIT_STATUS.reg & SPI_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Msk)
	       >> SPI_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos;
}

static inline bool hri_spi_get_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_bit(const void *const hw)
{
	return (((Spi *)hw)->TRANSMIT_STATUS.reg & SPI_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Msk)
	       >> SPI_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos;
}

static inline bool hri_spi_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(const void *const hw)
{
	return (((Spi *)hw)->TRANSMIT_STATUS.reg & SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY_Msk)
	       >> SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos;
}

static inline hri_spi_transmit_status_reg_t hri_spi_get_TRANSMIT_STATUS_reg(const void *const             hw,
                                                                            hri_spi_transmit_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->TRANSMIT_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_spi_transmit_status_reg_t hri_spi_read_TRANSMIT_STATUS_reg(const void *const hw)
{
	return ((Spi *)hw)->TRANSMIT_STATUS.reg;
}

static inline bool hri_spi_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Msk)
	       >> SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos;
}

static inline bool hri_spi_get_RECEIVE_STATUS_RX_FIFO_0P25_FULL_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Msk)
	       >> SPI_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos;
}

static inline bool hri_spi_get_RECEIVE_STATUS_RX_FIFO_0P5_FULL_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Msk)
	       >> SPI_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos;
}

static inline bool hri_spi_get_RECEIVE_STATUS_RX_FIFO_0P75_FULL_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Msk)
	       >> SPI_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos;
}

static inline bool hri_spi_get_RECEIVE_STATUS_FAULT_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_FAULT_Msk) >> SPI_RECEIVE_STATUS_FAULT_Pos;
}

static inline bool hri_spi_get_RECEIVE_STATUS_FIFO_OVERRUN_bit(const void *const hw)
{
	return (((Spi *)hw)->RECEIVE_STATUS.reg & SPI_RECEIVE_STATUS_FIFO_OVERRUN_Msk)
	       >> SPI_RECEIVE_STATUS_FIFO_OVERRUN_Pos;
}

static inline hri_spi_receive_status_reg_t hri_spi_get_RECEIVE_STATUS_reg(const void *const            hw,
                                                                          hri_spi_receive_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->RECEIVE_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_spi_receive_status_reg_t hri_spi_read_RECEIVE_STATUS_reg(const void *const hw)
{
	return ((Spi *)hw)->RECEIVE_STATUS.reg;
}

static inline bool hri_spi_get_BUS_STATUS_SPI_ACTIVE_bit(const void *const hw)
{
	return (((Spi *)hw)->SPI_BUS_STATUS.reg & SPI_BUS_STATUS_SPI_ACTIVE) >> SPI_BUS_STATUS_SPI_ACTIVE_Pos;
}

static inline hri_spi_bus_status_reg_t hri_spi_get_BUS_STATUS_reg(const void *const hw, hri_spi_bus_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Spi *)hw)->SPI_BUS_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_spi_bus_status_reg_t hri_spi_read_BUS_STATUS_reg(const void *const hw)
{
	return ((Spi *)hw)->SPI_BUS_STATUS.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_SPI_B11_H_INCLUDED */
#endif /* _SAMB11_SPI_COMPONENT_ */
