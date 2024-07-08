#include "main.h"
#include "led.h"
#include "usart.h"
#include "sdram.h"
#include "lcd_rgb.h"
#include "lcd_pwm.h"
#include "touch_800x480.h"
#include "i2c.h"
#include "tim.h"

#include "gui_guider.h"
#include "events_init.h"

#include "lvgl.h"
#include "lv_port_disp_template.h"
#include "lv_port_indev_template.h"
#include "aht20.h"
#include "bmp280.h"

#include "gui_guider.h"
#include "swapArray.h"

#include "sdmmc_sd.h"
#include "ff.h"
#include "ff_gen_drv.h"
#include "sd_diskio.h"
#include <string.h>

#include "rtc.h"

FATFS SD_FatFs;        // 文件系统对象
FRESULT MyFile_Res;    // 操作结果
char SDPath[4] = {0};            // SD卡逻辑驱动路径
char SDInfo[20] = {0};
/**************************************************************************************************/
#define NO_SD 1
#define YES_SD 0

#define BTH_STATE HAL_GPIO_ReadPin(BTH_STATE_GPIO_Port, BTH_STATE_Pin)

int is_file_empty(const char* path) {
    FILINFO fno;
    FRESULT res;

    // 获取文件信息
    res = f_stat(path, &fno);
    if (res == FR_OK) {
        // 检查文件大小
        if (fno.fsize == 0) {
            return 1; // 文件为空
        } else {
            return 0; // 文件不为空
        }
    } else {
        // 错误处理，如文件不存在
        return -1; // 无法获取文件信息
    }
}

//	函数：FatFs_Check
//	功能：进行FatFs文件系统的挂载
//
int FatFs_Check(void)    //判断FatFs是否挂载成功，若没有创建FatFs则格式化SD卡
{
    BYTE work[FF_MAX_SS];
    FATFS_LinkDriver(&SD_Driver, SDPath);        // 初始化驱动
    MyFile_Res = f_mount(&SD_FatFs, "0:", 1);    //	挂载SD卡
    if (MyFile_Res == FR_OK)    //判断是否挂载成功
    {
        printf("[Debug info] SD file system mounted successfully\r\n");
        return YES_SD;
    } else {
        printf("[Debug info] The SD card has not created a file system yet\r\n");
        return NO_SD;
    }
}

//	函数：FatFs_GetVolume
//	功能：计算设备的容量，包括总容量和剩余容量
//
void FatFs_GetVolume(void)    // 计算设备容量
{
    FATFS *fs;        //定义结构体指针
    uint32_t SD_CardCapacity = 0;        //SD卡的总容量
    uint32_t SD_FreeCapacity = 0;        //SD卡空闲容量
    float sdcard_left_volume_gb = 0.0f;
    float sdcard_total_volume_gb = 0.0f;
    DWORD fre_clust, fre_sect, tot_sect;    //空闲簇，空闲扇区数，总扇区数

    f_getfree("0:", &fre_clust, &fs);            //获取SD卡剩余的簇

    tot_sect = (fs->n_fatent - 2) * fs->csize;    //总扇区数量 = 总的簇 * 每个簇包含的扇区数
    fre_sect = fre_clust * fs->csize;            //计算剩余的可用扇区数

    SD_CardCapacity = tot_sect / 2048;    // SD卡总容量 = 总扇区数 * 512( 每扇区的字节数 ) / 1048576(换算成MB)
    SD_FreeCapacity = fre_sect / 2048;    //计算剩余的容量，单位为M
//    printf("[Debug info] -------------------Get device capacity information-----------------\r\n");
    sdcard_left_volume_gb = SD_FreeCapacity / 1024.0f;
    sdcard_total_volume_gb = SD_CardCapacity / 1024.0f;
    sprintf(SDInfo, "%.1fGB/%.1fGB", sdcard_total_volume_gb - sdcard_left_volume_gb, sdcard_total_volume_gb);
//    printf("[Debug info] SD capacity: %dMB\r\n", SD_CardCapacity);
//    printf("[Debug info] SD left: %dMB\r\n", SD_FreeCapacity);
}

uint8_t FatFs_New_Folder(const TCHAR *path) {
    FRESULT res;
    res = f_mkdir(path);
    if (FR_OK != res) {
        printf("new folder failed!\r\n");
        printf("error code: %d\r\n", res);
    }
}

//	函数：FatFs_FileTest
//	功能：进行文件写入和读取测试
//
uint8_t FatFs_FileWrite(BYTE *MyFile_WriteBuffer, const TCHAR *path) {
    FIL MyFile;            // 文件对象
    UINT *bw;
    MyFile_Res = f_open(&MyFile, path, FA_OPEN_ALWAYS | FA_WRITE);
    if (MyFile_Res != FR_OK) {
        printf("file wirte error code is %d\r\n", MyFile_Res);
    }
    f_lseek(&MyFile, f_size(&MyFile));
    f_write(&MyFile, MyFile_WriteBuffer, strlen(MyFile_WriteBuffer), bw);
    f_close(&MyFile); // 结束SD写入且保存 避免断电丢失数据
}

#define __aht20__
#define __bmp280__
int res_sd;
lv_ui guider_ui;
lv_coord_t postemparray[20] = {0};
lv_coord_t poshumiarray[20] = {0};
lv_coord_t pospressarray[20] = {0};
lv_coord_t newtemparray[20] = {0};
lv_coord_t newhumiarray[20] = {0};
lv_coord_t newpressarray[20] = {0};
int timeStampFlag = 0;
char buf_time[16] = {0};
char buf_date[16] = {0};
int timeflag = 0; // 一秒刷新一次时间
extern RTC_HandleTypeDef hrtc;    // RTC句柄

RTC_TimeTypeDef Time_Struct;        // 日期
RTC_DateTypeDef Date_Struct;        // 时间

/* USER CODE BEGIN 0 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (TIM5 == htim->Instance) {
        timeflag = 1;
        HAL_RTC_GetTime(&hrtc, &Time_Struct, RTC_FORMAT_BIN);    // 获取时间
        HAL_RTC_GetDate(&hrtc, &Date_Struct, RTC_FORMAT_BIN);    // 获取日期
        sprintf(buf_time, "%02d:%02d:%02d", Time_Struct.Hours, Time_Struct.Minutes, Time_Struct.Seconds);
        sprintf(buf_date, "%02d-%02d-%02d", Date_Struct.Year + 2000, Date_Struct.Month, Date_Struct.Date);
    }
}

void RTC_SetTime(uint8_t HH, uint8_t MM, uint8_t SS) {
    RTC_TimeTypeDef sTime;
    sTime.Hours = HH;
    sTime.Minutes = MM;
    sTime.Seconds = SS;
    if (HAL_RTC_SetTime(&hrtc, &sTime, RTC_FORMAT_BIN) != HAL_OK) {
        Error_Handler();
    }
}

static void RTC_SetDate (uint8_t YY, uint8_t MM, uint8_t DD)
{
    RTC_DateTypeDef sDate;
    sDate.WeekDay = RTC_WEEKDAY_MONDAY;
    sDate.Month = MM;
    sDate.Date = DD;
    sDate.Year = YY;
    if (HAL_RTC_SetDate(&hrtc, &sDate, RTC_FORMAT_BIN) != HAL_OK)
    {
        Error_Handler();
    }
}

int isFirstTimeUseTheFile = 0;

void printData(int flag) {
    char file_path[30] = {0};
    char buf_data_excel[128] = "     DATA,TIME,TEMP_0,HUMI,TEMP_1,PRESSURE\r\n";
    char buf_data_bth[128] = {0};
    sprintf(file_path, "0:DATA/%s.csv", buf_date);
    if (1 == timeflag) {
        if (isFirstTimeUseTheFile == 0 && is_file_empty(file_path)) {
            isFirstTimeUseTheFile = 1;
        } else {
            if (0 == flag) {
                sprintf(buf_data_excel, "     ,,%.2f , %.2f , %.2f , %.2f              \r\n",
                        Humiture.Temp,
                        Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
                sprintf(buf_data_bth, "[log] Temp: %.2f RH: %.2f%%RH Internal_Temp: %.2f Atmo_Pressure: %.2fhPa\r\n",
                        Humiture.Temp,
                        Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
            } else if (1 == flag) {
                sprintf(buf_data_excel,
                        "     %s , %s , %.2f , %.2f , %.2f , %.2f              \r\n",
                        buf_date, buf_time, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
                sprintf(buf_data_bth, "[log] [%s %s] Temp: %.2f RH: %.2f%%RH Internal_Temp: %.2f Atmo_Pressure: %.2fhPa\r\n",
                        buf_date, buf_time, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
            } else if (2 == flag) {
                sprintf(buf_data_excel,
                        "     %s , %s , %.2f , %.2f , %.2f , %.2f              \r\n",
                        buf_time, buf_date, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
                sprintf(buf_data_bth, "[log] [%s %s] Temp: %.2f RH: %.2f%%RH Internal_Temp: %.2f Atmo_Pressure: %.2fhPa\r\n",
                        buf_time, buf_date, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
            } else if (3 == flag) {
                sprintf(buf_data_excel, "     %s, , %.2f , %.2f , %.2f , %.2f              \r\n",
                        buf_date, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
                sprintf(buf_data_bth, "[log] [%s] Temp: %.2f RH: %.2f%%RH Internal_Temp: %.2f Atmo_Pressure: %.2fhPa\r\n",
                        buf_date, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
            } else if (4 == flag) {
                sprintf(buf_data_excel, "     ,%s , %.2f , %.2f , %.2f , %.2f              \r\n",
                        buf_time, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
                sprintf(buf_data_bth, "[log] [%s] Temp: %.2f RH: %.2f%%RH Internal_Temp: %.2f Atmo_Pressure: %.2fhPa\r\n",
                        buf_time, Humiture.Temp, Humiture.RH, Bmp280_Data.Internal_Temp,
                        10 * Bmp280_Data.Atmo_Pressure);
            }
        }
        timeflag = 0;
        HAL_UART_Transmit(&huart2, buf_data_bth, sizeof(buf_data_bth), HAL_MAX_DELAY);
        printf("%s", buf_data_bth);
        if (res_sd == FR_OK){
            FatFs_FileWrite(buf_data_excel, file_path);
        }
    } else return;
//    }
}
/* USER CODE END 0 */


/********************************************** 函数声明 *******************************************/

void SystemClock_Config(void);        // 时钟初始化
void MPU_Config(void);                    // MPU配置

/***************************************************************************************************
*	函 数 名: main
*	入口参数: 无
*	返 回 值: 无
*	函数功能: LTDC驱动屏幕测试
*	说    明: 无
****************************************************************************************************/

int main(void) {
    MPU_Config();                // MPU配置
    SCB_EnableICache();        // 使能ICache
    SCB_EnableDCache();        // 使能DCache
    HAL_Init();                    // 初始化HAL库
    SystemClock_Config();    // 配置系统时钟，主频480MHz
    LED_Init();                    // 初始化LED引脚

    BTH_EN_Init();
    BTH_STATE_Init();

    MX_FMC_Init();                // SDRAM初始化
    USART1_Init();                // USART1初始化	，
    USART2_Init();                // USART1初始化	，
    MX_I2C1_Init();
    MX_LTDC_Init();            // LTDC以及层初始化
//    MX_USB_DEVICE_Init();
    MX_TIM5_Init();
//    MX_SDMMC1_SD_Init();
//    MX_FATFS_Init();
    MX_RTC_Init();
    RTC_SetTime(14, 30, 0);
    RTC_SetDate(24, 7, 8);
    HAL_TIM_Base_Start_IT(&htim5);
    LCD_PWMinit(55);            // 背光引脚PWM初始化，占空比40%
    Touch_Init();                // 触摸屏初始化
    if (AHT20_Init() != 0) {
        Humiture.alive = 0;
    } else {
        Humiture.alive = 1;
    }
    Bmp_Init();
    lv_init();                    //	LVGL初始化
    lv_port_disp_init();        //	LVGL显示接口初始化
    lv_port_indev_init();    // LVGL触摸接口初始化
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    res_sd = FatFs_Check();
    if (NO_SD != res_sd) {
        FatFs_GetVolume();    // 计算设备容量
        FatFs_New_Folder("DATA");
    }
//    }else lv_label_set_text(guider_ui.screen_1_label_11,"未接入SDCard");
    int first_bth_flag = 1;
    int i = 0;
    char buf_tmp[18] = {0};
    while (1) {
        i++;
        if (9 == i) {
            AHT20_Get_Value(&Humiture);
            BMP280_Read();
            printData(timeStampFlag);
            if (guider_ui.screen_4 == lv_scr_act()) {
                sprintf(buf_tmp, "%.2f", Humiture.Temp);
                lv_label_set_text(guider_ui.screen_4_label_3, buf_tmp);
                SwapArrayAndIncreaseNewMemberGeneric(newtemparray, postemparray, Humiture.Temp,
                                                     sizeof(postemparray) / sizeof(lv_coord_t));
                SwapArray(postemparray, newtemparray, sizeof(postemparray) / sizeof(lv_coord_t));
                lv_chart_refresh(guider_ui.screen_4_chart_1);
            } else if (guider_ui.screen_3 == lv_scr_act()) {
                sprintf(buf_tmp, "%.2f", Humiture.Temp);
                lv_label_set_text(guider_ui.screen_3_label_2, buf_tmp);
                sprintf(buf_tmp, "%.2f", Humiture.RH);
                lv_label_set_text(guider_ui.screen_3_label_4, buf_tmp);
                sprintf(buf_tmp, "%.2f", 10 * Bmp280_Data.Atmo_Pressure);
                lv_label_set_text(guider_ui.screen_3_label_6, buf_tmp);
            } else if (guider_ui.screen_5 == lv_scr_act()) {
                sprintf(buf_tmp, "%.2f", Humiture.RH);
                lv_label_set_text(guider_ui.screen_5_label_3, buf_tmp);
                SwapArrayAndIncreaseNewMemberGeneric(newhumiarray, poshumiarray, Humiture.RH,
                                                     sizeof(poshumiarray) / sizeof(lv_coord_t));
                SwapArray(poshumiarray, newhumiarray, sizeof(poshumiarray) / sizeof(lv_coord_t));
                lv_chart_refresh(guider_ui.screen_5_chart_1);
            } else if (guider_ui.screen_6 == lv_scr_act()) {
                sprintf(buf_tmp, "%.2f", 10 * Bmp280_Data.Atmo_Pressure);
                lv_label_set_text(guider_ui.screen_6_label_3, buf_tmp);
                SwapArrayAndIncreaseNewMemberGeneric(newpressarray, pospressarray, 10 * Bmp280_Data.Atmo_Pressure,
                                                     sizeof(pospressarray) / sizeof(lv_coord_t));
                SwapArray(pospressarray, newpressarray, sizeof(pospressarray) / sizeof(lv_coord_t));
                lv_chart_refresh(guider_ui.screen_6_chart_1);
            } else if (guider_ui.screen_1 == lv_scr_act()) {
                if (NO_SD != res_sd) {
                    lv_label_set_text(guider_ui.screen_1_label_11, SDInfo);
                }
                lv_label_set_text(guider_ui.screen_1_label_8, buf_time);
                if (BTH_STATE == 1){
                    lv_label_set_text(guider_ui.screen_1_label_9, "鍦ㄧ嚎");
                }else lv_label_set_text(guider_ui.screen_1_label_9, "绂荤嚎");
            } else if (guider_ui.screen_2 == lv_scr_act()){
                int res;
                if (first_bth_flag == 1){
                    lv_obj_add_state(guider_ui.screen_2_sw_1, LV_STATE_CHECKED);
                    first_bth_flag = 0;
                }
                res = lv_obj_has_state(guider_ui.screen_2_sw_1, LV_STATE_CHECKED);
                if (1 == res){
                    HAL_GPIO_WritePin(BTH_EN_GPIO_Port, BTH_EN_Pin, GPIO_PIN_RESET);
                } else if (0 == res){
                    HAL_GPIO_WritePin(BTH_EN_GPIO_Port, BTH_EN_Pin, GPIO_PIN_SET);
                }
            }
        } else if (10 == i) {
            i = 0;
        }
        lv_task_handler();    // LVGL进程
        Touch_Scan();            // 触摸扫描，扫描频率不能低于10ms
        HAL_Delay(10);
        LED1_Toggle;            // LED闪烁
    }
}
/****************************************************************************************************/
/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow : 
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 480000000 (CPU Clock)
  *            HCLK(Hz)                       = 240000000 (AXI and AHBs Clock)
  *            AHB Prescaler                  = 2
  *            D1 APB3 Prescaler              = 2 (APB3 Clock  120MHz)
  *            D2 APB1 Prescaler              = 2 (APB1 Clock  120MHz)
  *            D2 APB2 Prescaler              = 2 (APB2 Clock  120MHz)
  *            D3 APB4 Prescaler              = 2 (APB4 Clock  120MHz)
  *            HSE Frequency(Hz)              = 25000000
  *            PLL_M                          = 5
  *            PLL_N                          = 192
  *            PLL_P                          = 2
  *            PLL_Q                          = 2
  *            PLL_R                          = 2
  *            VDD(V)                         = 3.3
  *            Flash Latency(WS)              = 4
  * @param  None
  * @retval None
  */
/****************************************************************************************************/
void SystemClock_Config(void) {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
    RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

    /** Supply configuration update enable
    */
    HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);

    /** Configure the main internal regulator output voltage
    */
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    while (!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}

    __HAL_RCC_SYSCFG_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE0);

    while (!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}

//    /** Configure LSE Drive Capability
//    */
//    HAL_PWR_EnableBkUpAccess();
//    __HAL_RCC_LSEDRIVE_CONFIG(RCC_LSEDRIVE_LOW);

    /** Macro to configure the PLL clock source
    */
    __HAL_RCC_PLL_PLLSOURCE_CONFIG(RCC_PLLSOURCE_HSE);

    /** Initializes the RCC Oscillators according to the specified parameters
    * in the RCC_OscInitTypeDef structure.
    */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 5;
    RCC_OscInitStruct.PLL.PLLN = 192;
    RCC_OscInitStruct.PLL.PLLP = 2;
    RCC_OscInitStruct.PLL.PLLQ = 4;
    RCC_OscInitStruct.PLL.PLLR = 2;
    RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_2;
    RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
    RCC_OscInitStruct.PLL.PLLFRACN = 0;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /** Initializes the CPU, AHB and APB buses clocks
    */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                  | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2
                                  | RCC_CLOCKTYPE_D3PCLK1 | RCC_CLOCKTYPE_D1PCLK1;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV2;
    RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
    RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK) {
        Error_Handler();
    }

    /* 设置LTDC时钟，这里设置为33MHz，即刷新率在60帧左右，过高或者过低都会造成闪烁 */
    /* LCD clock configuration */
    /* PLL3_VCO Input = HSE_VALUE/PLL3M = 1 Mhz */
    /* PLL3_VCO Output = PLL3_VCO Input * PLL3N = 330 Mhz */
    /* PLLLCDCLK = PLL3_VCO Output/PLL3R = 330/10 = 33 Mhz */
    /* LTDC clock frequency = PLLLCDCLK = 33 Mhz */

    PeriphClkInitStruct.PLL3.PLL3M = 25;
    PeriphClkInitStruct.PLL3.PLL3N = 330;
    PeriphClkInitStruct.PLL3.PLL3P = 2;
    PeriphClkInitStruct.PLL3.PLL3Q = 2;
    PeriphClkInitStruct.PLL3.PLL3R = 10;
    PeriphClkInitStruct.PLL3.PLL3RGE = RCC_PLL3VCIRANGE_0;
    PeriphClkInitStruct.PLL3.PLL3VCOSEL = RCC_PLL3VCOMEDIUM;
    PeriphClkInitStruct.PLL3.PLL3FRACN = 0;


    PeriphClkInitStruct.PeriphClockSelection =
            RCC_PERIPHCLK_LTDC | RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_FMC | RCC_PERIPHCLK_USART2 | RCC_PERIPHCLK_SDMMC;
    PeriphClkInitStruct.FmcClockSelection = RCC_FMCCLKSOURCE_D1HCLK;
    PeriphClkInitStruct.Usart16ClockSelection = RCC_USART16CLKSOURCE_D2PCLK2;

//    PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_SDMMC;
    PeriphClkInitStruct.SdmmcClockSelection = RCC_SDMMCCLKSOURCE_PLL;

    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK) {
        Error_Handler();
    }
}


//	配置MPU
//
void MPU_Config(void) {
    MPU_Region_InitTypeDef MPU_InitStruct;

    HAL_MPU_Disable();        // 先禁止MPU


    MPU_InitStruct.Enable = MPU_REGION_ENABLE;
    MPU_InitStruct.BaseAddress = SDRAM_BANK_ADDR;
    MPU_InitStruct.Size = MPU_REGION_SIZE_32MB;            // SDRAM
    MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
    MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
    MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
    MPU_InitStruct.IsShareable = MPU_ACCESS_NOT_SHAREABLE;
    MPU_InitStruct.Number = MPU_REGION_NUMBER1;
    MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
    MPU_InitStruct.SubRegionDisable = 0x00;
    MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

    HAL_MPU_ConfigRegion(&MPU_InitStruct);

    HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);    // 使能MPU
}


/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void) {
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the HAL error return state */
    __disable_irq();
    while (1) {
    }
    /* USER CODE END Error_Handler_Debug */
}

