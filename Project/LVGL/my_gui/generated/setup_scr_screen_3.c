/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_3(lv_ui *ui)
{
	//Write codes screen_3
	ui->screen_3 = lv_obj_create(NULL);
	ui->g_kb_screen_3 = lv_keyboard_create(ui->screen_3);
	lv_obj_add_event_cb(ui->g_kb_screen_3, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_3, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_3, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_3, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_cont_1
	ui->screen_3_cont_1 = lv_obj_create(ui->screen_3);
	lv_obj_set_pos(ui->screen_3_cont_1, 0, 0);
	lv_obj_set_size(ui->screen_3_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_3_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_3_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_3_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_3_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_3_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_2
	ui->screen_3_btn_2 = lv_btn_create(ui->screen_3_cont_1);
	ui->screen_3_btn_2_label = lv_label_create(ui->screen_3_btn_2);
	lv_label_set_text(ui->screen_3_btn_2_label, "返回");
	lv_label_set_long_mode(ui->screen_3_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_2, 335, 364);
	lv_obj_set_size(ui->screen_3_btn_2, 130, 65);

	//Write style for screen_3_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_2, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_2, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_1
	ui->screen_3_label_1 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_1, "当前温度：");
	lv_label_set_long_mode(ui->screen_3_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_1, 139, 113);
	lv_obj_set_size(ui->screen_3_label_1, 210, 45);

	//Write style for screen_3_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_2
	ui->screen_3_label_2 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_2, "TEMP");
	lv_label_set_long_mode(ui->screen_3_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_2, 341, 115);
	lv_obj_set_size(ui->screen_3_label_2, 135, 40);

	//Write style for screen_3_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_3
	ui->screen_3_label_3 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_3, "当前湿度：");
	lv_label_set_long_mode(ui->screen_3_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_3, 139, 206.5);
	lv_obj_set_size(ui->screen_3_label_3, 210, 45);

	//Write style for screen_3_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_4
	ui->screen_3_label_4 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_4, "HUMI");
	lv_label_set_long_mode(ui->screen_3_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_4, 341, 209);
	lv_obj_set_size(ui->screen_3_label_4, 135, 40);

	//Write style for screen_3_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_5
	ui->screen_3_label_5 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_5, "当前气压：");
	lv_label_set_long_mode(ui->screen_3_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_5, 139, 300.5);
	lv_obj_set_size(ui->screen_3_label_5, 210, 45);

	//Write style for screen_3_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_5, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_6
	ui->screen_3_label_6 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_6, "PRESS");
	lv_label_set_long_mode(ui->screen_3_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_6, 341, 303);
	lv_obj_set_size(ui->screen_3_label_6, 135, 40);

	//Write style for screen_3_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_6, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_img_1
	ui->screen_3_img_1 = lv_img_create(ui->screen_3_cont_1);
	lv_obj_add_flag(ui->screen_3_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_3_img_1, &_pressure_alpha_70x70);
	lv_img_set_pivot(ui->screen_3_img_1, 50,50);
	lv_img_set_angle(ui->screen_3_img_1, 0);
	lv_obj_set_pos(ui->screen_3_img_1, 46, 288);
	lv_obj_set_size(ui->screen_3_img_1, 70, 70);

	//Write style for screen_3_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_3_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_img_2
	ui->screen_3_img_2 = lv_img_create(ui->screen_3_cont_1);
	lv_obj_add_flag(ui->screen_3_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_3_img_2, &_temp_alpha_70x70);
	lv_img_set_pivot(ui->screen_3_img_2, 50,50);
	lv_img_set_angle(ui->screen_3_img_2, 0);
	lv_obj_set_pos(ui->screen_3_img_2, 46, 100);
	lv_obj_set_size(ui->screen_3_img_2, 70, 70);

	//Write style for screen_3_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_3_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_img_3
	ui->screen_3_img_3 = lv_img_create(ui->screen_3_cont_1);
	lv_obj_add_flag(ui->screen_3_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_3_img_3, &_humi_alpha_80x80);
	lv_img_set_pivot(ui->screen_3_img_3, 50,50);
	lv_img_set_angle(ui->screen_3_img_3, 0);
	lv_obj_set_pos(ui->screen_3_img_3, 41, 189);
	lv_obj_set_size(ui->screen_3_img_3, 80, 80);

	//Write style for screen_3_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_3_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_3
	ui->screen_3_btn_3 = lv_btn_create(ui->screen_3_cont_1);
	ui->screen_3_btn_3_label = lv_label_create(ui->screen_3_btn_3);
	lv_label_set_text(ui->screen_3_btn_3_label, "温度详情");
	lv_label_set_long_mode(ui->screen_3_btn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_3_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_3, 636, 105);
	lv_obj_set_size(ui->screen_3_btn_3, 120, 60);

	//Write style for screen_3_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_3, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_3, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_4
	ui->screen_3_btn_4 = lv_btn_create(ui->screen_3_cont_1);
	ui->screen_3_btn_4_label = lv_label_create(ui->screen_3_btn_4);
	lv_label_set_text(ui->screen_3_btn_4_label, "气压详情");
	lv_label_set_long_mode(ui->screen_3_btn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_4_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_4, 637, 293);
	lv_obj_set_size(ui->screen_3_btn_4, 120, 60);

	//Write style for screen_3_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_4, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_4, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_5
	ui->screen_3_btn_5 = lv_btn_create(ui->screen_3_cont_1);
	ui->screen_3_btn_5_label = lv_label_create(ui->screen_3_btn_5);
	lv_label_set_text(ui->screen_3_btn_5_label, "湿度详情");
	lv_label_set_long_mode(ui->screen_3_btn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_5_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_5, 636, 199);
	lv_obj_set_size(ui->screen_3_btn_5, 120, 60);

	//Write style for screen_3_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_5, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_5, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_7
	ui->screen_3_label_7 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_7, "°C");
	lv_label_set_long_mode(ui->screen_3_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_7, 489, 115);
	lv_obj_set_size(ui->screen_3_label_7, 135, 40);

	//Write style for screen_3_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_7, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_8
	ui->screen_3_label_8 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_8, "%RH");
	lv_label_set_long_mode(ui->screen_3_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_8, 489, 209);
	lv_obj_set_size(ui->screen_3_label_8, 135, 40);

	//Write style for screen_3_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_8, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_label_9
	ui->screen_3_label_9 = lv_label_create(ui->screen_3_cont_1);
	lv_label_set_text(ui->screen_3_label_9, "hPa");
	lv_label_set_long_mode(ui->screen_3_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_9, 489, 303);
	lv_obj_set_size(ui->screen_3_label_9, 135, 40);

	//Write style for screen_3_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_9, &lv_font_HarmonyOS_Sans_SC_Regular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_spangroup_4
	ui->screen_3_spangroup_4 = lv_spangroup_create(ui->screen_3_cont_1);
	lv_spangroup_set_align(ui->screen_3_spangroup_4, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_3_spangroup_4, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_3_spangroup_4, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_3_spangroup_4_span;
	screen_3_spangroup_4_span = lv_spangroup_new_span(ui->screen_3_spangroup_4);
	lv_span_set_text(screen_3_spangroup_4_span, "单片机实验技能大赛");
	lv_style_set_text_color(&screen_3_spangroup_4_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_3_spangroup_4_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_3_spangroup_4_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->screen_3_spangroup_4, 328, 9);
	lv_obj_set_size(ui->screen_3_spangroup_4, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_3_spangroup_4_main_main_default
	static lv_style_t style_screen_3_spangroup_4_main_main_default;
	ui_init_style(&style_screen_3_spangroup_4_main_main_default);
	
	lv_style_set_border_width(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_radius(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_3_spangroup_4_main_main_default, 0);
	lv_obj_add_style(ui->screen_3_spangroup_4, &style_screen_3_spangroup_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_3_spangroup_4);

	//Write codes screen_3_spangroup_3
	ui->screen_3_spangroup_3 = lv_spangroup_create(ui->screen_3_cont_1);
	lv_spangroup_set_align(ui->screen_3_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_3_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_3_spangroup_3, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_3_spangroup_3_span;
	screen_3_spangroup_3_span = lv_spangroup_new_span(ui->screen_3_spangroup_3);
	lv_span_set_text(screen_3_spangroup_3_span, "西北工业大学");
	lv_style_set_text_color(&screen_3_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_3_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_3_spangroup_3_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->screen_3_spangroup_3, 6, 10);
	lv_obj_set_size(ui->screen_3_spangroup_3, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_3_spangroup_3_main_main_default
	static lv_style_t style_screen_3_spangroup_3_main_main_default;
	ui_init_style(&style_screen_3_spangroup_3_main_main_default);
	
	lv_style_set_border_width(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_radius(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_3_spangroup_3_main_main_default, 0);
	lv_obj_add_style(ui->screen_3_spangroup_3, &style_screen_3_spangroup_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_3_spangroup_3);

	//Write codes screen_3_label_10
	ui->screen_3_label_10 = lv_label_create(ui->screen_3);
	lv_label_set_text(ui->screen_3_label_10, "数据页");
	lv_label_set_long_mode(ui->screen_3_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_10, 0, 460);
	lv_obj_set_size(ui->screen_3_label_10, 80, 20);

	//Write style for screen_3_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_10, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_3.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_3);

	//Init events for screen.
	events_init_screen_3(ui);
}
