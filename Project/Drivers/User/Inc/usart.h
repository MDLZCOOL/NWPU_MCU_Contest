#ifndef __USART_H
#define __USART_H

#include "stdio.h"
#include "main.h"

/*-------------------------------------------- USART配置宏 ---------------------------------------*/

#define  USART1_BaudRate  115200
#define  USART2_BaudRate  115200

#define  USART1_TX_PIN									GPIO_PIN_9								// TX 引脚
#define	USART1_TX_PORT									GPIOA										// TX 引脚端口
#define 	GPIO_USART1_TX_CLK_ENABLE        	   __HAL_RCC_GPIOA_CLK_ENABLE()	 	// TX 引脚时钟


#define  USART1_RX_PIN									GPIO_PIN_10             			// RX 引脚
#define	USART1_RX_PORT									GPIOA                 				// RX 引脚端口
#define 	GPIO_USART1_RX_CLK_ENABLE         	   __HAL_RCC_GPIOA_CLK_ENABLE()		// RX 引脚时钟

#define  USART2_TX_PIN									GPIO_PIN_5								// TX 引脚
#define	USART2_TX_PORT									GPIOD										// TX 引脚端口
#define 	GPIO_USART2_TX_CLK_ENABLE        	   __HAL_RCC_GPIOD_CLK_ENABLE()	 	// TX 引脚时钟


#define  USART2_RX_PIN									GPIO_PIN_6             			// RX 引脚
#define	USART2_RX_PORT									GPIOD                 				// RX 引脚端口
#define 	GPIO_USART2_RX_CLK_ENABLE         	   __HAL_RCC_GPIOD_CLK_ENABLE()		// RX 引脚时钟
/*---------------------------------------------- 函数声明 ---------------------------------------*/

void USART1_Init(void) ;	// USART1初始化函数
void USART2_Init(void) ;	// USART1初始化函数

#endif //__USART_H





