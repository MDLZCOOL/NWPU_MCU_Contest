#include "AHT20.h"

AHT20_StructureTypedef  Humiture;


/**
  * @brief  读AHT20 设备状态字
  * @param  void
  * @retval uint8_t 设备状态字
  */
static uint8_t AHT20_ReadStatusCmd(void)
{
    uint8_t tmp = 0;
    HAL_I2C_Master_Receive(&hi2c1, AHT20_SLAVE_ADDRESS, &tmp, 1, 0xFFFF);
    return tmp;
}

/**
  * @brief  读AHT20 设备状态字 中的Bit3: 校准使能位
  * @param  void
  * @retval uint8_t 校准使能位：1 - 已校准; 0 - 未校准
  */
static uint8_t AHT20_ReadCalEnableCmd(void)
{
    uint8_t tmp = 0;
    tmp = AHT20_ReadStatusCmd();
    return (tmp>>3)&0x01;
}

/**
  * @brief  读AHT20 设备状态字 中的Bit7: 忙标志
  * @param  void
  * @retval uint8_t 忙标志：1 - 设备忙; 0 - 设备空闲
  */
static uint8_t AHT20_ReadBusyCmd(void)
{
    uint8_t tmp = 0;
    tmp = AHT20_ReadStatusCmd();
    return (tmp>>7)&0x01;
}

/**
  * @brief  AHT20 芯片初始化命令
  * @param  void
  * @retval void
  */
static void AHT20_IcInitCmd(void)
{
    uint8_t tmp = AHT20_INIT_COMD;
    HAL_I2C_Master_Transmit(&hi2c1, AHT20_SLAVE_ADDRESS, &tmp, 1, 0xFFFF);
}

/**
  * @brief  AHT20 软复位命令
  * @param  void
  * @retval void
  */
static void AHT20_SoftResetCmd(void)
{
    uint8_t tmp = AHT20_SoftReset;
    HAL_I2C_Master_Transmit(&hi2c1, AHT20_SLAVE_ADDRESS, &tmp, 1, 0xFFFF);
}

/**
  * @brief  AHT20 触发测量命令
  * @param  void
  * @retval void
  */
static void AHT20_TrigMeasureCmd(void)
{
    static uint8_t tmp[3] = {AHT20_TrigMeasure_COMD, 0x33, 0x00};
    HAL_I2C_Master_Transmit(&hi2c1, AHT20_SLAVE_ADDRESS, tmp, 3, 0xFFFF);
}


/**
  * @brief  AHT20 设备初始化
  * @param  void
  * @retval uint8_t：0 - 初始化AHT20设备成功; 1 - 初始化AHT20失败，可能设备不存在或器件已损坏
  */
uint8_t AHT20_Init(void)
{
    uint8_t rcnt = 2+1;//软复位命令 重试次数，2次
    uint8_t icnt = 2+1;//初始化命令 重试次数，2次

    while(--rcnt)
    {
        icnt = 2+1;

        HAL_Delay(40);//上电后要等待40ms
        // 读取温湿度之前，首先检查[校准使能位]是否为1
        while((!AHT20_ReadCalEnableCmd()) && (--icnt))// 2次重试机会
        {
            HAL_Delay(1);
            // 如果不为1，要发送初始化命令
            AHT20_IcInitCmd();
            HAL_Delay(40);//这个时间手册没说，按上电时间算40ms
        }

        if(icnt)//[校准使能位]为1,校准正常
        {
            break;//退出rcnt循环
        }
        else//[校准使能位]为0,校准错误
        {
            AHT20_SoftResetCmd();//软复位AHT20器件，重试
            HAL_Delay(20);//这个时间手册标明不超过20ms.
        }
    }

    if(rcnt)
    {
        return 0;// AHT20设备初始化正常
    }
    else
    {
        return 1;// AHT20设备初始化失败
    }
}

/**
  * @brief  AHT20 寄存器复位
  * @param  void
  * @retval void
  */
static void AHT20_Register_Reset(uint8_t addr)
{
    uint8_t  iic_tx[3] = {0}, iic_rx[3] = {0};

    iic_tx[0] = addr;
    HAL_I2C_Master_Transmit(&hi2c1, AHT20_SLAVE_ADDRESS, iic_tx, 3, 0xFFFF);
    HAL_Delay(5);
    HAL_I2C_Master_Receive(&hi2c1, AHT20_SLAVE_ADDRESS, iic_rx, 3, 0xFFFF);
    HAL_Delay(10);
    iic_tx[0] = 0xB0 | addr;
    iic_tx[1] = iic_rx[1];
    iic_tx[2] = iic_rx[2];
    HAL_I2C_Master_Transmit(&hi2c1, AHT20_SLAVE_ADDRESS, iic_tx, 3, 0xFFFF);
    HAL_Delay(10);
}


/**
  * @brief  AHT20 设备开始初始化
  * @param  void
  * @retval void
  */
void AHT20_Start_Init(void)
{
    static uint8_t    temp[3] = {0x1B, 0x1C, 0x1E}, i;
    for(i = 0; i < 3; i++)
    {
        AHT20_Register_Reset(temp[i]);
    }
}



/**
  * @brief  AHT20 设备读取 相对湿度和温度（原始数据20Bit）
  * @param  uint32_t *HT：存储20Bit原始数据的uint32数组
  * @retval uint8_t：0-读取数据正常; 1-读取设备失败，设备一直处于忙状态，不能获取数据
  */
uint8_t AHT20_ReadHT(uint32_t *HT)
{
    uint8_t cnt=3+1;//忙标志 重试次数，3次
    uint8_t tmp[6];
    uint32_t RetuData = 0;

    // 发送触发测量命令
    AHT20_TrigMeasureCmd();

    do{
        HAL_Delay(75);//等待75ms待测量完成，忙标志Bit7为0
    }while(AHT20_ReadBusyCmd() && (--cnt));//重试3次

    if(cnt)//设备闲，可以读温湿度数据
    {
        HAL_Delay(5);
        // 读温湿度数据
        HAL_I2C_Master_Receive(&hi2c1, AHT20_SLAVE_ADDRESS, tmp, 6, 0XFFFF);
        // 计算相对湿度RH。原始值，未计算为标准单位%。
        RetuData = 0;
        RetuData = (RetuData|tmp[1]) << 8;
        RetuData = (RetuData|tmp[2]) << 8;
        RetuData = (RetuData|tmp[3]);
        RetuData = RetuData >> 4;
        HT[0] = RetuData;

        // 计算温度T。原始值，未计算为标准单位°C。
        RetuData = 0;
        RetuData = (RetuData|tmp[3]) << 8;
        RetuData = (RetuData|tmp[4]) << 8;
        RetuData = (RetuData|tmp[5]);
        RetuData = RetuData&0xfffff;
        HT[1] = RetuData;

        return 0;
    }
    else//设备忙，返回读取失败
    {
        return 1;
    }
}

/**
  * @brief  AHT20 温湿度信号转换（由20Bit原始数据，转换为标准单位RH=%，T=°C）
  * @param  struct m_AHT20* aht：存储AHT20传感器信息的结构体
  * @retval uint8_t：0-计算数据正常; 1-计算数据失败，计算值超出元件手册规格范围
  */
uint8_t StandardUnitCon(AHT20_StructureTypedef *aht)
{
    aht->RH = (double)aht->HT[0] *100 / 1048576;//2^20=1048576 //原式：(double)aht->HT[0] / 1048576 *100，为了浮点精度改为现在的
    aht->Temp = (double)aht->HT[1] *200 / 1048576 -50;

    //限幅,RH=0~100%; Temp=-40~85°C
    if((aht->RH >=0)&&(aht->RH <=10000) && (aht->Temp >=-4000)&&(aht->Temp <=8500))
    {
        aht->flag = 0;
        return 0;//测量数据正常
    }
    else
    {
        aht->flag = 1;
        return 1;//测量数据超出范围，错误
    }
}


/**
  * @brief  AHT20 温湿度信号转换（由20Bit原始数据，转换为标准单位RH=%，T=°C）
  * @param  struct m_AHT20* aht：存储AHT20传感器信息的结构体
  * @retval uint8_t：0-计算数据正常; 1-计算数据失败，计算值超出元件手册规格范围
  */
uint8_t AHT20_Get_Value(AHT20_StructureTypedef *p)
{
    uint8_t   temp = 0;

    temp = AHT20_ReadHT(p->HT);

    if(temp == 0)
    {
        temp = StandardUnitCon(p);
    }

    return temp;
}
