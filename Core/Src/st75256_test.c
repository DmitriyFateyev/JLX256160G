#include "st75256.h"
#include <string.h>

static inline size_t FB_IDX(int page, int col) {
    return (size_t)page * ST75256_WIDTH + (size_t)col;
}

void st75256_test_lcdic_pattern(st75256_t *lcd)
{
    static uint8_t fb[ST75256_FB_SIZE];
    memset(fb, 0x00, sizeof(fb)); // фон белый (для обычного режима)

    // 1) Левые/правые вертикальные маркеры (проверка зеркала X)
    for (int page = 0; page < ST75256_PAGES; page++) {
        fb[FB_IDX(page, 0)]   = 0xFF; // край слева
        fb[FB_IDX(page, 255)] = 0xFF; // край справа
    }

    // 2) Верхний блок и нижний блок (проверка зеркала Y / порядок страниц)
    for (int col = 2; col < 34; col++) {
        fb[FB_IDX(0, col)]  = 0xFF;                // блок вверху
        fb[FB_IDX(19, col)] = 0xFF;                // блок внизу
    }

    // 3) Битовый порядок внутри байта (LSB/MSB top)
    // В самой верхней странице (page 0), в колонках 40..47
    // будем писать 0x01,0x02,0x04,...,0x80
    const uint8_t bits[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
    for (int i = 0; i < 8; i++) {
        fb[FB_IDX(0, 40 + i)] = bits[i];
    }

    // 4) То же, но в обратном порядке (проверка байтового порядка)
    for (int i = 0; i < 8; i++) {
        fb[FB_IDX(0, 50 + i)] = bits[7 - i];
    }

    // 5) Диагональ 8x8 (наглядность ориентации битов)
    // В page 1, колонки 40..47:
    // 0x01,0x02,...,0x80 создадут диагональ сверху-вниз (если LSB=top)
    for (int i = 0; i < 8; i++) {
        fb[FB_IDX(1, 40 + i)] = bits[i];
    }

    st75256_write_fb(lcd, fb);
}
