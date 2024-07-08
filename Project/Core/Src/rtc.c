#include "rtc.h"
#include <stdio.h>

RTC_HandleTypeDef hrtc;	// RTC���


/*************************************************************************************************
*	�� �� ��:	MX_RTC_Init
*	��ڲ���:	��
*	�� �� ֵ:	��
*	��������:	��ʼ��RTC
*	˵    ��:	��
*************************************************************************************************/

void MX_RTC_Init(void)
{

    hrtc.Instance 					= RTC;
    hrtc.Init.HourFormat 		= RTC_HOURFORMAT_24;				// 24Сʱ��ʽ
    hrtc.Init.AsynchPrediv 		= 127;								// ��Ƶ���ã��������ⲿ32.768KHz����ʱ����������Ϊ���ֵ127
    hrtc.Init.SynchPrediv 		= 255;								// ��Ƶ���ã��������ⲿ32.768KHz����ʱ����������Ϊ���ֵ255
    hrtc.Init.OutPut 				= RTC_OUTPUT_DISABLE;			// ��ֹ����ź�
    hrtc.Init.OutPutPolarity 	= RTC_OUTPUT_POLARITY_HIGH;	// �������Ϊ�ߵ�ƽ
    hrtc.Init.OutPutType 		= RTC_OUTPUT_TYPE_OPENDRAIN;	// ��©���

    if (HAL_RTC_Init(&hrtc) != HAL_OK)	// ��ʼ��RTC
    {
        printf("rtc init failed\r\n");
    }else{
        printf("rtc init successfully\r\n");
    }
}

/*************************************************************************************************
*	�� �� ��:	HAL_RTC_MspInit
*	��ڲ���:	hrtc - RTC_HandleTypeDef�ṹ�����������ʾ�����RTC�������
*	�� �� ֵ:   ��
*	��������:	����ʱ��
*	˵    ��:   ��
*************************************************************************************************/

void HAL_RTC_MspInit(RTC_HandleTypeDef* hrtc)
{
    RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};
    if(hrtc->Instance==RTC)
    {
        PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_RTC;
        PeriphClkInitStruct.RTCClockSelection = RCC_RTCCLKSOURCE_LSI;
        if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
        {
            printf("rtc_mspinit fail\r\n");
        }
        __HAL_RCC_RTC_ENABLE();	//	����RTCʱ��

    }

}


