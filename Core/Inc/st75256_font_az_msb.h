/*
 * st75256_font_az.h
 * Azerbaijani special characters for st75256_bitmap_7x16 font
 * Same format: 7x16, 14 bytes per glyph, column-major, page-based
 * Designed to match the style of st75256_bitmap_7x16.h
 *
 * Usage: add to st75256_draw_char_ru() or use separately
 * Unicode mapping:
 *   Ç U+00C7  ç U+00E7  Ə U+018F  ə U+0259
 *   Ğ U+011E  ğ U+011F  İ U+0130  ı U+0131
 *   Ö U+00D6  ö U+00F6  Ş U+015E  ş U+015F
 *   Ü U+00DC  ü U+00FC
 */

#ifndef ST75256_FONT_AZ_H
#define ST75256_FONT_AZ_H

#include <stdint.h>
#include "st75256_bitmap_7x16_msb.h"

/* Azerbaijani special glyphs, same format as font_bmp[] */
static const uint8_t font_az[][14] = {
    {0x00, 0x3E, 0x41, 0x41, 0x41, 0x23, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00}, // 'Ç' U+00C7
    {0x00, 0x1E, 0x21, 0x21, 0x21, 0x12, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00}, // 'ç' U+00E7
    {0x00, 0x2E, 0x49, 0x49, 0x49, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // ' ' U+018F
    {0x00, 0x16, 0x29, 0x29, 0x29, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'ə' U+0259
    {0x00, 0x3E, 0xC1, 0x41, 0xC9, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'Ğ' U+011E
    {0x00, 0x1E, 0xA1, 0x61, 0xA1, 0x3F, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00}, // 'ğ' U+011F
    {0x00, 0x41, 0x41, 0xFF, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'İ' U+0130
    {0x00, 0x01, 0x01, 0x3F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'ı' U+0131
    {0x00, 0x3E, 0xC1, 0x41, 0xC1, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'Ö' U+00D6
    {0x00, 0x1E, 0xA1, 0x21, 0xA1, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'ö' U+00F6
    {0x00, 0x73, 0x49, 0x49, 0x49, 0x27, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00}, // 'Ş' U+015E
    {0x00, 0x1A, 0x29, 0x29, 0x25, 0x16, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00}, // 'ş' U+015F
    {0x00, 0x7E, 0x81, 0x01, 0x81, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'Ü' U+00DC
    {0x00, 0x3E, 0x81, 0x01, 0x81, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // 'ü' U+00FC
};

/* Unicode to font_az index lookup */
static inline int font_az_index(uint16_t unicode) {
    switch (unicode) {
        case 0x00C7: return 0;
        case 0x00E7: return 1;
        case 0x018F: return 2;
        case 0x0259: return 3;
        case 0x011E: return 4;
        case 0x011F: return 5;
        case 0x0130: return 6;
        case 0x0131: return 7;
        case 0x00D6: return 8;
        case 0x00F6: return 9;
        case 0x015E: return 10;
        case 0x015F: return 11;
        case 0x00DC: return 12;
        case 0x00FC: return 13;
        default: return -1;
    }
}

/*
 * Draw Azerbaijani character. Call this from your draw function
 * when the unicode doesn't match ASCII or Cyrillic ranges.
 * Returns 1 if drawn, 0 if not an Azerbaijani char.
 */
static inline int st75256_draw_char_az(uint8_t *fb, int x, int page, uint16_t unicode) {
    int idx = font_az_index(unicode);
    if (idx < 0) return 0;
    const uint8_t *g = font_az[idx];
    for (int col = 0; col < 7; col++) {
        if (x + col >= 256) break;
        fb[page * 256 + x + col] |= g[col];
        fb[(page + 1) * 256 + x + col] |= g[col + 7];
    }
    return 1;
}

/*
 * Universal draw function: ASCII + Cyrillic + Azerbaijani
 * Requires st75256_bitmap_7x16.h to be included before this file.
 */
static inline void st75256_draw_char_uni(uint8_t *fb, int x, int page, uint16_t unicode) {
    // ASCII
    if (unicode >= 32 && unicode <= 126) {
        const uint8_t *g = font_bmp[unicode - 32];
        for (int col = 0; col < 7; col++) {
            if (x + col >= 256) break;
            fb[page * 256 + x + col] |= g[col];
            fb[(page + 1) * 256 + x + col] |= g[col + 7];
        }
        return;
    }
    // Cyrillic А-я (0x0410-0x044F)
    if (unicode >= 0x0410 && unicode <= 0x044F) {
        const uint8_t *g = font_bmp[unicode - 0x0410 + 95];
        for (int col = 0; col < 7; col++) {
            if (x + col >= 256) break;
            fb[page * 256 + x + col] |= g[col];
            fb[(page + 1) * 256 + x + col] |= g[col + 7];
        }
        return;
    }
    // Azerbaijani special
    st75256_draw_char_az(fb, x, page, unicode);
}

/*
 * Draw UTF-8 string with ASCII + Cyrillic + Azerbaijani support
 */
static inline void st75256_draw_string_uni(uint8_t *fb, int x, int page, const char *str, int advance) {
    const uint8_t *p = (const uint8_t *)str;
    while (*p) {
        uint16_t unicode = 0;
        if ((*p & 0x80) == 0x00) {
            // 1-byte ASCII: 0xxxxxxx
            unicode = *p++;
        } else if ((*p & 0xE0) == 0xC0) {
            // 2-byte: 110xxxxx 10xxxxxx
            unicode = (uint16_t)((*p & 0x1F) << 6) | (*(p+1) & 0x3F);
            p += 2;
        } else if ((*p & 0xF0) == 0xE0) {
            // 3-byte: 1110xxxx 10xxxxxx 10xxxxxx
            unicode = (uint16_t)((*p & 0x0F) << 12) | ((*(p+1) & 0x3F) << 6) | (*(p+2) & 0x3F);
            p += 3;
        } else {
            p++;
            continue;
        }
        st75256_draw_char_uni(fb, x, page, unicode);
        x += advance;
    }
}

#endif // ST75256_FONT_AZ_H
