#include "lcd_pwm.h"

TIM_HandleTypeDef htim12;    // TIM_HandleTypeDef �ṹ�����

static uint16_t LCD_PwmPeriod = 500;        //��ʱ������ֵ

/*************************************************************************************************
*	�� �� ��:	HAL_TIM_MspPostInit
*	��ڲ���:	htim - TIM_HandleTypeDef�ṹ�����������ʾ�����TIM�������
*	�� �� ֵ:	��
*	��������:	��ʼ�� TIM ��Ӧ��PWM��
*	˵    ��:	��ʼ��PWM�õ�������
*
*************************************************************************************************/

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    if (htim->Instance == LTDC_PWM_TIM) {
        GPIO_LDC_Backlight_CLK_ENABLE;            // �����������Ŷ˿�ʱ��

        GPIO_InitStruct.Pin = LTDC_PWM_PIN;            // ��������
        GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;        // �����������
        GPIO_InitStruct.Pull = GPIO_NOPULL;                // ��������
        GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;    // ����ģʽ
        GPIO_InitStruct.Alternate = LCD_PWM_AF;                // ����

        HAL_GPIO_Init(LTDC_PWM_PORT, &GPIO_InitStruct);        // ��ʼ��IO��
    }
}


/*************************************************************************************************
*	�� �� ��:	LCD_PwmSetPulse
*	��ڲ���:	pulse - PWMռ�ձȣ���Χ 0~100
*	�� �� ֵ:	��
*	��������:	����PWMռ�ձ�
*	˵    ��:	��
*************************************************************************************************/

void LCD_PwmSetPulse(uint8_t pulse) {
    uint16_t compareValue;

    compareValue = pulse * LCD_PwmPeriod / 100; //����ռ�ձ����ñȽ�ֵ

    TIM4->CCR4 = compareValue;            // �޸�TIM4��ͨ��4�Ƚ�ֵ
}

/*************************************************************************************************
*	�� �� ��:	LCD_PWMinit
*	��ڲ���:	pulse - PWMռ�ձȣ���Χ 0~100
*	�� �� ֵ:	��
*	��������:	��ʼ��TIM4,����PWMƵ��Ϊ2KHz
*	˵    ��:	��
*************************************************************************************************/

void LCD_PWMinit(uint8_t pulse) {

    TIM_ClockConfigTypeDef sClockSourceConfig = {0};
    TIM_MasterConfigTypeDef sMasterConfig = {0};
    TIM_OC_InitTypeDef sConfigOC = {0};

    htim12.Instance = LTDC_PWM_TIM;                            // ��ʱ��
    htim12.Init.Prescaler = 23;                              // Ԥ��Ƶϵ������ʱ��ʱ���ļ���Ƶ��Ϊ 10MHz
    htim12.Init.CounterMode = TIM_COUNTERMODE_UP;               // ���ϼ���ģʽ
    htim12.Init.Period = LCD_PwmPeriod - 1;                // ����ֵ499��������500��
    htim12.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;           // ʱ�Ӳ���Ƶ
    htim12.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;   // ���ƼĴ��� TIMx_CR1 ��ARPE λ��0������ֹ�Զ����ؼĴ�������Ԥװ��

    HAL_TIM_Base_Init(&htim12);    // ��������Ĳ�������TIM2���г�ʼ��

    sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;            // ѡ���ڲ�ʱ��Դ
    HAL_TIM_ConfigClockSource(&htim12, &sClockSourceConfig);           // ��ʼ������ʱ��Դ

    HAL_TIM_PWM_Init(&htim12);        // ��������Ĳ�������TIM����PWM��ʼ��

    sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;                    // �������ѡ�񣬴�ʱ���ø�λģʽ�����Ĵ��� TIMx_CR2 �� MMS ΪΪ000
    sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;      // ��ʹ�ô�ģʽ
    HAL_TIMEx_MasterConfigSynchronization(&htim12, &sMasterConfig);    // ��ʼ������

    sConfigOC.OCMode = TIM_OCMODE_PWM1;                                            // PWMģʽ1
    sConfigOC.Pulse = pulse * LCD_PwmPeriod / 100;                                    // �Ƚ�ֵ250������Ϊ500����ռ�ձ�Ϊ50%
    sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;                                        // ��Ч״̬Ϊ�ߵ�ƽ
    sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;                                        // ��ֹ����ģʽ
    HAL_TIM_PWM_ConfigChannel(&htim12, &sConfigOC, LTDC_PWM_TIM_CHANNEL);        // ��ʼ������PWM

    HAL_TIM_MspPostInit(&htim12);                                // ��ʼ��IO��
    HAL_TIM_PWM_Start(&htim12, LTDC_PWM_TIM_CHANNEL);        // ����PWM
}

///*************************************************************************************************
//*	�� �� ��:	HAL_TIM_Base_MspInit
//*	��ڲ���:	htim_base - TIM_HandleTypeDef�ṹ�����������ʾ�����TIM�������
//*	�� �� ֵ:	��
//*	��������:	����ʱ��
//*	˵    ��:	��
//*
//*************************************************************************************************/
//
//void HAL_TIM_Base_MspInit(TIM_HandleTypeDef* htim_base)
//{
//  if(htim_base->Instance==LTDC_PWM_TIM)
//  {
//    LTDC_PWM_TIM_CLK_ENABLE;		// ���� TIM ʱ��
//  }
//
//}


