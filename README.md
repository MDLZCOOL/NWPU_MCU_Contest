# NWPU_MCU_Contest

注意：Git不包含“其他文档及演示幻灯片”目录

## 目录结构

├─STM32相关手册
├─其他文档及演示幻灯片
└─工程文件
    ├─Core
    │  ├─Inc
    │  └─Src
    ├─Drivers
    │  ├─CMSIS
    │  │  ├─Device
    │  │  │  └─ST
    │  │  │      └─STM32H7xx
    │  │  │          ├─Include
    │  │  │          └─Source
    │  │  │              └─Templates
    │  │  └─Include
    │  ├─STM32H7xx_HAL_Driver
    │  │  ├─Inc
    │  │  │  └─Legacy
    │  │  └─Src
    │  │      └─.idea
    │  └─User
    │      ├─Inc
    │      └─Src
    │          └─.idea
    ├─FatFs
    ├─LogicCode
    ├─LVGL
    │  ├─demos
    │  │  ├─benchmark
    │  │  │  └─assets
    │  │  ├─keypad_encoder
    │  │  ├─music
    │  │  │  └─assets
    │  │  ├─stress
    │  │  └─widgets
    │  │      └─assets
    │  ├─examples
    │  │  └─porting
    │  ├─my_gui
    │  │  ├─custom
    │  │  └─generated
    │  │      ├─guider_customer_fonts
    │  │      ├─guider_fonts
    │  │      ├─images
    │  │      └─MicroPython
    │  └─src
    │      ├─core
    │      ├─draw
    │      │  ├─arm2d
    │      │  ├─nxp
    │      │  │  ├─pxp
    │      │  │  └─vglite
    │      │  ├─sdl
    │      │  ├─stm32_dma2d
    │      │  ├─sw
    │      │  └─swm341_dma2d
    │      ├─extra
    │      │  ├─layouts
    │      │  │  ├─flex
    │      │  │  └─grid
    │      │  ├─libs
    │      │  │  ├─bmp
    │      │  │  ├─ffmpeg
    │      │  │  ├─freetype
    │      │  │  ├─fsdrv
    │      │  │  ├─gif
    │      │  │  ├─png
    │      │  │  ├─qrcode
    │      │  │  ├─rlottie
    │      │  │  └─sjpg
    │      │  ├─others
    │      │  │  ├─fragment
    │      │  │  ├─gridnav
    │      │  │  ├─ime
    │      │  │  ├─imgfont
    │      │  │  ├─monkey
    │      │  │  ├─msg
    │      │  │  └─snapshot
    │      │  ├─themes
    │      │  │  ├─basic
    │      │  │  ├─default
    │      │  │  └─mono
    │      │  └─widgets
    │      │      ├─animimg
    │      │      ├─calendar
    │      │      ├─chart
    │      │      ├─colorwheel
    │      │      ├─imgbtn
    │      │      ├─keyboard
    │      │      ├─led
    │      │      ├─list
    │      │      ├─menu
    │      │      ├─meter
    │      │      ├─msgbox
    │      │      ├─span
    │      │      ├─spinbox
    │      │      ├─spinner
    │      │      ├─tabview
    │      │      ├─tileview
    │      │      └─win
    │      ├─font
    │      ├─hal
    │      ├─misc
    │      └─widgets
    ├─MDK-ARM
    │  ├─DebugConfig
    │  ├─RTE
    │  │  ├─_EXT_Flash_SPI
    │  │  └─_STM32H750XBH6
    │  └─STM32H750XBH6
    └─Sensors
        ├─AHT20
        ├─BMP280
        └─I2C_dependent

## 文件夹索引

| 文件夹名称           | 内容                                |
| -------------------- | ----------------------------------- |
| STM32相关手册        | 存放STM32H7数据手册等手册           |
| 工程文件             | 存放工程源文件，MDK-ARM+arm-gcc工程 |
| 其他文档及演示幻灯片 | 存放其他文档及演示幻灯片            |

如有其他疑问，请联系邮箱: mdlzcool@foxmail.com

MDLZCOOL 2024/7/8

