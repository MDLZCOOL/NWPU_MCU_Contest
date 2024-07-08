#ifndef INC_AHT20_H_
#define INC_AHT20_H_

#include "i2c.h"

//****************************************
// 定义 AHT20 命令
//****************************************
#define AHT20_Write             0x00    //读取
#define AHT20_Read              0x01    //写入



//****************************************
// 定义 AHT20 地址
//****************************************
#define AHT20_SLAVE_ADDRESS		0x70		/* I2C从机地址 */



//****************************************
// 定义 AHT20 命令
//****************************************
#define	AHT20_INIT_COMD  		0xBE	//初始化 寄存器地址
#define	AHT20_SoftReset			0xBA	//软复位 单指令
#define	AHT20_TrigMeasure_COMD	0xAC	//触发测量 寄存器地址

// 存储AHT20传感器信息的结构体

typedef struct m_AHT20
{
    uint8_t alive;	// 0-器件不存在; 1-器件存在
    uint8_t flag;	// 读取/计算错误标志位。0-读取/计算数据正常; 1-读取/计算设备失败
    uint32_t HT[2];	// 湿度、温度 原始传感器的值(20Bit).

    float RH;		// 湿度，转换单位后的实际值，标准单位%
    float Temp;		// 温度，转换单位后的实际值，标准单位°C
}AHT20_StructureTypedef;

extern  AHT20_StructureTypedef  Humiture;

uint8_t AHT20_Init(void);
void    AHT20_Start_Init(void);
uint8_t AHT20_ReadHT(uint32_t *HT);
uint8_t StandardUnitCon(AHT20_StructureTypedef *aht);
uint8_t AHT20_Get_Value(AHT20_StructureTypedef *p);

#endif /* INC_AHT20_H_ */
