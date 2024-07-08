## 硬件框架

|              MCU              | STM32H750XBH6 |
| :---------------------------: | :-----------: |
|       Bluetooth Module        |   HC-05 SPP   |
| Temperature & humidity Sensor |     AHT20     |
|       Atmosphere Sensor       |    BMP280     |
|            Screen             |  5″ RGB IPS   |

## 主要代码库

| [HAL](https://github.com/STMicroelectronics/stm32h7xx_hal_driver) |    STM32相关     |
| :----------------------------------------------------------: | :--------------: |
|          [LittleVGL](https://github.com/lvgl/lvgl)           |   图形显示相关   |
|      [FatFs](http://elm-chan.org/fsw/ff/00index_e.html)      |   文件管理相关   |
|      [EasyLogger](https://github.com/armink/EasyLogger)      | 日志记录（todo） |