#include "rtc.h"
#include <stdio.h>

RTC_HandleTypeDef hrtc;	// RTC句柄


/*************************************************************************************************
*	函 数 名:	MX_RTC_Init
*	入口参数:	无
*	返 回 值:	无
*	函数功能:	初始化RTC
*	说    明:	无
*************************************************************************************************/

void MX_RTC_Init(void)
{

    hrtc.Instance 					= RTC;
    hrtc.Init.HourFormat 		= RTC_HOURFORMAT_24;				// 24小时格式
    hrtc.Init.AsynchPrediv 		= 127;								// 分频设置，当启用外部32.768KHz晶振时，这里设置为最大值127
    hrtc.Init.SynchPrediv 		= 255;								// 分频设置，当启用外部32.768KHz晶振时，这里设置为最大值255
    hrtc.Init.OutPut 				= RTC_OUTPUT_DISABLE;			// 禁止输出信号
    hrtc.Init.OutPutPolarity 	= RTC_OUTPUT_POLARITY_HIGH;	// 输出极性为高电平
    hrtc.Init.OutPutType 		= RTC_OUTPUT_TYPE_OPENDRAIN;	// 开漏输出

    if (HAL_RTC_Init(&hrtc) != HAL_OK)	// 初始化RTC
    {
        printf("rtc init failed\r\n");
    }else{
        printf("rtc init successfully\r\n");
    }
}

/*************************************************************************************************
*	函 数 名:	HAL_RTC_MspInit
*	入口参数:	hrtc - RTC_HandleTypeDef结构体变量，即表示定义的RTC（句柄）
*	返 回 值:   无
*	函数功能:	开启时钟
*	说    明:   无
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
        __HAL_RCC_RTC_ENABLE();	//	开启RTC时钟

    }

}


