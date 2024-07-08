/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


#include "lcd_pwm.h"
extern int timeStampFlag;
static void screen_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_SCREEN_LOADED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 2500, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen, screen_event_handler, LV_EVENT_ALL, ui);
}
static void screen_1_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_3, guider_ui.screen_3_del, &guider_ui.screen_1_del, setup_scr_screen_3, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.screen_1_cont_2, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_2, guider_ui.screen_2_del, &guider_ui.screen_1_del, setup_scr_screen_2, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void screen_1_msgbox_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_t * obj = lv_event_get_current_target(e);
		uint16_t id = lv_msgbox_get_active_btn(obj);
		switch(id) {
		case 0:
		{
			lv_obj_add_flag(guider_ui.screen_1_msgbox_1, LV_OBJ_FLAG_HIDDEN);
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_1_cont_2, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_1_cont_3, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_1_btn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_1_cont_3, LV_OBJ_FLAG_HIDDEN);
		;
		break;
	}
	default:
		break;
	}
}
void events_init_screen_1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_1_btn_2, screen_1_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_1, screen_1_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_3, screen_1_btn_3_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_msgbox_1, screen_1_msgbox_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_4, screen_1_btn_4_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_1_btn_5, screen_1_btn_5_event_handler, LV_EVENT_ALL, ui);
}
static void screen_2_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.usage, guider_ui.usage_del, &guider_ui.screen_2_del, setup_scr_usage, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void screen_2_slider_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		LCD_PWMinit(lv_slider_get_value(guider_ui.screen_2_slider_1));
		break;
	}
	default:
		break;
	}
}
static void screen_2_sw_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_t * status_obj = lv_event_get_target(e);
		int status = lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? 1 : 0;
		switch(status) {
		case 1:
		{
			lv_label_set_text(guider_ui.screen_1_label_9, "联接中...");
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
static void screen_2_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_2_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void screen_2_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.about, guider_ui.about_del, &guider_ui.screen_2_del, setup_scr_about, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, false);
		break;
	}
	default:
		break;
	}
}
static void screen_2_ddlist_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_VALUE_CHANGED:
	{
		uint16_t id = lv_dropdown_get_selected(guider_ui.screen_2_ddlist_2);
		switch(id) {
		case 0:
		{
			timeStampFlag = 0;
			break;
		}
		case 1:
		{
			timeStampFlag = 1;
			break;
		}
		case 2:
		{
			timeStampFlag = 2;
			break;
		}
		case 3:
		{
			timeStampFlag = 3;
			break;
		}
		case 4:
		{
			timeStampFlag = 4;
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
}
void events_init_screen_2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_2_btn_1, screen_2_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_slider_1, screen_2_slider_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_sw_1, screen_2_sw_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_btn_2, screen_2_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_btn_3, screen_2_btn_3_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_2_ddlist_2, screen_2_ddlist_2_event_handler, LV_EVENT_ALL, ui);
}
static void screen_3_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_1, guider_ui.screen_1_del, &guider_ui.screen_3_del, setup_scr_screen_1, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
static void screen_3_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_4, guider_ui.screen_4_del, &guider_ui.screen_3_del, setup_scr_screen_4, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
static void screen_3_btn_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_6, guider_ui.screen_6_del, &guider_ui.screen_3_del, setup_scr_screen_6, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
static void screen_3_btn_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_5, guider_ui.screen_5_del, &guider_ui.screen_3_del, setup_scr_screen_5, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_3(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_3_btn_2, screen_3_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_3_btn_3, screen_3_btn_3_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_3_btn_4, screen_3_btn_4_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_3_btn_5, screen_3_btn_5_event_handler, LV_EVENT_ALL, ui);
}
static void screen_4_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_3, guider_ui.screen_3_del, &guider_ui.screen_4_del, setup_scr_screen_3, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_4(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_4_btn_1, screen_4_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_5_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_3, guider_ui.screen_3_del, &guider_ui.screen_5_del, setup_scr_screen_3, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_5(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_5_btn_1, screen_5_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_6_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_3, guider_ui.screen_3_del, &guider_ui.screen_6_del, setup_scr_screen_3, LV_SCR_LOAD_ANIM_OVER_RIGHT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_6(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_6_btn_1, screen_6_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void about_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_2, guider_ui.screen_2_del, &guider_ui.about_del, setup_scr_screen_2, LV_SCR_LOAD_ANIM_OVER_LEFT, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_about(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->about_btn_1, about_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void usage_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_2, guider_ui.screen_2_del, &guider_ui.usage_del, setup_scr_screen_2, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
void events_init_usage(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->usage_btn_2, usage_btn_2_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}
