/**
 * \file
 *
 * \brief Low power MCU misc register v100 related functionality.
 *
 * Copyright (C) 2015 Atmel Corporation. All rights reserved.
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

#include <hpl_lpmcu_misc_regs_config.h>
#include <hpl_init.h>

/**
 * \brief Initializes cortex M0 core clock
 *
 */
void _lpmcu_misc_regs_init(void)
{
#if CONF_ARM_CLOCK_CONFIG == 1
	switch (CONF_ARM_CLOCK_SOURCE) {
	case CLOCK_RESOURCE_XO_26_MHZ:
		hri_lpmcumiscregsmiscregs_set_LPMCU_CTRL_USE_BT26M_CLK_bit(LPMCU_MISC_REGS0);
		hri_lpmcumiscregsmiscregs_set_LPMCU_CTRL_USE_ARM_LP_CLK_bit(LPMCU_MISC_REGS0);
		break;

	case CLOCK_RESOURCE_RC_26_MHZ:
		hri_lpmcumiscregsmiscregs_clear_LPMCU_CTRL_USE_BT26M_CLK_bit(LPMCU_MISC_REGS0);
		hri_lpmcumiscregsmiscregs_clear_LPMCU_CTRL_USE_ARM_LP_CLK_bit(LPMCU_MISC_REGS0);
		break;

	default:
		break;
	}
#endif

#if CONF_SYSTEM_CONFIG == 1
	hri_lpmcumiscregsmiscregs_write_LPMCU_CTRL_LPMCU_CLK_SEL_bf(LPMCU_MISC_REGS0,
	                                                            LPMCU_MISC_REGS_LPMCU_CTRL_LPMCU_CLK_SEL_Msk);

	hri_lpmcumiscregsmiscregs_write_LPMCU_CTRL_LPMCU_CLK_SEL_bf(LPMCU_MISC_REGS0, CONF_CPU_PRESCALER);
#endif
}
