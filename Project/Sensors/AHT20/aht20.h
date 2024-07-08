#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"

//****************************************
// ���� AHT20 ����
//****************************************
#define AHT20_Write             0x00    //��ȡ
#define AHT20_Read              0x01    //д��



//****************************************
// ���� AHT20 ��ַ
//****************************************
#define AHT20_SLAVE_ADDRESS		0x70		/* I2C�ӻ���ַ */



//****************************************
// ���� AHT20 ����
//****************************************
#define	AHT20_INIT_COMD  		0xBE	//��ʼ�� �Ĵ�����ַ
#define	AHT20_SoftReset			0xBA	//��λ ��ָ��
#define	AHT20_TrigMeasure_COMD	0xAC	//�������� �Ĵ�����ַ

// �洢AHT20��������Ϣ�Ľṹ��

typedef struct m_AHT20
{
    uint8_t alive;	// 0-����������; 1-��������
    uint8_t flag;	// ��ȡ/��������־λ��0-��ȡ/������������; 1-��ȡ/�����豸ʧ��
    uint32_t HT[2];	// ʪ�ȡ��¶� ԭʼ��������ֵ(20Bit).

    float RH;		// ʪ�ȣ�ת����λ���ʵ��ֵ����׼��λ%
    float Temp;		// �¶ȣ�ת����λ���ʵ��ֵ����׼��λ��C
}AHT20_StructureTypedef;

extern  AHT20_StructureTypedef  Humiture;

uint8_t AHT20_Init(void);
void    AHT20_Start_Init(void);
uint8_t AHT20_ReadHT(uint32_t *HT);
uint8_t StandardUnitCon(AHT20_StructureTypedef *aht);
uint8_t AHT20_Get_Value(AHT20_StructureTypedef *p);

#endif /* INC_AHT20_H_ */
