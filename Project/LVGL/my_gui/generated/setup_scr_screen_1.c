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



void setup_scr_screen_1(lv_ui *ui)
{
	//Write codes screen_1
	ui->screen_1 = lv_obj_create(NULL);
	ui->g_kb_screen_1 = lv_keyboard_create(ui->screen_1);
	lv_obj_add_event_cb(ui->g_kb_screen_1, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_1, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_1, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_cont_1
	ui->screen_1_cont_1 = lv_obj_create(ui->screen_1);
	lv_obj_set_pos(ui->screen_1_cont_1, 0, 0);
	lv_obj_set_size(ui->screen_1_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_1_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_1_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_2
	ui->screen_1_btn_2 = lv_btn_create(ui->screen_1_cont_1);
	ui->screen_1_btn_2_label = lv_label_create(ui->screen_1_btn_2);
	lv_label_set_text(ui->screen_1_btn_2_label, "数据大屏");
	lv_label_set_long_mode(ui->screen_1_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_2, 48, 364);
	lv_obj_set_size(ui->screen_1_btn_2, 130, 65);

	//Write style for screen_1_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_2, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_2, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_1
	ui->screen_1_btn_1 = lv_btn_create(ui->screen_1_cont_1);
	ui->screen_1_btn_1_label = lv_label_create(ui->screen_1_btn_1);
	lv_label_set_text(ui->screen_1_btn_1_label, "紧急预警");
	lv_label_set_long_mode(ui->screen_1_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_1, 334, 364);
	lv_obj_set_size(ui->screen_1_btn_1, 130, 65);

	//Write style for screen_1_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_1, 163, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_1, lv_color_hex(0xff0027), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_1, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_3
	ui->screen_1_btn_3 = lv_btn_create(ui->screen_1_cont_1);
	ui->screen_1_btn_3_label = lv_label_create(ui->screen_1_btn_3);
	lv_label_set_text(ui->screen_1_btn_3_label, "设置");
	lv_label_set_long_mode(ui->screen_1_btn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_3_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_3, 620, 364);
	lv_obj_set_size(ui->screen_1_btn_3, 130, 65);

	//Write style for screen_1_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_3, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_3, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_spangroup_2
	ui->screen_1_spangroup_2 = lv_spangroup_create(ui->screen_1_cont_1);
	lv_spangroup_set_align(ui->screen_1_spangroup_2, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_1_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_1_spangroup_2, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_1_spangroup_2_span;
	screen_1_spangroup_2_span = lv_spangroup_new_span(ui->screen_1_spangroup_2);
	lv_span_set_text(screen_1_spangroup_2_span, "西北工业大学");
	lv_style_set_text_color(&screen_1_spangroup_2_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_1_spangroup_2_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_1_spangroup_2_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->screen_1_spangroup_2, 6, 10);
	lv_obj_set_size(ui->screen_1_spangroup_2, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_1_spangroup_2_main_main_default
	static lv_style_t style_screen_1_spangroup_2_main_main_default;
	ui_init_style(&style_screen_1_spangroup_2_main_main_default);
	
	lv_style_set_border_width(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_radius(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_1_spangroup_2_main_main_default, 0);
	lv_obj_add_style(ui->screen_1_spangroup_2, &style_screen_1_spangroup_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_1_spangroup_2);

	//Write codes screen_1_spangroup_1
	ui->screen_1_spangroup_1 = lv_spangroup_create(ui->screen_1_cont_1);
	lv_spangroup_set_align(ui->screen_1_spangroup_1, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_1_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_1_spangroup_1, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_1_spangroup_1_span;
	screen_1_spangroup_1_span = lv_spangroup_new_span(ui->screen_1_spangroup_1);
	lv_span_set_text(screen_1_spangroup_1_span, "单片机实验技能大赛");
	lv_style_set_text_color(&screen_1_spangroup_1_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_1_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_1_spangroup_1_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->screen_1_spangroup_1, 328, 10);
	lv_obj_set_size(ui->screen_1_spangroup_1, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_1_spangroup_1_main_main_default
	static lv_style_t style_screen_1_spangroup_1_main_main_default;
	ui_init_style(&style_screen_1_spangroup_1_main_main_default);
	
	lv_style_set_border_width(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_radius(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_1_spangroup_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_1_spangroup_1, &style_screen_1_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_1_spangroup_1);

	//Write codes screen_1_label_2
	ui->screen_1_label_2 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_2, "系统时间：");
	lv_label_set_long_mode(ui->screen_1_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_2, 52, 109.5);
	lv_obj_set_size(ui->screen_1_label_2, 172, 41);

	//Write style for screen_1_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_3
	ui->screen_1_label_3 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_3, "联网状态：");
	lv_label_set_long_mode(ui->screen_1_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_3, 52, 181.5);
	lv_obj_set_size(ui->screen_1_label_3, 172, 41);

	//Write style for screen_1_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_4
	ui->screen_1_label_4 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_4, "存储容量：");
	lv_label_set_long_mode(ui->screen_1_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_4, 401, 109.5);
	lv_obj_set_size(ui->screen_1_label_4, 172, 41);

	//Write style for screen_1_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_5
	ui->screen_1_label_5 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_5, "日志状态：");
	lv_label_set_long_mode(ui->screen_1_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_5, 52, 253.5);
	lv_obj_set_size(ui->screen_1_label_5, 172, 41);

	//Write style for screen_1_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_5, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_6
	ui->screen_1_label_6 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_6, "机器编号：");
	lv_label_set_long_mode(ui->screen_1_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_6, 401, 253.5);
	lv_obj_set_size(ui->screen_1_label_6, 172, 41);

	//Write style for screen_1_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_6, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_7
	ui->screen_1_label_7 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_7, "GPS定位：");
	lv_label_set_long_mode(ui->screen_1_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_7, 401, 181.5);
	lv_obj_set_size(ui->screen_1_label_7, 172, 41);

	//Write style for screen_1_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_7, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_8
	ui->screen_1_label_8 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_8, "00:00:00");
	lv_label_set_long_mode(ui->screen_1_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_8, 200, 109.5);
	lv_obj_set_size(ui->screen_1_label_8, 203, 41);

	//Write style for screen_1_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_8, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_8, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_9
	ui->screen_1_label_9 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_9, "在离线");
	lv_label_set_long_mode(ui->screen_1_label_9, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_9, 200, 181.5);
	lv_obj_set_size(ui->screen_1_label_9, 203, 41);

	//Write style for screen_1_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_9, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_9, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_10
	ui->screen_1_label_10 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_10, "记录中");
	lv_label_set_long_mode(ui->screen_1_label_10, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_10, 200, 253.5);
	lv_obj_set_size(ui->screen_1_label_10, 203, 41);

	//Write style for screen_1_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_10, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_11
	ui->screen_1_label_11 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_11, "未接入SD卡");
	lv_label_set_long_mode(ui->screen_1_label_11, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_11, 549, 110);
	lv_obj_set_size(ui->screen_1_label_11, 203, 41);

	//Write style for screen_1_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_11, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_11, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_12
	ui->screen_1_label_12 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_12, "未接入GPS");
	lv_label_set_long_mode(ui->screen_1_label_12, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_12, 549, 182);
	lv_obj_set_size(ui->screen_1_label_12, 203, 41);

	//Write style for screen_1_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_12, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_13
	ui->screen_1_label_13 = lv_label_create(ui->screen_1_cont_1);
	lv_label_set_text(ui->screen_1_label_13, "1号");
	lv_label_set_long_mode(ui->screen_1_label_13, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_13, 549, 254);
	lv_obj_set_size(ui->screen_1_label_13, 203, 41);

	//Write style for screen_1_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_13, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_13, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_13, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_msgbox_1
	static const char * screen_1_msgbox_1_btns[] = {"好", ""};
	ui->screen_1_msgbox_1 = lv_msgbox_create(ui->screen_1_cont_1, "Notice!", "未接入GPS和Wi-Fi，系统时间可能不可靠", screen_1_msgbox_1_btns, false);
	lv_obj_set_size(lv_msgbox_get_btns(ui->screen_1_msgbox_1), 70, 38);
	lv_obj_set_pos(ui->screen_1_msgbox_1, 485, 326);
	lv_obj_set_size(ui->screen_1_msgbox_1, 304, 144);

	//Write style for screen_1_msgbox_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_msgbox_1, 251, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_msgbox_1, lv_color_hex(0xdbffbd), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_msgbox_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_msgbox_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_msgbox_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_msgbox_1, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_msgbox_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_msgbox_1, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_msgbox_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_1_msgbox_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_1_msgbox_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_1_msgbox_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_1_msgbox_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_1_msgbox_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_1_msgbox_1_extra_title_main_default
	static lv_style_t style_screen_1_msgbox_1_extra_title_main_default;
	ui_init_style(&style_screen_1_msgbox_1_extra_title_main_default);
	
	lv_style_set_text_color(&style_screen_1_msgbox_1_extra_title_main_default, lv_color_hex(0x31312d));
	lv_style_set_text_font(&style_screen_1_msgbox_1_extra_title_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_20);
	lv_style_set_text_opa(&style_screen_1_msgbox_1_extra_title_main_default, 255);
	lv_style_set_text_letter_space(&style_screen_1_msgbox_1_extra_title_main_default, 0);
	lv_style_set_text_line_space(&style_screen_1_msgbox_1_extra_title_main_default, 30);
	lv_obj_add_style(lv_msgbox_get_title(ui->screen_1_msgbox_1), &style_screen_1_msgbox_1_extra_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_1_msgbox_1_extra_content_main_default
	static lv_style_t style_screen_1_msgbox_1_extra_content_main_default;
	ui_init_style(&style_screen_1_msgbox_1_extra_content_main_default);
	
	lv_style_set_text_color(&style_screen_1_msgbox_1_extra_content_main_default, lv_color_hex(0x383732));
	lv_style_set_text_font(&style_screen_1_msgbox_1_extra_content_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
	lv_style_set_text_opa(&style_screen_1_msgbox_1_extra_content_main_default, 255);
	lv_style_set_text_letter_space(&style_screen_1_msgbox_1_extra_content_main_default, 0);
	lv_style_set_text_line_space(&style_screen_1_msgbox_1_extra_content_main_default, 10);
	lv_obj_add_style(lv_msgbox_get_text(ui->screen_1_msgbox_1), &style_screen_1_msgbox_1_extra_content_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_1_msgbox_1_extra_btns_items_default
	static lv_style_t style_screen_1_msgbox_1_extra_btns_items_default;
	ui_init_style(&style_screen_1_msgbox_1_extra_btns_items_default);
	
	lv_style_set_bg_opa(&style_screen_1_msgbox_1_extra_btns_items_default, 107);
	lv_style_set_bg_color(&style_screen_1_msgbox_1_extra_btns_items_default, lv_color_hex(0x00895e));
	lv_style_set_bg_grad_dir(&style_screen_1_msgbox_1_extra_btns_items_default, LV_GRAD_DIR_NONE);
	lv_style_set_border_width(&style_screen_1_msgbox_1_extra_btns_items_default, 2);
	lv_style_set_border_opa(&style_screen_1_msgbox_1_extra_btns_items_default, 177);
	lv_style_set_border_color(&style_screen_1_msgbox_1_extra_btns_items_default, lv_color_hex(0x00ff78));
	lv_style_set_border_side(&style_screen_1_msgbox_1_extra_btns_items_default, LV_BORDER_SIDE_NONE);
	lv_style_set_radius(&style_screen_1_msgbox_1_extra_btns_items_default, 4);
	lv_style_set_text_color(&style_screen_1_msgbox_1_extra_btns_items_default, lv_color_hex(0x01798e));
	lv_style_set_text_font(&style_screen_1_msgbox_1_extra_btns_items_default, &lv_font_HarmonyOS_Sans_SC_Regular_20);
	lv_style_set_text_opa(&style_screen_1_msgbox_1_extra_btns_items_default, 255);
	lv_obj_add_style(lv_msgbox_get_btns(ui->screen_1_msgbox_1), &style_screen_1_msgbox_1_extra_btns_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write codes screen_1_cont_2
	ui->screen_1_cont_2 = lv_obj_create(ui->screen_1_cont_1);
	lv_obj_set_pos(ui->screen_1_cont_2, 250, 140);
	lv_obj_set_size(ui->screen_1_cont_2, 300, 162);
	lv_obj_set_scrollbar_mode(ui->screen_1_cont_2, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->screen_1_cont_2, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_cont_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_cont_2, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_cont_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_cont_2, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_cont_2, lv_color_hex(0xdbffbd), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_ta_1
	ui->screen_1_ta_1 = lv_textarea_create(ui->screen_1_cont_2);
	lv_textarea_set_text(ui->screen_1_ta_1, "");
	lv_textarea_set_placeholder_text(ui->screen_1_ta_1, "");
	lv_textarea_set_password_bullet(ui->screen_1_ta_1, "*");
	lv_textarea_set_password_mode(ui->screen_1_ta_1, true);
	lv_textarea_set_one_line(ui->screen_1_ta_1, true);
	lv_textarea_set_accepted_chars(ui->screen_1_ta_1, "");
	lv_textarea_set_max_length(ui->screen_1_ta_1, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_1_ta_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen_1);
	#endif
	lv_obj_set_pos(ui->screen_1_ta_1, 90, 10);
	lv_obj_set_size(ui->screen_1_ta_1, 200, 36);

	//Write style for screen_1_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_1_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_ta_1, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_ta_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_1_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes screen_1_label_14
	ui->screen_1_label_14 = lv_label_create(ui->screen_1_cont_2);
	lv_label_set_text(ui->screen_1_label_14, "密码：");
	lv_label_set_long_mode(ui->screen_1_label_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_14, 0, 15);
	lv_obj_set_size(ui->screen_1_label_14, 100, 32);

	//Write style for screen_1_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_14, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_14, &lv_font_SourceHanSerifSC_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_15
	ui->screen_1_label_15 = lv_label_create(ui->screen_1_cont_2);
	lv_label_set_text(ui->screen_1_label_15, "该功能较为敏感，请输入超级管理员密码以确认您的权限！");
	lv_label_set_long_mode(ui->screen_1_label_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_15, 3, 57);
	lv_obj_set_size(ui->screen_1_label_15, 289, 44);

	//Write style for screen_1_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_15, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_4
	ui->screen_1_btn_4 = lv_btn_create(ui->screen_1_cont_2);
	ui->screen_1_btn_4_label = lv_label_create(ui->screen_1_btn_4);
	lv_label_set_text(ui->screen_1_btn_4_label, "好");
	lv_label_set_long_mode(ui->screen_1_btn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_4_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_4, 107, 111);
	lv_obj_set_size(ui->screen_1_btn_4, 70, 38);

	//Write style for screen_1_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_4, 117, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_4, lv_color_hex(0x00895e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_4, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_cont_3
	ui->screen_1_cont_3 = lv_obj_create(ui->screen_1_cont_1);
	lv_obj_set_pos(ui->screen_1_cont_3, 250, 140);
	lv_obj_set_size(ui->screen_1_cont_3, 300, 162);
	lv_obj_set_scrollbar_mode(ui->screen_1_cont_3, LV_SCROLLBAR_MODE_OFF);
	lv_obj_add_flag(ui->screen_1_cont_3, LV_OBJ_FLAG_HIDDEN);

	//Write style for screen_1_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_cont_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_1_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_1_cont_3, lv_color_hex(0x575757), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_1_cont_3, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_cont_3, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_cont_3, lv_color_hex(0xdbffbd), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_16
	ui->screen_1_label_16 = lv_label_create(ui->screen_1_cont_3);
	lv_label_set_text(ui->screen_1_label_16, "" LV_SYMBOL_OK "");
	lv_label_set_long_mode(ui->screen_1_label_16, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_16, 32, 50);
	lv_obj_set_size(ui->screen_1_label_16, 50, 50);

	//Write style for screen_1_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_16, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_16, &lv_font_HarmonyOS_Sans_SC_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_16, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_17
	ui->screen_1_label_17 = lv_label_create(ui->screen_1_cont_3);
	lv_label_set_text(ui->screen_1_label_17, "密码正确，确定要发布紧急预警？");
	lv_label_set_long_mode(ui->screen_1_label_17, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_17, 113.5, 15);
	lv_obj_set_size(ui->screen_1_label_17, 141, 73);

	//Write style for screen_1_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_17, &lv_font_SourceHanSerifSC_Regular_21, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_btn_5
	ui->screen_1_btn_5 = lv_btn_create(ui->screen_1_cont_3);
	ui->screen_1_btn_5_label = lv_label_create(ui->screen_1_btn_5);
	lv_label_set_text(ui->screen_1_btn_5_label, "确认");
	lv_label_set_long_mode(ui->screen_1_btn_5_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_1_btn_5_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_1_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_1_btn_5_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_1_btn_5, 149, 105);
	lv_obj_set_size(ui->screen_1_btn_5, 70, 38);

	//Write style for screen_1_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_1_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_1_btn_5, lv_color_hex(0xb13f4c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_1_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_1_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_btn_5, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_label_1
	ui->screen_1_label_1 = lv_label_create(ui->screen_1);
	lv_label_set_text(ui->screen_1_label_1, "主页");
	lv_label_set_long_mode(ui->screen_1_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_1_label_1, 0, 460);
	lv_obj_set_size(ui->screen_1_label_1, 80, 20);

	//Write style for screen_1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_1_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_1_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_1);

	//Init events for screen.
	events_init_screen_1(ui);
}
