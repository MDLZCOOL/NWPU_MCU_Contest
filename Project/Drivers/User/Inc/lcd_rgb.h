#ifndef  __LCD_RGB_H
#define	__LCD_RGB_H

#include "stm32h7xx_hal.h"
#include "usart.h"
#include "sdram.h"  
#include <stdio.h>

// 1. ���ֻ�õ��㣬�ò�������Ϊ1���ɣ�ʹ��˫��Ļ�����Ҫ�޸�Ϊ 2
// 2. FK750M5-XBH6 ���İ� ʹ�õ����ⲿSDRAM��Ϊ�Դ棬��ʼ��ַ0xC0000000
// 3. �Դ�����ռ� = �ֱ��� * ÿ��������ռ�ֽ��������� 480*272������ʹ��16λɫ��RGB565����AEGB1555������Ҫ�Դ� 480*272*2 = 261120 �ֽ�
//
#define 	LCD_NUM_LAYERS  1	//	������ʾ�Ĳ�����750������������ʾ

#define	ColorMode_0   LTDC_PIXEL_FORMAT_RGB565   		//���� layer0 ����ɫ��ʽ
//#define	ColorMode_0   LTDC_PIXEL_FORMAT_ARGB1555  
//#define	ColorMode_0    LTDC_PIXEL_FORMAT_ARGB4444  
//#define	ColorMode_0   LTDC_PIXEL_FORMAT_RGB888
//#define	ColorMode_0   LTDC_PIXEL_FORMAT_ARGB8888   


#if  LCD_NUM_LAYERS == 2	// ���������˫�㣬���ڴ˴����� layer1 ����ɫ��ʽ			

//	#define	ColorMode_1   LTDC_PIXEL_FORMAT_RGB565   	
//	#define	ColorMode_1   LTDC_PIXEL_FORMAT_ARGB1555  // ARGB1555��֧��һλ͸��ɫ��������͸���Ͳ�͸������״̬
//	#define	ColorMode_1   LTDC_PIXEL_FORMAT_ARGB4444  // ARGB4444֧��4λ͸��ɫ����16��͸��״̬
// #define	ColorMode_1   LTDC_PIXEL_FORMAT_RGB888   
	#define	ColorMode_1   LTDC_PIXEL_FORMAT_ARGB8888   // ARGB8888֧��8λ͸��ɫ����256��͸��״̬	

#endif

/*---------------------------------------------------------- �������� -------------------------------------------------------*/
	
void MX_LTDC_Init(void);		// LTDC�Լ����ʼ�� 
void  LCD_CopyBuffer(uint16_t x, uint16_t y, uint16_t width, uint16_t height,uint32_t *color);	// ���ƻ���������ʾ��

/*-------------------------------------------------------- LCD��ز��� -------------------------------------------------------*/

#define HBP  80	// ������Ļ���ֲ��������
#define VBP  40
#define HSW  1
#define VSW  1
#define HFP  200
#define VFP  22

#define LCD_Width     		800						//	LCD�����س���
#define LCD_Height    		480						//	LCD�����ؿ��
#define LCD_MemoryAdd   SDRAM_BANK_ADDR 		//	�Դ����ʼ��ַ  

// layer0 ÿ��������ռ�ֽ�

#if ( ColorMode_0 == LTDC_PIXEL_FORMAT_RGB565 || ColorMode_0 == LTDC_PIXEL_FORMAT_ARGB1555 || ColorMode_0 ==LTDC_PIXEL_FORMAT_ARGB4444 )
	#define BytesPerPixel_0		2		//16λɫģʽÿ������ռ2�ֽ�
#elif ColorMode_0 == LTDC_PIXEL_FORMAT_RGB888
	#define BytesPerPixel_0		3		//24λɫģʽÿ������ռ3�ֽ�
#elif ColorMode_0 == LTDC_PIXEL_FORMAT_ARGB8888
	#define BytesPerPixel_0		4		//32λɫģʽÿ������ռ4�ֽ�
#endif	

// layer1 ÿ��������ռ�ֽ� 

#if LCD_NUM_LAYERS == 2

	#if ( ColorMode_1 == LTDC_PIXEL_FORMAT_RGB565 || ColorMode_1 == LTDC_PIXEL_FORMAT_ARGB1555 || ColorMode_1 == LTDC_PIXEL_FORMAT_ARGB4444 )
		#define BytesPerPixel_1		2	//16λɫģʽÿ������ռ2�ֽ�
	#elif ColorMode_1 == LTDC_PIXEL_FORMAT_RGB888	
		#define BytesPerPixel_1		3	//24λɫģʽÿ������ռ3�ֽ�
	#else	
		#define BytesPerPixel_1		4	//32λɫģʽÿ������ռ4�ֽ�
	#endif	

	#define LCD_MemoryAdd_OFFSET   LCD_Width * LCD_Height * BytesPerPixel_0 	 //�ڶ�����Դ��ƫ�Ƶ�ַ 

#endif

/*-------------------------------------------------------- LCD�������� -------------------------------------------------------*/

#define  LCD_Backlight_PIN								GPIO_PIN_6								
#define	LCD_Backlight_PORT							GPIOH									
#define 	GPIO_LDC_Backlight_CLK_ENABLE        	__HAL_RCC_GPIOH_CLK_ENABLE()	 	

#define	LCD_Backlight_OFF		HAL_GPIO_WritePin(LCD_Backlight_PORT, LCD_Backlight_PIN, GPIO_PIN_RESET);	// �رձ���
#define 	LCD_Backlight_ON		HAL_GPIO_WritePin(LCD_Backlight_PORT, LCD_Backlight_PIN, GPIO_PIN_SET);		// ��������



/*------------------------------------------------ LCD��2λ���ţ����ھ����ʶ�� ----------------------------------------------*/

//// �����ʶ���޸ģ��˴�ֻ�Ծɿ�5�������ã�Ҳ���� RGB050M1  V1.0�İ汾
//// �ɿ�5����ֻ������18λ�Ľӿڣ���2λ���ݽ�ֱ�ӽӵأ������⵽��Ӧ������Ϊ�͵�ƽ�����ȷ��������Ǿɿ�5����
//// ��������������˴����û���ֲ��ʱ�����ֱ��ɾ��

#define  LTDC_R0_PIN						GPIO_PIN_15								
#define	LTDC_R0_PORT					GPIOI									

#define  LTDC_R1_PIN						GPIO_PIN_0								
#define	LTDC_R1_PORT					GPIOJ	

#define  LTDC_G0_PIN						GPIO_PIN_7								
#define	LTDC_G0_PORT					GPIOJ									

#define  LTDC_G1_PIN						GPIO_PIN_8								
#define	LTDC_G1_PORT					GPIOJ		

#define  LTDC_B0_PIN						GPIO_PIN_12								
#define	LTDC_B0_PORT					GPIOJ									

#define  LTDC_B1_PIN						GPIO_PIN_13								
#define	LTDC_B1_PORT					GPIOJ		


#endif //__LCD_RGB_H

