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



void setup_scr_usage(lv_ui *ui)
{
	//Write codes usage
	ui->usage = lv_obj_create(NULL);
	ui->g_kb_usage = lv_keyboard_create(ui->usage);
	lv_obj_add_event_cb(ui->g_kb_usage, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_usage, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_usage, &lv_font_HarmonyOS_Sans_SC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->usage, 800, 480);
	lv_obj_set_scrollbar_mode(ui->usage, LV_SCROLLBAR_MODE_OFF);

	//Write style for usage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->usage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_cont_1
	ui->usage_cont_1 = lv_obj_create(ui->usage);
	lv_obj_set_pos(ui->usage_cont_1, 0, 0);
	lv_obj_set_size(ui->usage_cont_1, 800, 480);
	lv_obj_set_scrollbar_mode(ui->usage_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for usage_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->usage_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->usage_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->usage_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->usage_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->usage_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->usage_cont_1, lv_color_hex(0x26B08C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->usage_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->usage_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_btn_1
	ui->usage_btn_1 = lv_btn_create(ui->usage_cont_1);
	ui->usage_btn_1_label = lv_label_create(ui->usage_btn_1);
	lv_label_set_text(ui->usage_btn_1_label, "返回");
	lv_label_set_long_mode(ui->usage_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->usage_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->usage_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->usage_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->usage_btn_1, 335, 364);
	lv_obj_set_size(ui->usage_btn_1, 130, 65);

	//Write style for usage_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->usage_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->usage_btn_1, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->usage_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->usage_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->usage_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->usage_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->usage_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->usage_btn_1, &lv_font_SourceHanSerifSC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->usage_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->usage_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_btn_2
	ui->usage_btn_2 = lv_btn_create(ui->usage_cont_1);
	ui->usage_btn_2_label = lv_label_create(ui->usage_btn_2);
	lv_label_set_text(ui->usage_btn_2_label, "返回");
	lv_label_set_long_mode(ui->usage_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->usage_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->usage_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->usage_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->usage_btn_2, 335, 364);
	lv_obj_set_size(ui->usage_btn_2, 130, 65);

	//Write style for usage_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->usage_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->usage_btn_2, lv_color_hex(0x1a4e73), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->usage_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->usage_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->usage_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->usage_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->usage_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->usage_btn_2, &lv_font_HarmonyOS_Sans_SC_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->usage_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->usage_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_spangroup_1
	ui->usage_spangroup_1 = lv_spangroup_create(ui->usage_cont_1);
	lv_spangroup_set_align(ui->usage_spangroup_1, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->usage_spangroup_1, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->usage_spangroup_1, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *usage_spangroup_1_span;
	usage_spangroup_1_span = lv_spangroup_new_span(ui->usage_spangroup_1);
	lv_span_set_text(usage_spangroup_1_span, "西北工业大学");
	lv_style_set_text_color(&usage_spangroup_1_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&usage_spangroup_1_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&usage_spangroup_1_span->style, &lv_font_nwpuname_50);
	lv_obj_set_pos(ui->usage_spangroup_1, 6, 10);
	lv_obj_set_size(ui->usage_spangroup_1, 307, 63);

	//Write style state: LV_STATE_DEFAULT for &style_usage_spangroup_1_main_main_default
	static lv_style_t style_usage_spangroup_1_main_main_default;
	ui_init_style(&style_usage_spangroup_1_main_main_default);
	
	lv_style_set_border_width(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_radius(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_bg_opa(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_pad_top(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_pad_right(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_pad_left(&style_usage_spangroup_1_main_main_default, 0);
	lv_style_set_shadow_width(&style_usage_spangroup_1_main_main_default, 0);
	lv_obj_add_style(ui->usage_spangroup_1, &style_usage_spangroup_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->usage_spangroup_1);

	//Write codes usage_spangroup_2
	ui->usage_spangroup_2 = lv_spangroup_create(ui->usage_cont_1);
	lv_spangroup_set_align(ui->usage_spangroup_2, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->usage_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->usage_spangroup_2, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *usage_spangroup_2_span;
	usage_spangroup_2_span = lv_spangroup_new_span(ui->usage_spangroup_2);
	lv_span_set_text(usage_spangroup_2_span, "单片机实验技能大赛");
	lv_style_set_text_color(&usage_spangroup_2_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&usage_spangroup_2_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&usage_spangroup_2_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_50);
	lv_obj_set_pos(ui->usage_spangroup_2, 328, 10);
	lv_obj_set_size(ui->usage_spangroup_2, 452, 63);

	//Write style state: LV_STATE_DEFAULT for &style_usage_spangroup_2_main_main_default
	static lv_style_t style_usage_spangroup_2_main_main_default;
	ui_init_style(&style_usage_spangroup_2_main_main_default);
	
	lv_style_set_border_width(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_radius(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_bg_opa(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_pad_top(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_pad_right(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_pad_left(&style_usage_spangroup_2_main_main_default, 0);
	lv_style_set_shadow_width(&style_usage_spangroup_2_main_main_default, 0);
	lv_obj_add_style(ui->usage_spangroup_2, &style_usage_spangroup_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->usage_spangroup_2);

	//Write codes usage_spangroup_3
	ui->usage_spangroup_3 = lv_spangroup_create(ui->usage_cont_1);
	lv_spangroup_set_align(ui->usage_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->usage_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->usage_spangroup_3, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *usage_spangroup_3_span;
	usage_spangroup_3_span = lv_spangroup_new_span(ui->usage_spangroup_3);
	lv_span_set_text(usage_spangroup_3_span, "       请扫描屏幕右下角的二维码，进入本系统的docs页面。该页面提供了全面而详细的文档说明，包括系统的各项功能解析和使用指南。此外，您还可以在docs中找到用于二次开发的API接口文档，帮助您更好地进行系统的二次开发和定制。\n");
	lv_style_set_text_color(&usage_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&usage_spangroup_3_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&usage_spangroup_3_span->style, &lv_font_HarmonyOS_Sans_SC_Regular_25);
	usage_spangroup_3_span = lv_spangroup_new_span(ui->usage_spangroup_3);
	lv_span_set_text(usage_spangroup_3_span, "\n对以下项目致以谢意：");
	lv_style_set_text_color(&usage_spangroup_3_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&usage_spangroup_3_span->style, LV_TEXT_DECOR_UNDERLINE);
	lv_style_set_text_font(&usage_spangroup_3_span->style, &lv_font_SourceHanSerifSC_Regular_25);
	lv_obj_set_pos(ui->usage_spangroup_3, 60, 80);
	lv_obj_set_size(ui->usage_spangroup_3, 680, 182);

	//Write style state: LV_STATE_DEFAULT for &style_usage_spangroup_3_main_main_default
	static lv_style_t style_usage_spangroup_3_main_main_default;
	ui_init_style(&style_usage_spangroup_3_main_main_default);
	
	lv_style_set_border_width(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_radius(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_bg_opa(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_pad_top(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_pad_right(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_pad_left(&style_usage_spangroup_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_usage_spangroup_3_main_main_default, 0);
	lv_obj_add_style(ui->usage_spangroup_3, &style_usage_spangroup_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->usage_spangroup_3);

	//Write codes usage_img_1
	ui->usage_img_1 = lv_img_create(ui->usage_cont_1);
	lv_obj_add_flag(ui->usage_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->usage_img_1, &_logo_lvgl_alpha_184x70);
	lv_img_set_pivot(ui->usage_img_1, 50,50);
	lv_img_set_angle(ui->usage_img_1, 0);
	lv_obj_set_pos(ui->usage_img_1, 137, 262);
	lv_obj_set_size(ui->usage_img_1, 184, 70);

	//Write style for usage_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->usage_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_img_2
	ui->usage_img_2 = lv_img_create(ui->usage_cont_1);
	lv_obj_add_flag(ui->usage_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->usage_img_2, &_Espressif_Standard_Logo_CN_Horizontal_alpha_231x70);
	lv_img_set_pivot(ui->usage_img_2, 50,50);
	lv_img_set_angle(ui->usage_img_2, 0);
	lv_obj_set_pos(ui->usage_img_2, 523, 262);
	lv_obj_set_size(ui->usage_img_2, 231, 70);

	//Write style for usage_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->usage_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_img_3
	ui->usage_img_3 = lv_img_create(ui->usage_cont_1);
	lv_obj_add_flag(ui->usage_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->usage_img_3, &_STM32_alpha_70x70);
	lv_img_set_pivot(ui->usage_img_3, 50,50);
	lv_img_set_angle(ui->usage_img_3, 0);
	lv_obj_set_pos(ui->usage_img_3, 38, 262);
	lv_obj_set_size(ui->usage_img_3, 70, 70);

	//Write style for usage_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->usage_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_img_4
	ui->usage_img_4 = lv_img_create(ui->usage_cont_1);
	lv_obj_add_flag(ui->usage_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->usage_img_4, &_NXP_Logo_RGB_Colour_alpha_180x90);
	lv_img_set_pivot(ui->usage_img_4, 50,50);
	lv_img_set_angle(ui->usage_img_4, 0);
	lv_obj_set_pos(ui->usage_img_4, 333, 252);
	lv_obj_set_size(ui->usage_img_4, 180, 90);

	//Write style for usage_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->usage_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_label_1
	ui->usage_label_1 = lv_label_create(ui->usage);
	lv_label_set_text(ui->usage_label_1, "介绍页");
	lv_label_set_long_mode(ui->usage_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->usage_label_1, 0, 460);
	lv_obj_set_size(ui->usage_label_1, 80, 20);

	//Write style for usage_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->usage_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->usage_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->usage_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->usage_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->usage_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->usage_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes usage_qrcode_1
	ui->usage_qrcode_1 = lv_qrcode_create(ui->usage, 100, lv_color_hex(0x2C3224), lv_color_hex(0xffffff));
	const char * usage_qrcode_1_data = "https://mdlzcool.github.io/";
	lv_qrcode_update(ui->usage_qrcode_1, usage_qrcode_1_data, strlen(usage_qrcode_1_data));
	lv_obj_set_pos(ui->usage_qrcode_1, 700, 380);
	lv_obj_set_size(ui->usage_qrcode_1, 100, 100);

	//The custom code of usage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->usage);

	//Init events for screen.
	events_init_usage(ui);
}
