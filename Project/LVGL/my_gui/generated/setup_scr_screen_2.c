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



void setup_scr_screen_2(lv_ui *ui)
{
	//Write codes screen_2
	ui->screen_2 = lv_obj_create(NULL);
	ui->g_kb_screen_2 = lv_keyboard_create(ui->screen_2);
	lv_obj_add_event_cb(ui->g_kb_screen_2, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_2, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_2, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_2, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_cont_1
	ui->screen_2_cont_1 = lv_obj_create(ui->screen_2);
	lv_obj_set_pos(ui->screen_2_cont_1, 0, 0);
	lv_obj_set_size(ui->screen_2_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_2_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_2_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_2_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_2_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_2_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_spangroup_4
	ui->screen_2_spangroup_4 = lv_spangroup_create(ui->screen_2_cont_1);
	lv_spangroup_set_align(ui->screen_2_spangroup_4, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_2_spangroup_4, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_2_spangroup_4, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_2_spangroup_4_span;
	screen_2_spangroup_4_span = lv_spangroup_new_span(ui->screen_2_spangroup_4);
	lv_span_set_text(screen_2_spangroup_4_span, "单片机实验技能大赛");
	lv_style_set_text_color(&screen_2_spangroup_4_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_2_spangroup_4_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_2_spangroup_4_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->screen_2_spangroup_4, 328, 10);
	lv_obj_set_size(ui->screen_2_spangroup_4, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_spangroup_4_main_main_default
	static lv_style_t style_screen_2_spangroup_4_main_main_default;
	ui_init_style(&style_screen_2_spangroup_4_main_main_default);
	
	lv_style_set_border_width(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_radius(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_2_spangroup_4_main_main_default, 0);
	lv_obj_add_style(ui->screen_2_spangroup_4, &style_screen_2_spangroup_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_2_spangroup_4);

	//Write codes screen_2_spangroup_3
	ui->screen_2_spangroup_3 = lv_spangroup_create(ui->screen_2_cont_1);
	lv_spangroup_set_align(ui->screen_2_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_2_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_2_spangroup_3, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_2_spangroup_3_span;
	screen_2_spangroup_3_span = lv_spangroup_new_span(ui->screen_2_spangroup_3);
	lv_span_set_text(screen_2_spangroup_3_span, "西北工业大学");
	lv_style_set_text_color(&screen_2_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_2_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_2_spangroup_3_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->screen_2_spangroup_3, 6, 10);
	lv_obj_set_size(ui->screen_2_spangroup_3, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_spangroup_3_main_main_default
	static lv_style_t style_screen_2_spangroup_3_main_main_default;
	ui_init_style(&style_screen_2_spangroup_3_main_main_default);
	
	lv_style_set_border_width(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_radius(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_2_spangroup_3_main_main_default, 0);
	lv_obj_add_style(ui->screen_2_spangroup_3, &style_screen_2_spangroup_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_2_spangroup_3);

	//Write codes screen_2_btn_1
	ui->screen_2_btn_1 = lv_btn_create(ui->screen_2_cont_1);
	ui->screen_2_btn_1_label = lv_label_create(ui->screen_2_btn_1);
	lv_label_set_text(ui->screen_2_btn_1_label, "说明");
	lv_label_set_long_mode(ui->screen_2_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_2_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_2_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_2_btn_1, 335, 364);
	lv_obj_set_size(ui->screen_2_btn_1, 130, 65);

	//Write style for screen_2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_btn_1, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_btn_1, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_slider_1
	ui->screen_2_slider_1 = lv_slider_create(ui->screen_2_cont_1);
	lv_slider_set_range(ui->screen_2_slider_1, 10, 100);
	lv_slider_set_mode(ui->screen_2_slider_1, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->screen_2_slider_1, 55, LV_ANIM_OFF);
	lv_obj_set_pos(ui->screen_2_slider_1, 457, 173);
	lv_obj_set_size(ui->screen_2_slider_1, 265, 10);

	//Write style for screen_2_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_slider_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_slider_1, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->screen_2_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_2_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_slider_1, lv_color_hex(0x256da8), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for screen_2_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_slider_1, lv_color_hex(0x194a72), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes screen_2_sw_1
	ui->screen_2_sw_1 = lv_switch_create(ui->screen_2_cont_1);
	lv_obj_set_pos(ui->screen_2_sw_1, 662, 226);
	lv_obj_set_size(ui->screen_2_sw_1, 60, 30);

	//Write style for screen_2_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_sw_1, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_2_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->screen_2_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->screen_2_sw_1, lv_color_hex(0x256da8), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->screen_2_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for screen_2_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_sw_1, lv_color_hex(0x194a72), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes screen_2_btn_2
	ui->screen_2_btn_2 = lv_btn_create(ui->screen_2_cont_1);
	ui->screen_2_btn_2_label = lv_label_create(ui->screen_2_btn_2);
	lv_label_set_text(ui->screen_2_btn_2_label, "返回");
	lv_label_set_long_mode(ui->screen_2_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_2_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_2_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_2_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_2_btn_2, 620, 364);
	lv_obj_set_size(ui->screen_2_btn_2, 130, 65);

	//Write style for screen_2_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_btn_2, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_btn_2, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_btn_3
	ui->screen_2_btn_3 = lv_btn_create(ui->screen_2_cont_1);
	ui->screen_2_btn_3_label = lv_label_create(ui->screen_2_btn_3);
	lv_label_set_text(ui->screen_2_btn_3_label, "关于");
	lv_label_set_long_mode(ui->screen_2_btn_3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_2_btn_3_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_2_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_2_btn_3_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_2_btn_3, 48, 364);
	lv_obj_set_size(ui->screen_2_btn_3, 130, 65);

	//Write style for screen_2_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_2_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_btn_3, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_btn_3, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_ddlist_1
	ui->screen_2_ddlist_1 = lv_dropdown_create(ui->screen_2_cont_1);
	lv_dropdown_set_options(ui->screen_2_ddlist_1, "U-blox\nNMEA");
	lv_obj_set_pos(ui->screen_2_ddlist_1, 457, 287);
	lv_obj_set_size(ui->screen_2_ddlist_1, 265, 35);

	//Write style for screen_2_ddlist_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_2_ddlist_1, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_ddlist_1, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_ddlist_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_2_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_2_ddlist_1, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_2_ddlist_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_ddlist_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_ddlist_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_ddlist_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_ddlist_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_ddlist_1, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_ddlist_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_ddlist_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_screen_2_ddlist_1_extra_list_selected_checked
	static lv_style_t style_screen_2_ddlist_1_extra_list_selected_checked;
	ui_init_style(&style_screen_2_ddlist_1_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_screen_2_ddlist_1_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_screen_2_ddlist_1_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_screen_2_ddlist_1_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_border_side(&style_screen_2_ddlist_1_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_screen_2_ddlist_1_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_1_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_1_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_1_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_1), &style_screen_2_ddlist_1_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_ddlist_1_extra_list_main_default
	static lv_style_t style_screen_2_ddlist_1_extra_list_main_default;
	ui_init_style(&style_screen_2_ddlist_1_extra_list_main_default);
	
	lv_style_set_max_height(&style_screen_2_ddlist_1_extra_list_main_default, 100);
	lv_style_set_text_color(&style_screen_2_ddlist_1_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_screen_2_ddlist_1_extra_list_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_18);
	lv_style_set_text_opa(&style_screen_2_ddlist_1_extra_list_main_default, 255);
	lv_style_set_border_width(&style_screen_2_ddlist_1_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_screen_2_ddlist_1_extra_list_main_default, 255);
	lv_style_set_border_color(&style_screen_2_ddlist_1_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_screen_2_ddlist_1_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_screen_2_ddlist_1_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_1_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_1_extra_list_main_default, lv_color_hex(0xb6e4ea));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_1_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_1), &style_screen_2_ddlist_1_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_ddlist_1_extra_list_scrollbar_default
	static lv_style_t style_screen_2_ddlist_1_extra_list_scrollbar_default;
	ui_init_style(&style_screen_2_ddlist_1_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_screen_2_ddlist_1_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_1_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_1_extra_list_scrollbar_default, lv_color_hex(0x015c01));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_1_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_1), &style_screen_2_ddlist_1_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes screen_2_img_1
	ui->screen_2_img_1 = lv_img_create(ui->screen_2_cont_1);
	lv_obj_add_flag(ui->screen_2_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_1, &_brightness_alpha_50x50);
	lv_img_set_pivot(ui->screen_2_img_1, 50,50);
	lv_img_set_angle(ui->screen_2_img_1, 0);
	lv_obj_set_pos(ui->screen_2_img_1, 56, 153);
	lv_obj_set_size(ui->screen_2_img_1, 50, 50);

	//Write style for screen_2_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_2
	ui->screen_2_img_2 = lv_img_create(ui->screen_2_cont_1);
	lv_obj_add_flag(ui->screen_2_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_2, &_bluetooth_alpha_40x40);
	lv_img_set_pivot(ui->screen_2_img_2, 50,50);
	lv_img_set_angle(ui->screen_2_img_2, 0);
	lv_obj_set_pos(ui->screen_2_img_2, 60, 219);
	lv_obj_set_size(ui->screen_2_img_2, 40, 40);

	//Write style for screen_2_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_3
	ui->screen_2_img_3 = lv_img_create(ui->screen_2_cont_1);
	lv_obj_add_flag(ui->screen_2_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_3, &_GPS_alpha_50x50);
	lv_img_set_pivot(ui->screen_2_img_3, 50,50);
	lv_img_set_angle(ui->screen_2_img_3, 0);
	lv_obj_set_pos(ui->screen_2_img_3, 56, 279);
	lv_obj_set_size(ui->screen_2_img_3, 50, 50);

	//Write style for screen_2_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_label_7
	ui->screen_2_label_7 = lv_label_create(ui->screen_2_cont_1);
	lv_label_set_text(ui->screen_2_label_7, "数据时间戳");
	lv_label_set_long_mode(ui->screen_2_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_7, 122, 99);
	lv_obj_set_size(ui->screen_2_label_7, 160, 32);

	//Write style for screen_2_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_7, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_7, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_img_4
	ui->screen_2_img_4 = lv_img_create(ui->screen_2_cont_1);
	lv_obj_add_flag(ui->screen_2_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_2_img_4, &_time_alpha_50x50);
	lv_img_set_pivot(ui->screen_2_img_4, 50,50);
	lv_img_set_angle(ui->screen_2_img_4, 0);
	lv_obj_set_pos(ui->screen_2_img_4, 56, 90);
	lv_obj_set_size(ui->screen_2_img_4, 50, 50);

	//Write style for screen_2_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_2_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_ddlist_2
	ui->screen_2_ddlist_2 = lv_dropdown_create(ui->screen_2_cont_1);
	lv_dropdown_set_options(ui->screen_2_ddlist_2, "关闭\n日期+时间\n时间+日期\n仅日期\n仅时间");
	lv_obj_set_pos(ui->screen_2_ddlist_2, 457, 97.5);
	lv_obj_set_size(ui->screen_2_ddlist_2, 265, 35);

	//Write style for screen_2_ddlist_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_2_ddlist_2, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_ddlist_2, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_ddlist_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_2_ddlist_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_2_ddlist_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_2_ddlist_2, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_2_ddlist_2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_ddlist_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_ddlist_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_ddlist_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_ddlist_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_ddlist_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_2_ddlist_2, lv_color_hex(0x009ea9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_2_ddlist_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_ddlist_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_screen_2_ddlist_2_extra_list_selected_checked
	static lv_style_t style_screen_2_ddlist_2_extra_list_selected_checked;
	ui_init_style(&style_screen_2_ddlist_2_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_screen_2_ddlist_2_extra_list_selected_checked, 1);
	lv_style_set_border_opa(&style_screen_2_ddlist_2_extra_list_selected_checked, 255);
	lv_style_set_border_color(&style_screen_2_ddlist_2_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_border_side(&style_screen_2_ddlist_2_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_screen_2_ddlist_2_extra_list_selected_checked, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_2_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_2_extra_list_selected_checked, lv_color_hex(0x00a1b5));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_2_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_2), &style_screen_2_ddlist_2_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_ddlist_2_extra_list_main_default
	static lv_style_t style_screen_2_ddlist_2_extra_list_main_default;
	ui_init_style(&style_screen_2_ddlist_2_extra_list_main_default);
	
	lv_style_set_max_height(&style_screen_2_ddlist_2_extra_list_main_default, 110);
	lv_style_set_text_color(&style_screen_2_ddlist_2_extra_list_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_screen_2_ddlist_2_extra_list_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_18);
	lv_style_set_text_opa(&style_screen_2_ddlist_2_extra_list_main_default, 255);
	lv_style_set_border_width(&style_screen_2_ddlist_2_extra_list_main_default, 1);
	lv_style_set_border_opa(&style_screen_2_ddlist_2_extra_list_main_default, 255);
	lv_style_set_border_color(&style_screen_2_ddlist_2_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_screen_2_ddlist_2_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_screen_2_ddlist_2_extra_list_main_default, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_2_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_2_extra_list_main_default, lv_color_hex(0xb6e4ea));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_2_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_2), &style_screen_2_ddlist_2_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_2_ddlist_2_extra_list_scrollbar_default
	static lv_style_t style_screen_2_ddlist_2_extra_list_scrollbar_default;
	ui_init_style(&style_screen_2_ddlist_2_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_screen_2_ddlist_2_extra_list_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_screen_2_ddlist_2_extra_list_scrollbar_default, 255);
	lv_style_set_bg_color(&style_screen_2_ddlist_2_extra_list_scrollbar_default, lv_color_hex(0x015c01));
	lv_style_set_bg_grad_dir(&style_screen_2_ddlist_2_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->screen_2_ddlist_2), &style_screen_2_ddlist_2_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes screen_2_label_3
	ui->screen_2_label_3 = lv_label_create(ui->screen_2);
	lv_label_set_text(ui->screen_2_label_3, "亮度");
	lv_label_set_long_mode(ui->screen_2_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_3, 122, 162);
	lv_obj_set_size(ui->screen_2_label_3, 64, 32);

	//Write style for screen_2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_label_6
	ui->screen_2_label_6 = lv_label_create(ui->screen_2);
	lv_label_set_text(ui->screen_2_label_6, "GPS协议");
	lv_label_set_long_mode(ui->screen_2_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_6, 122, 288);
	lv_obj_set_size(ui->screen_2_label_6, 127, 32);

	//Write style for screen_2_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_6, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_label_5
	ui->screen_2_label_5 = lv_label_create(ui->screen_2);
	lv_label_set_text(ui->screen_2_label_5, "Bluetooth");
	lv_label_set_long_mode(ui->screen_2_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_5, 122, 225);
	lv_obj_set_size(ui->screen_2_label_5, 154, 32);

	//Write style for screen_2_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_5, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_2_label_2
	ui->screen_2_label_2 = lv_label_create(ui->screen_2);
	lv_label_set_text(ui->screen_2_label_2, "设置页");
	lv_label_set_long_mode(ui->screen_2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_2_label_2, 0, 460);
	lv_obj_set_size(ui->screen_2_label_2, 80, 20);

	//Write style for screen_2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_2_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_2_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_2_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_2);

	//Init events for screen.
	events_init_screen_2(ui);
}
