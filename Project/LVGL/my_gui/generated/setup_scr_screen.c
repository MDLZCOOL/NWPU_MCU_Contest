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



void setup_scr_screen(lv_ui *ui)
{
	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	ui->g_kb_screen = lv_keyboard_create(ui->screen);
	lv_obj_add_event_cb(ui->g_kb_screen, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_screen, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_screen, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->screen, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_cont_1
	ui->screen_cont_1 = lv_obj_create(ui->screen);
	lv_obj_set_pos(ui->screen_cont_1, 0, 0);
	lv_obj_set_size(ui->screen_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->screen_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_spangroup_1
	ui->screen_spangroup_1 = lv_spangroup_create(ui->screen_cont_1);
	lv_spangroup_set_align(ui->screen_spangroup_1, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_spangroup_1, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_spangroup_1_span;
	screen_spangroup_1_span = lv_spangroup_new_span(ui->screen_spangroup_1);
	lv_span_set_text(screen_spangroup_1_span, "西北工业大学");
	lv_style_set_text_color(&screen_spangroup_1_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_spangroup_1_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->screen_spangroup_1, 6, 10);
	lv_obj_set_size(ui->screen_spangroup_1, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_screen_spangroup_1_main_main_default
	static lv_style_t style_screen_spangroup_1_main_main_default;
	ui_init_style(&style_screen_spangroup_1_main_main_default);
	
	lv_style_set_border_width(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_radius(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_spangroup_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_spangroup_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_spangroup_1, &style_screen_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_spangroup_1);

	//Write codes screen_spangroup_3
	ui->screen_spangroup_3 = lv_spangroup_create(ui->screen_cont_1);
	lv_spangroup_set_align(ui->screen_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_spangroup_3, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_spangroup_3_span;
	screen_spangroup_3_span = lv_spangroup_new_span(ui->screen_spangroup_3);
	lv_span_set_text(screen_spangroup_3_span, "单片机实验技能大赛");
	lv_style_set_text_color(&screen_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_spangroup_3_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->screen_spangroup_3, 328, 12);
	lv_obj_set_size(ui->screen_spangroup_3, 452, 61);

	//Write style state: LV_STATE_DEFAULT for &style_screen_spangroup_3_main_main_default
	static lv_style_t style_screen_spangroup_3_main_main_default;
	ui_init_style(&style_screen_spangroup_3_main_main_default);
	
	lv_style_set_border_width(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_radius(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_spangroup_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_spangroup_3_main_main_default, 0);
	lv_obj_add_style(ui->screen_spangroup_3, &style_screen_spangroup_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_spangroup_3);

	//Write codes screen_img_1
	ui->screen_img_1 = lv_img_create(ui->screen_cont_1);
	lv_obj_add_flag(ui->screen_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_1, &_NWPU_LOGO_alpha_200x200);
	lv_img_set_pivot(ui->screen_img_1, 50,50);
	lv_img_set_angle(ui->screen_img_1, 0);
	lv_obj_set_pos(ui->screen_img_1, 62, 160);
	lv_obj_set_size(ui->screen_img_1, 200, 200);

	//Write style for screen_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_1
	ui->screen_label_1 = lv_label_create(ui->screen_cont_1);
	lv_label_set_text(ui->screen_label_1, "欢迎使用极端天气预警及监测系统");
	lv_label_set_long_mode(ui->screen_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_1, 306, 192);
	lv_obj_set_size(ui->screen_label_1, 423, 136);

	//Write style for screen_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_2
	ui->screen_label_2 = lv_label_create(ui->screen_cont_1);
	lv_label_set_text(ui->screen_label_2, "Initializing System ...");
	lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_2, 254, 442);
	lv_obj_set_size(ui->screen_label_2, 265, 28);

	//Write style for screen_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_spinner_1
	ui->screen_spinner_1 = lv_spinner_create(ui->screen_cont_1, 1000, 60);
	lv_obj_set_pos(ui->screen_spinner_1, 336.5, 322);
	lv_obj_set_size(ui->screen_spinner_1, 100, 100);

	//Write style for screen_spinner_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->screen_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_spinner_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_spinner_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->screen_spinner_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->screen_spinner_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->screen_spinner_1, lv_color_hex(0xbffdf5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_spinner_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_spinner_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->screen_spinner_1, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->screen_spinner_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->screen_spinner_1, lv_color_hex(0x318dd1), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes screen_spangroup_4
	ui->screen_spangroup_4 = lv_spangroup_create(ui->screen_cont_1);
	lv_spangroup_set_align(ui->screen_spangroup_4, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_spangroup_4, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_spangroup_4, LV_SPAN_MODE_FIXED);
	//create spans
	lv_span_t *screen_spangroup_4_span;
	screen_spangroup_4_span = lv_spangroup_new_span(ui->screen_spangroup_4);
	lv_span_set_text(screen_spangroup_4_span, "暴风突击队");
	lv_style_set_text_color(&screen_spangroup_4_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_spangroup_4_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_spangroup_4_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_30);
	lv_obj_set_pos(ui->screen_spangroup_4, 81, 85);
	lv_obj_set_size(ui->screen_spangroup_4, 155, 34);

	//Write style state: LV_STATE_DEFAULT for &style_screen_spangroup_4_main_main_default
	static lv_style_t style_screen_spangroup_4_main_main_default;
	ui_init_style(&style_screen_spangroup_4_main_main_default);
	
	lv_style_set_border_width(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_radius(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_spangroup_4_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_spangroup_4_main_main_default, 0);
	lv_obj_add_style(ui->screen_spangroup_4, &style_screen_spangroup_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_spangroup_4);

	//Write codes screen_label_3
	ui->screen_label_3 = lv_label_create(ui->screen_cont_1);
	lv_label_set_text(ui->screen_label_3, "基于STM32的智能环境监控与极端天气预警系统");
	lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_3, 351, 70);
	lv_obj_set_size(ui->screen_label_3, 404, 64);

	//Write style for screen_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_4
	ui->screen_label_4 = lv_label_create(ui->screen);
	lv_label_set_text(ui->screen_label_4, "初始化页");
	lv_label_set_long_mode(ui->screen_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_4, 0, 460);
	lv_obj_set_size(ui->screen_label_4, 80, 20);

	//Write style for screen_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen);

	//Init events for screen.
	events_init_screen(ui);
}
