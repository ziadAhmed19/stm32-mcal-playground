/*
 * blink_led.c
 *
 *  Created on: Jan 7, 2026
 *      Author: ziad-ahmed
 */

#include "blink_led.h"

stm_err_t blink_led_init(){

	RCC_EnablePeripheral(RCC_GPIOC);
	stm_err_t err = GPIO_OUTPUT_CONFIG(PORTC, 13, MAX_OUTPUT_SPEED_2MHZ, PUSH_PULL);
	STM_CHECK_ERROR(err);

	return STM_OK ;
}

stm_err_t blink_led(){

	stm_err_t err = GPIO_OUTPUT_TOGGLE(PORTC, 13);
	STM_CHECK_ERROR(err);
	for(int i = 0 ; i < 50000; i++);;

	return STM_OK ;
}
