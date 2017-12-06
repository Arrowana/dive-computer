/**
 * \file
 *
 * \brief I/O SPI related functionality implementation.
 *
 * Copyright (C) 2014-2016 Atmel Corporation. All rights reserved.
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
 *
 */

#include "hal_atomic.h"
#include "hal_spi_m_async.h"
#include <utils_assert.h>
#include <utils.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief Driver version
 */
#define SPI_DRIVER_VERSION 0x00000001u

#define SPI_DEACTIVATE_NEXT 0x8000

static int32_t _spi_m_async_io_write(struct io_descriptor *const io, const uint8_t *const buf, const uint16_t length);
static int32_t _spi_m_async_io_read(struct io_descriptor *const io, uint8_t *const buf, const uint16_t length);

/**
 *  \brief Callback for TX
 *  \param[in, out] dev Pointer to the SPI device instance.
 */
static void _spi_dev_tx(struct _spi_m_async_dev *dev)
{
	struct spi_m_async_descriptor *spi = CONTAINER_OF(dev, struct spi_m_async_descriptor, dev);

	if (!(dev->char_size > 1)) {
		_spi_m_async_write_one(dev, spi->xfer.txbuf[spi->xfercnt++]);
	} else {
		_spi_m_async_write_one(dev, ((uint16_t *)spi->xfer.txbuf)[spi->xfercnt++]);
	}

	if (spi->xfercnt >= spi->xfer.size) {
		_spi_m_async_enable_tx(dev, false);
		spi->stat = 0;

		if (spi->callbacks.cb_xfer) {
			spi->callbacks.cb_xfer(spi);
		}
	}
}

/**
 *  \brief Callback for RX
 *  \param[in, out] dev Pointer to the SPI device instance.
 */
static void _spi_dev_rx(struct _spi_m_async_dev *dev)
{
	struct spi_m_async_descriptor *spi = CONTAINER_OF(dev, struct spi_m_async_descriptor, dev);

	if (!(dev->char_size > 1)) {
		/* 8-bit or less */
		spi->xfer.rxbuf[spi->xfercnt++] = (uint8_t)_spi_m_async_read_one(dev);
	} else {
		/* 9-bit or more */
		((uint16_t *)spi->xfer.rxbuf)[spi->xfercnt++] = (uint16_t)_spi_m_async_read_one(dev);
	}

	if (spi->xfercnt < spi->xfer.size) {
		if (spi->xfer.txbuf) {
			if (!(dev->char_size > 1)) {
				_spi_m_async_write_one(dev, spi->xfer.txbuf[spi->xfercnt]);
			} else {
				_spi_m_async_write_one(dev, ((uint16_t *)spi->xfer.txbuf)[spi->xfercnt]);
			}
		} else {
			_spi_m_async_write_one(dev, dev->dummy_byte);
		}
	} else {
		_spi_m_async_enable_rx(dev, false);
		spi->stat = 0;

		if (spi->callbacks.cb_xfer) {
			spi->callbacks.cb_xfer(spi);
		}
	}
}

/**
 *  \brief Callback for error
 *  \param[in, out] dev Pointer to the SPI device instance.
 *  \param[in] status Error status.
 */
static void _spi_dev_error(struct _spi_m_async_dev *dev, int32_t status)
{
	struct spi_m_async_descriptor *spi = CONTAINER_OF(dev, struct spi_m_async_descriptor, dev);

	if (status == 0) {
		return;
	}

	_spi_m_async_enable_tx(dev, false);
	_spi_m_async_enable_rx(dev, false);
	spi->stat = 0;

	/* Invoke complete callback */
	if (spi->callbacks.cb_error) {
		spi->callbacks.cb_error(spi, status);
	}
}

int32_t spi_m_async_init(struct spi_m_async_descriptor *spi, void *const hw)
{
	int32_t rc = 0;

	ASSERT(spi && hw);
	spi->dev.prvt = (void *)hw;

	rc = _spi_m_async_init(&spi->dev, hw);
	if (rc >= 0) {
		_spi_m_async_register_callback(&spi->dev, SPI_DEV_CB_TX, (FUNC_PTR)_spi_dev_tx);
		_spi_m_async_register_callback(&spi->dev, SPI_DEV_CB_RX, (FUNC_PTR)_spi_dev_rx);
		_spi_m_async_register_callback(&spi->dev, SPI_DEV_CB_COMPLETE, (FUNC_PTR)_spi_dev_error);
	} else {
		return rc;
	}

	spi->io.read  = _spi_m_async_io_read;
	spi->io.write = _spi_m_async_io_write;
	return ERR_NONE;
}

void spi_m_async_deinit(struct spi_m_async_descriptor *spi)
{
	ASSERT(spi);

	_spi_m_async_deinit(&spi->dev);
	spi->callbacks.cb_error = NULL;
	spi->callbacks.cb_xfer  = NULL;
}

void spi_m_async_enable(struct spi_m_async_descriptor *spi)
{
	ASSERT(spi);

	_spi_m_async_enable(&spi->dev);
}

void spi_m_async_disable(struct spi_m_async_descriptor *spi)
{
	ASSERT(spi);

	_spi_m_async_enable_tx(&spi->dev, false);
	_spi_m_async_enable_rx(&spi->dev, false);

	_spi_m_async_disable(&spi->dev);
}

int32_t spi_m_async_set_baudrate(struct spi_m_async_descriptor *spi, const uint32_t baud_val)
{
	ASSERT(spi);

	if (spi->stat & SPI_M_ASYNC_STATUS_BUSY) {
		return ERR_BUSY;
	}

	return _spi_m_async_set_baudrate(&spi->dev, baud_val);
}

int32_t spi_m_async_set_mode(struct spi_m_async_descriptor *spi, const enum spi_transfer_mode mode)
{
	ASSERT(spi);

	if (spi->stat & SPI_M_ASYNC_STATUS_BUSY) {
		return ERR_BUSY;
	}

	return _spi_m_async_set_mode(&spi->dev, mode);
}

int32_t spi_m_async_set_char_size(struct spi_m_async_descriptor *spi, const enum spi_char_size char_size)
{
	ASSERT(spi);

	if (spi->stat & SPI_M_ASYNC_STATUS_BUSY) {
		return ERR_BUSY;
	}

	return _spi_m_async_set_char_size(&spi->dev, char_size);
}

int32_t spi_m_async_set_data_order(struct spi_m_async_descriptor *spi, const enum spi_data_order dord)
{
	ASSERT(spi);

	if (spi->stat & SPI_M_ASYNC_STATUS_BUSY) {
		return ERR_BUSY;
	}

	return _spi_m_async_set_data_order(&spi->dev, dord);
}

/** \brief Do SPI read in background (asynchronously)
 *  For SPI master, register the buffer, do activate CS and send 0xFFs to get
 *  data, then deactivate CS in background.
 *
 *  It never blocks and return quickly, user check status or set callback to
 *  know when data is ready to process.
 *
 *  \param[in, out] spi Pointer to the HAL SPI instance.
 *  \param[out] p_buf Pointer to the buffer to store read data.
 *  \param[in] size Size of the data in number of characters.
 *  \return ERR_NONE on success, or an error code on failure.
 *  \retval ERR_NONE Success, transfer started.
 *  \retval ERR_BUSY Busy.
 */
static int32_t _spi_m_async_io_read(struct io_descriptor *io, uint8_t *const buf, const uint16_t length)
{
	ASSERT(io);
	struct spi_m_async_descriptor *spi = CONTAINER_OF(io, struct spi_m_async_descriptor, io);

	spi->xfer.rxbuf = buf;
	spi->xfer.txbuf = NULL;
	spi->xfer.size  = length;
	spi->xfercnt    = 0;

	spi->stat = SPI_M_ASYNC_STATUS_BUSY;

	_spi_m_async_enable_rx(&spi->dev, true);
	_spi_m_async_write_one(&spi->dev, SPI_DUMMY_CHAR);

	return ERR_NONE;
}

/** \brief Do SPI data write in background (asynchronously)
 *  For SPI master, register buffer, do activate CS, buffer send and
 *  deactivate CS in background.
 *
 *  The data read back is discarded.
 *
 *  It never blocks and return quickly, user check status or set callback to
 *  know when data is sent.
 *
 *  \param[in, out] spi Pointer to the HAL SPI instance.
 *  \param[in] p_buf Pointer to the buffer to store data to write.
 *  \param[in] size Size of the data in number of characters.
 *
 *  \return ERR_NONE on success, or an error code on failure.
 *  \retval ERR_NONE Success, transfer started.
 *  \retval ERR_BUSY Busy.
 */
static int32_t _spi_m_async_io_write(struct io_descriptor *io, const uint8_t *const buf, const uint16_t length)
{
	ASSERT(io);
	struct spi_m_async_descriptor *spi = CONTAINER_OF(io, struct spi_m_async_descriptor, io);

	spi->xfer.rxbuf = NULL;
	spi->xfer.txbuf = (uint8_t *)buf;
	spi->xfer.size  = length;
	spi->xfercnt    = 0;

	spi->stat = SPI_M_ASYNC_STATUS_BUSY;

	_spi_m_async_enable_tx(&spi->dev, true);

	return ERR_NONE;
}

int32_t spi_m_async_transfer(struct spi_m_async_descriptor *spi, uint8_t const *txbuf, uint8_t *const rxbuf,
                             const uint16_t length)
{
	ASSERT(spi);

	/* Fill transfer descriptor */
	spi->xfer.rxbuf = (uint8_t *)rxbuf;
	spi->xfer.txbuf = (uint8_t *)txbuf;
	spi->xfer.size  = length;
	spi->xfercnt    = 0;

	spi->stat = SPI_M_ASYNC_STATUS_BUSY;

	_spi_m_async_enable_rx(&spi->dev, true);
	_spi_m_async_write_one(&spi->dev, txbuf[spi->xfercnt]);

	return ERR_NONE;
}

int32_t spi_m_async_get_status(struct spi_m_async_descriptor *spi, struct spi_m_async_status *p_stat)
{
	/* Get a copy of status to avoid critical issue */
	volatile uint32_t stat = spi->stat;

	if (p_stat) {
		p_stat->flags   = stat;
		p_stat->xfercnt = spi->xfercnt;
	}

	if (stat & SPI_M_ASYNC_STATUS_BUSY) {
		return ERR_BUSY;
	}

	return ERR_NONE;
}

void spi_m_async_register_callback(struct spi_m_async_descriptor *spi, const enum spi_m_async_cb_type type,
                                   FUNC_PTR func)
{
	ASSERT(spi && (type < SPI_M_ASYNC_CB_N));

	if (SPI_M_ASYNC_CB_XFER == type) {
		spi->callbacks.cb_xfer = (spi_m_async_cb_xfer_t)func;
		_spi_m_async_set_irq_state(&spi->dev, SPI_DEV_CB_RX, NULL != func);
	} else {
		spi->callbacks.cb_error = (spi_m_async_cb_error_t)func;
		_spi_m_async_set_irq_state(&spi->dev, SPI_DEV_CB_COMPLETE, NULL != func);
	}
}

int32_t spi_m_async_get_io_descriptor(struct spi_m_async_descriptor *const spi, struct io_descriptor **io)
{
	ASSERT(spi && io);
	*io = &spi->io;
	return 0;
}

uint32_t spi_m_async_get_version(void)
{
	return SPI_DRIVER_VERSION;
}

#ifdef __cplusplus
}
#endif
