#include "lcd_test.h"

/*************************************************************************************************
*	�� �� ��:	LCD_Test_DoubleLayer
*
*	��������:	˫����ʾ
*
*	˵    ��:	������˫���ʱ����Ч			
*************************************************************************************************/

void LCD_Test_DoubleLayer(void)
{
	uint16_t time = 100;	// ��ʱʱ��
	uint8_t	i = 0;			// ��������
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"˫�����");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }	
	
	
	LCD_SetLayer(1);	//�л�����1
	LCD_SetBackColor(LCD_BLACK & 0x00FFFFFF);  // ͸����100%����8λ������ԽС͸����Խ��
	LCD_Clear();										 // ��ʱǰ������ȫ͸���������޷����� layer0 ��ͼ��	
	
// layer0 ��ʾ���� >>>>>
		
	LCD_SetLayer(0);		//�л�����0	

	LCD_SetBackColor(LCD_BLACK);   
	LCD_Clear();
	
	LCD_SetColor(LCD_WHITE);	
	LCD_SetTextFont(&CH_Font24);				// ����2424��������,ASCII�����ӦΪ2412
	LCD_DisplayText(10,10,"STM32H750 LTDC �����㣬layer0"); 

	HAL_Delay(1000);
	
	LCD_SetColor(LIGHT_CYAN);  	LCD_DrawLine(5, 75,200, 75);	 	HAL_Delay(time);
	LCD_SetColor(LIGHT_MAGENTA);	LCD_DrawLine(5, 90,200, 90);   	HAL_Delay(time);
	LCD_SetColor(LIGHT_YELLOW); 	LCD_DrawLine(5,105,200,105);	 	HAL_Delay(time);
	
	LCD_SetColor(LCD_RED);    		LCD_FillCircle( 60,200,60);		HAL_Delay(time);
	LCD_SetColor(LCD_GREEN);  		LCD_FillCircle(100,200,60); 	   HAL_Delay(time);
	LCD_SetColor(LCD_BLUE);   		LCD_FillCircle(140,200,60);  		HAL_Delay(time);
	
	LCD_SetColor(LIGHT_RED);	  	LCD_FillRect(246, 65,125,120);	HAL_Delay(time);	  
	LCD_SetColor(LIGHT_GREEN);  	LCD_FillRect(293, 96,125,120);  	HAL_Delay(time);  
	LCD_SetColor(LIGHT_BLUE);    	LCD_FillRect(334,130,125,120);  	HAL_Delay(time);
	
	HAL_Delay(1000);
	
// layer1 ��ʾ���� >>>>>

	LCD_SetLayer(1);	//�л�����1

	LCD_SetColor(0Xff348498);		
	LCD_FillRect(62, 48,322,192);		  

	LCD_SetBackColor(0Xff348498);  
	LCD_SetColor(LCD_BLACK);		
	LCD_DisplayText(146,69,"ǰ���㣬layer1"); 
	HAL_Delay(1000);
	
#if	ColorMode_1 == LTDC_PIXEL_FORMAT_ARGB4444	// ���layer1 ����Ϊ ARGB4444

	LCD_SetBackColor(LCD_BLACK & 0xB0FFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB4444֧��4λ͸��ɫ����16��͸��״̬
	LCD_SetColor(LCD_WHITE);						 // ���ʲ�͸�� 
	LCD_DisplayText(28,100,"STM32H50XBH6 LTDC, ARGB4444��layer1"); 
	HAL_Delay(1000);
	
	LCD_SetBackColor(LCD_BLACK & 0x80FFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB4444֧��4λ͸��ɫ����16��͸��״̬
	LCD_SetColor(LCD_WHITE);		 
	LCD_DisplayText(28,140,"STM32H50XBH6 LTDC, ARGB4444��layer1"); 
	HAL_Delay(1000);
		
	LCD_SetBackColor(LCD_BLACK & 0x30FFFFFF );  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB4444֧��4λ͸��ɫ����16��͸��״̬
	LCD_SetColor(LCD_WHITE);
	LCD_DisplayText(28,180,"STM32H50XBH6 LTDC, ARGB4444��layer1"); 	
	HAL_Delay(1000);
	
	LCD_SetBackColor(LCD_BLACK  );  				 // ������ɫ����Ϊ ��͸��
	LCD_SetColor(LCD_WHITE & 0x00FFFFFF);		 // ������ɫ����Ϊ ��ȫ͸��	 
	LCD_DisplayText(28,220,"STM32H50XBH6 LTDC, ARGB4444��layer1"); 	
	HAL_Delay(2000);	
	
#elif	ColorMode_1 == LTDC_PIXEL_FORMAT_ARGB1555	// ���layer1 ����Ϊ ARGB1555


	LCD_SetBackColor(LCD_BLACK & 0xffFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB1555��֧��һλ͸��ɫ��������͸���Ͳ�͸������״̬
	LCD_SetColor(LCD_WHITE);						// ���ʲ�͸�� 
	LCD_DisplayText(28,100,"STM32H50XBH6 LTDC, ARGB1555��layer1"); 
	HAL_Delay(1000);
	
	LCD_SetBackColor(LCD_BLACK & 0x00FFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB1555��֧��һλ͸��ɫ��������͸���Ͳ�͸������״̬
	LCD_SetColor(LCD_WHITE);						 // ���ʲ�͸�� 
	LCD_DisplayText(28,140,"STM32H50XBH6 LTDC, ARGB1555��layer1"); 
	HAL_Delay(1000);
		
	LCD_SetBackColor(LCD_BLACK  & 0xffFFFFF);  // ������ɫ����Ϊ ��͸��
	LCD_SetColor(LCD_WHITE & 0x00FFFFFF);		 // ������ɫ����Ϊ ��ȫ͸��	 
	LCD_DisplayText(28,180,"STM32H50XBH6 LTDC, ARGB1555��layer1"); 	
	HAL_Delay(2000);	

#elif ColorMode_1 == LTDC_PIXEL_FORMAT_ARGB8888	// ���layer1 ����Ϊ ARGB8888

	LCD_SetBackColor(LCD_BLACK & 0xE0FFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB8888֧��8λ͸��ɫ����255��͸��״̬
	LCD_SetColor(LCD_WHITE);						 // ���ʲ�͸�� 
	LCD_DisplayText(28,100,"STM32H50XBH6 LTDC, ARGB8888��layer1"); 
	HAL_Delay(1000);
	
	LCD_SetBackColor(LCD_BLACK & 0x80FFFFFF);  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB8888֧��8λ͸��ɫ����255��͸��״̬
	LCD_SetColor(LCD_WHITE);		 
	LCD_DisplayText(28,140,"STM32H50XBH6 LTDC, ARGB8888��layer1"); 
	HAL_Delay(1000);
		
	LCD_SetBackColor(LCD_BLACK & 0x20FFFFFF );  // ���ñ���ɫ͸���ȣ���8λ������ԽС͸����Խ�ߣ�ARGB8888֧��8λ͸��ɫ����255��͸��״̬
	LCD_SetColor(LCD_WHITE);
	LCD_DisplayText(28,180,"STM32H50XBH6 LTDC, ARGB8888��layer1"); 	
	HAL_Delay(1000);
	
	LCD_SetBackColor(LCD_BLACK);  				 // ������ɫ����Ϊ ��͸��
	LCD_SetColor(LCD_WHITE & 0x00FFFFFF);		 // ������ɫ����Ϊ ��ȫ͸��	 
	LCD_DisplayText(28,220,"STM32H50XBH6 LTDC, ARGB8888��layer1"); 	
	HAL_Delay(2000);	
	
#endif


}

/*************************************************************************************************
*	�� �� ��:	LCD_Test_Clear
*
*	��������:	��������
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_Clear(void)
{
	uint16_t time = 1000;	// ��ʱʱ��
	uint8_t	i = 0;			// ��������
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"ˢ������");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }	
	
	
	
// ˢ������>>>>>
		
	LCD_SetTextFont(&CH_Font24);			// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LCD_BLACK);				// ���û�����ɫ

	for(i=0;i<8;i++)
	{
		switch (i)		// �л�����ɫ
		{
			case 0: LCD_SetBackColor(LIGHT_RED); 		break;	
			case 1: LCD_SetBackColor(LIGHT_GREEN); 	break;				
			case 2: LCD_SetBackColor(LIGHT_BLUE); 		break;
			case 3: LCD_SetBackColor(LIGHT_YELLOW); 	break;
			case 4: LCD_SetBackColor(LIGHT_CYAN);		break;
			case 5: LCD_SetBackColor(LIGHT_GREY); 		break;
			case 6: LCD_SetBackColor(LIGHT_MAGENTA); 	break;
			case 7: LCD_SetBackColor(LCD_WHITE); 		break;			
			default:	break;			
		}
		LCD_Clear();		// ����
		LCD_DisplayText(68, 68,"STM32H750 LTDC ˢ������");
		LCD_DisplayText(68,106,"���İ��ͺţ�FK750M5-XBH6");
		LCD_DisplayText(68,144,"��Ļ�ֱ��ʣ�480*272");		
		HAL_Delay(time);	// ��ʱ
	}
}

/*************************************************************************************************
*	�� �� ��:	LCD_Test_Text
*
*	��������:	�ı���ʾ����
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_Text(void)
{
	uint16_t i;					// ��������

// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"�ı���ʾ");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// ��ʾ�ı����������������С�����ĺ�ASCII�ַ� >>>>>

	LCD_SetBackColor(LCD_BLACK); 			//	���ñ���ɫ
	LCD_Clear(); 								// ����
	
	LCD_SetColor(LCD_WHITE);	// ���û��ʣ���ɫ
	LCD_SetFont(&Font32); LCD_DisplayString(0, 0,"!#$%&'()*+,-.0123456789:;<=>?"); 						    	HAL_Delay(80);	// ʹ��3216����		
	LCD_SetFont(&Font24); LCD_DisplayString(0,32,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGH"); 				   HAL_Delay(80);	// ʹ��2412����
	LCD_SetFont(&Font20); LCD_DisplayString(0,56,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNO");      	HAL_Delay(80);	// ʹ��2010����
	LCD_SetFont(&Font16); LCD_DisplayString(0,76,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRST"); 	HAL_Delay(80);	// ʹ��1608����
	LCD_SetFont(&Font12); LCD_DisplayString(0,92,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRST"); 	HAL_Delay(80);	// ʹ��1206����
																																				
	LCD_SetColor(LCD_CYAN);                                                                               	
	LCD_SetFont(&Font12); LCD_DisplayString(0,104,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRST"); 	HAL_Delay(80);	// ʹ��1206����
	LCD_SetFont(&Font16); LCD_DisplayString(0,116,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNOPQRST"); 	HAL_Delay(80);	// ʹ��1608����
	LCD_SetFont(&Font20); LCD_DisplayString(0,132,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGHIJKLMNO");		  	HAL_Delay(80);	// ʹ��2010����	
	LCD_SetFont(&Font24); LCD_DisplayString(0,152,"!#$%&'()*+,-.0123456789:;<=>?@ABCDEFGH"); 				  	HAL_Delay(80);	// ʹ��2412����	
	LCD_SetFont(&Font32); LCD_DisplayString(0,176,"!#$%&'()*+,-.0123456789:;<=>?"); 							  	HAL_Delay(80);	// ʹ��3216����	

	LCD_SetTextFont(&CH_Font24);			// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LCD_YELLOW);				// ���û��ʣ���ɫ
	LCD_DisplayText(0, 210,"�ı���ʾ������ʾ���ĺ�ASCII�ַ���");
	LCD_DisplayText(0, 240,"�û��ɸ������󣬶��ֿ���������ɾ��");	
	HAL_Delay(2000);	// ��ʱ�ȴ�
	
	LCD_SetBackColor(LCD_BLACK); 			//	���ñ���ɫ
	LCD_Clear(); 								// ����	
	
	LCD_SetTextFont(&CH_Font12);			// ����1212��������,ASCII�����ӦΪ1206
	LCD_SetColor(LCD_WHITE);				// ���û���,��ɫ
	LCD_DisplayText(28, 20,"1212�������壺���ͿƼ�");	
	
	LCD_SetTextFont(&CH_Font16);			// ����1616��������,ASCII�����ӦΪ1608
	LCD_SetColor(LIGHT_RED);				// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 48,"1616�������壺���ͿƼ�");		
	
	LCD_SetTextFont(&CH_Font20);			// ����2020��������,ASCII�����ӦΪ2010
	LCD_SetColor(LIGHT_RED);				// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 82,"2020�������壺���ͿƼ�");		

	LCD_SetTextFont(&CH_Font24);			// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LIGHT_CYAN);				// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 121,"2424�������壺���ͿƼ�");		

	LCD_SetTextFont(&CH_Font32);			// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(LIGHT_CYAN);				// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 160,"3232�������壺���ͿƼ�");		

	LCD_SetTextFont(&CH_Font24);			// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LIGHT_YELLOW);			// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 217,"���İ��ͺţ�FK750M5-XBH6");		

	HAL_Delay(2000);	// ��ʱ�ȴ�
}

/*************************************************************************************************
*	�� �� ��:	LCD_Test_Variable
*
*	��������:	������ʾ������������С��
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_Variable (void)
{

	uint16_t i;					// ��������

	int32_t	a = 0;			// �����������������ڲ���
	int32_t	b = 0;			// �����������������ڲ���
	int32_t	c = 0;			// �����������������ڲ���

	double p = 3.1415926;	// ���帡�������������ڲ���
	double f = -1234.1234;	// ���帡�������������ڲ���
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"������ʾ");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// ��ʾ����������������С��>>>>>	
	
	LCD_SetBackColor(LCD_BLACK); 			//	���ñ���ɫ
	LCD_Clear(); 								// ����
	
	LCD_SetTextFont(&CH_Font24);				// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LCD_WHITE);					// ���û���,��ɫ
	
	LCD_DisplayText(28, 20,"����λ���ո�");	// ��ʾ�ı�	
	LCD_DisplayText(261,20,"����λ���0");		// ��ʾ�ı�		
	
	LCD_SetColor(LIGHT_CYAN);					// ���û��ʣ�����ɫ
	LCD_DisplayText(28, 61,"��������");				
	LCD_DisplayText(28, 92,"��������");				
	LCD_DisplayText(28,123,"��������");					
				
	LCD_SetColor(LIGHT_YELLOW);				// ���û��ʣ�����ɫ		
	LCD_DisplayText(261, 61,"��������");	
	LCD_DisplayText(261, 94,"��������");	
	LCD_DisplayText(261,127,"��������");	
			
	LCD_SetColor(LIGHT_RED);					// ���û���	������ɫ		
	LCD_DisplayText(28, 171,"��С����");	
	LCD_DisplayText(28, 202,"��С����");			
			
	for(i=0;i<100;i++)
   {
		LCD_SetColor(LIGHT_CYAN);									// ���û���	������ɫ	
		LCD_ShowNumMode(Fill_Space);								// ����λ���ո�
		LCD_DisplayNumber( 120,  61, a+i*125, 8) ;			// ��ʾ����		
		LCD_DisplayNumber( 120,  92, b+i, 	  6) ;			// ��ʾ����			
		LCD_DisplayNumber( 120, 123, c-i,     6) ;			// ��ʾ����			
		
		LCD_SetColor(LIGHT_YELLOW);								// ���û��ʣ�����ɫ	
		LCD_ShowNumMode(Fill_Zero);								// ����λ���0
		LCD_DisplayNumber( 353,  61, a+i*125, 8) ;			// ��ʾ����		
		LCD_DisplayNumber( 353,  92, b+i, 	  6) ;			// ��ʾ����			
		LCD_DisplayNumber( 353, 123, c-i,     6) ;			// ��ʾ����				
		
		LCD_SetColor(LIGHT_RED);						// ���û��ʣ�����ɫ			
		LCD_ShowNumMode(Fill_Space);					// ����λ���ո�		
		LCD_DisplayDecimals( 120, 171, p+i*0.1,  6,3);	// ��ʾС��	
		LCD_DisplayDecimals( 120, 202, f+i*0.01, 11,4);	// ��ʾС��		
		
		HAL_Delay(40);				
   }
	
	HAL_Delay(2500);		
	
}



/*************************************************************************************************
*	�� �� ��:	LCD_Test_FillRect
*
*	��������:	����������
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_FillRect(void)
{
	uint16_t i;					// ��������
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"�������");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// �������>>>>>	
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ

	LCD_SetFont(&Font16);
	LCD_SetColor(LCD_BLUE);	  	  LCD_FillRect(130,  3,320,16);	LCD_DisplayString(0,  3,"LCD_BLUE");		  
	LCD_SetColor(LCD_GREEN);  	  LCD_FillRect(130, 25,320,16);  LCD_DisplayString(0, 25,"LCD_GREEN");		  
	LCD_SetColor(LCD_RED);    	  LCD_FillRect(130, 47,320,16);  LCD_DisplayString(0, 47,"LCD_RED");			  
	LCD_SetColor(LCD_CYAN);   	  LCD_FillRect(130, 69,320,16);  LCD_DisplayString(0, 69,"LCD_CYAN");		  
	LCD_SetColor(LCD_MAGENTA);	  LCD_FillRect(130, 91,320,16);  LCD_DisplayString(0, 91,"LCD_MAGENTA");	  
	LCD_SetColor(LCD_YELLOW); 	  LCD_FillRect(130,113,320,16);  LCD_DisplayString(0,113,"LCD_YELLOW");		  
	LCD_SetColor(LCD_GREY);   	  LCD_FillRect(130,135,320,16);	LCD_DisplayString(0,135,"LCD_GREY");		  
																																				
	LCD_SetColor(LIGHT_BLUE);	  LCD_FillRect(130,157,320,16);  LCD_DisplayString(0,157,"LIGHT_BLUE");		  
	LCD_SetColor(LIGHT_GREEN);   LCD_FillRect(130,179,320,16);  LCD_DisplayString(0,179,"LIGHT_GREEN");	  
	LCD_SetColor(LIGHT_RED);     LCD_FillRect(130,201,320,16);  LCD_DisplayString(0,201,"LIGHT_RED");	     
	LCD_SetColor(LIGHT_CYAN);    LCD_FillRect(130,223,320,16);  LCD_DisplayString(0,223,"LIGHT_CYAN");	     
	LCD_SetColor(LIGHT_MAGENTA); LCD_FillRect(130,245,320,16);  LCD_DisplayString(0,245,"LIGHT_MAGENTA");	  

	HAL_Delay(3000);
}


/*************************************************************************************************
*	�� �� ��:	LCD_Test_Color
*
*	��������:	��ɫ����
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_Color(void)
{
	uint16_t i;
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"��ɫ����");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// ��ɫ����>>>>>
		
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font24);			// ����2424��������,ASCII�����ӦΪ2412
	LCD_SetColor(LCD_WHITE);				// ���û�����ɫ
	
	LCD_DisplayText(21,14,"���İ��ͺţ�FK750M5-XBH6");
	LCD_DisplayText(21,54,"��Ļ�ֱ��ʣ�480*272");		
	LCD_DisplayText(21,94,"RGB����ɫɫ�ײ���");	
	
	//ʹ�û��ߺ�����������ɫɫ��
	for(i=0;i<240;i++)
	{
		LCD_SetColor( LCD_RED-(i<<16) );
		LCD_DrawLine(5+2*i,  140,5+2*i,  170);	
		LCD_DrawLine(5+2*i+1,140,5+2*i+1,170);	
	}
	for(i=0;i<240;i++)
	{
		LCD_SetColor( LCD_GREEN-(i<<8) );
		LCD_DrawLine(5+2*i,  180,5+2*i,  210);	
		LCD_DrawLine(5+2*i+1,180,5+2*i+1,210);
	}
	for(i=0;i<240;i++)
	{
		LCD_SetColor( LCD_BLUE-i );
		LCD_DrawLine(5+2*i,  220,5+2*i,  250);	
		LCD_DrawLine(5+2*i+1,220,5+2*i+1,250);
	}	
	HAL_Delay(3000);	
	
	
}

/*************************************************************************************************
*	�� �� ��:	LCD_Test_GrahicTest
*
*	��������:	2Dͼ�λ���
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_GrahicTest(void)
{
	uint16_t time = 80;		// ��ʱʱ��
	uint16_t i;					// ��������
		
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"��ͼ����");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// 2Dͼ�λ���>>>>>>>
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ	

	LCD_SetColor(LCD_RED);    LCD_FillCircle( 60,200,60);		//���Բ��
	LCD_SetColor(LCD_GREEN);  LCD_FillCircle(100,200,60); 	
	LCD_SetColor(LCD_BLUE);   LCD_FillCircle(140,200,60);  	

	LCD_SetColor(LIGHT_GREY);
	LCD_DrawLine(5,5,200,5);	HAL_Delay(time);	//��ֱ��
	LCD_DrawLine(5,10,150,10);	HAL_Delay(time);
	LCD_DrawLine(5,15,100,15); HAL_Delay(time);
	LCD_DrawLine(5,20,50,20);	HAL_Delay(time);	

	LCD_SetColor(LIGHT_CYAN);
	LCD_DrawCircle(350,60,60);	HAL_Delay(time);	//����Բ��
	LCD_DrawCircle(350,60,50);   HAL_Delay(time);
	LCD_DrawCircle(350,60,40);   HAL_Delay(time);
	LCD_DrawCircle(350,60,30);   HAL_Delay(time);

	LCD_SetColor(LCD_RED);	
	LCD_DrawRect( 5,30,200,80);  HAL_Delay(time);	//���ƾ���
	LCD_DrawRect(30,35,150,70); HAL_Delay(time);
	LCD_DrawRect(55,40,100,60);  HAL_Delay(time);
	LCD_DrawRect(80,45, 50,50);   HAL_Delay(time);

	LCD_SetColor(LIGHT_MAGENTA);	
	LCD_DrawEllipse(350,200,100,50); HAL_Delay(time);	//������Բ
	LCD_DrawEllipse(350,200,80,40);  HAL_Delay(time);
	LCD_DrawEllipse(350,200,60,30);  HAL_Delay(time);
	LCD_DrawEllipse(350,200,40,20);  HAL_Delay(time);

	LCD_SetColor(LCD_WHITE);	
	LCD_DrawLine(0,0,479,0); 	//���ƾ��ο�
	LCD_DrawLine(479,0,479,271);  
	LCD_DrawLine(479,271,0,271);  
	LCD_DrawLine(0,271,0,0);  

	HAL_Delay(2000);	
}
/*************************************************************************************************
*	�� �� ��:	LCD_Test_Image
*
*	��������:	ͼƬ��ʾ����
*
*	˵    ��:	��	
*************************************************************************************************/

void LCD_Test_Image(void)
{
	uint16_t i;					// ��������
		
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(176, 87,"ͼƬ����");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage(  120, 120, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<100;i++)
   {
		LCD_FillRect(44,228,4*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(15);	
   }
	
// ͼƬ����>>>>>>>	

	LCD_SetBackColor(LCD_BLACK); 			//	���ñ���ɫ
	LCD_Clear(); 								// ����
	
	LCD_SetColor( 0xFFFFAD60);
	LCD_DrawImage( 84, 49, 60, 60, Image_Android_60x60) ;
	
	LCD_SetColor( 0xFFFFB6B9);
	LCD_DrawImage( 210, 55, 60, 60, Image_Cloud_60x60) ;
	
	LCD_SetColor( 0xFF8AC6D1);
	LCD_DrawImage( 336, 55, 60, 60, Image_Folder_60x60) ;

	LCD_SetColor( 0xFFFFF5C3);
	LCD_DrawImage( 84,  162, 60, 60, Image_Message_60x60) ;
	
	LCD_SetColor( 0xFFA696C8);
	LCD_DrawImage( 210, 162, 60, 60, Image_Toys_60x60) ;
	
	LCD_SetColor( 0xFFE59572);
	LCD_DrawImage( 336, 162, 60, 60, Image_Video_60x60) ;	

	HAL_Delay(2000);
	
	LCD_SetBackColor(LCD_WHITE); 			//	���ñ���ɫ
	LCD_Clear(); 								// ����
	LCD_SetColor( LCD_BLACK);
	LCD_DrawImage( 0, 16, 480, 239, Image_FANKE_480x239) ;	
	HAL_Delay(2000);
	
}


/*************************************************************************************************
*	�� �� ��:	LCD_Test_Vertical
*
*	��������:	��������
*
*	˵    ��:	��	
*************************************************************************************************/

void  LCD_Test_Vertical(void)
{
	uint16_t i;
	uint16_t time = 100;	
	
	LCD_DisplayDirection(Direction_V); // �л���������ʾ
	
// ���Ƴ�ʼ���棬�������⡢LOGO�Լ�������>>>>>
	
	LCD_SetBackColor(0xffB9EDF8); 			//	���ñ���ɫ��ʹ���Զ�����ɫ
	LCD_Clear(); 									//	������ˢ����ɫ
	
	LCD_SetTextFont(&CH_Font32);				// ����3232��������,ASCII�����ӦΪ3216
	LCD_SetColor(0xff333333);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DisplayText(72, 100,"������ʾ");	// ��ʾ�ı�
	
	LCD_SetColor(0xfffd7923);					//	���û���ɫ��ʹ���Զ�����ɫ
	LCD_DrawImage( 16, 150, 240, 83, Image_FANKE_240x83) ;		// ��ʾLOGOͼƬ

	LCD_SetColor(0xff003366);					//	���û���ɫ��ʹ���Զ�����ɫ	
	for(i=0;i<130;i++)
   {
		LCD_FillRect(6,250,2*i,6);	// ���ƾ��Σ�ʵ�ּ��׽�������Ч��
		HAL_Delay(10);	
   }
	
// ������������>>>>>>>		
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ		

	LCD_SetColor(LCD_WHITE);
	LCD_SetFont(&Font32);LCD_DisplayString(0, 0,"!#$%&'()*+,-.012"); 					HAL_Delay(time);		
	LCD_SetFont(&Font24);LCD_DisplayString(0,32,"!#$%&'()*+,-.0123456");			 	HAL_Delay(time);
	LCD_SetFont(&Font20);LCD_DisplayString(0,56,"!#$%&'()*+,-.012345678"); 			HAL_Delay(time);	
	LCD_SetFont(&Font16);LCD_DisplayString(0,76,"!#$%&'()*+,-.0123456789:;"); 		HAL_Delay(time);	
	LCD_SetFont(&Font12);LCD_DisplayString(0,92,"!#$%&'()*+,-.0123456789:;<=>"); 	HAL_Delay(time);	
                                                                                                      
	LCD_SetColor(LCD_CYAN);                                                                            
	LCD_SetFont(&Font12);LCD_DisplayString(0,104,"!#$%&'()*+,-.0123456789:;<=>");	HAL_Delay(time);	
	LCD_SetFont(&Font16);LCD_DisplayString(0,116,"!#$%&'()*+,-.0123456789:;");		HAL_Delay(time);	
	LCD_SetFont(&Font20);LCD_DisplayString(0,132,"!#$%&'()*+,-.012345678");			HAL_Delay(time);		
	LCD_SetFont(&Font24);LCD_DisplayString(0,152,"!#$%&'()*+,-.0123456");			HAL_Delay(time);		
	LCD_SetFont(&Font32);LCD_DisplayString(0,176,"!#$%&'()*+,-.012");					HAL_Delay(time);	

	LCD_SetFont(&Font32);
	LCD_SetColor(LCD_YELLOW);
	LCD_DisplayNumber(10,220, 294967295,10); HAL_Delay(time);		
	LCD_DisplayNumber(10,260,123456,6);	      HAL_Delay(time);		
	LCD_DisplayNumber(10,300,1234,4);		   HAL_Delay(time);		
	LCD_DisplayNumber(10,340,0,0);			   HAL_Delay(time);		
	 
	LCD_SetFont(&Font24);
	LCD_SetColor(LIGHT_BLUE);
	LCD_DisplayString(10,380,"STM32H750 LCD TEST");HAL_Delay(time);

	HAL_Delay(2000);

	time = 80;
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ	
	
	LCD_SetColor(LCD_RED);    LCD_FillCircle( 90,240,80);	
	LCD_SetColor(LCD_GREEN);  LCD_FillCircle(135,240,80); 
	LCD_SetColor(LCD_BLUE);   LCD_FillCircle(180,240,80);  	
	
   LCD_SetColor(LCD_RED);	
	LCD_DrawRect( 0,35,270,100);  HAL_Delay(time);
	LCD_DrawRect(20,45,230,80); 	HAL_Delay(time);
	LCD_DrawRect(40,55,190,60);  	HAL_Delay(time);
	LCD_DrawRect(60,65,150,40);  	HAL_Delay(time);
	
	LCD_SetColor(LIGHT_GREY);
	LCD_DrawLine(0,5, 271,5);	HAL_Delay(time);
	LCD_DrawLine(0,10,271,10);	HAL_Delay(time);
	LCD_DrawLine(0,15,271,15); HAL_Delay(time);
	LCD_DrawLine(0,20,271,20);	HAL_Delay(time);		

   LCD_SetColor(LIGHT_MAGENTA);	
	LCD_DrawEllipse(135,400,130,70); HAL_Delay(time);
	LCD_DrawEllipse(135,400,110,55);  HAL_Delay(time);
	LCD_DrawEllipse(135,400,90 ,40);  HAL_Delay(time);
	LCD_DrawEllipse(135,400,70 ,25);  HAL_Delay(time);
                                                        
	HAL_Delay(2000);	
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ

	LCD_SetFont(&Font16);
	LCD_SetColor(LCD_BLUE);	  	  LCD_FillRect(120,  3,150,16);	LCD_DisplayString(0,  3,"LCD_BLUE"); 			
	LCD_SetColor(LCD_GREEN);  	  LCD_FillRect(120, 25,150,16);  LCD_DisplayString(0, 25,"LCD_GREEN");	
	LCD_SetColor(LCD_RED);    	  LCD_FillRect(120, 47,150,16);  LCD_DisplayString(0, 47,"LCD_RED");	 	
	LCD_SetColor(LCD_CYAN);   	  LCD_FillRect(120, 69,150,16);  LCD_DisplayString(0, 69,"LCD_CYAN");		
	LCD_SetColor(LCD_MAGENTA);	  LCD_FillRect(120, 91,150,16);  LCD_DisplayString(0, 91,"LCD_MAGENTA");	
	LCD_SetColor(LCD_YELLOW); 	  LCD_FillRect(120,113,150,16);  LCD_DisplayString(0,113,"LCD_YELLOW");		
	LCD_SetColor(LCD_GREY);   	  LCD_FillRect(120,135,150,16);	LCD_DisplayString(0,135,"LCD_GREY");		
                                                                            
	LCD_SetColor(LIGHT_BLUE);	  LCD_FillRect(120,157,150,16);  LCD_DisplayString(0,157,"LIGHT_BLUE");		
	LCD_SetColor(LIGHT_GREEN);   LCD_FillRect(120,179,150,16);  LCD_DisplayString(0,179,"LIGHT_GREEN");	
	LCD_SetColor(LIGHT_RED);     LCD_FillRect(120,201,150,16);  LCD_DisplayString(0,201,"LIGHT_RED");	   
	LCD_SetColor(LIGHT_CYAN);    LCD_FillRect(120,223,150,16);  LCD_DisplayString(0,223,"LIGHT_CYAN");	   
	LCD_SetColor(LIGHT_MAGENTA); LCD_FillRect(120,245,150,16);  LCD_DisplayString(0,245,"LIGHT_MAGENTA");	
	LCD_SetColor(LIGHT_YELLOW);  LCD_FillRect(120,267,150,16);  LCD_DisplayString(0,267,"LIGHT_YELLOW");	
	LCD_SetColor(LIGHT_GREY);    LCD_FillRect(120,289,150,16);	LCD_DisplayString(0,289,"LIGHT_GREY");  	
	                                                                             
	LCD_SetColor(DARK_BLUE);	  LCD_FillRect(120,311,150,16);  LCD_DisplayString(0,311,"DARK_BLUE");		
	LCD_SetColor(DARK_GREEN);    LCD_FillRect(120,333,150,16);  LCD_DisplayString(0,333,"DARK_GREEN");		
	LCD_SetColor(DARK_RED);      LCD_FillRect(120,355,150,16);  LCD_DisplayString(0,355,"DARK_RED");		
	LCD_SetColor(DARK_CYAN);     LCD_FillRect(120,377,150,16);  LCD_DisplayString(0,377,"DARK_CYAN");		
	LCD_SetColor(DARK_MAGENTA);  LCD_FillRect(120,399,150,16);  LCD_DisplayString(0,399,"DARK_MAGENTA");	
	LCD_SetColor(DARK_YELLOW);   LCD_FillRect(120,421,150,16);  LCD_DisplayString(0,421,"DARK_YELLOW");	
	LCD_SetColor(DARK_GREY);     LCD_FillRect(120,443,150,16);	LCD_DisplayString(0,443,"DARK_GREY");		
	
	HAL_Delay(2000);	
	
	LCD_SetBackColor(LCD_BLACK); //���ñ���ɫ
	LCD_Clear(); //������ˢ����ɫ

	LCD_SetColor(LCD_RED);    	LCD_DisplayString(0,3,"0XFF0000");	
	LCD_SetColor(LCD_GREEN);  	LCD_DisplayString(0,25,"0X00FF00");
	LCD_SetColor(LCD_BLUE);	  	LCD_DisplayString(0,47,"0X0000FF");	
	
	//ˢ��ɫ��
	for(i=70;i<255;i++){LCD_SetColor( LCD_RED-(i<<16) ); 		LCD_DrawLine(80+i-70,  3,80+i-70, 19);}
	for(i=70;i<255;i++){LCD_SetColor( LCD_GREEN-(i<<8) );		LCD_DrawLine(80+i-70, 25,80+i-70, 41);}
	for(i=70;i<255;i++){LCD_SetColor( LCD_BLUE-i );		 		LCD_DrawLine(80+i-70, 47,80+i-70, 63);}
	for(i=70;i<255;i++){LCD_SetColor( LIGHT_RED-(i<<16) );	LCD_DrawLine(80+i-70, 69,80+i-70, 85);}LCD_DisplayString(0, 69,"0xFF8080");
	for(i=70;i<255;i++){LCD_SetColor( LIGHT_GREEN-(i<<8) );	LCD_DrawLine(80+i-70, 91,80+i-70,107);}LCD_DisplayString(0, 91,"0x80FF80");
	for(i=70;i<255;i++){LCD_SetColor( LIGHT_BLUE-i );			LCD_DrawLine(80+i-70,113,80+i-70,129);}LCD_DisplayString(0,113,"0x8080FF");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_BLUE-(i<<16) );	LCD_DrawLine(80+i-70,135,80+i-70,151);}LCD_DisplayString(0,135,"0x000080");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_BLUE-(i<<8) );		LCD_DrawLine(80+i-70,157,80+i-70,173);}LCD_DisplayString(0,157,"0x000080");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_RED-i );				LCD_DrawLine(80+i-70,179,80+i-70,195);}LCD_DisplayString(0,179,"0x800000");		
	for(i=70;i<255;i++){LCD_SetColor( DARK_RED-(i<<8));		LCD_DrawLine(80+i-70,201,80+i-70,217);}LCD_DisplayString(0,201,"0x800000");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_GREEN-(i<<16)); 	LCD_DrawLine(80+i-70,223,80+i-70,239);}LCD_DisplayString(0,223,"0x008000");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_GREEN-i);			LCD_DrawLine(80+i-70,245,80+i-70,261);}LCD_DisplayString(0,245,"0x008000");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_CYAN-(i<<16));		LCD_DrawLine(80+i-70,267,80+i-70,283);}LCD_DisplayString(0,267,"0x008080");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_YELLOW-i);			LCD_DrawLine(80+i-70,289,80+i-70,305);}LCD_DisplayString(0,289,"0x808000");	
	for(i=70;i<255;i++){LCD_SetColor( DARK_MAGENTA-(i<<8));	LCD_DrawLine(80+i-70,311,80+i-70,327);}LCD_DisplayString(0,311,"0x800080");	
                                                                                          
	HAL_Delay(2000);	
	LCD_DisplayDirection(Direction_H); // �л��غ�����ʾ
	
}







