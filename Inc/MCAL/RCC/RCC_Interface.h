/*
 * RCC_Interface.h
 *
 *  Created on: Jan 18, 2026
 *      Author: ziad-ahmed
 */

#ifndef MCAL_RCC_RCC_INTERFACE_H_
#define MCAL_RCC_RCC_INTERFACE_H_

#include "RCC_Config.h"

stm_err_t RCC_EnablePeripheral	(RCC_Peripheral_t per);
stm_err_t RCC_DisablePeripheral	(RCC_Peripheral_t per);
stm_err_t RCC_ResetPeripheral	(RCC_Peripheral_t per);

#endif /* MCAL_RCC_RCC_INTERFACE_H_ */
