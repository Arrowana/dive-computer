/**
 * \file
 *
 * \brief SAM I2C
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

#ifdef _SAMB11_I2C_COMPONENT_
#ifndef _HRI_I2C_B11_H_INCLUDED_
#define _HRI_I2C_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_I2C_CRITICAL_SECTIONS)
#define I2C_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define I2C_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define I2C_CRITICAL_SECTION_ENTER()
#define I2C_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_i2c_clk_divider_reg_t;
typedef uint16_t hri_i2c_transmit_data_reg_t;
typedef uint8_t  hri_i2c_clock_source_select_reg_t;
typedef uint8_t  hri_i2c_flush_reg_t;
typedef uint8_t  hri_i2c_master_mode_reg_t;
typedef uint8_t  hri_i2c_module_enable_reg_t;
typedef uint8_t  hri_i2c_onbus_reg_t;
typedef uint8_t  hri_i2c_receive_data_reg_t;
typedef uint8_t  hri_i2c_receive_status_reg_t;
typedef uint8_t  hri_i2c_rx_interrupt_mask_reg_t;
typedef uint8_t  hri_i2c_slave_address_reg_t;
typedef uint8_t  hri_i2c_status_reg_t;
typedef uint8_t  hri_i2c_transmit_status_reg_t;
typedef uint8_t  hri_i2c_tx_interrupt_mask_reg_t;

static inline void hri_i2c_write_TRANSMIT_DATA_reg(const void *const hw, hri_i2c_transmit_data_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TRANSMIT_DATA.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_write_FLUSH_reg(const void *const hw, hri_i2c_flush_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_FLUSH.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                            hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg |= I2C_CLOCK_SOURCE_SELECT_CLOCK(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clock_source_select_reg_t
hri_i2c_get_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const hw, hri_i2c_clock_source_select_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp = (tmp & I2C_CLOCK_SOURCE_SELECT_CLOCK(mask)) >> I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos;
	return tmp;
}

static inline void hri_i2c_write_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                              hri_i2c_clock_source_select_reg_t data)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp &= ~I2C_CLOCK_SOURCE_SELECT_CLOCK_Msk;
	tmp |= I2C_CLOCK_SOURCE_SELECT_CLOCK(data);
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                              hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg &= ~I2C_CLOCK_SOURCE_SELECT_CLOCK(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const                 hw,
                                                               hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg ^= I2C_CLOCK_SOURCE_SELECT_CLOCK(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clock_source_select_reg_t hri_i2c_read_CLOCK_SOURCE_SELECT_CLOCK_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp = (tmp & I2C_CLOCK_SOURCE_SELECT_CLOCK_Msk) >> I2C_CLOCK_SOURCE_SELECT_CLOCK_Pos;
	return tmp;
}

static inline void hri_i2c_set_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clock_source_select_reg_t
hri_i2c_get_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_i2c_clock_source_select_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->CLOCK_SOURCE_SELECT.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_i2c_clock_source_select_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_CLOCK_SOURCE_SELECT_reg(const void *const hw, hri_i2c_clock_source_select_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->CLOCK_SOURCE_SELECT.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clock_source_select_reg_t hri_i2c_read_CLOCK_SOURCE_SELECT_reg(const void *const hw)
{
	return ((I2c *)hw)->CLOCK_SOURCE_SELECT.reg;
}

static inline void hri_i2c_set_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg |= I2C_MODULE_ENABLE_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_MODULE_ENABLE.reg;
	tmp = (tmp & I2C_MODULE_ENABLE_ENABLE) >> I2C_MODULE_ENABLE_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_MODULE_ENABLE_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->I2C_MODULE_ENABLE.reg;
	tmp &= ~I2C_MODULE_ENABLE_ENABLE;
	tmp |= value << I2C_MODULE_ENABLE_ENABLE_Pos;
	((I2c *)hw)->I2C_MODULE_ENABLE.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg &= ~I2C_MODULE_ENABLE_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_MODULE_ENABLE_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg ^= I2C_MODULE_ENABLE_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_MODULE_ENABLE_reg(const void *const hw, hri_i2c_module_enable_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_module_enable_reg_t hri_i2c_get_MODULE_ENABLE_reg(const void *const           hw,
                                                                        hri_i2c_module_enable_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_MODULE_ENABLE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_MODULE_ENABLE_reg(const void *const hw, hri_i2c_module_enable_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_MODULE_ENABLE_reg(const void *const hw, hri_i2c_module_enable_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_MODULE_ENABLE_reg(const void *const hw, hri_i2c_module_enable_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MODULE_ENABLE.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_module_enable_reg_t hri_i2c_read_MODULE_ENABLE_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_MODULE_ENABLE.reg;
}

static inline void hri_i2c_set_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg |= I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clk_divider_reg_t hri_i2c_get_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const         hw,
                                                                                    hri_i2c_clk_divider_reg_t mask)
{
	uint16_t tmp;
	tmp = ((I2c *)hw)->I2C_CLK_DIVIDER.reg;
	tmp = (tmp & I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(mask)) >> I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Pos;
	return tmp;
}

static inline void hri_i2c_write_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const hw, hri_i2c_clk_divider_reg_t data)
{
	uint16_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->I2C_CLK_DIVIDER.reg;
	tmp &= ~I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Msk;
	tmp |= I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(data);
	((I2c *)hw)->I2C_CLK_DIVIDER.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg &= ~I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg ^= I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clk_divider_reg_t hri_i2c_read_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((I2c *)hw)->I2C_CLK_DIVIDER.reg;
	tmp = (tmp & I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Msk) >> I2C_CLK_DIVIDER_I2C_DIVIDE_RATIO_Pos;
	return tmp;
}

static inline void hri_i2c_set_CLK_DIVIDER_reg(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clk_divider_reg_t hri_i2c_get_CLK_DIVIDER_reg(const void *const         hw,
                                                                    hri_i2c_clk_divider_reg_t mask)
{
	uint16_t tmp;
	tmp = ((I2c *)hw)->I2C_CLK_DIVIDER.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_CLK_DIVIDER_reg(const void *const hw, hri_i2c_clk_divider_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_CLK_DIVIDER_reg(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_CLK_DIVIDER_reg(const void *const hw, hri_i2c_clk_divider_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_CLK_DIVIDER.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_clk_divider_reg_t hri_i2c_read_CLK_DIVIDER_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_CLK_DIVIDER.reg;
}

static inline void hri_i2c_set_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg |= I2C_MASTER_MODE_MASTER_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_MASTER_MODE.reg;
	tmp = (tmp & I2C_MASTER_MODE_MASTER_ENABLE) >> I2C_MASTER_MODE_MASTER_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->I2C_MASTER_MODE.reg;
	tmp &= ~I2C_MASTER_MODE_MASTER_ENABLE;
	tmp |= value << I2C_MASTER_MODE_MASTER_ENABLE_Pos;
	((I2c *)hw)->I2C_MASTER_MODE.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg &= ~I2C_MASTER_MODE_MASTER_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_MASTER_MODE_MASTER_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg ^= I2C_MASTER_MODE_MASTER_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_MASTER_MODE_reg(const void *const hw, hri_i2c_master_mode_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_master_mode_reg_t hri_i2c_get_MASTER_MODE_reg(const void *const         hw,
                                                                    hri_i2c_master_mode_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_MASTER_MODE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_MASTER_MODE_reg(const void *const hw, hri_i2c_master_mode_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_MASTER_MODE_reg(const void *const hw, hri_i2c_master_mode_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_MASTER_MODE_reg(const void *const hw, hri_i2c_master_mode_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_MASTER_MODE.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_master_mode_reg_t hri_i2c_read_MASTER_MODE_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_MASTER_MODE.reg;
}

static inline void hri_i2c_set_ONBUS_ONBUS_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg |= I2C_ONBUS_ONBUS_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_ONBUS_ONBUS_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_ONBUS.reg;
	tmp = (tmp & I2C_ONBUS_ONBUS_ENABLE) >> I2C_ONBUS_ONBUS_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_ONBUS_ONBUS_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->I2C_ONBUS.reg;
	tmp &= ~I2C_ONBUS_ONBUS_ENABLE;
	tmp |= value << I2C_ONBUS_ONBUS_ENABLE_Pos;
	((I2c *)hw)->I2C_ONBUS.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg &= ~I2C_ONBUS_ONBUS_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_ONBUS_ONBUS_ENABLE_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg ^= I2C_ONBUS_ONBUS_ENABLE;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_ONBUS_reg(const void *const hw, hri_i2c_onbus_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_onbus_reg_t hri_i2c_get_ONBUS_reg(const void *const hw, hri_i2c_onbus_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_ONBUS.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_ONBUS_reg(const void *const hw, hri_i2c_onbus_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_ONBUS_reg(const void *const hw, hri_i2c_onbus_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_ONBUS_reg(const void *const hw, hri_i2c_onbus_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_ONBUS.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_onbus_reg_t hri_i2c_read_ONBUS_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_ONBUS.reg;
}

static inline void hri_i2c_set_SLAVE_ADDRESS_ADDRESS_bf(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg |= I2C_SLAVE_ADDRESS_ADDRESS(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_slave_address_reg_t hri_i2c_get_SLAVE_ADDRESS_ADDRESS_bf(const void *const           hw,
                                                                               hri_i2c_slave_address_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_SLAVE_ADDRESS.reg;
	tmp = (tmp & I2C_SLAVE_ADDRESS_ADDRESS(mask)) >> I2C_SLAVE_ADDRESS_ADDRESS_Pos;
	return tmp;
}

static inline void hri_i2c_write_SLAVE_ADDRESS_ADDRESS_bf(const void *const hw, hri_i2c_slave_address_reg_t data)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->I2C_SLAVE_ADDRESS.reg;
	tmp &= ~I2C_SLAVE_ADDRESS_ADDRESS_Msk;
	tmp |= I2C_SLAVE_ADDRESS_ADDRESS(data);
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_SLAVE_ADDRESS_ADDRESS_bf(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg &= ~I2C_SLAVE_ADDRESS_ADDRESS(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_SLAVE_ADDRESS_ADDRESS_bf(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg ^= I2C_SLAVE_ADDRESS_ADDRESS(mask);
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_slave_address_reg_t hri_i2c_read_SLAVE_ADDRESS_ADDRESS_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_SLAVE_ADDRESS.reg;
	tmp = (tmp & I2C_SLAVE_ADDRESS_ADDRESS_Msk) >> I2C_SLAVE_ADDRESS_ADDRESS_Pos;
	return tmp;
}

static inline void hri_i2c_set_SLAVE_ADDRESS_reg(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_slave_address_reg_t hri_i2c_get_SLAVE_ADDRESS_reg(const void *const           hw,
                                                                        hri_i2c_slave_address_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_SLAVE_ADDRESS.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_SLAVE_ADDRESS_reg(const void *const hw, hri_i2c_slave_address_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_SLAVE_ADDRESS_reg(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_SLAVE_ADDRESS_reg(const void *const hw, hri_i2c_slave_address_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->I2C_SLAVE_ADDRESS.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_slave_address_reg_t hri_i2c_read_SLAVE_ADDRESS_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_SLAVE_ADDRESS.reg;
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk) >> I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	tmp |= value << I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= I2C_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk)
	      >> I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	tmp |= value << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk) >> I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	tmp |= value << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk)
	      >> I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	tmp |= value << I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= I2C_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk) >> I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	tmp |= value << I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= I2C_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_TX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_tx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_tx_interrupt_mask_reg_t hri_i2c_get_TX_INTERRUPT_MASK_reg(const void *const               hw,
                                                                                hri_i2c_tx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_TX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_tx_interrupt_mask_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_TX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_tx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_TX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_tx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->TX_INTERRUPT_MASK.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_tx_interrupt_mask_reg_t hri_i2c_read_TX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((I2c *)hw)->TX_INTERRUPT_MASK.reg;
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_NAK_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= I2C_RX_INTERRUPT_MASK_NAK_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_i2c_get_RX_INTERRUPT_MASK_NAK_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & I2C_RX_INTERRUPT_MASK_NAK_MASK_Msk) >> I2C_RX_INTERRUPT_MASK_NAK_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_NAK_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	I2C_CRITICAL_SECTION_ENTER();
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~I2C_RX_INTERRUPT_MASK_NAK_MASK_Msk;
	tmp |= value << I2C_RX_INTERRUPT_MASK_NAK_MASK_Pos;
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_NAK_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~I2C_RX_INTERRUPT_MASK_NAK_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_NAK_MASK_bit(const void *const hw)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= I2C_RX_INTERRUPT_MASK_NAK_MASK_Msk;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_set_RX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_rx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg |= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_rx_interrupt_mask_reg_t hri_i2c_get_RX_INTERRUPT_MASK_reg(const void *const               hw,
                                                                                hri_i2c_rx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_i2c_write_RX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_rx_interrupt_mask_reg_t data)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg = data;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_clear_RX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_rx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg &= ~mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline void hri_i2c_toggle_RX_INTERRUPT_MASK_reg(const void *const hw, hri_i2c_rx_interrupt_mask_reg_t mask)
{
	I2C_CRITICAL_SECTION_ENTER();
	((I2c *)hw)->RX_INTERRUPT_MASK.reg ^= mask;
	I2C_CRITICAL_SECTION_LEAVE();
}

static inline hri_i2c_rx_interrupt_mask_reg_t hri_i2c_read_RX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((I2c *)hw)->RX_INTERRUPT_MASK.reg;
}

static inline hri_i2c_receive_data_reg_t hri_i2c_get_RECEIVE_DATA_RX_BYTE_bf(const void *const          hw,
                                                                             hri_i2c_receive_data_reg_t mask)
{
	return (((I2c *)hw)->RECEIVE_DATA.reg & I2C_RECEIVE_DATA_RX_BYTE(mask)) >> I2C_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_i2c_receive_data_reg_t hri_i2c_read_RECEIVE_DATA_RX_BYTE_bf(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_DATA.reg & I2C_RECEIVE_DATA_RX_BYTE_Msk) >> I2C_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_i2c_receive_data_reg_t hri_i2c_get_RECEIVE_DATA_reg(const void *const          hw,
                                                                      hri_i2c_receive_data_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RECEIVE_DATA.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_i2c_receive_data_reg_t hri_i2c_read_RECEIVE_DATA_reg(const void *const hw)
{
	return ((I2c *)hw)->RECEIVE_DATA.reg;
}

static inline bool hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(const void *const hw)
{
	return (((I2c *)hw)->TRANSMIT_STATUS.reg & I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk)
	       >> I2C_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos;
}

static inline bool hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_bit(const void *const hw)
{
	return (((I2c *)hw)->TRANSMIT_STATUS.reg & I2C_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Msk)
	       >> I2C_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos;
}

static inline bool hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_bit(const void *const hw)
{
	return (((I2c *)hw)->TRANSMIT_STATUS.reg & I2C_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Msk)
	       >> I2C_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos;
}

static inline bool hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_bit(const void *const hw)
{
	return (((I2c *)hw)->TRANSMIT_STATUS.reg & I2C_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Msk)
	       >> I2C_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos;
}

static inline bool hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(const void *const hw)
{
	return (((I2c *)hw)->TRANSMIT_STATUS.reg & I2C_TRANSMIT_STATUS_TX_FIFO_EMPTY_Msk)
	       >> I2C_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos;
}

static inline hri_i2c_transmit_status_reg_t hri_i2c_get_TRANSMIT_STATUS_reg(const void *const             hw,
                                                                            hri_i2c_transmit_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->TRANSMIT_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_i2c_transmit_status_reg_t hri_i2c_read_TRANSMIT_STATUS_reg(const void *const hw)
{
	return ((I2c *)hw)->TRANSMIT_STATUS.reg;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Msk)
	       >> I2C_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_RX_FIFO_0P25_FULL_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Msk)
	       >> I2C_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_RX_FIFO_0P5_FULL_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Msk)
	       >> I2C_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_RX_FIFO_0P75_FULL_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Msk)
	       >> I2C_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_FIFO_OVERRUN_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_FIFO_OVERRUN_Msk)
	       >> I2C_RECEIVE_STATUS_FIFO_OVERRUN_Pos;
}

static inline bool hri_i2c_get_RECEIVE_STATUS_NAK_bit(const void *const hw)
{
	return (((I2c *)hw)->RECEIVE_STATUS.reg & I2C_RECEIVE_STATUS_NAK_Msk) >> I2C_RECEIVE_STATUS_NAK_Pos;
}

static inline hri_i2c_receive_status_reg_t hri_i2c_get_RECEIVE_STATUS_reg(const void *const            hw,
                                                                          hri_i2c_receive_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->RECEIVE_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_i2c_receive_status_reg_t hri_i2c_read_RECEIVE_STATUS_reg(const void *const hw)
{
	return ((I2c *)hw)->RECEIVE_STATUS.reg;
}

static inline bool hri_i2c_get_STATUS_I2C_ACTIVE_bit(const void *const hw)
{
	return (((I2c *)hw)->I2C_STATUS.reg & I2C_STATUS_I2C_ACTIVE) >> I2C_STATUS_I2C_ACTIVE_Pos;
}

static inline hri_i2c_status_reg_t hri_i2c_get_STATUS_reg(const void *const hw, hri_i2c_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((I2c *)hw)->I2C_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_i2c_status_reg_t hri_i2c_read_STATUS_reg(const void *const hw)
{
	return ((I2c *)hw)->I2C_STATUS.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_I2C_B11_H_INCLUDED */
#endif /* _SAMB11_I2C_COMPONENT_ */
