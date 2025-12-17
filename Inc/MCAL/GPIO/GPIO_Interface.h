/*
 * GPIO_Interface.h
 *
 *  Created on: Dec 13, 2025
 *      Author: ziad-ahmed
 */
#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

// INCLUDES

#include 	"GPIO_Config.h"

// FUNCTION PROTOTYPES

stm_err_t GPIO_INPUT_CONFIG(GPIO_PORTS port,INPUT_MODE mode);

stm_err_t GPIO_OUTPUT_CONFIG(GPIO_PORTS port,OUTPUT_MODE mode);

#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
