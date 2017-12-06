/**
 * \file
 *
 * \brief SAM SPI_FLASH
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

#ifdef _SAMB11_SPI_FLASH_COMPONENT_
#ifndef _HRI_SPI_FLASH_B11_H_INCLUDED_
#define _HRI_SPI_FLASH_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_SPI_FLASH_CRITICAL_SECTIONS)
#define SPI_FLASH_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define SPI_FLASH_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define SPI_FLASH_CRITICAL_SECTION_ENTER()
#define SPI_FLASH_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_spi_flash_config_reg_t;
typedef uint16_t hri_spi_flash_status_reg_t;
typedef uint16_t hri_spi_flash_tx_control_reg_t;
typedef uint32_t hri_spi_flash_cmd_buffer0_reg_t;
typedef uint32_t hri_spi_flash_cmd_buffer1_reg_t;
typedef uint32_t hri_spi_flash_dma_start_address_reg_t;
typedef uint32_t hri_spi_flash_read_ctrl_reg_t;
typedef uint32_t hri_spi_flash_transaction_ctrl_reg_t;
typedef uint8_t  hri_spi_flash_direction_reg_t;
typedef uint8_t  hri_spi_flash_irq_status_reg_t;
typedef uint8_t  hri_spi_flash_mode_ctrl_reg_t;

static inline void hri_spiflashflash_write_IRQ_STATUS_reg(const void *const hw, hri_spi_flash_irq_status_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->IRQ_STATUS.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_MODE_CTRL_BYPASS_CS_PRE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg |= SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_MODE_CTRL_BYPASS_CS_PRE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp = (tmp & SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Msk) >> SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_MODE_CTRL_BYPASS_CS_PRE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp &= ~SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Msk;
	tmp |= value << SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Pos;
	((SpiFlash *)hw)->MODE_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_MODE_CTRL_BYPASS_CS_PRE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg &= ~SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_MODE_CTRL_BYPASS_CS_PRE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg ^= SPI_FLASH_MODE_CTRL_BYPASS_CS_PRE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_MODE_CTRL_BYPASS_CS_POST_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg |= SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_MODE_CTRL_BYPASS_CS_POST_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp = (tmp & SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Msk) >> SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_MODE_CTRL_BYPASS_CS_POST_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp &= ~SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Msk;
	tmp |= value << SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Pos;
	((SpiFlash *)hw)->MODE_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_MODE_CTRL_BYPASS_CS_POST_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg &= ~SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_MODE_CTRL_BYPASS_CS_POST_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg ^= SPI_FLASH_MODE_CTRL_BYPASS_CS_POST_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_MODE_CTRL_MODE_SELECT_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg |= SPI_FLASH_MODE_CTRL_MODE_SELECT_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_MODE_CTRL_MODE_SELECT_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp = (tmp & SPI_FLASH_MODE_CTRL_MODE_SELECT_Msk) >> SPI_FLASH_MODE_CTRL_MODE_SELECT_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_MODE_CTRL_MODE_SELECT_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp &= ~SPI_FLASH_MODE_CTRL_MODE_SELECT_Msk;
	tmp |= value << SPI_FLASH_MODE_CTRL_MODE_SELECT_Pos;
	((SpiFlash *)hw)->MODE_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_MODE_CTRL_MODE_SELECT_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg &= ~SPI_FLASH_MODE_CTRL_MODE_SELECT_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_MODE_CTRL_MODE_SELECT_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg ^= SPI_FLASH_MODE_CTRL_MODE_SELECT_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_MODE_CTRL_MODE_bf(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg |= SPI_FLASH_MODE_CTRL_MODE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_mode_ctrl_reg_t hri_spiflashflash_get_MODE_CTRL_MODE_bf(const void *const             hw,
                                                                                    hri_spi_flash_mode_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp = (tmp & SPI_FLASH_MODE_CTRL_MODE(mask)) >> SPI_FLASH_MODE_CTRL_MODE_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_MODE_CTRL_MODE_bf(const void *const hw, hri_spi_flash_mode_ctrl_reg_t data)
{
	uint8_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp &= ~SPI_FLASH_MODE_CTRL_MODE_Msk;
	tmp |= SPI_FLASH_MODE_CTRL_MODE(data);
	((SpiFlash *)hw)->MODE_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_MODE_CTRL_MODE_bf(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg &= ~SPI_FLASH_MODE_CTRL_MODE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_MODE_CTRL_MODE_bf(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg ^= SPI_FLASH_MODE_CTRL_MODE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_mode_ctrl_reg_t hri_spiflashflash_read_MODE_CTRL_MODE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp = (tmp & SPI_FLASH_MODE_CTRL_MODE_Msk) >> SPI_FLASH_MODE_CTRL_MODE_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_MODE_CTRL_reg(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_mode_ctrl_reg_t hri_spiflashflash_get_MODE_CTRL_reg(const void *const             hw,
                                                                                hri_spi_flash_mode_ctrl_reg_t mask)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->MODE_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_MODE_CTRL_reg(const void *const hw, hri_spi_flash_mode_ctrl_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_MODE_CTRL_reg(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_MODE_CTRL_reg(const void *const hw, hri_spi_flash_mode_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->MODE_CTRL.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_mode_ctrl_reg_t hri_spiflashflash_read_MODE_CTRL_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->MODE_CTRL.reg;
}

static inline void hri_spiflashflash_set_TRANSACTION_CTRL_FLASH_TRANS_START_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg |= SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_TRANSACTION_CTRL_FLASH_TRANS_START_bit(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp = (tmp & SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Msk) >> SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_TRANSACTION_CTRL_FLASH_TRANS_START_bit(const void *const hw, bool value)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp &= ~SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Msk;
	tmp |= value << SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Pos;
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TRANSACTION_CTRL_FLASH_TRANS_START_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg &= ~SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TRANSACTION_CTRL_FLASH_TRANS_START_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg ^= SPI_FLASH_TRANSACTION_CTRL_FLASH_TRANS_START_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const                    hw,
                                                                       hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg |= SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t
hri_spiflashflash_get_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const hw, hri_spi_flash_transaction_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp = (tmp & SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(mask)) >> SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const                    hw,
                                                                         hri_spi_flash_transaction_ctrl_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp &= ~SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Msk;
	tmp |= SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(data);
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const                    hw,
                                                                         hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg &= ~SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const                    hw,
                                                                          hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg ^= SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t
hri_spiflashflash_read_TRANSACTION_CTRL_CMD_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp = (tmp & SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Msk) >> SPI_FLASH_TRANSACTION_CTRL_CMD_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const                    hw,
                                                                         hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg |= SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t
hri_spiflashflash_get_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const hw, hri_spi_flash_transaction_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp = (tmp & SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(mask)) >> SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const                    hw,
                                                                           hri_spi_flash_transaction_ctrl_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp &= ~SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Msk;
	tmp |= SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(data);
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const                    hw,
                                                                           hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg &= ~SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const                    hw,
                                                                            hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg ^= SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t
hri_spiflashflash_read_TRANSACTION_CTRL_WDATA_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp = (tmp & SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Msk) >> SPI_FLASH_TRANSACTION_CTRL_WDATA_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_TRANSACTION_CTRL_reg(const void *const                    hw,
                                                              hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t
hri_spiflashflash_get_TRANSACTION_CTRL_reg(const void *const hw, hri_spi_flash_transaction_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_TRANSACTION_CTRL_reg(const void *const                    hw,
                                                                hri_spi_flash_transaction_ctrl_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TRANSACTION_CTRL_reg(const void *const                    hw,
                                                                hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TRANSACTION_CTRL_reg(const void *const                    hw,
                                                                 hri_spi_flash_transaction_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TRANSACTION_CTRL.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_transaction_ctrl_reg_t hri_spiflashflash_read_TRANSACTION_CTRL_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->TRANSACTION_CTRL.reg;
}

static inline void hri_spiflashflash_set_READ_CTRL_RDATA_COUNT_bf(const void *const             hw,
                                                                  hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg |= SPI_FLASH_READ_CTRL_RDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_read_ctrl_reg_t
hri_spiflashflash_get_READ_CTRL_RDATA_COUNT_bf(const void *const hw, hri_spi_flash_read_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->READ_CTRL.reg;
	tmp = (tmp & SPI_FLASH_READ_CTRL_RDATA_COUNT(mask)) >> SPI_FLASH_READ_CTRL_RDATA_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_READ_CTRL_RDATA_COUNT_bf(const void *const             hw,
                                                                    hri_spi_flash_read_ctrl_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->READ_CTRL.reg;
	tmp &= ~SPI_FLASH_READ_CTRL_RDATA_COUNT_Msk;
	tmp |= SPI_FLASH_READ_CTRL_RDATA_COUNT(data);
	((SpiFlash *)hw)->READ_CTRL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_READ_CTRL_RDATA_COUNT_bf(const void *const             hw,
                                                                    hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg &= ~SPI_FLASH_READ_CTRL_RDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_READ_CTRL_RDATA_COUNT_bf(const void *const             hw,
                                                                     hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg ^= SPI_FLASH_READ_CTRL_RDATA_COUNT(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_read_ctrl_reg_t hri_spiflashflash_read_READ_CTRL_RDATA_COUNT_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->READ_CTRL.reg;
	tmp = (tmp & SPI_FLASH_READ_CTRL_RDATA_COUNT_Msk) >> SPI_FLASH_READ_CTRL_RDATA_COUNT_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_READ_CTRL_reg(const void *const hw, hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_read_ctrl_reg_t hri_spiflashflash_get_READ_CTRL_reg(const void *const             hw,
                                                                                hri_spi_flash_read_ctrl_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->READ_CTRL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_READ_CTRL_reg(const void *const hw, hri_spi_flash_read_ctrl_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_READ_CTRL_reg(const void *const hw, hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_READ_CTRL_reg(const void *const hw, hri_spi_flash_read_ctrl_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->READ_CTRL.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_read_ctrl_reg_t hri_spiflashflash_read_READ_CTRL_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->READ_CTRL.reg;
}

static inline void hri_spiflashflash_set_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const               hw,
                                                                    hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg |= SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer0_reg_t
hri_spiflashflash_get_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER0.reg;
	tmp = (tmp & SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(mask)) >> SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const               hw,
                                                                      hri_spi_flash_cmd_buffer0_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CMD_BUFFER0.reg;
	tmp &= ~SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Msk;
	tmp |= SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(data);
	((SpiFlash *)hw)->CMD_BUFFER0.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const               hw,
                                                                      hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg &= ~SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const               hw,
                                                                       hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg ^= SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer0_reg_t hri_spiflashflash_read_CMD_BUFFER0_CMD_BUFFER0_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER0.reg;
	tmp = (tmp & SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Msk) >> SPI_FLASH_CMD_BUFFER0_CMD_BUFFER0_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_CMD_BUFFER0_reg(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer0_reg_t
hri_spiflashflash_get_CMD_BUFFER0_reg(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER0.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_CMD_BUFFER0_reg(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CMD_BUFFER0_reg(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CMD_BUFFER0_reg(const void *const hw, hri_spi_flash_cmd_buffer0_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER0.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer0_reg_t hri_spiflashflash_read_CMD_BUFFER0_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->CMD_BUFFER0.reg;
}

static inline void hri_spiflashflash_set_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const               hw,
                                                                    hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg |= SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer1_reg_t
hri_spiflashflash_get_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER1.reg;
	tmp = (tmp & SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(mask)) >> SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const               hw,
                                                                      hri_spi_flash_cmd_buffer1_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CMD_BUFFER1.reg;
	tmp &= ~SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Msk;
	tmp |= SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(data);
	((SpiFlash *)hw)->CMD_BUFFER1.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const               hw,
                                                                      hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg &= ~SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const               hw,
                                                                       hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg ^= SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer1_reg_t hri_spiflashflash_read_CMD_BUFFER1_CMD_BUFFER1_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER1.reg;
	tmp = (tmp & SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Msk) >> SPI_FLASH_CMD_BUFFER1_CMD_BUFFER1_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_CMD_BUFFER1_reg(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer1_reg_t
hri_spiflashflash_get_CMD_BUFFER1_reg(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->CMD_BUFFER1.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_CMD_BUFFER1_reg(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CMD_BUFFER1_reg(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CMD_BUFFER1_reg(const void *const hw, hri_spi_flash_cmd_buffer1_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CMD_BUFFER1.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_cmd_buffer1_reg_t hri_spiflashflash_read_CMD_BUFFER1_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->CMD_BUFFER1.reg;
}

static inline void hri_spiflashflash_set_DIRECTION_DIRECTION_bf(const void *const             hw,
                                                                hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg |= SPI_FLASH_DIRECTION_DIRECTION(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_direction_reg_t
hri_spiflashflash_get_DIRECTION_DIRECTION_bf(const void *const hw, hri_spi_flash_direction_reg_t mask)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->DIRECTION.reg;
	tmp = (tmp & SPI_FLASH_DIRECTION_DIRECTION(mask)) >> SPI_FLASH_DIRECTION_DIRECTION_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_DIRECTION_DIRECTION_bf(const void *const             hw,
                                                                  hri_spi_flash_direction_reg_t data)
{
	uint8_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->DIRECTION.reg;
	tmp &= ~SPI_FLASH_DIRECTION_DIRECTION_Msk;
	tmp |= SPI_FLASH_DIRECTION_DIRECTION(data);
	((SpiFlash *)hw)->DIRECTION.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_DIRECTION_DIRECTION_bf(const void *const             hw,
                                                                  hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg &= ~SPI_FLASH_DIRECTION_DIRECTION(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_DIRECTION_DIRECTION_bf(const void *const             hw,
                                                                   hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg ^= SPI_FLASH_DIRECTION_DIRECTION(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_direction_reg_t hri_spiflashflash_read_DIRECTION_DIRECTION_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->DIRECTION.reg;
	tmp = (tmp & SPI_FLASH_DIRECTION_DIRECTION_Msk) >> SPI_FLASH_DIRECTION_DIRECTION_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_DIRECTION_reg(const void *const hw, hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_direction_reg_t hri_spiflashflash_get_DIRECTION_reg(const void *const             hw,
                                                                                hri_spi_flash_direction_reg_t mask)
{
	uint8_t tmp;
	tmp = ((SpiFlash *)hw)->DIRECTION.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_DIRECTION_reg(const void *const hw, hri_spi_flash_direction_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_DIRECTION_reg(const void *const hw, hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_DIRECTION_reg(const void *const hw, hri_spi_flash_direction_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DIRECTION.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_direction_reg_t hri_spiflashflash_read_DIRECTION_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->DIRECTION.reg;
}

static inline void
hri_spiflashflash_set_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const                     hw,
                                                             hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg |= SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_dma_start_address_reg_t
hri_spiflashflash_get_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const                     hw,
                                                             hri_spi_flash_dma_start_address_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->DMA_START_ADDRESS.reg;
	tmp = (tmp & SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(mask))
	      >> SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Pos;
	return tmp;
}

static inline void
hri_spiflashflash_write_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const                     hw,
                                                               hri_spi_flash_dma_start_address_reg_t data)
{
	uint32_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->DMA_START_ADDRESS.reg;
	tmp &= ~SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Msk;
	tmp |= SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(data);
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_spiflashflash_clear_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const                     hw,
                                                               hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg &= ~SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void
hri_spiflashflash_toggle_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const                     hw,
                                                                hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg ^= SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_dma_start_address_reg_t
hri_spiflashflash_read_DMA_START_ADDRESS_DMA_START_ADDRESS_bf(const void *const hw)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->DMA_START_ADDRESS.reg;
	tmp = (tmp & SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Msk)
	      >> SPI_FLASH_DMA_START_ADDRESS_DMA_START_ADDRESS_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_DMA_START_ADDRESS_reg(const void *const                     hw,
                                                               hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_dma_start_address_reg_t
hri_spiflashflash_get_DMA_START_ADDRESS_reg(const void *const hw, hri_spi_flash_dma_start_address_reg_t mask)
{
	uint32_t tmp;
	tmp = ((SpiFlash *)hw)->DMA_START_ADDRESS.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_DMA_START_ADDRESS_reg(const void *const                     hw,
                                                                 hri_spi_flash_dma_start_address_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_DMA_START_ADDRESS_reg(const void *const                     hw,
                                                                 hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_DMA_START_ADDRESS_reg(const void *const                     hw,
                                                                  hri_spi_flash_dma_start_address_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->DMA_START_ADDRESS.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_dma_start_address_reg_t hri_spiflashflash_read_DMA_START_ADDRESS_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->DMA_START_ADDRESS.reg;
}

static inline void hri_spiflashflash_set_CONFIG_ENDIANNESS_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_ENDIANNESS_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_CONFIG_ENDIANNESS_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_ENDIANNESS_Msk) >> SPI_FLASH_CONFIG_ENDIANNESS_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_CONFIG_ENDIANNESS_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_ENDIANNESS_Msk;
	tmp |= value << SPI_FLASH_CONFIG_ENDIANNESS_Pos;
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_ENDIANNESS_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_ENDIANNESS_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_ENDIANNESS_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_ENDIANNESS_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_CONFIG_REVERSE_CMD_BUFFER_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_CONFIG_REVERSE_CMD_BUFFER_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Msk) >> SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_CONFIG_REVERSE_CMD_BUFFER_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Msk;
	tmp |= value << SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Pos;
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_REVERSE_CMD_BUFFER_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_REVERSE_CMD_BUFFER_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_REVERSE_CMD_BUFFER_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_CONFIG_RDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_RDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_CONFIG_RDATA_REVERSE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_RDATA_REVERSE_Msk) >> SPI_FLASH_CONFIG_RDATA_REVERSE_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_CONFIG_RDATA_REVERSE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_RDATA_REVERSE_Msk;
	tmp |= value << SPI_FLASH_CONFIG_RDATA_REVERSE_Pos;
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_RDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_RDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_RDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_RDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_CONFIG_REVERSE_INCOMIND_DATA_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_CONFIG_REVERSE_INCOMIND_DATA_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Msk) >> SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_CONFIG_REVERSE_INCOMIND_DATA_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Msk;
	tmp |= value << SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Pos;
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_REVERSE_INCOMIND_DATA_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_REVERSE_INCOMIND_DATA_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_REVERSE_INCOMIND_DATA_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_CONFIG_WDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_WDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_CONFIG_WDATA_REVERSE_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_WDATA_REVERSE_Msk) >> SPI_FLASH_CONFIG_WDATA_REVERSE_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_CONFIG_WDATA_REVERSE_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_WDATA_REVERSE_Msk;
	tmp |= value << SPI_FLASH_CONFIG_WDATA_REVERSE_Pos;
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_WDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_WDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_WDATA_REVERSE_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_WDATA_REVERSE_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const          hw,
                                                                              hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_config_reg_t
hri_spiflashflash_get_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const hw, hri_spi_flash_config_reg_t mask)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(mask)) >> SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const          hw,
                                                                                hri_spi_flash_config_reg_t data)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= ~SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Msk;
	tmp |= SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(data);
	((SpiFlash *)hw)->CONFIG.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const          hw,
                                                                                hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const          hw,
                                                                                 hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_config_reg_t
hri_spiflashflash_read_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp = (tmp & SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Msk) >> SPI_FLASH_CONFIG_SPI_INTERFACE_CONFIG_DEBUG_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_CONFIG_reg(const void *const hw, hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_config_reg_t hri_spiflashflash_get_CONFIG_reg(const void *const          hw,
                                                                          hri_spi_flash_config_reg_t mask)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->CONFIG.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_CONFIG_reg(const void *const hw, hri_spi_flash_config_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_CONFIG_reg(const void *const hw, hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_CONFIG_reg(const void *const hw, hri_spi_flash_config_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->CONFIG.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_config_reg_t hri_spiflashflash_read_CONFIG_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->CONFIG.reg;
}

static inline void hri_spiflashflash_set_TX_CONTROL_DRIVE_0_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_TX_CONTROL_DRIVE_0_ON_TX_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Msk) >> SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_DRIVE_0_ON_TX_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= ~SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Msk;
	tmp |= value << SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Pos;
	((SpiFlash *)hw)->TX_CONTROL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_DRIVE_0_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_DRIVE_0_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= SPI_FLASH_TX_CONTROL_DRIVE_0_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_TX_CONTROL_DRIVE_1_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_TX_CONTROL_DRIVE_1_ON_TX_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Msk) >> SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_DRIVE_1_ON_TX_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= ~SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Msk;
	tmp |= value << SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Pos;
	((SpiFlash *)hw)->TX_CONTROL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_DRIVE_1_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_DRIVE_1_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= SPI_FLASH_TX_CONTROL_DRIVE_1_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_TX_CONTROL_TOGGLE_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_TX_CONTROL_TOGGLE_ON_TX_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Msk) >> SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_TOGGLE_ON_TX_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= ~SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Msk;
	tmp |= value << SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Pos;
	((SpiFlash *)hw)->TX_CONTROL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_TOGGLE_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_TOGGLE_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= SPI_FLASH_TX_CONTROL_TOGGLE_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_TX_CONTROL_DUMMY_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_spiflashflash_get_TX_CONTROL_DUMMY_ON_TX_bit(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Msk) >> SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Pos;
	return (bool)tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_DUMMY_ON_TX_bit(const void *const hw, bool value)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= ~SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Msk;
	tmp |= value << SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Pos;
	((SpiFlash *)hw)->TX_CONTROL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_DUMMY_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_DUMMY_ON_TX_bit(const void *const hw)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= SPI_FLASH_TX_CONTROL_DUMMY_ON_TX_Msk;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_set_TX_CONTROL_DUMMY_BYTE_bf(const void *const              hw,
                                                                  hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= SPI_FLASH_TX_CONTROL_DUMMY_BYTE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_tx_control_reg_t
hri_spiflashflash_get_TX_CONTROL_DUMMY_BYTE_bf(const void *const hw, hri_spi_flash_tx_control_reg_t mask)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_DUMMY_BYTE(mask)) >> SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Pos;
	return tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_DUMMY_BYTE_bf(const void *const              hw,
                                                                    hri_spi_flash_tx_control_reg_t data)
{
	uint16_t tmp;
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= ~SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Msk;
	tmp |= SPI_FLASH_TX_CONTROL_DUMMY_BYTE(data);
	((SpiFlash *)hw)->TX_CONTROL.reg = tmp;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_DUMMY_BYTE_bf(const void *const              hw,
                                                                    hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~SPI_FLASH_TX_CONTROL_DUMMY_BYTE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_DUMMY_BYTE_bf(const void *const              hw,
                                                                     hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= SPI_FLASH_TX_CONTROL_DUMMY_BYTE(mask);
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_tx_control_reg_t hri_spiflashflash_read_TX_CONTROL_DUMMY_BYTE_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp = (tmp & SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Msk) >> SPI_FLASH_TX_CONTROL_DUMMY_BYTE_Pos;
	return tmp;
}

static inline void hri_spiflashflash_set_TX_CONTROL_reg(const void *const hw, hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg |= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_tx_control_reg_t hri_spiflashflash_get_TX_CONTROL_reg(const void *const              hw,
                                                                                  hri_spi_flash_tx_control_reg_t mask)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->TX_CONTROL.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_spiflashflash_write_TX_CONTROL_reg(const void *const hw, hri_spi_flash_tx_control_reg_t data)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg = data;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_clear_TX_CONTROL_reg(const void *const hw, hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg &= ~mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline void hri_spiflashflash_toggle_TX_CONTROL_reg(const void *const hw, hri_spi_flash_tx_control_reg_t mask)
{
	SPI_FLASH_CRITICAL_SECTION_ENTER();
	((SpiFlash *)hw)->TX_CONTROL.reg ^= mask;
	SPI_FLASH_CRITICAL_SECTION_LEAVE();
}

static inline hri_spi_flash_tx_control_reg_t hri_spiflashflash_read_TX_CONTROL_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->TX_CONTROL.reg;
}

static inline bool hri_spiflashflash_get_STATUS_SPI_MASTER_CSN_bit(const void *const hw)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_SPI_MASTER_CSN_Msk) >> SPI_FLASH_STATUS_SPI_MASTER_CSN_Pos;
}

static inline hri_spi_flash_status_reg_t
hri_spiflashflash_get_STATUS_AHB_MASTER_STATE_bf(const void *const hw, hri_spi_flash_status_reg_t mask)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_AHB_MASTER_STATE(mask))
	       >> SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t hri_spiflashflash_read_STATUS_AHB_MASTER_STATE_bf(const void *const hw)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_AHB_MASTER_STATE_Msk)
	       >> SPI_FLASH_STATUS_AHB_MASTER_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t
hri_spiflashflash_get_STATUS_FIFO_CTRL_STATE_bf(const void *const hw, hri_spi_flash_status_reg_t mask)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_FIFO_CTRL_STATE(mask))
	       >> SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t hri_spiflashflash_read_STATUS_FIFO_CTRL_STATE_bf(const void *const hw)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_FIFO_CTRL_STATE_Msk)
	       >> SPI_FLASH_STATUS_FIFO_CTRL_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t
hri_spiflashflash_get_STATUS_SPI_MASTER_STATE_bf(const void *const hw, hri_spi_flash_status_reg_t mask)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_SPI_MASTER_STATE(mask))
	       >> SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t hri_spiflashflash_read_STATUS_SPI_MASTER_STATE_bf(const void *const hw)
{
	return (((SpiFlash *)hw)->STATUS.reg & SPI_FLASH_STATUS_SPI_MASTER_STATE_Msk)
	       >> SPI_FLASH_STATUS_SPI_MASTER_STATE_Pos;
}

static inline hri_spi_flash_status_reg_t hri_spiflashflash_get_STATUS_reg(const void *const          hw,
                                                                          hri_spi_flash_status_reg_t mask)
{
	uint16_t tmp;
	tmp = ((SpiFlash *)hw)->STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_spi_flash_status_reg_t hri_spiflashflash_read_STATUS_reg(const void *const hw)
{
	return ((SpiFlash *)hw)->STATUS.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_SPI_FLASH_B11_H_INCLUDED */
#endif /* _SAMB11_SPI_FLASH_COMPONENT_ */
