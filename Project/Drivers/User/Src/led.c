#include "stm32h7xx_hal.h"
#include "led.h"  


void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};

	__HAL_RCC_LED1_CLK_ENABLE;		// 初始化LED1 GPIO时钟	


	HAL_GPIO_WritePin(LED1_PORT, LED1_PIN, GPIO_PIN_RESET);		// LED1引脚输出低，即点亮LED1


	GPIO_InitStruct.Pin 		= LED1_PIN;					// LED1引脚
	GPIO_InitStruct.Mode 	= GPIO_MODE_OUTPUT_PP;	// 推挽输出模式
	GPIO_InitStruct.Pull 	= GPIO_NOPULL;				// 不上下拉
	GPIO_InitStruct.Speed 	= GPIO_SPEED_FREQ_LOW;	// 低速模式
	HAL_GPIO_Init(LED1_PORT, &GPIO_InitStruct);


}

void BTH_EN_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOH_CLK_ENABLE();
    HAL_GPIO_WritePin(BTH_EN_GPIO_Port, BTH_EN_Pin, GPIO_PIN_RESET);
    /*Configure GPIO pin : PtPin */
    GPIO_InitStruct.Pin = BTH_EN_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(BTH_EN_GPIO_Port, &GPIO_InitStruct);
}

void BTH_STATE_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOH_CLK_ENABLE();
    /*Configure GPIO pin : PtPin */
    GPIO_InitStruct.Pin = BTH_STATE_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(BTH_STATE_GPIO_Port, &GPIO_InitStruct);
}