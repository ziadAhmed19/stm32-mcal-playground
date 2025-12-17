/*
 * BitMath.h
 *
 *  Created on: Dec 17, 2025
 *      Author: ziad-ahmed
 */

#ifndef CONFIG_BITMATH_H_
#define CONFIG_BITMATH_H_

// DEFINES
#define SET_BIT(REG,BIT) REG |=(1<<BIT)
#define CLR_BIT(REG,BIT) REG &=~(1<<BIT)
#define TGL_BIT(REG,BIT) REG ^=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT)&0x01)

//DATA TYPES
typedef enum{
	STM_ERROR 	= -1,
	STM_OK		= 0
}stm_err_t;



#endif /* CONFIG_BITMATH_H_ */
