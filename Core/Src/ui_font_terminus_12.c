/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font TerminusTTF-Bold-4.49.3.ttf --range 32-127,192-255,1024-1119,399,601 --format lvgl -o ui_font_terminus_12.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef UI_FONT_TERMINUS_12
#define UI_FONT_TERMINUS_12 1
#endif

#if UI_FONT_TERMINUS_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0021 "!" */
    0x0, 0x2, 0x8, 0x20, 0x82, 0x0, 0x20, 0x80,
    0x0,

    /* U+0022 "\"" */
    0x1, 0x45, 0x14, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0023 "#" */
    0x0, 0x5, 0x14, 0xf9, 0x45, 0x3e, 0x51, 0x40,
    0x0,

    /* U+0024 "$" */
    0x0, 0x2, 0x1c, 0xaa, 0x87, 0xa, 0xa9, 0xc2,
    0x0,

    /* U+0025 "%" */
    0x0, 0x4, 0xaa, 0x50, 0x42, 0xa, 0x55, 0x20,
    0x0,

    /* U+0026 "&" */
    0x0, 0x2, 0x14, 0x50, 0x86, 0xa4, 0x91, 0xa0,
    0x0,

    /* U+0027 "'" */
    0x0, 0x82, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0028 "(" */
    0x0, 0x1, 0x8, 0x41, 0x4, 0x10, 0x20, 0x40,
    0x0,

    /* U+0029 ")" */
    0x0, 0x4, 0x8, 0x10, 0x41, 0x4, 0x21, 0x0,
    0x0,

    /* U+002A "*" */
    0x0, 0x0, 0x0, 0x50, 0x8f, 0x88, 0x50, 0x0,
    0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x0, 0x20, 0x8f, 0x88, 0x20, 0x0,
    0x0,

    /* U+002C "," */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x84,
    0x0,

    /* U+002D "-" */
    0x0, 0x0, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,
    0x0,

    /* U+002E "." */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x80,
    0x0,

    /* U+002F "/" */
    0x0, 0x0, 0x82, 0x10, 0x42, 0x8, 0x41, 0x0,
    0x0,

    /* U+0030 "0" */
    0x0, 0x7, 0x22, 0x9a, 0xac, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0031 "1" */
    0x0, 0x2, 0x18, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+0032 "2" */
    0x0, 0x7, 0x22, 0x88, 0x21, 0x8, 0x43, 0xe0,
    0x0,

    /* U+0033 "3" */
    0x0, 0x7, 0x22, 0x8, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x86, 0x29, 0x28, 0xbe, 0x8, 0x20,
    0x0,

    /* U+0035 "5" */
    0x0, 0xf, 0xa0, 0x83, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+0036 "6" */
    0x0, 0x7, 0x20, 0x83, 0xc8, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0037 "7" */
    0x0, 0xf, 0x82, 0x8, 0x41, 0x8, 0x20, 0x80,
    0x0,

    /* U+0038 "8" */
    0x0, 0x7, 0x22, 0x89, 0xc8, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0039 "9" */
    0x0, 0x7, 0x22, 0x8a, 0x27, 0x82, 0x9, 0xc0,
    0x0,

    /* U+003A ":" */
    0x0, 0x0, 0x0, 0x20, 0x80, 0x0, 0x20, 0x80,
    0x0,

    /* U+003B ";" */
    0x0, 0x0, 0x0, 0x20, 0x80, 0x0, 0x20, 0x84,
    0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x2, 0x10, 0x84, 0x8, 0x10, 0x20,
    0x0,

    /* U+003D "=" */
    0x0, 0x0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0x0,
    0x0,

    /* U+003E ">" */
    0x0, 0x0, 0x10, 0x20, 0x40, 0x84, 0x21, 0x0,
    0x0,

    /* U+003F "?" */
    0x0, 0x7, 0x22, 0x88, 0x42, 0x0, 0x20, 0x80,
    0x0,

    /* U+0040 "@" */
    0x0, 0x7, 0x22, 0x9a, 0xaa, 0xa6, 0x81, 0xe0,
    0x0,

    /* U+0041 "A" */
    0x0, 0x7, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0042 "B" */
    0x0, 0xf, 0x22, 0x8b, 0xc8, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0043 "C" */
    0x0, 0x7, 0x22, 0x82, 0x8, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0044 "D" */
    0x0, 0xe, 0x24, 0x8a, 0x28, 0xa2, 0x93, 0x80,
    0x0,

    /* U+0045 "E" */
    0x0, 0xf, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+0046 "F" */
    0x0, 0xf, 0xa0, 0x83, 0xc8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0047 "G" */
    0x0, 0x7, 0x22, 0x82, 0xb, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0048 "H" */
    0x0, 0x8, 0xa2, 0x8b, 0xe8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0049 "I" */
    0x0, 0x7, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+004A "J" */
    0x0, 0x3, 0x84, 0x10, 0x41, 0x24, 0x91, 0x80,
    0x0,

    /* U+004B "K" */
    0x0, 0x8, 0xa4, 0xa3, 0xc, 0x28, 0x92, 0x20,
    0x0,

    /* U+004C "L" */
    0x0, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+004D "M" */
    0x0, 0x8, 0xb6, 0xaa, 0xa8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+004E "N" */
    0x0, 0x8, 0xa2, 0xca, 0xa9, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+004F "O" */
    0x0, 0x7, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0050 "P" */
    0x0, 0xf, 0x22, 0x8a, 0x2f, 0x20, 0x82, 0x0,
    0x0,

    /* U+0051 "Q" */
    0x0, 0x7, 0x22, 0x8a, 0x28, 0xa2, 0xa9, 0xc0,
    0x80,

    /* U+0052 "R" */
    0x0, 0xf, 0x22, 0x8a, 0x2f, 0x28, 0x92, 0x20,
    0x0,

    /* U+0053 "S" */
    0x0, 0x7, 0x22, 0x81, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+0054 "T" */
    0x0, 0xf, 0x88, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+0055 "U" */
    0x0, 0x8, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0056 "V" */
    0x0, 0x8, 0xa2, 0x89, 0x45, 0x14, 0x20, 0x80,
    0x0,

    /* U+0057 "W" */
    0x0, 0x8, 0xa2, 0x8a, 0x2a, 0xaa, 0xda, 0x20,
    0x0,

    /* U+0058 "X" */
    0x0, 0x8, 0xa2, 0x50, 0x82, 0x14, 0x8a, 0x20,
    0x0,

    /* U+0059 "Y" */
    0x0, 0x8, 0xa2, 0x51, 0x42, 0x8, 0x20, 0x80,
    0x0,

    /* U+005A "Z" */
    0x0, 0xf, 0x82, 0x10, 0x84, 0x20, 0x83, 0xe0,
    0x0,

    /* U+005B "[" */
    0x0, 0x7, 0x10, 0x41, 0x4, 0x10, 0x41, 0xc0,
    0x0,

    /* U+005C "\\" */
    0x0, 0x4, 0x10, 0x20, 0x81, 0x4, 0x8, 0x20,
    0x0,

    /* U+005D "]" */
    0x0, 0x7, 0x4, 0x10, 0x41, 0x4, 0x11, 0xc0,
    0x0,

    /* U+005E "^" */
    0x0, 0x85, 0x22, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+005F "_" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0x80,

    /* U+0060 "`" */
    0x40, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+0061 "a" */
    0x0, 0x0, 0x0, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+0062 "b" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0063 "c" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0064 "d" */
    0x0, 0x0, 0x82, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+0065 "e" */
    0x0, 0x0, 0x0, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+0066 "f" */
    0x0, 0x1, 0x88, 0x70, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+0067 "g" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+0068 "h" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0069 "i" */
    0x0, 0x82, 0x0, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+006A "j" */
    0x0, 0x20, 0x80, 0x18, 0x20, 0x82, 0x8, 0x24,
    0x8c,

    /* U+006B "k" */
    0x0, 0x4, 0x10, 0x49, 0x46, 0x18, 0x51, 0x20,
    0x0,

    /* U+006C "l" */
    0x0, 0x6, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+006D "m" */
    0x0, 0x0, 0x0, 0xf2, 0xaa, 0xaa, 0xaa, 0xa0,
    0x0,

    /* U+006E "n" */
    0x0, 0x0, 0x0, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+006F "o" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0070 "p" */
    0x0, 0x0, 0x0, 0xf2, 0x28, 0xa2, 0x8b, 0xc8,
    0x20,

    /* U+0071 "q" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x82,

    /* U+0072 "r" */
    0x0, 0x0, 0x0, 0xbb, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0073 "s" */
    0x0, 0x0, 0x0, 0x7a, 0x7, 0x2, 0xb, 0xc0,
    0x0,

    /* U+0074 "t" */
    0x0, 0x2, 0x8, 0x70, 0x82, 0x8, 0x20, 0x60,
    0x0,

    /* U+0075 "u" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+0076 "v" */
    0x0, 0x0, 0x0, 0x8a, 0x25, 0x14, 0x20, 0x80,
    0x0,

    /* U+0077 "w" */
    0x0, 0x0, 0x0, 0x8a, 0x2a, 0xaa, 0xa9, 0xc0,
    0x0,

    /* U+0078 "x" */
    0x0, 0x0, 0x0, 0x89, 0x42, 0x8, 0x52, 0x20,
    0x0,

    /* U+0079 "y" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+007A "z" */
    0x0, 0x0, 0x0, 0xf8, 0x42, 0x10, 0x83, 0xe0,
    0x0,

    /* U+007B "{" */
    0x0, 0x1, 0x88, 0x21, 0x2, 0x8, 0x20, 0x60,
    0x0,

    /* U+007C "|" */
    0x0, 0x2, 0x8, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+007D "}" */
    0x0, 0x6, 0x4, 0x10, 0x21, 0x4, 0x11, 0x80,
    0x0,

    /* U+007E "~" */
    0x1, 0x2a, 0xa4, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+00C0 "À" */
    0x40, 0x87, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C1 "Á" */
    0x10, 0x87, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C2 "Â" */
    0x21, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C3 "Ã" */
    0x29, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C4 "Ä" */
    0x51, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C5 "Å" */
    0x21, 0x47, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00C6 "Æ" */
    0x0, 0x7, 0xe4, 0x93, 0xf9, 0x24, 0x92, 0x70,
    0x0,

    /* U+00C7 "Ç" */
    0x0, 0x7, 0x22, 0x82, 0x8, 0x20, 0x89, 0xc2,
    0x10,

    /* U+00C8 "È" */
    0x40, 0x8f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+00C9 "É" */
    0x10, 0x8f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+00CA "Ê" */
    0x21, 0x4f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+00CB "Ë" */
    0x51, 0x4f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+00CC "Ì" */
    0x40, 0x87, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00CD "Í" */
    0x10, 0x87, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00CE "Î" */
    0x21, 0x47, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00CF "Ï" */
    0x51, 0x47, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00D0 "Ð" */
    0x0, 0xe, 0x24, 0x8b, 0xa8, 0xa2, 0x93, 0x80,
    0x0,

    /* U+00D1 "Ñ" */
    0x29, 0x48, 0xa2, 0xca, 0xa9, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00D2 "Ò" */
    0x40, 0x87, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D3 "Ó" */
    0x10, 0x87, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D4 "Ô" */
    0x21, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D5 "Õ" */
    0x29, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D6 "Ö" */
    0x51, 0x47, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D7 "×" */
    0x0, 0x0, 0x0, 0x89, 0x42, 0x14, 0x88, 0x0,
    0x0,

    /* U+00D8 "Ø" */
    0x0, 0x7, 0x62, 0x9a, 0xac, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00D9 "Ù" */
    0x40, 0x88, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00DA "Ú" */
    0x10, 0x88, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00DB "Û" */
    0x21, 0x48, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00DC "Ü" */
    0x51, 0x48, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00DD "Ý" */
    0x10, 0x88, 0xa2, 0x51, 0x42, 0x8, 0x20, 0x80,
    0x0,

    /* U+00DE "Þ" */
    0x0, 0x8, 0x3c, 0x8a, 0x28, 0xbc, 0x82, 0x0,
    0x0,

    /* U+00DF "ß" */
    0x0, 0xe, 0x24, 0x93, 0xc8, 0xa2, 0xca, 0xc0,
    0x0,

    /* U+00E0 "à" */
    0x0, 0x4, 0x8, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E1 "á" */
    0x0, 0x1, 0x8, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E2 "â" */
    0x0, 0x2, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E3 "ã" */
    0x0, 0x2, 0x94, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E4 "ä" */
    0x0, 0x5, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E5 "å" */
    0x0, 0x2, 0x14, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00E6 "æ" */
    0x0, 0x0, 0x0, 0x70, 0xa6, 0xac, 0xa1, 0xe0,
    0x0,

    /* U+00E7 "ç" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0x20, 0x89, 0xc2,
    0x10,

    /* U+00E8 "è" */
    0x0, 0x4, 0x8, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+00E9 "é" */
    0x0, 0x1, 0x8, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+00EA "ê" */
    0x0, 0x2, 0x14, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+00EB "ë" */
    0x0, 0x5, 0x14, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+00EC "ì" */
    0x0, 0x4, 0x8, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00ED "í" */
    0x0, 0x1, 0x8, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00EE "î" */
    0x0, 0x2, 0x14, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00EF "ï" */
    0x0, 0x5, 0x14, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+00F0 "ð" */
    0x2, 0x84, 0x28, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F1 "ñ" */
    0x0, 0x2, 0x94, 0xf2, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+00F2 "ò" */
    0x0, 0x4, 0x8, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F3 "ó" */
    0x0, 0x1, 0x8, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F4 "ô" */
    0x0, 0x2, 0x14, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F5 "õ" */
    0x0, 0x2, 0x94, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F6 "ö" */
    0x0, 0x5, 0x14, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+00F7 "÷" */
    0x0, 0x0, 0x8, 0x20, 0xf, 0x80, 0x20, 0x80,
    0x0,

    /* U+00F8 "ø" */
    0x0, 0x0, 0x0, 0x76, 0x6a, 0xb2, 0x89, 0xc0,
    0x0,

    /* U+00F9 "ù" */
    0x0, 0x4, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00FA "ú" */
    0x0, 0x1, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00FB "û" */
    0x0, 0x2, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00FC "ü" */
    0x0, 0x5, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+00FD "ý" */
    0x0, 0x1, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+00FE "þ" */
    0x0, 0x8, 0x20, 0xf2, 0x28, 0xa2, 0x8b, 0xc8,
    0x20,

    /* U+00FF "ÿ" */
    0x0, 0x5, 0x14, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+018F "Ə" */
    0x0, 0x7, 0x22, 0x8, 0x2f, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+0259 "ə" */
    0x0, 0x0, 0x0, 0x72, 0x20, 0xbe, 0x89, 0xc0,
    0x0,

    /* U+0400 "Ѐ" */
    0x40, 0x8f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+0401 "Ё" */
    0x51, 0x4f, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+0402 "Ђ" */
    0x0, 0xe, 0x10, 0x41, 0xc4, 0x92, 0x49, 0x20,
    0x84,

    /* U+0403 "Ѓ" */
    0x10, 0x8f, 0xa0, 0x82, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0404 "Є" */
    0x0, 0x7, 0x22, 0x83, 0xc8, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0405 "Ѕ" */
    0x0, 0x7, 0x22, 0x81, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+0406 "І" */
    0x0, 0x7, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+0407 "Ї" */
    0x51, 0x47, 0x8, 0x20, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+0408 "Ј" */
    0x0, 0x3, 0x84, 0x10, 0x41, 0x24, 0x91, 0x80,
    0x0,

    /* U+0409 "Љ" */
    0x0, 0x6, 0x28, 0xb2, 0xaa, 0xaa, 0xaa, 0xc0,
    0x0,

    /* U+040A "Њ" */
    0x0, 0xa, 0x28, 0xb3, 0xaa, 0xaa, 0xaa, 0xc0,
    0x0,

    /* U+040B "Ћ" */
    0x0, 0xe, 0x10, 0x41, 0xc4, 0x92, 0x49, 0x20,
    0x0,

    /* U+040C "Ќ" */
    0x10, 0x88, 0xa4, 0xa3, 0xc, 0x28, 0x92, 0x20,
    0x0,

    /* U+040D "Ѝ" */
    0x40, 0x88, 0xa2, 0x9a, 0xac, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+040E "Ў" */
    0x50, 0x88, 0xa2, 0x8a, 0x27, 0x82, 0x9, 0xc0,
    0x0,

    /* U+040F "Џ" */
    0x0, 0x8, 0xa2, 0x8a, 0x28, 0xa2, 0x8b, 0xe2,
    0x8,

    /* U+0410 "А" */
    0x0, 0x7, 0x22, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0411 "Б" */
    0x0, 0xf, 0x20, 0x83, 0xc8, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0412 "В" */
    0x0, 0xf, 0x22, 0x8b, 0xc8, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0413 "Г" */
    0x0, 0xf, 0xa0, 0x82, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0414 "Д" */
    0x0, 0x3, 0x92, 0x49, 0x24, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+0415 "Е" */
    0x0, 0xf, 0xa0, 0x83, 0xc8, 0x20, 0x83, 0xe0,
    0x0,

    /* U+0416 "Ж" */
    0x0, 0xa, 0xaa, 0xa9, 0xc7, 0x2a, 0xaa, 0xa0,
    0x0,

    /* U+0417 "З" */
    0x0, 0x7, 0x22, 0x8, 0xc0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+0418 "И" */
    0x0, 0x8, 0xa2, 0x9a, 0xac, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0419 "Й" */
    0x50, 0x88, 0xa2, 0x9a, 0xac, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+041A "К" */
    0x0, 0x8, 0xa4, 0xa3, 0xc, 0x28, 0x92, 0x20,
    0x0,

    /* U+041B "Л" */
    0x0, 0x3, 0x92, 0x49, 0x24, 0x92, 0x4a, 0x20,
    0x0,

    /* U+041C "М" */
    0x0, 0x8, 0xb6, 0xaa, 0xa8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+041D "Н" */
    0x0, 0x8, 0xa2, 0x8b, 0xe8, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+041E "О" */
    0x0, 0x7, 0x22, 0x8a, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+041F "П" */
    0x0, 0xf, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0420 "Р" */
    0x0, 0xf, 0x22, 0x8a, 0x2f, 0x20, 0x82, 0x0,
    0x0,

    /* U+0421 "С" */
    0x0, 0x7, 0x22, 0x82, 0x8, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0422 "Т" */
    0x0, 0xf, 0x88, 0x20, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+0423 "У" */
    0x0, 0x8, 0xa2, 0x8a, 0x27, 0x82, 0x9, 0xc0,
    0x0,

    /* U+0424 "Ф" */
    0x0, 0x87, 0x2a, 0xaa, 0xaa, 0xaa, 0xa9, 0xc2,
    0x0,

    /* U+0425 "Х" */
    0x0, 0x8, 0xa2, 0x50, 0x82, 0x14, 0x8a, 0x20,
    0x0,

    /* U+0426 "Ц" */
    0x0, 0x8, 0xa2, 0x8a, 0x28, 0xa2, 0x89, 0xf0,
    0x41,

    /* U+0427 "Ч" */
    0x0, 0x8, 0xa2, 0x8a, 0x27, 0x82, 0x8, 0x20,
    0x0,

    /* U+0428 "Ш" */
    0x0, 0xa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0xe0,
    0x0,

    /* U+0429 "Щ" */
    0x0, 0xa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0xf0,
    0x41,

    /* U+042A "Ъ" */
    0x0, 0xc, 0x10, 0x71, 0x24, 0x92, 0x49, 0xc0,
    0x0,

    /* U+042B "Ы" */
    0x0, 0x8, 0xa2, 0xca, 0xaa, 0xaa, 0xab, 0x20,
    0x0,

    /* U+042C "Ь" */
    0x0, 0x4, 0x10, 0x71, 0x24, 0x92, 0x49, 0xc0,
    0x0,

    /* U+042D "Э" */
    0x0, 0x7, 0x22, 0x8, 0xe0, 0x82, 0x89, 0xc0,
    0x0,

    /* U+042E "Ю" */
    0x0, 0x9, 0x2a, 0xaa, 0xae, 0xaa, 0xaa, 0x40,
    0x0,

    /* U+042F "Я" */
    0x0, 0x7, 0xa2, 0x8a, 0x27, 0x8a, 0x4a, 0x20,
    0x0,

    /* U+0430 "а" */
    0x0, 0x0, 0x0, 0x70, 0x27, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+0431 "б" */
    0x0, 0x7, 0x20, 0xf2, 0x28, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0432 "в" */
    0x0, 0xe, 0x24, 0x93, 0xc8, 0xa2, 0x8b, 0xc0,
    0x0,

    /* U+0433 "г" */
    0x0, 0x0, 0x0, 0xfa, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0434 "д" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+0435 "е" */
    0x0, 0x0, 0x0, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+0436 "ж" */
    0x0, 0x0, 0x0, 0xaa, 0xa7, 0x2a, 0xaa, 0xa0,
    0x0,

    /* U+0437 "з" */
    0x0, 0x0, 0x0, 0x72, 0x23, 0x2, 0x89, 0xc0,
    0x0,

    /* U+0438 "и" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+0439 "й" */
    0x0, 0x5, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+043A "к" */
    0x0, 0x0, 0x0, 0x49, 0x46, 0x18, 0x51, 0x20,
    0x0,

    /* U+043B "л" */
    0x0, 0x0, 0x0, 0x39, 0x24, 0x92, 0x4a, 0x20,
    0x0,

    /* U+043C "м" */
    0x0, 0x0, 0x0, 0x8b, 0x6a, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+043D "н" */
    0x0, 0x0, 0x0, 0x8a, 0x2f, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+043E "о" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0xa2, 0x89, 0xc0,
    0x0,

    /* U+043F "п" */
    0x0, 0x0, 0x0, 0xfa, 0x28, 0xa2, 0x8a, 0x20,
    0x0,

    /* U+0440 "р" */
    0x0, 0x0, 0x0, 0xf2, 0x28, 0xa2, 0x8b, 0xc8,
    0x20,

    /* U+0441 "с" */
    0x0, 0x0, 0x0, 0x72, 0x28, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0442 "т" */
    0x0, 0x0, 0x0, 0xf8, 0x82, 0x8, 0x20, 0x80,
    0x0,

    /* U+0443 "у" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+0444 "ф" */
    0x0, 0x0, 0x8, 0x72, 0xaa, 0xaa, 0xa9, 0xc2,
    0x0,

    /* U+0445 "х" */
    0x0, 0x0, 0x0, 0x89, 0x42, 0x8, 0x52, 0x20,
    0x0,

    /* U+0446 "ц" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x89, 0xf0,
    0x41,

    /* U+0447 "ч" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0x9e, 0x8, 0x20,
    0x0,

    /* U+0448 "ш" */
    0x0, 0x0, 0x0, 0xaa, 0xaa, 0xaa, 0xa9, 0xe0,
    0x0,

    /* U+0449 "щ" */
    0x0, 0x0, 0x0, 0xaa, 0xaa, 0xaa, 0xa9, 0xf0,
    0x41,

    /* U+044A "ъ" */
    0x0, 0x0, 0x0, 0xc1, 0x7, 0x12, 0x49, 0xc0,
    0x0,

    /* U+044B "ы" */
    0x0, 0x0, 0x0, 0x8a, 0x2c, 0xaa, 0xab, 0x20,
    0x0,

    /* U+044C "ь" */
    0x0, 0x0, 0x0, 0x41, 0x7, 0x12, 0x49, 0xc0,
    0x0,

    /* U+044D "э" */
    0x0, 0x0, 0x0, 0x72, 0x23, 0x82, 0x89, 0xc0,
    0x0,

    /* U+044E "ю" */
    0x0, 0x0, 0x0, 0x92, 0xaa, 0xba, 0xaa, 0x40,
    0x0,

    /* U+044F "я" */
    0x0, 0x0, 0x0, 0x7a, 0x28, 0x9e, 0x29, 0x20,
    0x0,

    /* U+0450 "ѐ" */
    0x0, 0x4, 0x8, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+0451 "ё" */
    0x0, 0x5, 0x14, 0x72, 0x2f, 0xa0, 0x81, 0xe0,
    0x0,

    /* U+0452 "ђ" */
    0x0, 0x4, 0x3c, 0x41, 0xc4, 0x92, 0x49, 0x20,
    0x84,

    /* U+0453 "ѓ" */
    0x0, 0x1, 0x8, 0xfa, 0x8, 0x20, 0x82, 0x0,
    0x0,

    /* U+0454 "є" */
    0x0, 0x0, 0x0, 0x72, 0x2e, 0x20, 0x89, 0xc0,
    0x0,

    /* U+0455 "ѕ" */
    0x0, 0x0, 0x0, 0x7a, 0x7, 0x2, 0xb, 0xc0,
    0x0,

    /* U+0456 "і" */
    0x0, 0x82, 0x0, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+0457 "ї" */
    0x0, 0x5, 0x14, 0x60, 0x82, 0x8, 0x21, 0xc0,
    0x0,

    /* U+0458 "ј" */
    0x0, 0x20, 0x80, 0x18, 0x20, 0x82, 0x8, 0x24,
    0x8c,

    /* U+0459 "љ" */
    0x0, 0x0, 0x0, 0x62, 0x8b, 0x2a, 0xaa, 0xc0,
    0x0,

    /* U+045A "њ" */
    0x0, 0x0, 0x0, 0xa2, 0x8f, 0x2a, 0xaa, 0xc0,
    0x0,

    /* U+045B "ћ" */
    0x0, 0x4, 0x3c, 0x41, 0xc4, 0x92, 0x49, 0x20,
    0x0,

    /* U+045C "ќ" */
    0x0, 0x0, 0x84, 0x49, 0x46, 0x18, 0x51, 0x20,
    0x0,

    /* U+045D "ѝ" */
    0x0, 0x4, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x0,

    /* U+045E "ў" */
    0x0, 0x5, 0x8, 0x8a, 0x28, 0xa2, 0x89, 0xe0,
    0x9c,

    /* U+045F "џ" */
    0x0, 0x0, 0x0, 0x8a, 0x28, 0xa2, 0x8b, 0xe2,
    0x8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 9, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 18, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 27, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 36, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 54, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 63, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 81, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 90, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 99, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 108, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 117, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 126, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 153, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 162, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 171, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 180, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 189, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 198, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 207, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 216, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 225, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 234, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 243, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 252, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 261, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 270, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 279, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 288, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 297, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 306, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 315, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 324, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 333, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 342, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 351, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 360, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 369, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 378, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 387, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 396, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 405, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 414, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 423, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 432, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 441, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 450, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 459, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 468, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 477, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 486, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 495, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 504, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 513, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 522, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 531, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 540, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 549, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 558, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 567, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 576, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 585, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 594, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 603, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 612, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 630, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 639, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 648, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 657, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 666, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 675, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 684, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 693, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 702, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 711, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 720, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 729, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 738, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 747, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 756, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 765, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 774, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 783, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 792, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 801, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 810, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 819, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 828, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 837, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 846, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 855, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 864, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 873, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 882, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 891, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 900, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 909, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 918, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 927, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 936, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 945, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 954, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 963, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 972, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 981, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 990, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 999, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1008, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1017, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1026, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1035, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1044, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1053, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1062, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1071, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1080, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1089, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1098, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1107, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1116, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1125, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1134, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1143, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1152, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1161, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1170, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1179, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1188, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1197, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1206, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1215, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1224, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1233, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1242, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1251, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1260, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1269, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1278, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1287, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1296, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1305, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1314, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1323, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1332, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1341, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1350, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1359, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1368, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1377, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1386, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1395, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1404, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1413, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1422, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1431, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1440, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1449, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1458, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1467, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1476, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1485, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1494, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1503, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1512, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1521, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1530, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1539, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1548, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1557, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1566, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1575, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1584, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1593, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1602, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1611, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1620, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1629, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1638, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1647, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1656, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1665, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1674, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1683, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1692, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1701, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1710, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1719, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1728, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1737, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1746, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1755, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1764, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1773, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1782, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1791, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1800, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1809, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1818, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1827, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1836, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1845, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1854, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1863, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1872, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1881, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1890, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1899, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1908, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1917, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1926, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1935, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1944, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1953, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1962, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1971, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1980, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1989, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1998, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2007, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2016, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2025, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2034, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2043, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2052, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2061, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2070, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2079, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2088, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2097, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2106, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2115, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2124, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2133, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2142, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2151, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2160, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2169, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2178, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2187, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2196, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2205, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2214, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2223, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2232, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2241, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2250, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2259, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2268, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2277, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2286, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2295, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2304, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0xca
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 192, .range_length = 64, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 399, .range_length = 203, .glyph_id_start = 160,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1024, .range_length = 96, .glyph_id_start = 162,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};

extern const lv_font_t lv_font_unscii_8;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_terminus_12 = {
#else
lv_font_t ui_font_terminus_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &lv_font_unscii_8,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_TERMINUS_12*/
