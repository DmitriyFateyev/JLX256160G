/**
 * @file lv_port_disp.c
 *
 */
#if 1

/*********************
 *      INCLUDES
 *********************/
#include "lv_port_disp.h"
#include <stdbool.h>
#include <string.h>
#include "st75256.h"

/*********************
 *      DEFINES
 *********************/
#define BYTE_PER_PIXEL (LV_COLOR_FORMAT_GET_SIZE(LV_COLOR_FORMAT_I1))

static uint8_t lvgl_buf[LVGL_I1_BUF_SIZE];
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void disp_init(void);

static void disp_flush(lv_display_t * disp, const lv_area_t * area, uint8_t * px_map);

/**********************
 *  STATIC VARIABLES
 **********************/
extern SPI_HandleTypeDef hspi1;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
static void my_rounder_cb(lv_event_t * e)
{
    lv_area_t * area = lv_event_get_param(e);
    // Округляем X координаты до границ байта (кратность 8)
    area->x1 = (area->x1 & ~0x7);
    area->x2 = (area->x2 | 0x7);
    // Округляем Y (опционально, но полезно для страниц)
    area->y1 = (area->y1 & ~0x7);
    area->y2 = (area->y2 | 0x7);
}

void lv_port_disp_init(void)
{
    disp_init();
    lv_init();
    lv_tick_set_cb(HAL_GetTick);
    lv_display_t *disp = lv_display_create(MY_DISP_HOR_RES, MY_DISP_VER_RES);
    lv_display_set_color_format(disp, LV_COLOR_FORMAT_I1);
    lv_display_set_flush_cb(disp, disp_flush);
    lv_display_add_event_cb(disp, my_rounder_cb, LV_EVENT_INVALIDATE_AREA, NULL);
    lv_theme_t *th = lv_theme_mono_init(disp, false, &lv_font_unscii_8);
    lv_display_set_theme(disp, th);

    LV_ATTRIBUTE_MEM_ALIGN
    lv_display_set_buffers(disp, lvgl_buf, NULL, sizeof(lvgl_buf), LV_DISPLAY_RENDER_MODE_FULL);
    //lv_display_set_buffers(disp, fb, NULL, sizeof(fb), LV_DISPLAY_RENDER_MODE_FULL);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/*Initialize your display and the required peripherals.*/
static void disp_init(void)
{
    lcd.hspi = &hspi1;
    lcd.cs_port = GPIOA;  lcd.cs_pin = GPIO_PIN_4;
    lcd.a0_port = GPIOA;  lcd.a0_pin = GPIO_PIN_0;
    lcd.rst_port= GPIOA;  lcd.rst_pin= GPIO_PIN_1;
    
    st75256_init(&lcd);
    memset(fb, 0, 5120);
    st75256_write_fb(&lcd, fb);
}

volatile bool disp_flush_enabled = true;

/* Enable updating the screen (the flushing process) when disp_flush() is called by LVGL
 */
void disp_enable_update(void)
{
    disp_flush_enabled = true;
}

/* Disable updating the screen (the flushing process) when disp_flush() is called by LVGL
 */
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

    /* LVGL I1: первые 8 байт — палитра */
    const uint8_t * src = px_map + 8;

    int32_t w = lv_area_get_width(area);
    int32_t h = lv_area_get_height(area);

    /* Для I1 ширина области уже округлена до 8 rounder callback'ом */
    int32_t src_stride = w / 8;

    /* Очистить целевой дисплейный буфер */
    memset(fb, 0x00, ST75256_FB_SIZE);

    /* Конвертация из row-wise (LVGL) в page-wise (ST75256) */
    for(int32_t y = 0; y < h; y++) {
        for(int32_t x = 0; x < w; x++) {
            uint8_t src_byte = src[y * src_stride + (x >> 3)];
            uint8_t src_mask = (uint8_t)(0x80u >> (x & 7));

            /* Для вашей панели: 1 = белый, 0 = черный в буфере LVGL темы mono.
               По фото вы уже выяснили, что нужна инверсия */
            uint8_t pixel_on = (src_byte & src_mask) ? 0 : 1;

            st75256_draw_pixel(fb, area->x1 + x, area->y1 + y, pixel_on);
        }
    }

    st75256_write_fb(&lcd, fb);
    lv_display_flush_ready(disp_drv);
}

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
