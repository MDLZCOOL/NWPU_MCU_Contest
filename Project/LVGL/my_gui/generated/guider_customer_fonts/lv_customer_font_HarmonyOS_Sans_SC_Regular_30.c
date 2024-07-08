/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 30 px
 * Bpp: 4
 * Opts: --user-data-dir=C:\Users\MDLZ\AppData\Roaming\gui-guider --app-path=D:\NXP\GUI-Guider-1.7.2-GA\resources\app.asar --no-sandbox --no-zygote --lang=zh-CN --device-scale-factor=1.5 --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=6 --time-ticks-at-unix-epoch=-1720319951185283 --launch-time-ticks=16115538139 --mojo-platform-channel-handle=3084 --field-trial-handle=1712,i,18069834077173451438,1936169375870479151,131072 --disable-features=SpareRendererForSitePerProcess,WinRetrieveSuggestionsOnlyOnDemand /prefetch:1
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_HARMONYOS_SANS_SC_REGULAR_30
#define LV_CUSTOMER_FONT_HARMONYOS_SANS_SC_REGULAR_30 1
#endif

#if LV_CUSTOMER_FONT_HARMONYOS_SANS_SC_REGULAR_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+5728 "在" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0x55, 0x55, 0x55, 0x55, 0xbf, 0xf6, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x6, 0xee, 0xee, 0xee,
    0xef, 0xff, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xf2, 0x0, 0x0,
    0x1, 0x32, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0x90, 0x0, 0x0, 0xa, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd,
    0xfe, 0x10, 0x0, 0x0, 0xa, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xf5, 0x0,
    0x0, 0x0, 0xa, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0xa, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0x10, 0x0, 0x0, 0x0, 0xa, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xff,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x1d, 0xff, 0xff, 0x0, 0x6f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x2, 0xdf, 0xfd, 0xff, 0x0, 0x25, 0x55, 0x55,
    0x5c, 0xfd, 0x55, 0x55, 0x55, 0x40, 0x1e, 0xff,
    0x95, 0xff, 0x0, 0x0, 0x0, 0x0, 0xa, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xf9, 0x5, 0xff,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x70, 0x5, 0xff, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xff, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0x0, 0x0, 0x0, 0x0, 0xa, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xff, 0x2, 0x44, 0x44, 0x44,
    0x4b, 0xfd, 0x44, 0x44, 0x44, 0x44, 0x0, 0x0,
    0x5, 0xff, 0xa, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x5, 0xff,
    0xa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x0, 0x5, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 480, .box_w = 28, .box_h = 28, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 22312, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_customer_font_HarmonyOS_Sans_SC_Regular_30 = {
#else
lv_font_t lv_customer_font_HarmonyOS_Sans_SC_Regular_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font  default: (f.src.ascent - f.src.descent)*/
    .base_line = 5,                          /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_CUSTOMER_FONT_HARMONYOS_SANS_SC_REGULAR_30*/

