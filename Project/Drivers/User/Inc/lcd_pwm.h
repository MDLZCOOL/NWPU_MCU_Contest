#ifndef __PWM_H
#define __PWM_H 
 
 
#include "stm32h7xx_hal.h"
#include "lcd_rgb.h" 
 
#define  LTDC_PWM_PIN								GPIO_PIN_6								// ����			
#define	LTDC_PWM_PORT								GPIOH										// �˿�
#define 	GPIO_LTDC_PWM_CLK_ENABLE        	   __HAL_RCC_GPIOH_CLK_ENABLE()	 	// ʱ��
#define  LCD_PWM_AF           					GPIO_AF2_TIM12							// ����
	
#define  LTDC_PWM_TIM								TIM12										// ��ʱ��
#define  LTDC_PWM_TIM_CLK_ENABLE					__HAL_RCC_TIM12_CLK_ENABLE()		// ʱ��
#define  LTDC_PWM_TIM_CHANNEL					 	TIM_CHANNEL_1							// ͨ��


/*-------------------- �������� ----------------------*/

void LCD_PWMinit(uint8_t pulse);			 //PWM��ʼ��
void LCD_PwmSetPulse (uint8_t pulse);	 //����ռ�ձ�


#endif //__PWM_H



