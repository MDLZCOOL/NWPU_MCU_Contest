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

extern lv_coord_t newtemparray[20];

void setup_scr_screen_4(lv_ui *ui)
{
	//Write codes screen_4
	ui->screen_4 = lv_obj_create(NULL);
	ui->g_kb_screen_4 = lv_keyboard_create(ui->screen_4);
	lv_obj_add_event_cb(ui->g_kb_screen_4, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen_4, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen_4, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen_4, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_4, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_cont_1
	ui->screen_4_cont_1 = lv_obj_create(ui->screen_4);
	lv_obj_set_pos(ui->screen_4_cont_1, 0, 0);
	lv_obj_set_size(ui->screen_4_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_4_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_4_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_4_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_4_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_4_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_4_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_4_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_4_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_4_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_chart_1
    ui->screen_4_chart_1 = lv_chart_create(ui->screen_4_cont_1);
    lv_chart_set_type(ui->screen_4_chart_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_4_chart_1, 8, 9);
    lv_chart_set_point_count(ui->screen_4_chart_1, sizeof(newtemparray) / sizeof(lv_coord_t ));
    lv_chart_set_range(ui->screen_4_chart_1, LV_CHART_AXIS_PRIMARY_Y, 10, 40);
    lv_chart_set_axis_tick(ui->screen_4_chart_1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 6, true, 40);
    lv_chart_set_range(ui->screen_4_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_zoom_x(ui->screen_4_chart_1, 256);
    lv_chart_set_zoom_y(ui->screen_4_chart_1, 256);
    ui->screen_4_chart_1_0 = lv_chart_add_series(ui->screen_4_chart_1, lv_color_hex(0x19f0ff), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_ext_y_array(ui->screen_4_chart_1, ui->screen_4_chart_1_0, newtemparray);
#endif
	lv_obj_set_pos(ui->screen_4_chart_1, 90, 80);
	lv_obj_set_size(ui->screen_4_chart_1, 620, 270);
	lv_obj_set_scrollbar_mode(ui->screen_4_chart_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_4_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_4_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_4_chart_1, lv_color_hex(0x008b6b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_4_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_4_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_4_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_4_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_4_chart_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->screen_4_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->screen_4_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->screen_4_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_4_chart_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_4_chart_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_chart_1, &lv_font_SourceHanSerifSC_Regular_12, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->screen_4_chart_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->screen_4_chart_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->screen_4_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes screen_4_spangroup_2
	ui->screen_4_spangroup_2 = lv_spangroup_create(ui->screen_4_cont_1);
	lv_spangroup_set_align(ui->screen_4_spangroup_2, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_4_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_4_spangroup_2, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_4_spangroup_2_span;
	screen_4_spangroup_2_span = lv_spangroup_new_span(ui->screen_4_spangroup_2);
	lv_span_set_text(screen_4_spangroup_2_span, "单片机实验技能大赛");
	lv_style_set_text_color(&screen_4_spangroup_2_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_4_spangroup_2_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_4_spangroup_2_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->screen_4_spangroup_2, 328, 9);
	lv_obj_set_size(ui->screen_4_spangroup_2, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_4_spangroup_2_main_main_default
	static lv_style_t style_screen_4_spangroup_2_main_main_default;
	ui_init_style(&style_screen_4_spangroup_2_main_main_default);
	
	lv_style_set_border_width(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_radius(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_4_spangroup_2_main_main_default, 0);
	lv_obj_add_style(ui->screen_4_spangroup_2, &style_screen_4_spangroup_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_4_spangroup_2);

	//Write codes screen_4_btn_1
	ui->screen_4_btn_1 = lv_btn_create(ui->screen_4_cont_1);
	ui->screen_4_btn_1_label = lv_label_create(ui->screen_4_btn_1);
	lv_label_set_text(ui->screen_4_btn_1_label, "返回");
	lv_label_set_long_mode(ui->screen_4_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_4_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_4_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_4_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_4_btn_1, 335, 364);
	lv_obj_set_size(ui->screen_4_btn_1, 130, 65);

	//Write style for screen_4_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_4_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_4_btn_1, lv_color_hex(0x008a94), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_4_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_4_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_4_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_btn_1, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_4_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_spangroup_1
	ui->screen_4_spangroup_1 = lv_spangroup_create(ui->screen_4_cont_1);
	lv_spangroup_set_align(ui->screen_4_spangroup_1, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_4_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_4_spangroup_1, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_4_spangroup_1_span;
	screen_4_spangroup_1_span = lv_spangroup_new_span(ui->screen_4_spangroup_1);
	lv_span_set_text(screen_4_spangroup_1_span, "西北工业大学");
	lv_style_set_text_color(&screen_4_spangroup_1_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_4_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_4_spangroup_1_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->screen_4_spangroup_1, 6, 10);
	lv_obj_set_size(ui->screen_4_spangroup_1, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_4_spangroup_1_main_main_default
	static lv_style_t style_screen_4_spangroup_1_main_main_default;
	ui_init_style(&style_screen_4_spangroup_1_main_main_default);
	
	lv_style_set_border_width(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_radius(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_4_spangroup_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_4_spangroup_1, &style_screen_4_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_4_spangroup_1);

	//Write codes screen_4_label_2
	ui->screen_4_label_2 = lv_label_create(ui->screen_4_cont_1);
	lv_label_set_text(ui->screen_4_label_2, "当前温度：");
	lv_label_set_long_mode(ui->screen_4_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_4_label_2, 500, 358);
	lv_obj_set_size(ui->screen_4_label_2, 111, 30);

	//Write style for screen_4_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_4_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_4_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_4_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_label_3
	ui->screen_4_label_3 = lv_label_create(ui->screen_4_cont_1);
	lv_label_set_text(ui->screen_4_label_3, "TEMP");
	lv_label_set_long_mode(ui->screen_4_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_4_label_3, 609, 358);
	lv_obj_set_size(ui->screen_4_label_3, 62, 30);

	//Write style for screen_4_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_4_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_4_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_4_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_label_4
	ui->screen_4_label_4 = lv_label_create(ui->screen_4_cont_1);
	lv_label_set_text(ui->screen_4_label_4, "°C");
	lv_label_set_long_mode(ui->screen_4_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_4_label_4, 676, 357);
	lv_obj_set_size(ui->screen_4_label_4, 24, 32);

	//Write style for screen_4_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_4_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_4_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_4_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_4_label_1
	ui->screen_4_label_1 = lv_label_create(ui->screen_4);
	lv_label_set_text(ui->screen_4_label_1, "温度页");
	lv_label_set_long_mode(ui->screen_4_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_4_label_1, 0, 460);
	lv_obj_set_size(ui->screen_4_label_1, 80, 20);

	//Write style for screen_4_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_4_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_4_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_4_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_4_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_4_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_4_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_4.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_4);

	//Init events for screen.
	events_init_screen_4(ui);
}
