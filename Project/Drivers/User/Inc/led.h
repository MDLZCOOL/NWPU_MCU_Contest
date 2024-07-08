#ifndef __LED_H
#define __LED_H

/*------------------------------------------ LED���ú� ----------------------------------*/

#define LED1_PIN            			 GPIO_PIN_13        				 	// LED1 ����      
#define LED1_PORT           			 GPIOC                 			 	// LED1 GPIO�˿�     
#define __HAL_RCC_LED1_CLK_ENABLE    __HAL_RCC_GPIOC_CLK_ENABLE() 	// LED1 GPIO�˿�ʱ��
 

  
/*----------------------------------------- LED���ƺ� ----------------------------------*/
						
#define LED1_ON 	  	HAL_GPIO_WritePin(LED1_PORT, LED1_PIN, GPIO_PIN_RESET)		// ����͵�ƽ������LED1	
#define LED1_OFF 	  	HAL_GPIO_WritePin(LED1_PORT, LED1_PIN, GPIO_PIN_SET)			// ����ߵ�ƽ���ر�LED1	
#define LED1_Toggle	HAL_GPIO_TogglePin(LED1_PORT,LED1_PIN);							// ��תIO��״̬
			
/*---------------------------------------- �������� ------------------------------------*/

#define BTH_STATE_Pin GPIO_PIN_8
#define BTH_STATE_GPIO_Port GPIOH
#define BTH_EN_Pin GPIO_PIN_13
#define BTH_EN_GPIO_Port GPIOH

void LED_Init(void);
void BTH_EN_Init(void);
void BTH_STATE_Init(void);

#endif //__LED_H


