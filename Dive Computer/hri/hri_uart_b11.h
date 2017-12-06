/**
 * \file
 *
 * \brief SAM UART
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

#ifdef _SAMB11_UART_COMPONENT_
#ifndef _HRI_UART_B11_H_INCLUDED_
#define _HRI_UART_B11_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_UART_CRITICAL_SECTIONS)
#define UART_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#define UART_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#define UART_CRITICAL_SECTION_ENTER()
#define UART_CRITICAL_SECTION_LEAVE()
#endif

typedef uint16_t hri_uart_baud_rate_reg_t;
typedef uint8_t  hri_uart_clock_source_reg_t;
typedef uint8_t  hri_uart_configuration_reg_t;
typedef uint8_t  hri_uart_receive_data_reg_t;
typedef uint8_t  hri_uart_receive_status_reg_t;
typedef uint8_t  hri_uart_receive_timeout_reg_t;
typedef uint8_t  hri_uart_rx_interrupt_mask_reg_t;
typedef uint8_t  hri_uart_transmit_data_reg_t;
typedef uint8_t  hri_uart_transmit_status_reg_t;
typedef uint8_t  hri_uart_tx_interrupt_mask_reg_t;

static inline void hri_uart_write_TRANSMIT_DATA_reg(const void *const hw, hri_uart_transmit_data_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TRANSMIT_DATA.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk) >> UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk)
	      >> UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_TX_FIFO_0P25_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk)
	      >> UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_TX_FIFO_0P5_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk)
	      >> UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_TX_FIFO_0P75_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk) >> UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Msk) >> UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= ~UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Msk;
	tmp |= value << UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Pos;
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= UART_TX_INTERRUPT_MASK_CTS_ACTIVE_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_TX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_tx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_tx_interrupt_mask_reg_t hri_uart_get_TX_INTERRUPT_MASK_reg(const void *const                hw,
                                                                                  hri_uart_tx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_TX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_tx_interrupt_mask_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_TX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_tx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_TX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_tx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->TX_INTERRUPT_MASK.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_tx_interrupt_mask_reg_t hri_uart_read_TX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((Uart *)hw)->TX_INTERRUPT_MASK.reg;
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk)
	      >> UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk)
	      >> UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_RX_FIFO_0P25_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk) >> UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_RX_FIFO_0P5_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk)
	      >> UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_RX_FIFO_0P75_FULL_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_TIMEOUT_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_TIMEOUT_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Msk) >> UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_TIMEOUT_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_TIMEOUT_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_TIMEOUT_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_TIMEOUT_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Msk) >> UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_PARITY_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk) >> UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp = (tmp & UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Msk) >> UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= ~UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Msk;
	tmp |= value << UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Pos;
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= UART_RX_INTERRUPT_MASK_FRAMING_ERROR_MASK_Msk;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_RX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_rx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_rx_interrupt_mask_reg_t hri_uart_get_RX_INTERRUPT_MASK_reg(const void *const                hw,
                                                                                  hri_uart_rx_interrupt_mask_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_RX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_rx_interrupt_mask_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_rx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RX_INTERRUPT_MASK_reg(const void *const hw, hri_uart_rx_interrupt_mask_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RX_INTERRUPT_MASK.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_rx_interrupt_mask_reg_t hri_uart_read_RX_INTERRUPT_MASK_reg(const void *const hw)
{
	return ((Uart *)hw)->RX_INTERRUPT_MASK.reg;
}

static inline void hri_uart_set_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const              hw,
                                                                 hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg |= UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_receive_timeout_reg_t
hri_uart_get_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const hw, hri_uart_receive_timeout_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RECEIVE_TIMEOUT.reg;
	tmp = (tmp & UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(mask)) >> UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Pos;
	return tmp;
}

static inline void hri_uart_write_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const              hw,
                                                                   hri_uart_receive_timeout_reg_t data)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->RECEIVE_TIMEOUT.reg;
	tmp &= ~UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Msk;
	tmp |= UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(data);
	((Uart *)hw)->RECEIVE_TIMEOUT.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const              hw,
                                                                   hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg &= ~UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const              hw,
                                                                    hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg ^= UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_receive_timeout_reg_t hri_uart_read_RECEIVE_TIMEOUT_TIMEOUT_VALUE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RECEIVE_TIMEOUT.reg;
	tmp = (tmp & UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Msk) >> UART_RECEIVE_TIMEOUT_TIMEOUT_VALUE_Pos;
	return tmp;
}

static inline void hri_uart_set_RECEIVE_TIMEOUT_reg(const void *const hw, hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_receive_timeout_reg_t hri_uart_get_RECEIVE_TIMEOUT_reg(const void *const              hw,
                                                                              hri_uart_receive_timeout_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RECEIVE_TIMEOUT.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_RECEIVE_TIMEOUT_reg(const void *const hw, hri_uart_receive_timeout_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_RECEIVE_TIMEOUT_reg(const void *const hw, hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_RECEIVE_TIMEOUT_reg(const void *const hw, hri_uart_receive_timeout_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->RECEIVE_TIMEOUT.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_receive_timeout_reg_t hri_uart_read_RECEIVE_TIMEOUT_reg(const void *const hw)
{
	return ((Uart *)hw)->RECEIVE_TIMEOUT.reg;
}

static inline void hri_uart_set_CONFIGURATION_NUMBER_OF_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= UART_CONFIGURATION_NUMBER_OF_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_CONFIGURATION_NUMBER_OF_BITS_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_NUMBER_OF_BITS) >> UART_CONFIGURATION_NUMBER_OF_BITS_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_CONFIGURATION_NUMBER_OF_BITS_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= ~UART_CONFIGURATION_NUMBER_OF_BITS;
	tmp |= value << UART_CONFIGURATION_NUMBER_OF_BITS_Pos;
	((Uart *)hw)->UART_CONFIGURATION.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_NUMBER_OF_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~UART_CONFIGURATION_NUMBER_OF_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_NUMBER_OF_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= UART_CONFIGURATION_NUMBER_OF_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_CONFIGURATION_PARITY_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= UART_CONFIGURATION_PARITY_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_CONFIGURATION_PARITY_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_PARITY_ENABLE) >> UART_CONFIGURATION_PARITY_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_CONFIGURATION_PARITY_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= ~UART_CONFIGURATION_PARITY_ENABLE;
	tmp |= value << UART_CONFIGURATION_PARITY_ENABLE_Pos;
	((Uart *)hw)->UART_CONFIGURATION.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_PARITY_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~UART_CONFIGURATION_PARITY_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_PARITY_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= UART_CONFIGURATION_PARITY_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_CONFIGURATION_STOP_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= UART_CONFIGURATION_STOP_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_CONFIGURATION_STOP_BITS_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_STOP_BITS) >> UART_CONFIGURATION_STOP_BITS_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_CONFIGURATION_STOP_BITS_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= ~UART_CONFIGURATION_STOP_BITS;
	tmp |= value << UART_CONFIGURATION_STOP_BITS_Pos;
	((Uart *)hw)->UART_CONFIGURATION.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_STOP_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~UART_CONFIGURATION_STOP_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_STOP_BITS_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= UART_CONFIGURATION_STOP_BITS;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_CONFIGURATION_CTS_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= UART_CONFIGURATION_CTS_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline bool hri_uart_get_CONFIGURATION_CTS_ENABLE_bit(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_CTS_ENABLE) >> UART_CONFIGURATION_CTS_ENABLE_Pos;
	return (bool)tmp;
}

static inline void hri_uart_write_CONFIGURATION_CTS_ENABLE_bit(const void *const hw, bool value)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= ~UART_CONFIGURATION_CTS_ENABLE;
	tmp |= value << UART_CONFIGURATION_CTS_ENABLE_Pos;
	((Uart *)hw)->UART_CONFIGURATION.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_CTS_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~UART_CONFIGURATION_CTS_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_CTS_ENABLE_bit(const void *const hw)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= UART_CONFIGURATION_CTS_ENABLE;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_set_CONFIGURATION_PARITY_MODE_bf(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= UART_CONFIGURATION_PARITY_MODE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_configuration_reg_t hri_uart_get_CONFIGURATION_PARITY_MODE_bf(const void *const            hw,
                                                                                     hri_uart_configuration_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_PARITY_MODE(mask)) >> UART_CONFIGURATION_PARITY_MODE_Pos;
	return tmp;
}

static inline void hri_uart_write_CONFIGURATION_PARITY_MODE_bf(const void *const hw, hri_uart_configuration_reg_t data)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= ~UART_CONFIGURATION_PARITY_MODE_Msk;
	tmp |= UART_CONFIGURATION_PARITY_MODE(data);
	((Uart *)hw)->UART_CONFIGURATION.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_PARITY_MODE_bf(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~UART_CONFIGURATION_PARITY_MODE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_PARITY_MODE_bf(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= UART_CONFIGURATION_PARITY_MODE(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_configuration_reg_t hri_uart_read_CONFIGURATION_PARITY_MODE_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp = (tmp & UART_CONFIGURATION_PARITY_MODE_Msk) >> UART_CONFIGURATION_PARITY_MODE_Pos;
	return tmp;
}

static inline void hri_uart_set_CONFIGURATION_reg(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_configuration_reg_t hri_uart_get_CONFIGURATION_reg(const void *const            hw,
                                                                          hri_uart_configuration_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CONFIGURATION.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_CONFIGURATION_reg(const void *const hw, hri_uart_configuration_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CONFIGURATION_reg(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CONFIGURATION_reg(const void *const hw, hri_uart_configuration_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CONFIGURATION.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_configuration_reg_t hri_uart_read_CONFIGURATION_reg(const void *const hw)
{
	return ((Uart *)hw)->UART_CONFIGURATION.reg;
}

static inline void hri_uart_set_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg |= UART_BAUD_RATE_FRACTIONAL_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_get_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const        hw,
                                                                                     hri_uart_baud_rate_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp = (tmp & UART_BAUD_RATE_FRACTIONAL_DIVISION(mask)) >> UART_BAUD_RATE_FRACTIONAL_DIVISION_Pos;
	return tmp;
}

static inline void hri_uart_write_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t data)
{
	uint16_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp &= ~UART_BAUD_RATE_FRACTIONAL_DIVISION_Msk;
	tmp |= UART_BAUD_RATE_FRACTIONAL_DIVISION(data);
	((Uart *)hw)->UART_BAUD_RATE.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg &= ~UART_BAUD_RATE_FRACTIONAL_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg ^= UART_BAUD_RATE_FRACTIONAL_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_read_BAUD_RATE_FRACTIONAL_DIVISION_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp = (tmp & UART_BAUD_RATE_FRACTIONAL_DIVISION_Msk) >> UART_BAUD_RATE_FRACTIONAL_DIVISION_Pos;
	return tmp;
}

static inline void hri_uart_set_BAUD_RATE_INTEGER_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg |= UART_BAUD_RATE_INTEGER_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_get_BAUD_RATE_INTEGER_DIVISION_bf(const void *const        hw,
                                                                                  hri_uart_baud_rate_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp = (tmp & UART_BAUD_RATE_INTEGER_DIVISION(mask)) >> UART_BAUD_RATE_INTEGER_DIVISION_Pos;
	return tmp;
}

static inline void hri_uart_write_BAUD_RATE_INTEGER_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t data)
{
	uint16_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp &= ~UART_BAUD_RATE_INTEGER_DIVISION_Msk;
	tmp |= UART_BAUD_RATE_INTEGER_DIVISION(data);
	((Uart *)hw)->UART_BAUD_RATE.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_BAUD_RATE_INTEGER_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg &= ~UART_BAUD_RATE_INTEGER_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_BAUD_RATE_INTEGER_DIVISION_bf(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg ^= UART_BAUD_RATE_INTEGER_DIVISION(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_read_BAUD_RATE_INTEGER_DIVISION_bf(const void *const hw)
{
	uint16_t tmp;
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp = (tmp & UART_BAUD_RATE_INTEGER_DIVISION_Msk) >> UART_BAUD_RATE_INTEGER_DIVISION_Pos;
	return tmp;
}

static inline void hri_uart_set_BAUD_RATE_reg(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_get_BAUD_RATE_reg(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	uint16_t tmp;
	tmp = ((Uart *)hw)->UART_BAUD_RATE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_BAUD_RATE_reg(const void *const hw, hri_uart_baud_rate_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_BAUD_RATE_reg(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_BAUD_RATE_reg(const void *const hw, hri_uart_baud_rate_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_BAUD_RATE.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_baud_rate_reg_t hri_uart_read_BAUD_RATE_reg(const void *const hw)
{
	return ((Uart *)hw)->UART_BAUD_RATE.reg;
}

static inline void hri_uart_set_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg |= UART_CLOCK_SOURCE_CLOCK_SELECT(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_clock_source_reg_t hri_uart_get_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const           hw,
                                                                                    hri_uart_clock_source_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CLOCK_SOURCE.reg;
	tmp = (tmp & UART_CLOCK_SOURCE_CLOCK_SELECT(mask)) >> UART_CLOCK_SOURCE_CLOCK_SELECT_Pos;
	return tmp;
}

static inline void hri_uart_write_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const hw, hri_uart_clock_source_reg_t data)
{
	uint8_t tmp;
	UART_CRITICAL_SECTION_ENTER();
	tmp = ((Uart *)hw)->UART_CLOCK_SOURCE.reg;
	tmp &= ~UART_CLOCK_SOURCE_CLOCK_SELECT_Msk;
	tmp |= UART_CLOCK_SOURCE_CLOCK_SELECT(data);
	((Uart *)hw)->UART_CLOCK_SOURCE.reg = tmp;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg &= ~UART_CLOCK_SOURCE_CLOCK_SELECT(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg ^= UART_CLOCK_SOURCE_CLOCK_SELECT(mask);
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_clock_source_reg_t hri_uart_read_CLOCK_SOURCE_CLOCK_SELECT_bf(const void *const hw)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CLOCK_SOURCE.reg;
	tmp = (tmp & UART_CLOCK_SOURCE_CLOCK_SELECT_Msk) >> UART_CLOCK_SOURCE_CLOCK_SELECT_Pos;
	return tmp;
}

static inline void hri_uart_set_CLOCK_SOURCE_reg(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg |= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_clock_source_reg_t hri_uart_get_CLOCK_SOURCE_reg(const void *const           hw,
                                                                        hri_uart_clock_source_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->UART_CLOCK_SOURCE.reg;
	tmp &= mask;
	return tmp;
}

static inline void hri_uart_write_CLOCK_SOURCE_reg(const void *const hw, hri_uart_clock_source_reg_t data)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg = data;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_clear_CLOCK_SOURCE_reg(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg &= ~mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline void hri_uart_toggle_CLOCK_SOURCE_reg(const void *const hw, hri_uart_clock_source_reg_t mask)
{
	UART_CRITICAL_SECTION_ENTER();
	((Uart *)hw)->UART_CLOCK_SOURCE.reg ^= mask;
	UART_CRITICAL_SECTION_LEAVE();
}

static inline hri_uart_clock_source_reg_t hri_uart_read_CLOCK_SOURCE_reg(const void *const hw)
{
	return ((Uart *)hw)->UART_CLOCK_SOURCE.reg;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Msk)
	       >> UART_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_Pos;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Msk)
	       >> UART_TRANSMIT_STATUS_TX_FIFO_0P25_EMPTY_Pos;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Msk)
	       >> UART_TRANSMIT_STATUS_TX_FIFO_0P5_EMPTY_Pos;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Msk)
	       >> UART_TRANSMIT_STATUS_TX_FIFO_0P75_EMPTY_Pos;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_TX_FIFO_EMPTY_Msk)
	       >> UART_TRANSMIT_STATUS_TX_FIFO_EMPTY_Pos;
}

static inline bool hri_uart_get_TRANSMIT_STATUS_CTS_ACTIVE_bit(const void *const hw)
{
	return (((Uart *)hw)->TRANSMIT_STATUS.reg & UART_TRANSMIT_STATUS_CTS_ACTIVE_Msk)
	       >> UART_TRANSMIT_STATUS_CTS_ACTIVE_Pos;
}

static inline hri_uart_transmit_status_reg_t hri_uart_get_TRANSMIT_STATUS_reg(const void *const              hw,
                                                                              hri_uart_transmit_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->TRANSMIT_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_uart_transmit_status_reg_t hri_uart_read_TRANSMIT_STATUS_reg(const void *const hw)
{
	return ((Uart *)hw)->TRANSMIT_STATUS.reg;
}

static inline hri_uart_receive_data_reg_t hri_uart_get_RECEIVE_DATA_RX_BYTE_bf(const void *const           hw,
                                                                               hri_uart_receive_data_reg_t mask)
{
	return (((Uart *)hw)->RECEIVE_DATA.reg & UART_RECEIVE_DATA_RX_BYTE(mask)) >> UART_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_uart_receive_data_reg_t hri_uart_read_RECEIVE_DATA_RX_BYTE_bf(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_DATA.reg & UART_RECEIVE_DATA_RX_BYTE_Msk) >> UART_RECEIVE_DATA_RX_BYTE_Pos;
}

static inline hri_uart_receive_data_reg_t hri_uart_get_RECEIVE_DATA_reg(const void *const           hw,
                                                                        hri_uart_receive_data_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RECEIVE_DATA.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_uart_receive_data_reg_t hri_uart_read_RECEIVE_DATA_reg(const void *const hw)
{
	return ((Uart *)hw)->RECEIVE_DATA.reg;
}

static inline bool hri_uart_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Msk)
	       >> UART_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_RX_FIFO_0P25_FULL_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Msk)
	       >> UART_RECEIVE_STATUS_RX_FIFO_0P25_FULL_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_RX_FIFO_0P5_FULL_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Msk)
	       >> UART_RECEIVE_STATUS_RX_FIFO_0P5_FULL_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_RX_FIFO_0P75_FULL_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Msk)
	       >> UART_RECEIVE_STATUS_RX_FIFO_0P75_FULL_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_TIMEOUT_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_TIMEOUT_Msk) >> UART_RECEIVE_STATUS_TIMEOUT_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_PARITY_ERROR_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_PARITY_ERROR_Msk)
	       >> UART_RECEIVE_STATUS_PARITY_ERROR_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_FIFO_OVERRUN_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_FIFO_OVERRUN_Msk)
	       >> UART_RECEIVE_STATUS_FIFO_OVERRUN_Pos;
}

static inline bool hri_uart_get_RECEIVE_STATUS_FRAMING_ERROR_bit(const void *const hw)
{
	return (((Uart *)hw)->RECEIVE_STATUS.reg & UART_RECEIVE_STATUS_FRAMING_ERROR_Msk)
	       >> UART_RECEIVE_STATUS_FRAMING_ERROR_Pos;
}

static inline hri_uart_receive_status_reg_t hri_uart_get_RECEIVE_STATUS_reg(const void *const             hw,
                                                                            hri_uart_receive_status_reg_t mask)
{
	uint8_t tmp;
	tmp = ((Uart *)hw)->RECEIVE_STATUS.reg;
	tmp &= mask;
	return tmp;
}

static inline hri_uart_receive_status_reg_t hri_uart_read_RECEIVE_STATUS_reg(const void *const hw)
{
	return ((Uart *)hw)->RECEIVE_STATUS.reg;
}

#ifdef __cplusplus
}
#endif

#endif /* _HRI_UART_B11_H_INCLUDED */
#endif /* _SAMB11_UART_COMPONENT_ */
