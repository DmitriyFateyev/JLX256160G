/**
  ******************************************************************************
  * @file           : st75256.h
  * @brief          : Header for st75256.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ST75256_H
#define __ST75256_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"


/* Private defines -----------------------------------------------------------*/
#define ST75256_WIDTH   256
#define ST75256_HEIGHT  160
#define ST75256_PAGES   (ST75256_HEIGHT/8)       // 20
#define ST75256_FB_SIZE (ST75256_WIDTH*ST75256_PAGES) // 5120

typedef struct {
    SPI_HandleTypeDef *hspi;

    GPIO_TypeDef *cs_port;   uint16_t cs_pin;
    GPIO_TypeDef *a0_port;   uint16_t a0_pin;   // A0/RS: 0=cmd, 1=data
    GPIO_TypeDef *rst_port;  uint16_t rst_pin;

    // Optional: if your panel needs it
    uint8_t invert;          // 0 normal, 1 inverted (A6/A7 related in some controllers)
} st75256_t;

void st75256_init(st75256_t *lcd);
void st75256_display_on(st75256_t *lcd, uint8_t on);
void st75256_set_window(st75256_t *lcd,
                        uint8_t col_start, uint8_t col_end,
                        uint8_t page_start, uint8_t page_end);
void st75256_write_fb(st75256_t *lcd, const uint8_t *fb); // full screen
void st75256_clear(st75256_t *lcd, uint8_t value);        // value 0x00 or 0xFF

// Pixel helper (1bpp, page-based)
void st75256_draw_pixel(uint8_t *fb, int x, int y, uint8_t on);

#ifdef __cplusplus
}
#endif

#endif /* __ST75256_H */
