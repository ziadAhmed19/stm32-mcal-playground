/*
 * GPIO_Program.c
 *
 *  Created on: Dec 13, 2025
 *      Author: ziad-ahmed
 *
 * General Purpose IO (GPIO) Ports, can be individually configured by software
 * in several modes:
 * 1- Input Floating 	(Input)
 * 2- Input pull-up		(Input)
 * 3- Input pull-down	(Input)
 * 4- Analog			(Input)
 *
 * 5- Output open-drain				(Output)
 * 6- Output push-pull				(Output)
 * 7- Alternate function push-pull  (Output)
 * 8- Alternate function open-drain (Output)
 *
 */
#include 	"GPIO_Interface.h"
#include 	"GPIO_Private.h"


stm_err_t GPIO_INPUT_CONFIG(GPIO_PORTS port,INPUT_MODE mode){

	switch (mode) {
		case FLOATING:

			return STM_OK;
			break;

		case PULL_UP:

			return STM_OK;
			break;


		case PULL_DOWN:

			return STM_OK;
			break;

		case ANALOG:

			return STM_OK;
			break;

		default:

			return STM_ERROR;
			break;
	}
}

stm_err_t GPIO_OUTPUT_CONFIG(GPIO_PORTS port,OUTPUT_MODE mode){
	switch (mode) {
		case OPEN_DRAIN:

			return STM_OK;
			break;

		case PUSH_PULL:

			return STM_OK;
			break;

		case ALT_FN_PUSH_PULL:

			return STM_OK;
			break;

		case ALT_FN_OPEN_DRAIN:

			return STM_OK;
			break;

		default:

			return STM_ERROR;
			break;
	}
}
