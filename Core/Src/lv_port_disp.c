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
#ifndef MY_DISP_HOR_RES
    #warning Please define or replace the macro MY_DISP_HOR_RES with the actual screen width, default value 320 is used for now.
    #define MY_DISP_HOR_RES    320
#endif

#ifndef MY_DISP_VER_RES
    #warning Please define or replace the macro MY_DISP_VER_RES with the actual screen height, default value 240 is used for now.
    #define MY_DISP_VER_RES    240
#endif

#define BYTE_PER_PIXEL (LV_COLOR_FORMAT_GET_SIZE(LV_COLOR_FORMAT_I1)) /*will be 2 for RGB565 */

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

void lv_port_disp_init(void)
{
    disp_init();
    lv_init();
    lv_tick_set_cb(HAL_GetTick);
    lv_display_t *disp = lv_display_create(MY_DISP_HOR_RES, MY_DISP_VER_RES);
    lv_display_set_color_format(disp, LV_COLOR_FORMAT_I1);
    lv_display_set_flush_cb(disp, disp_flush);

    LV_ATTRIBUTE_MEM_ALIGN
    lv_display_set_buffers(disp, fb, NULL, sizeof(fb), LV_DISPLAY_RENDER_MODE_FULL);
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

/* Buffer for one page of data */
/* Буфер для одной страницы (256 байт) */
uint8_t page_buf[ST75256_WIDTH];

static void disp_flush(lv_display_t * disp_drv, const lv_area_t * area, uint8_t * px_map)
{
    /* LVGL I1 формат: горизонтальные строки, 1 бит на пиксель, MSB=left.
     * Первые 8 байт — палитра, пропускаем.
     *
     * ST75256: вертикальные страницы по 8 пикселей, MSB=top (bit7 = верхний пиксель).
     * Формат: page0[col0], page0[col1], ..., page0[col255], page1[col0], ...
     *
     * При RENDER_MODE_FULL area покрывает весь экран.
     */
    if(disp_flush_enabled) {
        /* Skip palette */
        px_map += 8;

        /* Ширина строки LVGL в байтах: ceil(256/8) = 32 */
    const int32_t stride = (MY_DISP_HOR_RES + 7) / 8;  /* 32 */

    /* Устанавливаем окно на весь экран */
    st75256_set_window(&lcd, 0, MY_DISP_HOR_RES - 1, 0, (MY_DISP_VER_RES / 8) - 1);

    for (int32_t page = 0; page < (MY_DISP_VER_RES / 8); page++)
    {
        memset(page_buf, 0x00, sizeof(page_buf));

        for (int32_t col = 0; col < MY_DISP_HOR_RES; col++)
        {
            /* Какой байт и бит в горизонтальной строке LVGL */
            int32_t byte_col = col / 8;
            int32_t bit_mask = 0x80 >> (col % 8);  /* LVGL I1: MSB = leftmost pixel */

            uint8_t val = 0;

            for (int32_t bit = 0; bit < 8; bit++)
            {
                int32_t row = page * 8 + bit;
                if (row >= MY_DISP_VER_RES) break;

                int32_t src_idx = row * stride + byte_col;

                /* Инвертируем: LVGL 1=белый, ST75256 1=чёрный */
                if (!(px_map[src_idx] & bit_mask))
                {
                    val |= (0x80 >> bit);
                }
            }

            page_buf[col] = val;
        }

        /* Пишем страницу напрямую в RAM дисплея */
        st75256_write_data_buf(&lcd, page_buf, MY_DISP_HOR_RES);
    }
    lv_display_flush_ready(disp_drv);
}
}

#else /*Enable this file at the top*/

/*This dummy typedef exists purely to silence -Wpedantic.*/
typedef int keep_pedantic_happy;
#endif
