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



void setup_scr_about(lv_ui *ui)
{
	//Write codes about
	ui->about = lv_obj_create(NULL);
	ui->g_kb_about = lv_keyboard_create(ui->about);
	lv_obj_add_event_cb(ui->g_kb_about, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_about, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_about, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->about, 800, 480);
	lv_obj_set_scrollbar_mode(ui->about, LV_SCROLLBAR_MODE_OFF);

	//Write style for about, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_cont_1
	ui->about_cont_1 = lv_obj_create(ui->about);
	lv_obj_set_pos(ui->about_cont_1, 0, 0);
	lv_obj_set_size(ui->about_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->about_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for about_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->about_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->about_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->about_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->about_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->about_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_btn_1
	ui->about_btn_1 = lv_btn_create(ui->about_cont_1);
	ui->about_btn_1_label = lv_label_create(ui->about_btn_1);
	lv_label_set_text(ui->about_btn_1_label, "返回");
	lv_label_set_long_mode(ui->about_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->about_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->about_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->about_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->about_btn_1, 335, 364);
	lv_obj_set_size(ui->about_btn_1, 130, 65);

	//Write style for about_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->about_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->about_btn_1, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->about_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->about_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_btn_1, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_img_1
	ui->about_img_1 = lv_img_create(ui->about_cont_1);
	lv_obj_add_flag(ui->about_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->about_img_1, &_NWPU_LOGO_alpha_120x120);
	lv_img_set_pivot(ui->about_img_1, 50,50);
	lv_img_set_angle(ui->about_img_1, 0);
	lv_obj_set_pos(ui->about_img_1, 27, 150);
	lv_obj_set_size(ui->about_img_1, 120, 120);

	//Write style for about_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->about_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_spangroup_1
	ui->about_spangroup_1 = lv_spangroup_create(ui->about_cont_1);
	lv_spangroup_set_align(ui->about_spangroup_1, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->about_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->about_spangroup_1, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *about_spangroup_1_span;
	about_spangroup_1_span = lv_spangroup_new_span(ui->about_spangroup_1);
	lv_span_set_text(about_spangroup_1_span, "单片机实验技能大赛");
	lv_style_set_text_color(&about_spangroup_1_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&about_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&about_spangroup_1_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->about_spangroup_1, 328, 10);
	lv_obj_set_size(ui->about_spangroup_1, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_about_spangroup_1_main_main_default
	static lv_style_t style_about_spangroup_1_main_main_default;
	ui_init_style(&style_about_spangroup_1_main_main_default);
	
	lv_style_set_border_width(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_radius(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_pad_top(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_pad_right(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_pad_left(&style_about_spangroup_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_about_spangroup_1_main_main_default, 0);
	lv_obj_add_style(ui->about_spangroup_1, &style_about_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->about_spangroup_1);

	//Write codes about_spangroup_2
	ui->about_spangroup_2 = lv_spangroup_create(ui->about_cont_1);
	lv_spangroup_set_align(ui->about_spangroup_2, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->about_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->about_spangroup_2, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *about_spangroup_2_span;
	about_spangroup_2_span = lv_spangroup_new_span(ui->about_spangroup_2);
	lv_span_set_text(about_spangroup_2_span, "西北工业大学");
	lv_style_set_text_color(&about_spangroup_2_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&about_spangroup_2_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&about_spangroup_2_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->about_spangroup_2, 6, 10);
	lv_obj_set_size(ui->about_spangroup_2, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_about_spangroup_2_main_main_default
	static lv_style_t style_about_spangroup_2_main_main_default;
	ui_init_style(&style_about_spangroup_2_main_main_default);
	
	lv_style_set_border_width(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_radius(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_bg_opa(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_pad_top(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_pad_right(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_pad_left(&style_about_spangroup_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_about_spangroup_2_main_main_default, 0);
	lv_obj_add_style(ui->about_spangroup_2, &style_about_spangroup_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->about_spangroup_2);

	//Write codes about_label_2
	ui->about_label_2 = lv_label_create(ui->about_cont_1);
	lv_label_set_text(ui->about_label_2, "项目开源地址：");
	lv_label_set_long_mode(ui->about_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->about_label_2, 176, 168);
	lv_obj_set_size(ui->about_label_2, 190, 29);

	//Write style for about_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->about_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_label_3
	ui->about_label_3 = lv_label_create(ui->about_cont_1);
	lv_label_set_text(ui->about_label_3, "https://github.com/mdlzcool/NWPU_MCU_Contest");
	lv_label_set_long_mode(ui->about_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->about_label_3, 363, 161.5);
	lv_obj_set_size(ui->about_label_3, 413, 42);

	//Write style for about_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->about_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_label_4
	ui->about_label_4 = lv_label_create(ui->about_cont_1);
	lv_label_set_text(ui->about_label_4, "作者：MDLZCOOL、addon、kivejun");
	lv_label_set_long_mode(ui->about_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->about_label_4, 176, 271);
	lv_obj_set_size(ui->about_label_4, 469, 33);

	//Write style for about_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->about_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_label_5
	ui->about_label_5 = lv_label_create(ui->about_cont_1);
	lv_label_set_text(ui->about_label_5, "Dev版本号：Ver.1.0.1");
	lv_label_set_long_mode(ui->about_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->about_label_5, 176, 219);
	lv_obj_set_size(ui->about_label_5, 273, 31);

	//Write style for about_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_label_5, &lv_font_HarmonyOS_Sans_SC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->about_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes about_spangroup_3
	ui->about_spangroup_3 = lv_spangroup_create(ui->about_cont_1);
	lv_spangroup_set_align(ui->about_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->about_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->about_spangroup_3, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *about_spangroup_3_span;
	about_spangroup_3_span = lv_spangroup_new_span(ui->about_spangroup_3);
	lv_span_set_text(about_spangroup_3_span, "本程序参与");
	lv_style_set_text_color(&about_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&about_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&about_spangroup_3_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_25);
	about_spangroup_3_span = lv_spangroup_new_span(ui->about_spangroup_3);
	lv_span_set_text(about_spangroup_3_span, "西北工业大学");
	lv_style_set_text_color(&about_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&about_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&about_spangroup_3_span->style, &lv_font_nwpuname_25);
	about_spangroup_3_span = lv_spangroup_new_span(ui->about_spangroup_3);
	lv_span_set_text(about_spangroup_3_span, "单片机实验技能大赛");
	lv_style_set_text_color(&about_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&about_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&about_spangroup_3_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_25);
	lv_obj_set_pos(ui->about_spangroup_3, 176, 120);
	lv_obj_set_size(ui->about_spangroup_3, 504, 28);

	//Write style state: LV_STATE_DEFAULT for &style_about_spangroup_3_main_main_default
	static lv_style_t style_about_spangroup_3_main_main_default;
	ui_init_style(&style_about_spangroup_3_main_main_default);
	
	lv_style_set_border_width(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_radius(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_bg_opa(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_pad_top(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_pad_right(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_pad_left(&style_about_spangroup_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_about_spangroup_3_main_main_default, 0);
	lv_obj_add_style(ui->about_spangroup_3, &style_about_spangroup_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->about_spangroup_3);

	//Write codes about_qrcode_1
	ui->about_qrcode_1 = lv_qrcode_create(ui->about, 100, lv_color_hex(0x000000), lv_color_hex(0xffffff));
	const char * about_qrcode_1_data = "https://www.nwpu.edu.cn/";
	lv_qrcode_update(ui->about_qrcode_1, about_qrcode_1_data, strlen(about_qrcode_1_data));
	lv_obj_set_pos(ui->about_qrcode_1, 700, 380);
	lv_obj_set_size(ui->about_qrcode_1, 100, 100);

	//Write codes about_label_1
	ui->about_label_1 = lv_label_create(ui->about);
	lv_label_set_text(ui->about_label_1, "关于页");
	lv_label_set_long_mode(ui->about_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->about_label_1, 0, 460);
	lv_obj_set_size(ui->about_label_1, 80, 20);

	//Write style for about_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->about_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->about_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->about_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->about_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->about_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->about_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of about.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->about);

	//Init events for screen.
	events_init_about(ui);
}
