/**
 * \file
 *
 * \brief SAM Serial Communication Interface (I2C)
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
#include <hpl_i2c_m_sync.h>
#include <hpl_i2c_m_async.h>
#include <hpl_i2c_s_sync.h>
#include <hpl_i2c_s_async.h>
#include <hpl_i2c_config.h>
#include <utils_assert.h>

#ifdef __cplusplus
extern "C" {
#endif

/* I2C Master */

#ifndef CONF_I2CM_0_ENABLE
#define CONF_I2CM_0_ENABLE 0
#endif
#ifndef CONF_I2CM_1_ENABLE
#define CONF_I2CM_1_ENABLE 0
#endif

/** Build configuration from header macros. */
#define I2CM_CONFIGURATION(n)                                                                                          \
	{                                                                                                                  \
		(n), CONF_I2CM_##n##_PRESCALER, CONF_I2CM_##n##_CLOCK_DIVIDER, CONF_I2C##n##_FREQUENCY                         \
	}

/**
 * \brief I2CM configuration type
 */
struct i2cm_configuration {
	uint8_t number;
	/** I2C source clock frequency select */
	uint8_t prescaler;
	/** clock divider value to use */
	uint16_t clock_divider;
	/* peripheral clock frequency */
	uint32_t clk;
};

static const struct i2cm_configuration _i2cms[] = {
#if CONF_I2CM_0_ENABLE == 1
    I2CM_CONFIGURATION(0),
#endif
#if CONF_I2CM_1_ENABLE == 1
    I2CM_CONFIGURATION(1),
#endif
#if CONF_I2CM_0_ENABLE == 0 && CONF_I2CM_1_ENABLE == 0
    {0}
#endif
};

#define SEVEN_ADDR_MASK 0x7f

/**
 * \internal Retrieve ordinal number of the given I2C hardware instance
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The index of hardware instance
 */
static uint8_t _i2c_get_hardware_index(const void *const hw)
{
	return ((uint32_t)hw - (uint32_t)I2C0) >> 10;
}

/**
 * \internal Retrieve IRQ number of the given I2C hardware instance
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The IRQ index of hardware instance
 */
static uint8_t _i2c_get_irq_num(const void *const hw)
{
	return ((((uint32_t)hw - (uint32_t)I2C0) >> 10) << 1) + I2C0_RX_IRQn;
}

/**
 * \internal Retrieve ordinal number of the given i2c hardware instance
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The ordinal number of the given i2c hardware instance
 */
static uint8_t _get_m_i2c_index(const void *const hw)
{
	ASSERT(hw);

	uint8_t offset = _i2c_get_hardware_index(hw);
	uint8_t i;

	for (i = 0; i < ARRAY_SIZE(_i2cms); i++) {
		if (_i2cms[i].number == offset) {
			return i;
		}
	}

	return 0;
}

/**
 * \brief Init irq param with the given i2c hardware instance
 */
static void _i2c_init_irq_param(const void *const hw, void *dev)
{
}

/**
 * \internal Wait for i2c idle state
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The status of I2C bus
 * \retval ERR_NONE I2C module is in idle state
 * \retval ERR_TIMEOUT I2C bus timeout
 */
static int8_t _i2c_wait_for_idle(const void *const hw)
{
	int timeout = 65535;

	while (hri_i2c_get_STATUS_I2C_ACTIVE_bit(hw)) {
		timeout--;
		if (timeout <= 0) {
			return ERR_TIMEOUT;
		}
	}

	return ERR_NONE;
}

/**
 * \internal Send the i2c start condition
 *
 * \param[in] hw The pointer to hardware instance
 */
static inline void _i2c_send_start(void *const hw)
{
	hri_i2c_set_ONBUS_ONBUS_ENABLE_bit(hw);
}

/**
 * \internal Send the i2c stop condition
 *
 * \param[in] hw The pointer to hardware instance
 */
static inline void _i2c_send_stop(void *const hw)
{
	hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(hw);
}

int32_t _i2c_m_sync_enable(struct _i2c_m_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_set_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_m_async_enable(struct _i2c_m_async_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_set_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_m_sync_disable(struct _i2c_m_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_m_async_disable(struct _i2c_m_async_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

/**
 * \internal Send the slave address to bus, which will start the transfer
 *
 * \param[in] msg The pointer to i2c device service message
 * \param[in] hw The pointer to hardware instance
 *
 * \return The status of I2C bus
 * \retval ERR_NONE Bus response status OK
 */
static int32_t _i2c_send_address(struct _i2c_m_msg *msg, void *const hw)
{
	ASSERT(msg && hw);

	hri_i2c_write_TRANSMIT_DATA_reg(hw,
	                                I2C_TRANSMIT_DATA_ADDRESS_FLAG_1 | ((msg->addr & SEVEN_ADDR_MASK) << 1)
	                                    | (msg->flags & I2C_M_RD ? I2C_M_RD : 0x0)); 

	return ERR_NONE;
}

/**
 * \internal i2c master synchronous initial implement
 *
 * \param[in] i2c_dev The pointer to i2c master service
 * \param[in] hw The pointer to hardware instance
 *
 * \return The status of initialization
 * \retval ERR_NONE I2C module initialed successfull
 * \retval ERR_DENIED Failed with I2C module is already enable
 */
static int32_t _i2c_m_sync_init_impl(struct _i2c_m_service *const service, void *const hw)
{
	uint8_t i = _get_m_i2c_index(hw);

	ASSERT(service && hw);

	if (hri_i2c_get_MODULE_ENABLE_ENABLE_bit(hw)) {
		return ERR_DENIED;
	}

	/* Set clock. */
	hri_i2c_write_CLOCK_SOURCE_SELECT_CLOCK_bf(hw, _i2cms[i].prescaler);
	hri_i2c_write_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(hw, _i2cms[i].clock_divider);
	/* Enable master mode. */
	hri_i2c_set_MASTER_MODE_MASTER_ENABLE_bit(hw);

	return ERR_NONE;
}

/**
 * \internal i2c master deinitial implement
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The status of deinitialization
 * \retval ERR_NONE I2C module is deinitialed successfull
 */
static int32_t _i2c_m_deinit_impl(void const *hw)
{
	uint8_t i = _get_m_i2c_index(hw);

	ASSERT(hw);

	/* Disable the I2C module */
	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(hw);
	/* Reset the I2C module */
	if (0 == i) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_GLOBAL_RESET_0_I2C0_CORE_RSTN_bit(LPMCU_MISC_REGS0);
		hri_lpmcumiscregsmiscregs_set_LPMCU_GLOBAL_RESET_0_I2C0_CORE_RSTN_bit(LPMCU_MISC_REGS0);
	} else if (1 == i) {
		hri_lpmcumiscregsmiscregs_clear_LPMCU_GLOBAL_RESET_1_I2C1_CORE_RSTN_bit(LPMCU_MISC_REGS0);
		hri_lpmcumiscregsmiscregs_set_LPMCU_GLOBAL_RESET_1_I2C1_CORE_RSTN_bit(LPMCU_MISC_REGS0);
	}

	hw = NULL;

	return ERR_NONE;
}

/**
 * \internal i2c master interrupt handler
 *
 * \param[in] i2c_dev The pointer to i2c device
 */
static void _i2c_m_irq_handler(struct _i2c_m_async_device *i2c_dev)
{
	void *             hw  = i2c_dev->hw;
	struct _i2c_m_msg *msg = &i2c_dev->service.msg;
	int32_t            ret = I2C_OK;

	ASSERT(i2c_dev && i2c_dev->hw);

	if (msg->flags & I2C_M_RD) {
		if (hri_i2c_get_RECEIVE_STATUS_FIFO_OVERRUN_bit(hw)) {
			msg->flags |= I2C_M_FAIL;
			msg->flags &= ~I2C_M_BUSY;
			ret = I2C_ERR_BUS;
			if (i2c_dev->cb.error) {
				i2c_dev->cb.error(i2c_dev, ret);
			}
		} else if ((msg->len) && (!hri_i2c_get_RECEIVE_STATUS_NAK_bit(hw))) {
			while (hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw)) {
				*msg->buffer++ = hri_i2c_read_RECEIVE_DATA_reg(hw);
				if (!(--msg->len)) {
					break;
				}
			}

			if (msg->len == 0) {
				if (msg->flags & I2C_M_STOP) {
					hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(hw);
				}
				msg->flags &= ~I2C_M_BUSY;
				hri_i2c_clear_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw);
				/* app callback */
				if (i2c_dev->cb.rx_complete) {
					i2c_dev->cb.rx_complete(i2c_dev);
				}
			}
		} else {
			ret = I2C_NACK;
			if (i2c_dev->cb.error) {
				i2c_dev->cb.error(i2c_dev, ret);
			}
		}
		NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	} else {
		if (hri_i2c_get_RECEIVE_STATUS_NAK_bit(hw)) {
			/* Slave rejects to receive more data */
			if (msg->len > 0) {
				msg->flags |= I2C_M_FAIL;
			}

			if (msg->flags & I2C_M_STOP) {
				hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(hw);
			}

			NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);
			msg->flags &= ~I2C_M_BUSY;

			ret = I2C_NACK;
			if (i2c_dev->cb.error) {
				i2c_dev->cb.error(i2c_dev, ret);
			}
			return;
		}

		if (msg->len == 0) {
			if (msg->flags & I2C_M_STOP) {
				hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(hw);
			}

			hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(hw);
			msg->flags &= ~I2C_M_BUSY;
			if (i2c_dev->cb.tx_complete) {
				i2c_dev->cb.tx_complete(i2c_dev);
			}
		} else {
			while (hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw)) {
				hri_i2c_write_TRANSMIT_DATA_reg(hw, *msg->buffer);
				msg->buffer++;
				if (!(--msg->len)) {
					hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw);
					hri_i2c_set_TX_INTERRUPT_MASK_TX_FIFO_EMPTY_MASK_bit(hw);
					break;
				}
			}
		}
		NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);
	}
}

void _i2c_m_async_set_irq_state(struct _i2c_m_async_device *const i2c_dev, const enum _i2c_m_async_callback_type type,
                                const bool state)
{
	void *hw = i2c_dev->hw;

	if (I2C_M_ASYNC_DEVICE_TX_COMPLETE == type) {
		hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw, state);
	} else if (I2C_M_ASYNC_DEVICE_RX_COMPLETE == type) {
		hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw, state);
	} else if (I2C_M_ASYNC_DEVICE_ERROR == type) {
		hri_i2c_write_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(hw, state);
	}
}

int32_t _i2c_m_async_set_baudrate(struct _i2c_m_async_device *const i2c_dev, uint32_t clkrate, uint32_t baudrate)
{
	uint32_t tmp;

	ASSERT(i2c_dev && i2c_dev->hw);

	clkrate = _i2cms[_get_m_i2c_index(i2c_dev->hw)].clk / 1000;

	tmp = (uint32_t)(clkrate / (2.0 * baudrate) - 1);
	hri_i2c_write_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(i2c_dev->hw, tmp);

	return ERR_NONE;
}

int32_t _i2c_m_sync_send_stop(struct _i2c_m_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_clear_ONBUS_ONBUS_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_m_async_init(struct _i2c_m_async_device *const i2c_dev, void *const hw)
{
	int32_t init_status;

	ASSERT(i2c_dev && hw);

	init_status = _i2c_m_sync_init_impl(&i2c_dev->service, hw);
	if (init_status) {
		return init_status;
	}
	i2c_dev->hw = hw;

	_i2c_init_irq_param(hw, (void *)i2c_dev);

	/* Disable RX and TX interrupt */
	NVIC_DisableIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);
	/* Clear RX and TX interrupt */
	NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);

	return ERR_NONE;
}

int32_t _i2c_m_async_deinit(struct _i2c_m_async_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return _i2c_m_deinit_impl(i2c_dev->hw);
}

int32_t _i2c_m_async_transfer(struct _i2c_m_async_device *i2c_dev, struct _i2c_m_msg *msg)
{
	int   ret;
	void *hw = i2c_dev->hw;

	ASSERT(i2c_dev && i2c_dev->hw && msg);

	if (msg->len == 0) {
		return ERR_NONE;
	}

	if (i2c_dev->service.msg.flags & I2C_M_BUSY) {
		return ERR_BUSY;
	}

	msg->flags |= I2C_M_BUSY;
	i2c_dev->service.msg = *msg;

	_i2c_wait_for_idle(hw);
	/* Flush the FIFO */
	hri_i2c_write_FLUSH_reg(hw, I2C_FLUSH_I2C_FLUSH);
	/* Enable I2C on bus (start condition). */
	_i2c_send_start(hw);
	ret = _i2c_send_address(msg, hw);

	if (ret) {
		i2c_dev->service.msg.flags &= ~I2C_M_BUSY;

		return ret;
	}
	/* Enable RX and TX interrupt */
	NVIC_EnableIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_EnableIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);

	return ERR_NONE;
}

int32_t _i2c_m_async_register_callback(struct _i2c_m_async_device *const i2c_dev, enum _i2c_m_async_callback_type type,
                                       FUNC_PTR func)
{
	switch (type) {
	case I2C_M_ASYNC_DEVICE_ERROR:
		i2c_dev->cb.error = (_i2c_error_cb_t)func;
		break;
	case I2C_M_ASYNC_DEVICE_TX_COMPLETE:
		i2c_dev->cb.tx_complete = (_i2c_complete_cb_t)func;
		break;
	case I2C_M_ASYNC_DEVICE_RX_COMPLETE:
		i2c_dev->cb.rx_complete = (_i2c_complete_cb_t)func;
		break;
	default:
		/* error */
		break;
	}

	return ERR_NONE;
}

int32_t _i2c_m_async_get_bytes_left(struct _i2c_m_async_device *const i2c_dev)
{
	if (i2c_dev->service.msg.flags & I2C_M_BUSY) {
		return i2c_dev->service.msg.len;
	}

	return 0;
}

int32_t _i2c_m_sync_transfer(struct _i2c_m_sync_device *const i2c_dev, struct _i2c_m_msg *msg)
{
	uint16_t counter = 0;
	int      ret;
	void *   hw = i2c_dev->hw;

	ASSERT(i2c_dev && i2c_dev->hw && msg);

	if (i2c_dev->service.msg.flags & I2C_M_BUSY) {
		return I2C_ERR_BUSY;
	}

	msg->flags |= I2C_M_BUSY;
	i2c_dev->service.msg = *msg;

	_i2c_wait_for_idle(hw);
	/* Flush the FIFO */
	hri_i2c_write_FLUSH_reg(hw, I2C_FLUSH_I2C_FLUSH);
	/* Enable I2C on bus (start condition). */
	_i2c_send_start(hw);
	/* Address I2C slave in case of Master mode enabled. */
	ret = _i2c_send_address(msg, hw);
	
	if (ret) {
		i2c_dev->service.msg.flags &= ~I2C_M_BUSY;
		return ret;
	}

	if (msg->flags & I2C_M_RD) {
		do {
			while (!hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw)) {
			}
			msg->buffer[counter++] = hri_i2c_read_RECEIVE_DATA_RX_BYTE_bf(hw);
		} while (counter < msg->len);
	} else {
		do {
			while (!hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw)) {
			}
			hri_i2c_write_TRANSMIT_DATA_reg(hw, msg->buffer[counter++]);
		} while (counter < msg->len);

		while (!hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(hw)) {
		}
	}

	if (msg->flags & I2C_M_STOP) {
		_i2c_send_stop(hw);
	}

	i2c_dev->service.msg.flags &= ~I2C_M_BUSY;

	return ret;
}

int32_t _i2c_m_sync_transfer_write_patched(struct _i2c_m_sync_device *const i2c_dev, struct _i2c_m_msg *msg)
{
	uint16_t counter = 0;
	int      ret;
	void *   hw = i2c_dev->hw;

	ASSERT(i2c_dev && i2c_dev->hw && msg);

	if (i2c_dev->service.msg.flags & I2C_M_BUSY) {
		return I2C_ERR_BUSY;
	}

	msg->flags |= I2C_M_BUSY;
	i2c_dev->service.msg = *msg;

	_i2c_wait_for_idle(hw);
	/* Flush the FIFO */
	hri_i2c_write_FLUSH_reg(hw, I2C_FLUSH_I2C_FLUSH);
	/* Enable I2C on bus (start condition). */
	//_i2c_send_start(hw);
	/* Address I2C slave in case of Master mode enabled. */
	//ret = _i2c_send_address(msg, hw);
	ret = 0;
	
	if (ret) {
		i2c_dev->service.msg.flags &= ~I2C_M_BUSY;
		return ret;
	}

	if (msg->flags & I2C_M_RD) {
		do {
			while (!hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw)) {
			}
			msg->buffer[counter++] = hri_i2c_read_RECEIVE_DATA_RX_BYTE_bf(hw);
		} while (counter < msg->len);
		} else {
		do {
			while (!hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw)) {
			}
			hri_i2c_write_TRANSMIT_DATA_reg(hw, msg->buffer[counter++]);
		} while (counter < msg->len);

		while (!hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(hw)) {
		}
	}

	if (msg->flags & I2C_M_STOP) {
		_i2c_send_stop(hw);
	}

	i2c_dev->service.msg.flags &= ~I2C_M_BUSY;

	return ret;
}

int32_t _i2c_m_sync_set_baudrate(struct _i2c_m_sync_device *const i2c_dev, uint32_t clkrate, uint32_t baudrate)
{
	uint32_t tmp;

	ASSERT(i2c_dev && i2c_dev->hw);

	clkrate = _i2cms[_get_m_i2c_index(i2c_dev->hw)].clk / 1000;

	tmp = (uint32_t)(clkrate / (2.0 * baudrate) - 1);
	hri_i2c_write_CLK_DIVIDER_I2C_DIVIDE_RATIO_bf(i2c_dev->hw, tmp);

	return ERR_NONE;
}

int32_t _i2c_m_sync_init(struct _i2c_m_sync_device *const i2c_dev, void *const hw)
{
	int32_t init_status;

	ASSERT(i2c_dev && hw);

	init_status = _i2c_m_sync_init_impl(&i2c_dev->service, hw);
	if (init_status) {
		return init_status;
	}
	i2c_dev->hw = hw;

	return ERR_NONE;
}

int32_t _i2c_m_sync_deinit(struct _i2c_m_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return _i2c_m_deinit_impl(i2c_dev->hw);
}

/* I2C Slave */

#ifndef CONF_I2CS_0_ENABLE
#define CONF_I2CS_0_ENABLE 0
#endif
#ifndef CONF_I2CS_1_ENABLE
#define CONF_I2CS_1_ENABLE 0
#endif

/** Build configuration from header macros. */
#define I2CS_CONFIGURATION(n)                                                                                          \
	{                                                                                                                  \
		(n), CONF_I2CS_##n##_PRESCALER, CONF_I2CS_##n##_ADDRESS,                                                       \
	}

/**
 * \brief I2CS configuration type
 */
struct i2cs_configuration {
	uint8_t number;
	/** I2C source clock frequency select */
	uint8_t prescaler;
	/** i2c slave address */
	uint16_t address;
};

static const struct i2cs_configuration _i2css[] = {
#if CONF_I2CS_0_ENABLE == 1
    I2CS_CONFIGURATION(0),
#endif
#if CONF_I2CS_1_ENABLE == 1
    I2CS_CONFIGURATION(1),
#endif
#if CONF_I2CS_0_ENABLE == 0 && CONF_I2CS_1_ENABLE == 0
    {0}
#endif
};

/**
 * \internal Retrieve ordinal number of the given i2c hardware instance
 *
 * \param[in] hw The pointer to hardware instance
 *
 * \return The ordinal number of the given i2c hardware instance
 */
static int8_t _get_s_i2c_index(const void *const hw)
{
	ASSERT(hw);

	uint8_t offset = _i2c_get_hardware_index(hw);
	uint8_t i;

	for (i = 0; i < ARRAY_SIZE(_i2css); i++) {
		if (_i2css[i].number == offset) {
			return i;
		}
	}

	return 0;
}

/**
 * \internal Initalize i2c slave hardware
 *
 * \param[in] p The pointer to hardware instance
 *
 *\ return status of initialization
 * \retval ERR_NONE Initalize I2C slave successfull
 * \retval ERR_INVALID_ARG Get invalied I2C instance index
 * \retval ERR_DENIED Failed with I2C module is already enable
 */
static int32_t _i2c_s_init(void *const hw)
{
	int8_t i = _get_s_i2c_index(hw);

	if (i == -1) {
		return ERR_INVALID_ARG;
	}

	if (hri_i2c_get_MODULE_ENABLE_ENABLE_bit(hw)) {
		return ERR_DENIED;
	}

	/* Set clock. */
	hri_i2c_write_CLOCK_SOURCE_SELECT_CLOCK_bf(hw, _i2css[i].prescaler);
	/* I2C slave address. */
	hri_i2c_write_SLAVE_ADDRESS_ADDRESS_bf(hw, _i2css[i].address);
	/* Enable slave mode. */
	hri_i2c_clear_MASTER_MODE_MASTER_ENABLE_bit(hw);

	return ERR_NONE;
}

/**
 * \internal De-initialize i2c slave
 *
 * \param[in] hw The pointer to hardware instance
 * \param[in] address Address to set
 *
 *\ return status of address setting
 * \retval ERR_NONE Setting I2C slave address successfull
 */
static int32_t _i2c_s_set_address(void *const hw, const uint16_t address)
{
	bool enabled;

	enabled = hri_i2c_get_MODULE_ENABLE_ENABLE_bit(hw);

	CRITICAL_SECTION_ENTER()
	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(hw);
	hri_i2c_write_SLAVE_ADDRESS_reg(hw, address);
	CRITICAL_SECTION_LEAVE()

	if (enabled) {
		hri_i2c_set_MODULE_ENABLE_ENABLE_bit(hw);
	}

	return ERR_NONE;
}

/**
 * \internal I2C slave interrupt handler
 *
 * \param[in] p The pointer to i2c slave device
 *
 */
static void _i2c_s_irq_handler(struct _i2c_s_async_device *i2c_dev)
{
	void *hw = i2c_dev->hw;

	if (hri_i2c_get_RECEIVE_STATUS_FIFO_OVERRUN_bit(hw)) {
		ASSERT(i2c_dev->cb.error);
		i2c_dev->cb.error(i2c_dev);
		/* This status will be clear by hardware when FIFO buffer is empty. */
	} else if (hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(hw)) {
		ASSERT(i2c_dev->cb.rx_done);
		i2c_dev->cb.rx_done(i2c_dev, hri_i2c_read_RECEIVE_DATA_reg(hw));
		/* This status will be clear by hardware when FIFO buffer is full. */
	} else if (hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_NOT_FULL_bit(hw)) {
		ASSERT(i2c_dev->cb.tx);
		i2c_dev->cb.tx(i2c_dev);
	}
}

int32_t _i2c_s_sync_enable(struct _i2c_s_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_set_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_s_async_enable(struct _i2c_s_async_device *const i2c_dev)
{
	void *hw = i2c_dev->hw;

	ASSERT(i2c_dev && i2c_dev->hw);

	_i2c_wait_for_idle(hw);
	/* Flush the FIFO */
	hri_i2c_write_FLUSH_reg(hw, I2C_FLUSH_I2C_FLUSH);
	hri_i2c_set_MODULE_ENABLE_ENABLE_bit(hw);
	/* Enable RX and TX interrupt */
	NVIC_EnableIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_EnableIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);

	return ERR_NONE;
}

int32_t _i2c_s_sync_disable(struct _i2c_s_sync_device *const i2c_dev)
{
	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_s_async_disable(struct _i2c_s_async_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_clear_MODULE_ENABLE_ENABLE_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_s_sync_init(struct _i2c_s_sync_device *const i2c_dev, void *const hw)
{
	ASSERT(i2c_dev && hw);

	i2c_dev->hw = hw;

	return _i2c_s_init(i2c_dev->hw);
}

int32_t _i2c_s_async_init(struct _i2c_s_async_device *const i2c_dev, void *const hw)
{
	int32_t init_status;

	ASSERT(i2c_dev && hw);

	init_status = _i2c_s_init(hw);
	if (init_status) {
		return init_status;
	}

	i2c_dev->hw = hw;
	_i2c_init_irq_param(hw, (void *)i2c_dev);
	/* Disable RX and TX interrupt */
	NVIC_DisableIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_DisableIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);
	/* Clear RX and TX interrupt */
	NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw));
	NVIC_ClearPendingIRQ((IRQn_Type)_i2c_get_irq_num(hw) + 1);
	return ERR_NONE;
}

uint8_t _i2c_s_sync_read_byte(const struct _i2c_s_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return hri_i2c_read_RECEIVE_DATA_reg(i2c_dev->hw);
}

void _i2c_s_sync_write_byte(struct _i2c_s_sync_device *const i2c_dev, const uint8_t data)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_write_TRANSMIT_DATA_reg(i2c_dev->hw, I2C_TRANSMIT_DATA_TX_DATA(data));
}

bool _i2c_s_sync_is_byte_received(const struct _i2c_s_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return hri_i2c_get_RECEIVE_STATUS_RX_FIFO_NOT_EMPTY_bit(i2c_dev->hw);
}

bool _i2c_s_sync_is_byte_sent(const struct _i2c_s_sync_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return hri_i2c_get_TRANSMIT_STATUS_TX_FIFO_EMPTY_bit(i2c_dev->hw);
}

int32_t _i2c_s_sync_is_10bit_addressing_on(const struct _i2c_s_sync_device *const i2c_dev)
{
	(void)i2c_dev;
	return ERR_UNSUPPORTED_OP;
}

int32_t _i2c_s_async_is_10bit_addressing_on(const struct _i2c_s_async_device *const i2c_dev)
{
	(void)i2c_dev;
	return ERR_UNSUPPORTED_OP;
}

int32_t _i2c_s_sync_set_address(struct _i2c_s_sync_device *const i2c_dev, const uint16_t address)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	if (address > 0x7F) {
		return ERR_BAD_ADDRESS;
	}

	return _i2c_s_set_address(i2c_dev->hw, address);
}

int32_t _i2c_s_async_set_address(struct _i2c_s_async_device *const i2c_dev, const uint16_t address)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	return _i2c_s_set_address(i2c_dev->hw, address);
}

int32_t _i2c_s_async_abort_transmission(const struct _i2c_s_async_device *const i2c_dev)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_clear_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(i2c_dev->hw);

	return ERR_NONE;
}

int32_t _i2c_s_async_set_irq_state(struct _i2c_s_async_device *const     i2c_dev,
                                   const enum _i2c_s_async_callback_type type, const bool state)
{
	void *hw = i2c_dev->hw;

	ASSERT(i2c_dev && i2c_dev->hw);

	if (I2C_S_DEVICE_TX == type) {
		hri_i2c_write_TX_INTERRUPT_MASK_TX_FIFO_NOT_FULL_MASK_bit(hw, state);
	} else if (I2C_S_DEVICE_RX_COMPLETE == type) {
		hri_i2c_write_RX_INTERRUPT_MASK_RX_FIFO_NOT_EMPTY_MASK_bit(hw, state);
	} else if (I2C_S_DEVICE_ERROR == type) {
		hri_i2c_write_RX_INTERRUPT_MASK_FIFO_OVERRUN_MASK_bit(hw, state);
	}

	return ERR_NONE;
}

void _i2c_s_async_write_byte(struct _i2c_s_async_device *const i2c_dev, const uint8_t data)
{
	ASSERT(i2c_dev && i2c_dev->hw);

	hri_i2c_write_TRANSMIT_DATA_reg(i2c_dev->hw, data);
}

#ifdef __cplusplus
}
#endif
