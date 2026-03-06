/**
 * @file lv_port_disp.c
 */
#if 1

#include "lv_port_disp.h"
#include <stdbool.h>
#include <string.h>
#include "st75256.h"

static void disp_init(void);
static void disp_flush(lv_display_t * disp, const lv_area_t * area, uint8_t * px_map);

extern SPI_HandleTypeDef hspi1;

/* Separate LVGL draw buffer.
 * LVGL renders here in I1 horizontal/tiled row-wise format.
 * ST75256 framebuffer `fb` is separate and uses page-oriented vertical layout.
 */
static uint8_t lvgl_buf[LVGL_I1_BUF_SIZE];

static volatile bool disp_flush_enabled = true;

static void my_rounder_cb(lv_event_t * e)
{
    lv_area_t * area = lv_event_get_param(e);

    /* LVGL I1 requires X to be byte aligned */
    area->x1 &= ~0x7;
    area->x2 |=  0x7;

    /* Helpful for page-oriented LCD */
    area->y1 &= ~0x7;
    area->y2 |=  0x7;

    if(area->x1 < 0) area->x1 = 0;
    if(area->y1 < 0) area->y1 = 0;
    if(area->x2 > (MY_DISP_HOR_RES - 1)) area->x2 = MY_DISP_HOR_RES - 1;
    if(area->y2 > (MY_DISP_VER_RES - 1)) area->y2 = MY_DISP_VER_RES - 1;
}

void lv_port_disp_init(void)
{
    disp_init();

    lv_init();
    lv_tick_set_cb(HAL_GetTick);

    lv_display_t * disp = lv_display_create(MY_DISP_HOR_RES, MY_DISP_VER_RES);
    lv_display_set_color_format(disp, LV_COLOR_FORMAT_I1);
    lv_display_set_flush_cb(disp, disp_flush);
    lv_display_add_event_cb(disp, my_rounder_cb, LV_EVENT_INVALIDATE_AREA, NULL);

    lv_theme_t * th = lv_theme_mono_init(disp, false, &ui_font_unifont_16);
    lv_display_set_theme(disp, th);

    /* Buffer must be 8 bytes larger in LVGL I1 mode */
    lv_display_set_buffers(disp, lvgl_buf, NULL, sizeof(lvgl_buf), LV_DISPLAY_RENDER_MODE_FULL);
}

static void disp_init(void)
{
    lcd.hspi = &hspi1;
    lcd.cs_port  = GPIOA;
    lcd.cs_pin   = GPIO_PIN_4;
    lcd.a0_port  = GPIOA;
    lcd.a0_pin   = GPIO_PIN_0;
    lcd.rst_port = GPIOA;
    lcd.rst_pin  = GPIO_PIN_1;
    lcd.invert   = 0;

    st75256_init(&lcd);

    memset(fb, 0x00, ST75256_FB_SIZE);
    st75256_write_fb(&lcd, fb);
}

void disp_enable_update(void)
{
    disp_flush_enabled = true;
}

void disp_disable_update(void)
{
    disp_flush_enabled = false;
}

static void disp_flush(lv_display_t * disp_drv, const lv_area_t * area, uint8_t * px_map)
{
    if(!disp_flush_enabled) {
        lv_display_flush_ready(disp_drv);
        return;
    }

    /* LVGL I1 documentation:
       first 8 bytes are reserved palette/header area */
    const uint8_t * src = px_map + 8;

    const int32_t w = lv_area_get_width(area);
    const int32_t h = lv_area_get_height(area);

    /* Since x is rounded to byte boundaries, width should be multiple of 8 */
    const int32_t src_stride = w >> 3;

    /* FULL mode: convert the whole frame every flush */
    memset(fb, 0x00, ST75256_FB_SIZE);

    for(int32_t y = 0; y < h; y++) {
        for(int32_t x = 0; x < w; x++) {
            const uint8_t src_byte = src[y * src_stride + (x >> 3)];
            const uint8_t src_mask = (uint8_t)(0x80u >> (x & 0x7));

            /* LVGL I1:
               bit=1 means foreground pixel in the draw buffer.
               Your display test showed that inverted mapping gives correct white background.
             */
            const uint8_t pixel_on = (src_byte & src_mask) ? 0u : 1u;

            st75256_draw_pixel(fb, area->x1 + x, area->y1 + y, pixel_on);
        }
    }

    st75256_write_fb(&lcd, fb);
    lv_display_flush_ready(disp_drv);
}

#else
typedef int keep_pedantic_happy;
#endif
