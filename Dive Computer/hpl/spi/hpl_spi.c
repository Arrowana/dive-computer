/**
 * \file
 *
 * \brief SAM Serial Communication Interface (SPI)
 *
 * Copyright (C) 2015-2017 Atmel Corporation. All rights reserved.
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
 * DAMAGES (INCLUDING, BUT NOT LIMIT ED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#include <utils.h>
#include <hpl_spi_m_sync.h>
#include <hpl_spi_m_async.h>
#include <hpl_spi_s_async.h>
#include <hpl_spi_s_sync.h>
#include <hpl_spi_config.h>
#include <utils_assert.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Build configuration from header macros. */
#define SPI_CONFIGURATION(n)                                                                                           \
	{                                                                                                                  \
		(n), CONF_SPI_##n##_MODE, CONF_SPI_##n##_PRESCALER, CONF_SPI_##n##_CLOCK_DIVIDER, CONF_SPI_##n##_DORD,         \
		    CONF_SPI_##n##_CPOL, CONF_SPI_##n##_CPHA,                                                                  \
	}

#ifndef CONF_SPI_0_ENABLE
#define CONF_SPI_0_ENABLE 0
#endif
#ifndef CONF_SPI_1_ENABLE
#define CONF_SPI_1_ENABLE 0
#endif

struct spi_regs_cfg {
	uint8_t number;
	/** SPI mode */
	uint8_t master_mode;
	/** SPI source clock frequency select */
	uint8_t prescaler;
	/** clock divider value to use*/
	uint16_t clock_divider;
	/** Data order */
	uint8_t data_order;
	/** Clock polarity */
	uint8_t cpol;
	/** Clock phase */
	uint8_t cpha;
};

static const struct spi_regs_cfg spi_regs[] = {
#if CONF_SPI_0_ENABLE
    SPI_CONFIGURATION(0),
#endif
#if CONF_SPI_1_ENABLE
    SPI_CONFIGURATION(1),
#endif
};

static struct _spi_async_dev *_spi0_dev = NULL;

/**
 * \brief Retrieve ordinal number of the given SPI hardware instance
 */
static uint8_t _spi_get_hardware_index(const void *const hw)
{
	return ((uint32_t)hw - (uint32_t)SPI0) >> 12;
}

/**
 * \internal Retrieve IRQ number of the given SPI hardware instance
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The IRQ index of hardware instance
 */
static uint32_t _spi_get_irq_num(const void *const hw)
{
	ASSERT(hw);

	return ((((uint32_t)hw - (uint32_t)SPI0) >> 12) << 1) + SPI0_RX_IRQn;
}

/** \brief Return the pointer to register settings of specific SPI
 *  \param[in] hw_addr The hardware register base address.
 *  \return Pointer to register settings of specific SERCOM.
 */
static inline const struct spi_regs_cfg *_spi_get_regs(const uint32_t hw_addr)
{
	uint8_t n = _spi_get_hardware_index((const void *)hw_addr);
	uint8_t i;

	for (i = 0; i < sizeof(spi_regs) / sizeof(struct spi_regs_cfg); i++) {
		if (spi_regs[i].number == n) {
			return &spi_regs[i];
		}
	}

	return NULL;
}

/**
 * \brief Init irq param with the given spi hardware instance
 */
static void _spi_init_irq_param(const void *const hw, struct _spi_async_dev *dev)
{
}

/** \internal De-initialize SPI
 *
 *  \param[in] hw Pointer to the hardware register base.
 *
 * \return De-initialization status
 */
static int32_t _spi_deinit(void *const hw)
{
	hri_spi_clear_CONFIGURATION_reg(hw, SPI_CONFIGURATION_Msk);
	hri_spi_clear_MODULE_ENABLE_ENABLE_bit(hw);

	return ERR_NONE;
}

/** \internal Enable SPI
 *
 *  \param[in] hw Pointer to the hardware register base.
 *
 * \return Enabling status
 */
static int32_t _spi_sync_enable(void *const hw)
{
	hri_spi_set_MODULE_ENABLE_ENABLE_bit(hw);

	return ERR_NONE;
}

/** \internal Enable SPI
 *
 *  \param[in] hw Pointer to the hardware register base.
 *
 * \return Enabling status
 */
static int32_t _spi_async_enable(void *const hw)
{
	_spi_sync_enable(hw);
	NVIC_EnableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_EnableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	return ERR_NONE;
}

/** \internal Disable SPI
 *
 *  \param[in] hw Pointer to the hardware register base.
 *
 * \return Disabling status
 */
static int32_t _spi_sync_disable(void *const hw)
{
	hri_spi_clear_MODULE_ENABLE_ENABLE_bit(hw);

	return ERR_NONE;
}

/** \internal Disable SPI
 *
 *  \param[in] hw Pointer to the hardware register base.
 *
 * \return Disabling status
 */
static int32_t _spi_async_disable(void *const hw)
{
	hri_spi_clear_MODULE_ENABLE_ENABLE_bit(hw);
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	return ERR_NONE;
}

/** \internal Set SPI mode
 *
 * \param[in] hw Pointer to the hardware register base.
 * \param[in] mode The mode to set
 *
 * \return Setting mode status
 */
static int32_t _spi_set_mode(void *const hw, const enum spi_transfer_mode mode)
{
	hri_spi_write_CONFIGURATION_SCK_PHASE_bit(hw, (mode & 0x01));
	hri_spi_write_CONFIGURATION_SCK_POLARITY_bit(hw, (mode >> 1));

	return ERR_NONE;
}

/** \internal Set SPI clock divider
 *
 * \param[in] hw Pointer to the hardware register base.
 * \param[in] baud_val The clock divider to set
 *
 * \note Formula: baud_rate = ((clock input freq/clock_divider+1)/2))
 *                            (For Example: if clock source is CLOCK_INPUT_0 then
 *                            ((26000000/(129+1))/2) = 100000 bps)
 *
 * \return Setting baudrate status
 */
static int32_t _spi_set_baudrate(void *const hw, const uint32_t baud_val)
{
	hri_spi_write_CLK_DIVIDER_reg(hw, (uint16_t)baud_val);

	return ERR_NONE;
}

/** \internal Set SERCOM SPI data order
 *
 * \param[in] hw   Pointer to the hardware register base.
 * \param[in] dord The Data order to set
 *
 * \return Setting data order status
 */
static int32_t _spi_set_data_order(void *const hw, const enum spi_data_order dord)
{
	hri_spi_write_CONFIGURATION_LSB_FIRST_ENABLE_bit(hw, dord);

	return ERR_NONE;
}

/**
 *  \brief IRQ handler used
 *  \param[in, out] p Pointer to SPI device instance.
 */
static void _spi_handler(struct _spi_async_dev *dev)
{
	ASSERT(dev);
	void *hw = dev->prvt;

	if (hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw)
	    && hri_spi_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw)) {
		dev->callbacks.tx(dev);
	} else if (hri_spi_get_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(hw)
	           && hri_spi_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(hw)) {
		hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(hw);
		dev->callbacks.complete(dev, 0);
	} else if (hri_spi_get_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw)
	           && hri_spi_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw)) {
		dev->callbacks.rx(dev);
	}
}

/**
 * \internal SPI interrupt handler
 */
void SPI0_RX_Handler(void)
{
	_spi_handler(_spi0_dev);
}

void SPI0_TX_Handler(void)
{
	_spi_handler(_spi0_dev);
}

int32_t _spi_m_sync_init(struct _spi_m_sync_dev *dev, void *const hw)
{
	const struct spi_regs_cfg *regs = _spi_get_regs((uint32_t)hw);

	ASSERT(dev && hw);

	if (regs == NULL) {
		return ERR_INVALID_ARG;
	}

	if (hri_spi_get_MODULE_ENABLE_ENABLE_bit(hw)) {
		return ERR_DENIED;
	}

	dev->prvt = hw;
	if (regs->master_mode) {
		hri_spi_set_MASTER_MODE_MASTER_ENABLE_bit(hw);
		hri_spi_write_CLK_DIVIDER_reg(hw, regs->clock_divider);
	} else {
		hri_spi_clear_MASTER_MODE_MASTER_ENABLE_bit(hw);
	}
	hri_spi_write_CLOCK_SOURCE_SELECT_reg(hw, regs->prescaler);
	hri_spi_write_CONFIGURATION_SCK_POLARITY_bit(hw, regs->cpol);
	hri_spi_write_CONFIGURATION_SCK_PHASE_bit(hw, regs->cpha);
	hri_spi_write_CONFIGURATION_LSB_FIRST_ENABLE_bit(hw, regs->data_order);

	return ERR_NONE;
}

int32_t _spi_s_sync_init(struct _spi_s_sync_dev *dev, void *const hw)
{
	return _spi_m_sync_init(dev, hw);
}

int32_t _spi_m_async_init(struct _spi_m_async_dev *dev, void *const hw)
{
	/* Do hardware initialize. */
	int32_t rc = _spi_m_sync_init((struct _spi_m_sync_dev *)dev, hw);

	if (rc < 0) {
		return rc;
	}

	/* Initialize callbacks: must use them */
	dev->callbacks.complete = NULL;
	dev->callbacks.rx       = NULL;
	dev->callbacks.tx       = NULL;

	_spi_init_irq_param(hw, dev);

	/* Disable RX and TX interrupt */
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);
	/* Clear RX and TX interrupt */
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	NVIC_EnableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_EnableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	return ERR_NONE;
}

int32_t _spi_s_async_init(struct _spi_s_async_dev *dev, void *const hw)
{
	return _spi_m_async_init(dev, hw);
}

int32_t _spi_m_sync_deinit(struct _spi_m_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	return _spi_deinit(hw);
}

int32_t _spi_s_sync_deinit(struct _spi_s_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	return _spi_deinit(hw);
}

int32_t _spi_m_async_deinit(struct _spi_async_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	return _spi_deinit(hw);
}

int32_t _spi_s_async_deinit(struct _spi_s_async_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_spi_get_irq_num(hw) + 1);

	return _spi_deinit(hw);
}

int32_t _spi_m_sync_enable(struct _spi_m_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_sync_enable(dev->prvt);
}

int32_t _spi_s_sync_enable(struct _spi_s_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_sync_enable(dev->prvt);
}

int32_t _spi_m_async_enable(struct _spi_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_async_enable(dev->prvt);
}

int32_t _spi_s_async_enable(struct _spi_s_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_async_enable(dev->prvt);
}

int32_t _spi_m_sync_disable(struct _spi_m_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_sync_disable(dev->prvt);
}

int32_t _spi_s_sync_disable(struct _spi_s_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_sync_disable(dev->prvt);
}

int32_t _spi_m_async_disable(struct _spi_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_async_disable(dev->prvt);
}

int32_t _spi_s_async_disable(struct _spi_s_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return _spi_async_disable(dev->prvt);
}

int32_t _spi_m_sync_set_mode(struct _spi_m_sync_dev *dev, const enum spi_transfer_mode mode)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_mode(dev->prvt, mode);
}

int32_t _spi_s_sync_set_mode(struct _spi_s_sync_dev *dev, const enum spi_transfer_mode mode)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_mode(dev->prvt, mode);
}

int32_t _spi_m_async_set_mode(struct _spi_m_async_dev *dev, const enum spi_transfer_mode mode)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_mode(dev->prvt, mode);
}

int32_t _spi_s_async_set_mode(struct _spi_s_async_dev *dev, const enum spi_transfer_mode mode)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_mode(dev->prvt, mode);
}

int32_t _spi_m_sync_set_baudrate(struct _spi_m_sync_dev *dev, const uint32_t baud_val)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_baudrate(dev->prvt, baud_val);
}

int32_t _spi_m_async_set_baudrate(struct _spi_m_async_dev *dev, const uint32_t baud_val)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_baudrate(dev->prvt, baud_val);
}

int32_t _spi_m_sync_set_char_size(struct _spi_m_sync_dev *dev, const enum spi_char_size char_size)
{
	ASSERT(dev && dev->prvt);

	(void)dev;
	(void)char_size;

	return ERR_UNSUPPORTED_OP;
}

int32_t _spi_s_sync_set_char_size(struct _spi_s_sync_dev *dev, const enum spi_char_size char_size)
{
	ASSERT(dev && dev->prvt);

	(void)dev;
	(void)char_size;

	return ERR_UNSUPPORTED_OP;
}

int32_t _spi_m_async_set_char_size(struct _spi_m_async_dev *dev, const enum spi_char_size char_size)
{
	ASSERT(dev && dev->prvt);

	(void)dev;
	(void)char_size;

	return ERR_UNSUPPORTED_OP;
}

int32_t _spi_s_async_set_char_size(struct _spi_s_async_dev *dev, const enum spi_char_size char_size)
{
	ASSERT(dev && dev->prvt);

	(void)dev;
	(void)char_size;

	return ERR_UNSUPPORTED_OP;
}

int32_t _spi_m_sync_set_data_order(struct _spi_m_sync_dev *dev, const enum spi_data_order dord)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_data_order(dev->prvt, dord);
}

int32_t _spi_s_sync_set_data_order(struct _spi_s_sync_dev *dev, const enum spi_data_order dord)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_data_order(dev->prvt, dord);
}

int32_t _spi_m_async_set_data_order(struct _spi_m_async_dev *dev, const enum spi_data_order dord)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_data_order(dev->prvt, dord);
}

int32_t _spi_s_async_set_data_order(struct _spi_s_async_dev *dev, const enum spi_data_order dord)
{
	ASSERT(dev && dev->prvt);

	return _spi_set_data_order(dev->prvt, dord);
}

/** Determines if the SPI module is currently synchronizing to the bus. */
static inline bool _spi_is_active(void *const hw)
{
	return hri_spi_get_BUS_STATUS_SPI_ACTIVE_bit(hw);
}

/** Checks if the SPI in master mode has shifted out last data, or if the
 * master has ended the transfer in slave mode.
 */
static inline bool _spi_is_write_complete(void *const hw)
{
	return hri_spi_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(hw);
}

/** Checks if the SPI module is ready to write data. */
static inline bool _spi_is_ready_to_write(void *const hw)
{
	return hri_spi_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw);
}

/** Checks if the SPI module is ready to read data. */
static inline bool _spi_is_ready_to_read(void *const hw)
{
	return hri_spi_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw);
}

/** Holds run time information for message sync transaction. */
struct _spi_trans_ctrl {
	/** Pointer to transmitting data buffer. */
	uint8_t *txbuf;
	/** Pointer to receiving data buffer. */
	uint8_t *rxbuf;
	/** Count number of data transmitted. */
	uint32_t txcnt;
	/** Count number of data received. */
	uint32_t rxcnt;
	/** Data character size. */
	uint8_t char_size;
};

/** Check interrupt flag of RXC and update transaction runtime information. */
static inline void _spi_rx_check(void *const hw, struct _spi_trans_ctrl *ctrl)
{
	uint32_t data;

	while (!_spi_is_ready_to_read(hw)) {
	}

	data = hri_spi_read_RECEIVE_DATA_reg(hw);

	if (ctrl->rxbuf) {
		*ctrl->rxbuf++ = (uint8_t)data;
	}

	ctrl->rxcnt++;
}

/** Check interrupt flag of DRE and update transaction runtime information. */
static inline void _spi_tx_check(void *const hw, struct _spi_trans_ctrl *ctrl)
{
	uint32_t data;

	//while (!_spi_is_ready_to_write(hw)) {
	//}

	if (ctrl->txbuf) {
		data = *ctrl->txbuf++;
	} else {
		data = SPI_DUMMY_CHAR;
	}

	ctrl->txcnt++;
	hri_spi_write_TRANSMIT_DATA_reg(hw, data);
}

int32_t _spi_m_sync_trans(struct _spi_m_sync_dev *dev, const struct spi_msg *msg)
{
	void *                 hw = dev->prvt;
	uint32_t               rc = 0;
	uint8_t                status;
	struct _spi_trans_ctrl ctrl = {msg->txbuf, msg->rxbuf, 0, 0, dev->char_size};

	ASSERT(dev && hw);

	status = hri_spi_get_MODULE_ENABLE_ENABLE_bit(hw);
	/* SPI must be enabled to start synchronous transfer */
	if (!status) {
		return ERR_NOT_INITIALIZED;
	}

	/* Check for Idle */
	do {
		status = _spi_is_active(hw);
	} while (status);

	while (rc < msg->size) {
		_spi_tx_check(hw, &ctrl);
		//_spi_rx_check(hw, &ctrl); We don't have MISO line
		rc++;
	}

	//Commenting this does nothing ?!?
	/* Wait until SPI bus idle */
	//do {
	//	status = _spi_is_write_complete(hw);
	//} while (!status);

	return rc;
}

int32_t _spi_s_sync_write_one(struct _spi_s_sync_dev *dev, uint16_t data)
{
	ASSERT(dev && dev->prvt);

	hri_spi_write_TRANSMIT_DATA_reg(dev->prvt, data);

	return ERR_NONE;
}

uint16_t _spi_s_sync_read_one(struct _spi_s_sync_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return hri_spi_read_RECEIVE_DATA_reg(dev->prvt);
}

bool _spi_s_sync_is_tx_ready(struct _spi_s_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	return hri_spi_get_TRANSMIT_STATUS_reg(hw, SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY);
}

bool _spi_s_sync_is_rx_ready(struct _spi_s_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	return hri_spi_get_RECEIVE_STATUS_reg(hw, SPI_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY);
}

bool _spi_s_sync_is_ss_deactivated(struct _spi_s_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	if (hri_spi_get_TRANSMIT_STATUS_reg(hw, SPI_TRANSMIT_STATUS_TX_FIFO_EMPTY)) {
		return true;
	}
	return false;
}

bool _spi_s_sync_is_error(struct _spi_s_sync_dev *dev)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	hri_spi_get_RECEIVE_STATUS_reg(hw, SPI_RECEIVE_STATUS_FIFO_OVERRUN);

	return false;
}

int32_t _spi_m_async_enable_tx(struct _spi_async_dev *dev, bool state)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	if (state) {
		hri_spi_set_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw);
	} else {
		hri_spi_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw);
	}

	return ERR_NONE;
}

int32_t _spi_s_async_enable_tx(struct _spi_s_async_dev *dev, bool state)
{
	return _spi_m_async_enable_tx(dev, state);
}

int32_t _spi_m_async_enable_rx(struct _spi_async_dev *dev, bool state)
{
	void *hw = dev->prvt;

	ASSERT(dev && hw);

	if (state) {
		hri_spi_set_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw);
	} else {
		hri_spi_clear_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw);
	}

	return ERR_NONE;
}

int32_t _spi_s_async_enable_rx(struct _spi_s_async_dev *dev, bool state)
{
	return _spi_m_async_enable_rx(dev, state);
}

int32_t _spi_m_async_enable_ss_detect(struct _spi_async_dev *dev, bool state)
{
	ASSERT(dev && dev->prvt);

	(void)dev;
	(void)state;

	return ERR_UNSUPPORTED_OP;
}

int32_t _spi_s_async_enable_ss_detect(struct _spi_s_async_dev *dev, bool state)
{
	return _spi_m_async_enable_ss_detect(dev, state);
}

int32_t _spi_m_async_write_one(struct _spi_async_dev *dev, uint16_t data)
{
	ASSERT(dev && dev->prvt);

	hri_spi_write_TRANSMIT_DATA_reg(dev->prvt, data);

	return ERR_NONE;
}

int32_t _spi_s_async_write_one(struct _spi_s_async_dev *dev, uint16_t data)
{
	ASSERT(dev && dev->prvt);

	hri_spi_write_TRANSMIT_DATA_reg(dev->prvt, data);

	return ERR_NONE;
}

uint16_t _spi_m_async_read_one(struct _spi_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return hri_spi_read_RECEIVE_DATA_reg(dev->prvt);
}

uint16_t _spi_s_async_read_one(struct _spi_s_async_dev *dev)
{
	ASSERT(dev && dev->prvt);

	return hri_spi_read_RECEIVE_DATA_reg(dev->prvt);
}

int32_t _spi_m_async_register_callback(struct _spi_async_dev *dev, const enum _spi_async_dev_cb_type cb_type,
                                       const FUNC_PTR func)
{
	typedef void (*func_t)(void);

	ASSERT(dev && (cb_type < SPI_DEV_CB_N));

	func_t *p_ls  = (func_t *)&dev->callbacks;
	p_ls[cb_type] = (func_t)func;

	return ERR_NONE;
}

int32_t _spi_s_async_register_callback(struct _spi_s_async_dev *dev, const enum _spi_s_async_dev_cb_type cb_type,
                                       const FUNC_PTR func)
{
	return _spi_m_async_register_callback(dev, cb_type, func);
}

void _spi_m_async_set_irq_state(struct _spi_async_dev *const device, const enum _spi_async_dev_cb_type type,
                                const bool state)
{
	(void)device, (void)type, (void)state;
}

#ifdef __cplusplus
}
#endif
