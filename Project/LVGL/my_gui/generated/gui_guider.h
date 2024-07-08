/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *g_kb_screen;
	lv_obj_t *screen_cont_1;
	lv_obj_t *screen_spangroup_1;
	lv_obj_t *screen_spangroup_3;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_spinner_1;
	lv_obj_t *screen_spangroup_4;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *g_kb_screen_1;
	lv_obj_t *screen_1_cont_1;
	lv_obj_t *screen_1_btn_2;
	lv_obj_t *screen_1_btn_2_label;
	lv_obj_t *screen_1_btn_1;
	lv_obj_t *screen_1_btn_1_label;
	lv_obj_t *screen_1_btn_3;
	lv_obj_t *screen_1_btn_3_label;
	lv_obj_t *screen_1_spangroup_2;
	lv_obj_t *screen_1_spangroup_1;
	lv_obj_t *screen_1_label_2;
	lv_obj_t *screen_1_label_3;
	lv_obj_t *screen_1_label_4;
	lv_obj_t *screen_1_label_5;
	lv_obj_t *screen_1_label_6;
	lv_obj_t *screen_1_label_7;
	lv_obj_t *screen_1_label_8;
	lv_obj_t *screen_1_label_9;
	lv_obj_t *screen_1_label_10;
	lv_obj_t *screen_1_label_11;
	lv_obj_t *screen_1_label_12;
	lv_obj_t *screen_1_label_13;
	lv_obj_t *screen_1_msgbox_1;
	lv_obj_t *screen_1_cont_2;
	lv_obj_t *screen_1_ta_1;
	lv_obj_t *screen_1_label_14;
	lv_obj_t *screen_1_label_15;
	lv_obj_t *screen_1_btn_4;
	lv_obj_t *screen_1_btn_4_label;
	lv_obj_t *screen_1_cont_3;
	lv_obj_t *screen_1_label_16;
	lv_obj_t *screen_1_label_17;
	lv_obj_t *screen_1_btn_5;
	lv_obj_t *screen_1_btn_5_label;
	lv_obj_t *screen_1_label_1;
	lv_obj_t *screen_2;
	bool screen_2_del;
	lv_obj_t *g_kb_screen_2;
	lv_obj_t *screen_2_cont_1;
	lv_obj_t *screen_2_spangroup_4;
	lv_obj_t *screen_2_spangroup_3;
	lv_obj_t *screen_2_btn_1;
	lv_obj_t *screen_2_btn_1_label;
	lv_obj_t *screen_2_slider_1;
	lv_obj_t *screen_2_sw_1;
	lv_obj_t *screen_2_btn_2;
	lv_obj_t *screen_2_btn_2_label;
	lv_obj_t *screen_2_btn_3;
	lv_obj_t *screen_2_btn_3_label;
	lv_obj_t *screen_2_ddlist_1;
	lv_obj_t *screen_2_img_1;
	lv_obj_t *screen_2_img_2;
	lv_obj_t *screen_2_img_3;
	lv_obj_t *screen_2_label_7;
	lv_obj_t *screen_2_img_4;
	lv_obj_t *screen_2_ddlist_2;
	lv_obj_t *screen_2_label_3;
	lv_obj_t *screen_2_label_6;
	lv_obj_t *screen_2_label_5;
	lv_obj_t *screen_2_label_2;
	lv_obj_t *screen_3;
	bool screen_3_del;
	lv_obj_t *g_kb_screen_3;
	lv_obj_t *screen_3_cont_1;
	lv_obj_t *screen_3_btn_2;
	lv_obj_t *screen_3_btn_2_label;
	lv_obj_t *screen_3_label_1;
	lv_obj_t *screen_3_label_2;
	lv_obj_t *screen_3_label_3;
	lv_obj_t *screen_3_label_4;
	lv_obj_t *screen_3_label_5;
	lv_obj_t *screen_3_label_6;
	lv_obj_t *screen_3_img_1;
	lv_obj_t *screen_3_img_2;
	lv_obj_t *screen_3_img_3;
	lv_obj_t *screen_3_btn_3;
	lv_obj_t *screen_3_btn_3_label;
	lv_obj_t *screen_3_btn_4;
	lv_obj_t *screen_3_btn_4_label;
	lv_obj_t *screen_3_btn_5;
	lv_obj_t *screen_3_btn_5_label;
	lv_obj_t *screen_3_label_7;
	lv_obj_t *screen_3_label_8;
	lv_obj_t *screen_3_label_9;
	lv_obj_t *screen_3_spangroup_4;
	lv_obj_t *screen_3_spangroup_3;
	lv_obj_t *screen_3_label_10;
	lv_obj_t *screen_4;
	bool screen_4_del;
	lv_obj_t *g_kb_screen_4;
	lv_obj_t *screen_4_cont_1;
	lv_obj_t *screen_4_chart_1;
	lv_chart_series_t *screen_4_chart_1_0;
	lv_obj_t *screen_4_spangroup_2;
	lv_obj_t *screen_4_btn_1;
	lv_obj_t *screen_4_btn_1_label;
	lv_obj_t *screen_4_spangroup_1;
	lv_obj_t *screen_4_label_2;
	lv_obj_t *screen_4_label_3;
	lv_obj_t *screen_4_label_4;
	lv_obj_t *screen_4_label_1;
	lv_obj_t *screen_5;
	bool screen_5_del;
	lv_obj_t *g_kb_screen_5;
	lv_obj_t *screen_5_cont_1;
	lv_obj_t *screen_5_chart_1;
	lv_chart_series_t *screen_5_chart_1_0;
	lv_obj_t *screen_5_spangroup_1;
	lv_obj_t *screen_5_spangroup_2;
	lv_obj_t *screen_5_btn_1;
	lv_obj_t *screen_5_btn_1_label;
	lv_obj_t *screen_5_label_2;
	lv_obj_t *screen_5_label_3;
	lv_obj_t *screen_5_label_4;
	lv_obj_t *screen_5_label_1;
	lv_obj_t *screen_6;
	bool screen_6_del;
	lv_obj_t *g_kb_screen_6;
	lv_obj_t *screen_6_cont_1;
	lv_obj_t *screen_6_btn_1;
	lv_obj_t *screen_6_btn_1_label;
	lv_obj_t *screen_6_spangroup_1;
	lv_obj_t *screen_6_chart_1;
	lv_chart_series_t *screen_6_chart_1_0;
	lv_obj_t *screen_6_label_3;
	lv_obj_t *screen_6_spangroup_2;
	lv_obj_t *screen_6_label_2;
	lv_obj_t *screen_6_label_4;
	lv_obj_t *screen_6_label_1;
	lv_obj_t *about;
	bool about_del;
	lv_obj_t *g_kb_about;
	lv_obj_t *about_cont_1;
	lv_obj_t *about_btn_1;
	lv_obj_t *about_btn_1_label;
	lv_obj_t *about_img_1;
	lv_obj_t *about_spangroup_1;
	lv_obj_t *about_spangroup_2;
	lv_obj_t *about_label_2;
	lv_obj_t *about_label_3;
	lv_obj_t *about_label_4;
	lv_obj_t *about_label_5;
	lv_obj_t *about_spangroup_3;
	lv_obj_t *about_qrcode_1;
	lv_obj_t *about_label_1;
	lv_obj_t *usage;
	bool usage_del;
	lv_obj_t *g_kb_usage;
	lv_obj_t *usage_cont_1;
	lv_obj_t *usage_btn_1;
	lv_obj_t *usage_btn_1_label;
	lv_obj_t *usage_btn_2;
	lv_obj_t *usage_btn_2_label;
	lv_obj_t *usage_spangroup_1;
	lv_obj_t *usage_spangroup_2;
	lv_obj_t *usage_spangroup_3;
	lv_obj_t *usage_img_1;
	lv_obj_t *usage_img_2;
	lv_obj_t *usage_img_3;
	lv_obj_t *usage_img_4;
	lv_obj_t *usage_label_1;
	lv_obj_t *usage_qrcode_1;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);
void setup_scr_screen_2(lv_ui *ui);
void setup_scr_screen_3(lv_ui *ui);
void setup_scr_screen_4(lv_ui *ui);
void setup_scr_screen_5(lv_ui *ui);
void setup_scr_screen_6(lv_ui *ui);
void setup_scr_about(lv_ui *ui);
void setup_scr_usage(lv_ui *ui);
LV_IMG_DECLARE(_NWPU_LOGO_alpha_200x200);
LV_IMG_DECLARE(_brightness_alpha_50x50);
LV_IMG_DECLARE(_bluetooth_alpha_40x40);
LV_IMG_DECLARE(_GPS_alpha_50x50);
LV_IMG_DECLARE(_time_alpha_50x50);
LV_IMG_DECLARE(_pressure_alpha_70x70);
LV_IMG_DECLARE(_temp_alpha_70x70);
LV_IMG_DECLARE(_humi_alpha_80x80);
LV_IMG_DECLARE(_NWPU_LOGO_alpha_120x120);
LV_IMG_DECLARE(_logo_lvgl_alpha_184x70);
LV_IMG_DECLARE(_Espressif_Standard_Logo_CN_Horizontal_alpha_231x70);
LV_IMG_DECLARE(_STM32_alpha_70x70);
LV_IMG_DECLARE(_NXP_Logo_RGB_Colour_alpha_180x90);

LV_FONT_DECLARE(lv_font_nwpuname_50)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_50)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_20)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_30)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_16)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_12)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_14)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_25)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_21)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_18)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_40)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_25)
LV_FONT_DECLARE(lv_font_nwpuname_25)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_30)


#ifdef __cplusplus
}
#endif
#endif
