/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font unifont-16.0.04.ttf --range 32-126,160-383,399,601,1024-1119,1168-1169 --format lvgl -o ui_font_unifont_14.c
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



#ifndef UI_FONT_UNIFONT_14
#define UI_FONT_UNIFONT_14 1
#endif

#if UI_FONT_UNIFONT_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd, 0x80,

    /* U+0022 "\"" */
    0x99, 0x90,

    /* U+0023 "#" */
    0x2c, 0xbf, 0xd2, 0x49, 0x2f, 0xe4, 0x90,

    /* U+0024 "$" */
    0x10, 0xfa, 0x4c, 0x87, 0x3, 0xe4, 0xbe, 0x10,

    /* U+0025 "%" */
    0x66, 0x69, 0x9c, 0x10, 0xa5, 0x55, 0x88,

    /* U+0026 "&" */
    0x31, 0x24, 0x8c, 0x23, 0x58, 0xa6, 0x64,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x48, 0x80,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x4a, 0x0,

    /* U+002A "*" */
    0x11, 0x25, 0xf2, 0xa9, 0x22, 0x0,

    /* U+002B "+" */
    0x10, 0x23, 0xf8, 0x81, 0x2, 0x0,

    /* U+002C "," */
    0xd6,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x40, 0x21, 0x11, 0x10, 0x80,

    /* U+0030 "0" */
    0x22, 0xa3, 0x3a, 0xf6, 0x2a, 0x20,

    /* U+0031 "1" */
    0x23, 0x28, 0x42, 0x10, 0x84, 0xf8,

    /* U+0032 "2" */
    0x74, 0x62, 0x3, 0x32, 0x10, 0xf8,

    /* U+0033 "3" */
    0x74, 0x62, 0x3, 0x6, 0x31, 0x70,

    /* U+0034 "4" */
    0x11, 0x94, 0xa9, 0x7c, 0x42, 0x10,

    /* U+0035 "5" */
    0xfc, 0x21, 0xf, 0x4, 0x31, 0x70,

    /* U+0036 "6" */
    0x32, 0x21, 0xf, 0x46, 0x31, 0x70,

    /* U+0037 "7" */
    0xfc, 0x10, 0x42, 0x8, 0x1, 0x4, 0x10,

    /* U+0038 "8" */
    0x74, 0x62, 0x7, 0x46, 0x31, 0x70,

    /* U+0039 "9" */
    0x74, 0x62, 0x17, 0x84, 0x22, 0x60,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0xd6,

    /* U+003C "<" */
    0x12, 0x44, 0xc4, 0x21,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x84, 0x22, 0x32, 0x48,

    /* U+003F "?" */
    0x74, 0x62, 0x0, 0x8, 0x42, 0x10,

    /* U+0040 "@" */
    0x32, 0x67, 0x7a, 0xd6, 0x68, 0x38,

    /* U+0041 "A" */
    0x22, 0x95, 0x18, 0xfe, 0x31, 0x88,

    /* U+0042 "B" */
    0xf4, 0x63, 0xf, 0x46, 0x31, 0xf0,

    /* U+0043 "C" */
    0x74, 0x63, 0x8, 0x42, 0x31, 0x70,

    /* U+0044 "D" */
    0xe4, 0xa3, 0x18, 0xc6, 0x32, 0xe0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x80,

    /* U+0047 "G" */
    0x74, 0x63, 0x8, 0x5e, 0x33, 0x68,

    /* U+0048 "H" */
    0x8c, 0x63, 0x1f, 0xc6, 0x31, 0x88,

    /* U+0049 "I" */
    0xf9, 0x8, 0x42, 0x10, 0x84, 0xf8,

    /* U+004A "J" */
    0x3c, 0x41, 0x4, 0x10, 0x49, 0x24, 0x60,

    /* U+004B "K" */
    0x8c, 0x65, 0x4c, 0x52, 0x51, 0x88,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0x8c, 0x77, 0xbb, 0xde, 0x31, 0x88,

    /* U+004E "N" */
    0x8e, 0x73, 0x5a, 0xce, 0x73, 0x88,

    /* U+004F "O" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x70,

    /* U+0050 "P" */
    0xf4, 0x63, 0xf, 0x42, 0x10, 0x80,

    /* U+0051 "Q" */
    0x72, 0x28, 0xa2, 0x8a, 0x2a, 0xb6, 0x70, 0x30,

    /* U+0052 "R" */
    0xf4, 0x63, 0xf, 0x5a, 0x51, 0x88,

    /* U+0053 "S" */
    0x74, 0x62, 0x6, 0x1a, 0x31, 0x70,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x31, 0x70,

    /* U+0056 "V" */
    0x86, 0x10, 0x12, 0x48, 0xc3, 0x4, 0x10,

    /* U+0057 "W" */
    0x8c, 0x63, 0x1b, 0xef, 0x71, 0x88,

    /* U+0058 "X" */
    0x8c, 0x54, 0xa3, 0x29, 0x51, 0x88,

    /* U+0059 "Y" */
    0x86, 0x14, 0x92, 0x30, 0x41, 0x4, 0x10,

    /* U+005A "Z" */
    0xf8, 0x42, 0x22, 0x32, 0x10, 0xf8,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x93, 0x80,

    /* U+005C "\\" */
    0x84, 0x10, 0x42, 0x8, 0x1, 0x8,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x27, 0x80,

    /* U+005E "^" */
    0x22, 0xa2,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x94,

    /* U+0061 "a" */
    0x74, 0x42, 0xf8, 0xcd, 0xa0,

    /* U+0062 "b" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0xcd, 0x80,

    /* U+0063 "c" */
    0x7c, 0x61, 0x8, 0x45, 0xe0,

    /* U+0064 "d" */
    0x8, 0x42, 0xd9, 0xc6, 0x31, 0x9b, 0x40,

    /* U+0065 "e" */
    0x74, 0x63, 0xf8, 0x45, 0xc0,

    /* U+0066 "f" */
    0x19, 0x8, 0x4f, 0x90, 0x84, 0x21, 0x0,

    /* U+0067 "g" */
    0xb, 0x65, 0x20, 0x31, 0xd1, 0x8b, 0x80,

    /* U+0068 "h" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0x21, 0x0, 0xc2, 0x10, 0x84, 0x27, 0xc0,

    /* U+006A "j" */
    0x8, 0x40, 0x30, 0x84, 0x21, 0x8, 0x64, 0xc0,

    /* U+006B "k" */
    0x84, 0x21, 0x19, 0x53, 0x92, 0x8c, 0x40,

    /* U+006C "l" */
    0x61, 0x8, 0x42, 0x10, 0x84, 0x27, 0xc0,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x32, 0x64, 0x80,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0070 "p" */
    0xb6, 0x63, 0x18, 0xe6, 0xd0, 0x80,

    /* U+0071 "q" */
    0x6c, 0xe3, 0x18, 0xcd, 0xa1, 0x8,

    /* U+0072 "r" */
    0xb6, 0x63, 0x8, 0x42, 0x0,

    /* U+0073 "s" */
    0x74, 0x60, 0xe0, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x18,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xcd, 0xa0,

    /* U+0076 "v" */
    0x8c, 0x40, 0xa5, 0x18, 0xc0,

    /* U+0077 "w" */
    0x83, 0x26, 0x4c, 0x99, 0x32, 0x5b, 0x0,

    /* U+0078 "x" */
    0x8c, 0x50, 0x64, 0x46, 0x20,

    /* U+0079 "y" */
    0x8c, 0x63, 0x18, 0xbc, 0x21, 0x70,

    /* U+007A "z" */
    0xfc, 0x10, 0x8c, 0x42, 0xf, 0xc0,

    /* U+007B "{" */
    0x34, 0x42, 0x24, 0x84, 0x24, 0x43,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0xc2, 0x24, 0x42, 0x12, 0x42, 0x2c,

    /* U+007E "~" */
    0x66, 0x99, 0x80,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xdf, 0x80,

    /* U+00A2 "¢" */
    0x10, 0x21, 0xf4, 0x99, 0x12, 0x5f, 0x8, 0x10,

    /* U+00A3 "£" */
    0x1c, 0x40, 0x81, 0xf, 0x84, 0x8, 0x3e, 0xc2,

    /* U+00A4 "¤" */
    0x8b, 0x95, 0x1d, 0xba, 0x20,

    /* U+00A5 "¥" */
    0x82, 0x88, 0xa0, 0x8f, 0xff, 0xc4, 0x8, 0x10,

    /* U+00A6 "¦" */
    0xe3, 0x80,

    /* U+00A7 "§" */
    0x74, 0x60, 0xe8, 0xb8, 0x31, 0x70,

    /* U+00A8 "¨" */
    0x99,

    /* U+00A9 "©" */
    0x38, 0x8a, 0x6d, 0x5a, 0x35, 0x66, 0xa2, 0x38,

    /* U+00AA "ª" */
    0xe1, 0xf9, 0xf0, 0xf0,

    /* U+00AB "«" */
    0x29, 0x52, 0x9d, 0xa4, 0xa5,

    /* U+00AC "¬" */
    0xf8, 0x42, 0x10,

    /* U+00AD "­" */
    0xd5, 0x54, 0x0, 0x7, 0xd3, 0x1e, 0x25, 0x46,
    0x79, 0x32, 0x92, 0x19, 0x24, 0xc0, 0x0, 0x0,
    0x3, 0x0, 0x2, 0x1e, 0x8, 0x0, 0x18, 0x0,
    0xd, 0x55, 0x40,

    /* U+00AE "®" */
    0x38, 0x8a, 0xcd, 0x5a, 0xb6, 0x6a, 0xa2, 0x38,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x10, 0x23, 0xf8, 0x81, 0x2, 0x0, 0x7f,

    /* U+00B2 "²" */
    0x74, 0x4c, 0x88, 0x7c,

    /* U+00B3 "³" */
    0x74, 0x5c, 0x18, 0xb8,

    /* U+00B4 "´" */
    0x68,

    /* U+00B5 "µ" */
    0x44, 0x89, 0x12, 0x24, 0x4d, 0x94, 0xa0, 0x80,

    /* U+00B6 "¶" */
    0x7f, 0xeb, 0xd3, 0xa1, 0x42, 0x85, 0xa, 0x14,
    0x28,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0x70,

    /* U+00B9 "¹" */
    0x23, 0x28, 0x42, 0x7c,

    /* U+00BA "º" */
    0x60, 0x99, 0x60, 0xf0,

    /* U+00BB "»" */
    0x94, 0x94, 0xa7, 0xaa, 0x52,

    /* U+00BC "¼" */
    0x4e, 0x50, 0xa2, 0x95, 0x73, 0x88,

    /* U+00BD "½" */
    0x4e, 0x50, 0xa5, 0x1d, 0x30, 0x98,

    /* U+00BE "¾" */
    0xc9, 0x54, 0x6f, 0x9d, 0x73, 0x88,

    /* U+00BF "¿" */
    0x21, 0x0, 0x42, 0x22, 0x31, 0x70,

    /* U+00C0 "À" */
    0x61, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C1 "Á" */
    0x33, 0x0, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C2 "Â" */
    0x22, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C3 "Ã" */
    0x6d, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C4 "Ä" */
    0x52, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C5 "Å" */
    0x23, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+00C6 "Æ" */
    0x3e, 0xa2, 0x44, 0x8f, 0xf2, 0x24, 0x48, 0x9e,

    /* U+00C7 "Ç" */
    0x74, 0x63, 0x8, 0x42, 0x11, 0x71, 0x18,

    /* U+00C8 "È" */
    0x60, 0xc1, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00C9 "É" */
    0x1b, 0x1, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00CA "Ê" */
    0x32, 0x41, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00CB "Ë" */
    0x52, 0x81, 0xf8, 0x42, 0x1e, 0x84, 0x21, 0xf0,

    /* U+00CC "Ì" */
    0x60, 0xc1, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+00CD "Í" */
    0x36, 0x1, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+00CE "Î" */
    0x64, 0x81, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+00CF "Ï" */
    0x94, 0x81, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+00D0 "Ð" */
    0x71, 0x24, 0x51, 0xf5, 0x14, 0x52, 0x70,

    /* U+00D1 "Ñ" */
    0x6c, 0x81, 0x1c, 0xe6, 0xb5, 0x9c, 0xe7, 0x10,

    /* U+00D2 "Ò" */
    0x61, 0x80, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00D3 "Ó" */
    0x33, 0x0, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00D4 "Ô" */
    0x22, 0x80, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00D5 "Õ" */
    0x6d, 0x80, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00D6 "Ö" */
    0x52, 0x80, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00D7 "×" */
    0xd9, 0x15, 0x10,

    /* U+00D8 "Ø" */
    0xb, 0xe1, 0x19, 0xce, 0xb9, 0x4d, 0xa0,

    /* U+00D9 "Ù" */
    0x61, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00DA "Ú" */
    0x33, 0x1, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00DB "Û" */
    0x22, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00DC "Ü" */
    0x52, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+00DD "Ý" */
    0x11, 0x80, 0x21, 0x85, 0x24, 0x8c, 0x10, 0x41,
    0x4,

    /* U+00DE "Þ" */
    0x84, 0x39, 0x28, 0xc7, 0xd0, 0x84, 0x0,

    /* U+00DF "ß" */
    0x64, 0xa5, 0xa, 0x4a, 0x35, 0x90,

    /* U+00E0 "à" */
    0x61, 0x80, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E1 "á" */
    0x33, 0x0, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E2 "â" */
    0x22, 0x80, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E3 "ã" */
    0x6d, 0x80, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E4 "ä" */
    0x52, 0x80, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E5 "å" */
    0x71, 0x0, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+00E6 "æ" */
    0x7d, 0x24, 0x4b, 0xf9, 0x12, 0x5f, 0x0,

    /* U+00E7 "ç" */
    0x7c, 0x61, 0x8, 0x45, 0xe2, 0x60,

    /* U+00E8 "è" */
    0x61, 0x80, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+00E9 "é" */
    0x33, 0x0, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+00EA "ê" */
    0x22, 0x80, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+00EB "ë" */
    0x52, 0x80, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+00EC "ì" */
    0xc1, 0x80, 0x6, 0x10, 0x84, 0x21, 0x3e,

    /* U+00ED "í" */
    0x36, 0x0, 0x6, 0x10, 0x84, 0x21, 0x3e,

    /* U+00EE "î" */
    0x64, 0x80, 0x6, 0x10, 0x84, 0x21, 0x3e,

    /* U+00EF "ï" */
    0x94, 0x80, 0x6, 0x10, 0x84, 0x21, 0x3e,

    /* U+00F0 "ð" */
    0x68, 0x8c, 0x90, 0xfe, 0x31, 0x8c, 0x5c,

    /* U+00F1 "ñ" */
    0x6d, 0x80, 0xb, 0x66, 0x31, 0x8c, 0x62,

    /* U+00F2 "ò" */
    0x61, 0x80, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+00F3 "ó" */
    0x33, 0x0, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+00F4 "ô" */
    0x22, 0x80, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+00F5 "õ" */
    0x6d, 0x80, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+00F6 "ö" */
    0x52, 0x80, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+00F7 "÷" */
    0x20, 0x1, 0xf0, 0x10,

    /* U+00F8 "ø" */
    0xb, 0xa3, 0x3a, 0xd7, 0x2e, 0x80,

    /* U+00F9 "ù" */
    0x61, 0x80, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+00FA "ú" */
    0x33, 0x0, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+00FB "û" */
    0x22, 0x80, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+00FC "ü" */
    0x52, 0x80, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+00FD "ý" */
    0x70, 0x1, 0x18, 0xc6, 0x31, 0x78, 0x42, 0xe0,

    /* U+00FE "þ" */
    0x84, 0x21, 0x6c, 0xc6, 0x31, 0xcd, 0xa1, 0x0,

    /* U+00FF "ÿ" */
    0x52, 0x81, 0x18, 0xc6, 0x31, 0x78, 0x42, 0xe0,

    /* U+0100 "Ā" */
    0x70, 0x8, 0xa5, 0x46, 0x3f, 0x8c, 0x62,

    /* U+0101 "ā" */
    0x70, 0x0, 0xe8, 0x85, 0xf1, 0x9b, 0x40,

    /* U+0102 "Ă" */
    0x8b, 0x80, 0x45, 0x2a, 0x31, 0xfc, 0x63, 0x10,

    /* U+0103 "ă" */
    0x8b, 0x80, 0x7, 0x44, 0x2f, 0x8c, 0xda,

    /* U+0104 "Ą" */
    0x21, 0x45, 0x22, 0x8b, 0xe8, 0xa2, 0x88, 0x40,
    0xc0,

    /* U+0105 "ą" */
    0x72, 0x20, 0x9e, 0x8a, 0x66, 0x84, 0xc,

    /* U+0106 "Ć" */
    0x33, 0x0, 0xe8, 0xc6, 0x10, 0x84, 0x62, 0xe0,

    /* U+0107 "ć" */
    0x1b, 0x0, 0x7, 0xc6, 0x10, 0x84, 0x5e,

    /* U+0108 "Ĉ" */
    0x22, 0x80, 0xe8, 0xc6, 0x10, 0x84, 0x62, 0xe0,

    /* U+0109 "ĉ" */
    0x32, 0x40, 0x7, 0xc6, 0x10, 0x84, 0x5e,

    /* U+010A "Ċ" */
    0x21, 0x0, 0xe8, 0xc6, 0x10, 0x84, 0x62, 0xe0,

    /* U+010B "ċ" */
    0x20, 0x80, 0x0, 0x7a, 0x18, 0x20, 0x82, 0x17,
    0x80,

    /* U+010C "Č" */
    0x51, 0x0, 0xe8, 0xc6, 0x10, 0x84, 0x62, 0xe0,

    /* U+010D "č" */
    0x49, 0x80, 0x7, 0xc6, 0x10, 0x84, 0x5e,

    /* U+010E "Ď" */
    0xa3, 0x1, 0xc9, 0x46, 0x31, 0x8c, 0x65, 0xc0,

    /* U+010F "ď" */
    0x16, 0x24, 0x4a, 0xab, 0x12, 0x24, 0x48, 0xb0,
    0xa0,

    /* U+0110 "Đ" */
    0x71, 0x24, 0x51, 0xf5, 0x14, 0x52, 0x70,

    /* U+0111 "đ" */
    0x8, 0xf0, 0x9a, 0x9a, 0x28, 0xa2, 0x99, 0xa0,

    /* U+0112 "Ē" */
    0x78, 0x3f, 0x8, 0x43, 0xf0, 0x84, 0x3e,

    /* U+0113 "ē" */
    0x70, 0x0, 0xe8, 0xc7, 0xf0, 0x8b, 0x80,

    /* U+0114 "Ĕ" */
    0x8b, 0x81, 0xf8, 0x42, 0x1e, 0x84, 0x21, 0xf0,

    /* U+0115 "ĕ" */
    0x8c, 0x5c, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+0116 "Ė" */
    0x20, 0x80, 0x3f, 0x82, 0x8, 0x3e, 0x82, 0x8,
    0x3f,

    /* U+0117 "ė" */
    0x21, 0x0, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+0118 "Ę" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8, 0x82,

    /* U+0119 "ę" */
    0x74, 0x63, 0xf8, 0x45, 0xc4, 0x30,

    /* U+011A "Ě" */
    0x49, 0x81, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+011B "ě" */
    0x51, 0x0, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+011C "Ĝ" */
    0x22, 0x80, 0xe8, 0xc6, 0x10, 0xbc, 0x66, 0xd0,

    /* U+011D "ĝ" */
    0x70, 0x2, 0xd9, 0x48, 0xc, 0x74, 0x62, 0xe0,

    /* U+011E "Ğ" */
    0x8b, 0x80, 0xe8, 0xc6, 0x10, 0xbc, 0x66, 0xd0,

    /* U+011F "ğ" */
    0x8b, 0x80, 0x16, 0xca, 0x40, 0x63, 0xa3, 0x17,
    0x0,

    /* U+0120 "Ġ" */
    0x21, 0x0, 0xe8, 0xc6, 0x10, 0x9c, 0x66, 0xf0,

    /* U+0121 "ġ" */
    0x21, 0x2, 0xd9, 0x48, 0xc, 0x74, 0x62, 0xe0,

    /* U+0122 "Ģ" */
    0x74, 0x63, 0x8, 0x5e, 0x33, 0x69, 0x18,

    /* U+0123 "ģ" */
    0x41, 0x2, 0xd9, 0x48, 0xc, 0x74, 0x62, 0xe0,

    /* U+0124 "Ĥ" */
    0x22, 0x81, 0x18, 0xc6, 0x3f, 0x8c, 0x63, 0x10,

    /* U+0125 "ĥ" */
    0x65, 0x21, 0x8, 0x5b, 0x31, 0x8c, 0x63, 0x10,

    /* U+0126 "Ħ" */
    0x44, 0x8b, 0xfa, 0x24, 0x4f, 0x91, 0x22, 0x44,

    /* U+0127 "ħ" */
    0x43, 0xc4, 0x16, 0x65, 0x14, 0x51, 0x45, 0x10,

    /* U+0128 "Ĩ" */
    0x66, 0x60, 0x1f, 0x10, 0x41, 0x4, 0x10, 0x41,
    0x1f,

    /* U+0129 "ĩ" */
    0x66, 0x60, 0x0, 0x30, 0x41, 0x4, 0x10, 0x47,
    0xc0,

    /* U+012A "Ī" */
    0xf0, 0x3e, 0x42, 0x10, 0x84, 0x21, 0x3e,

    /* U+012B "ī" */
    0xf0, 0x0, 0xc2, 0x10, 0x84, 0x27, 0xc0,

    /* U+012C "Ĭ" */
    0x8b, 0x80, 0xf1, 0x8, 0x42, 0x10, 0x84, 0xf0,

    /* U+012D "ĭ" */
    0x8c, 0x5c, 0x3, 0x8, 0x42, 0x10, 0x9e,

    /* U+012E "Į" */
    0xf9, 0x8, 0x42, 0x10, 0x84, 0xf9, 0x6,

    /* U+012F "į" */
    0x21, 0x0, 0xc2, 0x10, 0x84, 0x27, 0xc8, 0x30,

    /* U+0130 "İ" */
    0x21, 0x1, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+0131 "ı" */
    0x61, 0x8, 0x42, 0x13, 0xe0,

    /* U+0132 "Ĳ" */
    0xfd, 0x24, 0x92, 0x49, 0x2e, 0x82, 0x30,

    /* U+0133 "ĳ" */
    0x4a, 0x41, 0xb4, 0xa5, 0x29, 0xe8, 0x54, 0x40,

    /* U+0134 "Ĵ" */
    0x31, 0x20, 0xf, 0x10, 0x41, 0x4, 0x12, 0x49,
    0x18,

    /* U+0135 "ĵ" */
    0x3c, 0x0, 0x6, 0x8, 0x20, 0x82, 0x8, 0x29,
    0x18,

    /* U+0136 "Ķ" */
    0x45, 0x14, 0x94, 0x61, 0x85, 0x13, 0x44, 0x8c,
    0x0,

    /* U+0137 "ķ" */
    0x41, 0x4, 0x11, 0x49, 0x46, 0x14, 0x4d, 0x12,
    0x30,

    /* U+0138 "ĸ" */
    0x8c, 0xa9, 0xca, 0x4a, 0x20,

    /* U+0139 "Ĺ" */
    0x36, 0x1, 0x8, 0x42, 0x10, 0x84, 0x21, 0xf0,

    /* U+013A "ĺ" */
    0x36, 0x18, 0x42, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+013B "Ļ" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8, 0x98,

    /* U+013C "ļ" */
    0x61, 0x8, 0x42, 0x10, 0x84, 0x27, 0xc9, 0x80,

    /* U+013D "Ľ" */
    0xb4, 0xa5, 0x48, 0x42, 0x10, 0xf8,

    /* U+013E "ľ" */
    0x6c, 0x92, 0x4a, 0x20, 0x82, 0x8, 0x23, 0xe0,

    /* U+013F "Ŀ" */
    0x84, 0x21, 0x9, 0x4a, 0x10, 0xf8,

    /* U+0140 "ŀ" */
    0x61, 0x8, 0x42, 0x14, 0xa4, 0x27, 0xc0,

    /* U+0141 "Ł" */
    0x41, 0x4, 0x94, 0x63, 0x4, 0x10, 0x7c,

    /* U+0142 "ł" */
    0x61, 0x8, 0x53, 0x32, 0x84, 0x27, 0xc0,

    /* U+0143 "Ń" */
    0x13, 0x1, 0x1c, 0xe6, 0xb5, 0x9c, 0xe7, 0x10,

    /* U+0144 "ń" */
    0x33, 0x0, 0xb, 0x66, 0x31, 0x8c, 0x62,

    /* U+0145 "Ņ" */
    0x45, 0x96, 0x55, 0x55, 0x34, 0xd3, 0x4c, 0x8c,
    0x0,

    /* U+0146 "ņ" */
    0x59, 0x94, 0x51, 0x45, 0x14, 0x48, 0xc0,

    /* U+0147 "Ň" */
    0x51, 0x1, 0x1c, 0xe6, 0xb5, 0x9c, 0xe7, 0x10,

    /* U+0148 "ň" */
    0x51, 0x0, 0xb, 0x66, 0x31, 0x8c, 0x62,

    /* U+0149 "ŉ" */
    0xc2, 0x20, 0xb, 0x66, 0x31, 0x8c, 0x62,

    /* U+014A "Ŋ" */
    0xb6, 0x63, 0x18, 0xc6, 0x31, 0xb0,

    /* U+014B "ŋ" */
    0xb6, 0x63, 0x18, 0xc6, 0x21, 0x30,

    /* U+014C "Ō" */
    0x70, 0x1d, 0x18, 0xc6, 0x31, 0x8c, 0x5c,

    /* U+014D "ō" */
    0x70, 0x0, 0xe8, 0xc6, 0x31, 0x8b, 0x80,

    /* U+014E "Ŏ" */
    0x8b, 0x80, 0xe8, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+014F "ŏ" */
    0x8c, 0x5c, 0x7, 0x46, 0x31, 0x8c, 0x5c,

    /* U+0150 "Ő" */
    0x6e, 0x40, 0x1c, 0x8a, 0x28, 0xa2, 0x8a, 0x28,
    0x9c,

    /* U+0151 "ő" */
    0x6e, 0x40, 0x0, 0x72, 0x28, 0xa2, 0x8a, 0x27,
    0x0,

    /* U+0152 "Œ" */
    0x6f, 0x22, 0x44, 0x89, 0xd2, 0x24, 0x48, 0x6e,

    /* U+0153 "œ" */
    0x6d, 0x26, 0x4c, 0xf9, 0x12, 0x5b, 0x0,

    /* U+0154 "Ŕ" */
    0x32, 0x1, 0xe8, 0xc6, 0x1e, 0xb4, 0xa3, 0x10,

    /* U+0155 "ŕ" */
    0x33, 0x0, 0xb, 0x66, 0x30, 0x84, 0x20,

    /* U+0156 "Ŗ" */
    0x79, 0x24, 0x51, 0x79, 0x44, 0x91, 0x44, 0x8c,
    0x0,

    /* U+0157 "ŗ" */
    0x59, 0x94, 0x50, 0x41, 0x4, 0x8, 0xc0,

    /* U+0158 "Ř" */
    0x51, 0x1, 0xe8, 0xc6, 0x1e, 0xb4, 0xa3, 0x10,

    /* U+0159 "ř" */
    0x51, 0x0, 0xb, 0x66, 0x30, 0x84, 0x20,

    /* U+015A "Ś" */
    0x33, 0x0, 0xe8, 0xc4, 0xc, 0x34, 0x62, 0xe0,

    /* U+015B "ś" */
    0x33, 0x0, 0x7, 0x46, 0xe, 0x8c, 0x5c,

    /* U+015C "Ŝ" */
    0x22, 0x80, 0xe8, 0xc4, 0xc, 0x34, 0x62, 0xe0,

    /* U+015D "ŝ" */
    0x22, 0x80, 0x7, 0x46, 0xe, 0xc, 0x5c,

    /* U+015E "Ş" */
    0x70, 0x23, 0x16, 0x18, 0x31, 0x71, 0x18,

    /* U+015F "ş" */
    0x74, 0x60, 0xc3, 0xc5, 0xc4, 0x60,

    /* U+0160 "Š" */
    0x51, 0x0, 0xe8, 0xc4, 0xc, 0x34, 0x62, 0xe0,

    /* U+0161 "š" */
    0x51, 0x0, 0x7, 0x46, 0xe, 0xc, 0x5c,

    /* U+0162 "Ţ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x21, 0x80,

    /* U+0163 "ţ" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x18, 0x98,

    /* U+0164 "Ť" */
    0x48, 0x60, 0x7, 0xf1, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40, 0x80,

    /* U+0165 "ť" */
    0xc, 0x12, 0x4a, 0x23, 0xc2, 0x8, 0x20, 0x81,
    0x0,

    /* U+0166 "Ŧ" */
    0xfe, 0x20, 0x40, 0x87, 0xc2, 0x4, 0x8, 0x10,

    /* U+0167 "ŧ" */
    0x21, 0x9, 0xf2, 0x7c, 0x84, 0x18,

    /* U+0168 "Ũ" */
    0x6d, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+0169 "ũ" */
    0x6d, 0x80, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+016A "Ū" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8c, 0x5c,

    /* U+016B "ū" */
    0x70, 0x1, 0x18, 0xc6, 0x31, 0x9b, 0x40,

    /* U+016C "Ŭ" */
    0x8b, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+016D "ŭ" */
    0x8b, 0x80, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+016E "Ů" */
    0x23, 0x81, 0x18, 0xc6, 0x31, 0x8c, 0x62, 0xe0,

    /* U+016F "ů" */
    0x22, 0x88, 0x8, 0xc6, 0x31, 0x8c, 0xda,

    /* U+0170 "Ű" */
    0x6e, 0x40, 0x22, 0x8a, 0x28, 0xa2, 0x8a, 0x28,
    0x9c,

    /* U+0171 "ű" */
    0x6e, 0x40, 0x0, 0x8a, 0x28, 0xa2, 0x8a, 0x66,
    0x80,

    /* U+0172 "Ų" */
    0x8c, 0x63, 0x18, 0xc6, 0x31, 0x71, 0xc,

    /* U+0173 "ų" */
    0x8a, 0x28, 0xa2, 0x8a, 0x66, 0x84, 0xc,

    /* U+0174 "Ŵ" */
    0x32, 0x1, 0x18, 0xc6, 0x37, 0xde, 0xe3, 0x10,

    /* U+0175 "ŵ" */
    0x30, 0x90, 0x0, 0x8, 0x32, 0x64, 0xc9, 0x93,
    0x25, 0xb0,

    /* U+0176 "Ŷ" */
    0x31, 0x0, 0x21, 0x85, 0x24, 0x8c, 0x10, 0x41,
    0x4,

    /* U+0177 "ŷ" */
    0x70, 0x1, 0x18, 0xc6, 0x31, 0x78, 0x42, 0xe0,

    /* U+0178 "Ÿ" */
    0x51, 0x40, 0x21, 0x85, 0x24, 0x8c, 0x10, 0x41,
    0x4,

    /* U+0179 "Ź" */
    0x33, 0x1, 0xf0, 0x84, 0x44, 0x64, 0x21, 0xf0,

    /* U+017A "ź" */
    0x19, 0x80, 0x0, 0xfc, 0x10, 0x8c, 0x42, 0xf,
    0xc0,

    /* U+017B "Ż" */
    0x21, 0x1, 0xf0, 0x84, 0x42, 0x64, 0x21, 0xf0,

    /* U+017C "ż" */
    0x20, 0x80, 0x0, 0xfc, 0x10, 0x8c, 0x42, 0xf,
    0xc0,

    /* U+017D "Ž" */
    0x51, 0x1, 0xf0, 0x84, 0x44, 0x64, 0x21, 0xf0,

    /* U+017E "ž" */
    0x48, 0xc0, 0x0, 0xfc, 0x10, 0x8c, 0x42, 0xf,
    0xc0,

    /* U+017F "ſ" */
    0x19, 0x8, 0x4e, 0x10, 0x84, 0x21, 0x0,

    /* U+018F "Ə" */
    0x22, 0xa2, 0x10, 0xfe, 0x2a, 0x20,

    /* U+0259 "ə" */
    0x74, 0x43, 0xf8, 0xc5, 0xc0,

    /* U+0400 "Ѐ" */
    0x78, 0x3f, 0x8, 0x43, 0xf0, 0x84, 0x3e,

    /* U+0401 "Ё" */
    0x52, 0x81, 0xf8, 0x42, 0x1e, 0x84, 0x21, 0xf0,

    /* U+0402 "Ђ" */
    0xf8, 0x82, 0x8, 0x38, 0x92, 0x49, 0x28,

    /* U+0403 "Ѓ" */
    0x1b, 0x1, 0xf8, 0x42, 0x10, 0x84, 0x21, 0x0,

    /* U+0404 "Є" */
    0x3a, 0x61, 0xf, 0xc2, 0x9, 0x38,

    /* U+0405 "Ѕ" */
    0x74, 0x62, 0x6, 0x1a, 0x31, 0x70,

    /* U+0406 "І" */
    0xf9, 0x8, 0x42, 0x10, 0x84, 0xf8,

    /* U+0407 "Ї" */
    0x94, 0x81, 0xf2, 0x10, 0x84, 0x21, 0x9, 0xf0,

    /* U+0408 "Ј" */
    0x38, 0x84, 0x21, 0xa, 0x52, 0x60,

    /* U+0409 "Љ" */
    0x78, 0x48, 0x48, 0x48, 0x4e, 0x49, 0x49, 0x49,
    0x8e,

    /* U+040A "Њ" */
    0x91, 0x22, 0x44, 0x8f, 0xd2, 0x64, 0xc9, 0x9c,

    /* U+040B "Ћ" */
    0xf8, 0x82, 0x8, 0x3c, 0x92, 0x49, 0x24,

    /* U+040C "Ќ" */
    0x19, 0x80, 0x23, 0x92, 0x4a, 0x28, 0xe2, 0x48,
    0xa1,

    /* U+040D "Ѝ" */
    0x70, 0x23, 0x39, 0xce, 0x75, 0xce, 0x62,

    /* U+040E "Ў" */
    0x89, 0xc0, 0x21, 0x85, 0x24, 0x8c, 0x10, 0x42,
    0x18,

    /* U+040F "Џ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xfe,
    0x20, 0x40,

    /* U+0410 "А" */
    0x22, 0x95, 0x18, 0xfe, 0x31, 0x88,

    /* U+0411 "Б" */
    0xf4, 0x21, 0xf, 0x46, 0x31, 0xf0,

    /* U+0412 "В" */
    0xf4, 0x63, 0xf, 0x46, 0x31, 0xf0,

    /* U+0413 "Г" */
    0xfc, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0414 "Д" */
    0xc, 0x28, 0x50, 0xa2, 0x44, 0x91, 0x22, 0xff,
    0x6, 0x8,

    /* U+0415 "Е" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8,

    /* U+0416 "Ж" */
    0x96, 0x55, 0x96, 0x39, 0x65, 0xa5, 0x94,

    /* U+0417 "З" */
    0xf4, 0x42, 0xf, 0x8, 0x31, 0xf0,

    /* U+0418 "И" */
    0x8c, 0xe7, 0x39, 0xd7, 0x39, 0x88,

    /* U+0419 "Й" */
    0x70, 0x23, 0x39, 0xce, 0x75, 0xce, 0x62,

    /* U+041A "К" */
    0x8e, 0x49, 0x28, 0xa3, 0x89, 0x22, 0x84,

    /* U+041B "Л" */
    0x39, 0x4a, 0x52, 0x95, 0x29, 0x88,

    /* U+041C "М" */
    0x8c, 0x77, 0xbb, 0xde, 0x31, 0x88,

    /* U+041D "Н" */
    0x8c, 0x63, 0x1f, 0xc6, 0x31, 0x88,

    /* U+041E "О" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x70,

    /* U+041F "П" */
    0xfc, 0x63, 0x18, 0xc6, 0x31, 0x88,

    /* U+0420 "Р" */
    0xf4, 0x63, 0xf, 0x42, 0x10, 0x80,

    /* U+0421 "С" */
    0x74, 0x63, 0x8, 0x42, 0x31, 0x70,

    /* U+0422 "Т" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0423 "У" */
    0x86, 0x14, 0x92, 0x30, 0x41, 0x8, 0x60,

    /* U+0424 "Ф" */
    0x7d, 0x26, 0x4c, 0x99, 0x2f, 0x84, 0x8, 0x10,

    /* U+0425 "Х" */
    0x8c, 0x54, 0xa3, 0x29, 0x51, 0x88,

    /* U+0426 "Ц" */
    0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2, 0xfc, 0x10,
    0x40,

    /* U+0427 "Ч" */
    0x8c, 0x63, 0x19, 0xb4, 0x21, 0x8,

    /* U+0428 "Ш" */
    0x93, 0x26, 0x4c, 0x99, 0x32, 0x64, 0xc9, 0xfe,

    /* U+0429 "Щ" */
    0x95, 0x2a, 0x54, 0xa9, 0x52, 0xa5, 0x4a, 0xfe,
    0x4, 0x8,

    /* U+042A "Ъ" */
    0xe0, 0x82, 0x8, 0x38, 0x92, 0x49, 0x38,

    /* U+042B "Ы" */
    0x8c, 0x63, 0x1e, 0xce, 0x73, 0xe8,

    /* U+042C "Ь" */
    0x84, 0x21, 0xf, 0x46, 0x31, 0xf0,

    /* U+042D "Э" */
    0xe4, 0x82, 0x1f, 0x84, 0x32, 0xe0,

    /* U+042E "Ю" */
    0x95, 0x6b, 0x5e, 0xd6, 0xb5, 0x90,

    /* U+042F "Я" */
    0x7c, 0x63, 0x17, 0xb5, 0x31, 0x88,

    /* U+0430 "а" */
    0x74, 0x42, 0xf8, 0xcd, 0xa0,

    /* U+0431 "б" */
    0x9, 0x91, 0xf, 0x46, 0x31, 0x8c, 0x5c,

    /* U+0432 "в" */
    0xf4, 0x63, 0xe8, 0xc7, 0xc0,

    /* U+0433 "г" */
    0xfc, 0x21, 0x8, 0x42, 0x0,

    /* U+0434 "д" */
    0x38, 0xa4, 0xa2, 0x8a, 0x2f, 0xe1,

    /* U+0435 "е" */
    0x74, 0x63, 0xf8, 0x45, 0xc0,

    /* U+0436 "ж" */
    0x96, 0x55, 0xe, 0x5a, 0x59, 0x40,

    /* U+0437 "з" */
    0xf4, 0x43, 0xe1, 0xc7, 0xc0,

    /* U+0438 "и" */
    0x9c, 0xe7, 0x5a, 0xe7, 0x20,

    /* U+0439 "й" */
    0x51, 0x0, 0x9, 0xce, 0x75, 0xae, 0x72,

    /* U+043A "к" */
    0x8c, 0xa9, 0xc9, 0x46, 0x20,

    /* U+043B "л" */
    0x39, 0x4a, 0x54, 0xa6, 0x20,

    /* U+043C "м" */
    0x8e, 0xf7, 0x7b, 0xc6, 0x20,

    /* U+043D "н" */
    0x8c, 0x63, 0xf8, 0xc6, 0x20,

    /* U+043E "о" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+043F "п" */
    0xfc, 0x63, 0x18, 0xc6, 0x20,

    /* U+0440 "р" */
    0xb6, 0x63, 0x18, 0xe6, 0xd0, 0x80,

    /* U+0441 "с" */
    0x7c, 0x61, 0x8, 0x45, 0xe0,

    /* U+0442 "т" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x0,

    /* U+0443 "у" */
    0x8c, 0x54, 0xa3, 0x18, 0x88, 0xc0,

    /* U+0444 "ф" */
    0x10, 0x21, 0xf4, 0x99, 0x32, 0x64, 0xc9, 0x7c,
    0x20, 0x40,

    /* U+0445 "х" */
    0x8c, 0x50, 0x64, 0x46, 0x20,

    /* U+0446 "ц" */
    0x8a, 0x28, 0xa2, 0x8a, 0x2f, 0xc1, 0x4,

    /* U+0447 "ч" */
    0x8c, 0x63, 0x1f, 0x84, 0x20,

    /* U+0448 "ш" */
    0x93, 0x26, 0x4c, 0x99, 0x32, 0x7f, 0x80,

    /* U+0449 "щ" */
    0x95, 0x2a, 0x54, 0xa9, 0x52, 0xbf, 0x81, 0x2,

    /* U+044A "ъ" */
    0xe0, 0x82, 0xe, 0x24, 0x93, 0x80,

    /* U+044B "ы" */
    0x8c, 0x63, 0xd9, 0xcf, 0xa0,

    /* U+044C "ь" */
    0x84, 0x21, 0xe8, 0xc7, 0xc0,

    /* U+044D "э" */
    0xe4, 0x83, 0xf0, 0xcb, 0x80,

    /* U+044E "ю" */
    0x95, 0x6b, 0xda, 0xd6, 0x40,

    /* U+044F "я" */
    0x7c, 0x62, 0xf2, 0xa6, 0x20,

    /* U+0450 "ѐ" */
    0x61, 0x80, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+0451 "ё" */
    0x52, 0x80, 0x7, 0x46, 0x3f, 0x84, 0x5c,

    /* U+0452 "ђ" */
    0xf1, 0x5, 0x99, 0x45, 0x14, 0x51, 0x44, 0x11,
    0x80,

    /* U+0453 "ѓ" */
    0x1b, 0x0, 0xf, 0xc2, 0x10, 0x84, 0x20,

    /* U+0454 "є" */
    0x3a, 0x61, 0xf8, 0x24, 0xe0,

    /* U+0455 "ѕ" */
    0x74, 0x60, 0xe0, 0xc5, 0xc0,

    /* U+0456 "і" */
    0x21, 0x0, 0xc2, 0x10, 0x84, 0x27, 0xc0,

    /* U+0457 "ї" */
    0x94, 0x80, 0xc2, 0x10, 0x84, 0x27, 0xc0,

    /* U+0458 "ј" */
    0x8, 0x46, 0x10, 0x84, 0x21, 0xc, 0x98,

    /* U+0459 "љ" */
    0x78, 0x48, 0x48, 0x4e, 0x49, 0x49, 0x8e,

    /* U+045A "њ" */
    0x91, 0x22, 0x47, 0xe9, 0x32, 0x67, 0x0,

    /* U+045B "ћ" */
    0xf1, 0x5, 0x99, 0x45, 0x14, 0x51, 0x44,

    /* U+045C "ќ" */
    0x1b, 0x0, 0x8, 0xca, 0x9c, 0x94, 0x62,

    /* U+045D "ѝ" */
    0x60, 0x80, 0x9, 0xce, 0x75, 0xae, 0x72,

    /* U+045E "ў" */
    0x8c, 0x5c, 0x8, 0xc5, 0x4a, 0x31, 0x88, 0x8c,
    0x0,

    /* U+045F "џ" */
    0x8c, 0x63, 0x18, 0xc7, 0xe4, 0x20,

    /* U+0490 "Ґ" */
    0x8, 0x7f, 0x8, 0x42, 0x10, 0x84, 0x20,

    /* U+0491 "ґ" */
    0x8, 0x7f, 0x8, 0x42, 0x10, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 112, .box_w = 1, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 112, .box_w = 1, .box_h = 3, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 35, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 45, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 51, .adv_w = 112, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 57, .adv_w = 112, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 58, .adv_w = 112, .box_w = 3, .box_h = 1, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 59, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 112, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 112, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 131, .adv_w = 112, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 138, .adv_w = 112, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 259, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 322, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 333, .adv_w = 112, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 335, .adv_w = 112, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 336, .adv_w = 112, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 337, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 380, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 402, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 439, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 445, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 489, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 112, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 501, .adv_w = 112, .box_w = 1, .box_h = 12, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 503, .adv_w = 112, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 509, .adv_w = 112, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 512, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 112, .box_w = 1, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 536, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 112, .box_w = 1, .box_h = 9, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 112, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 553, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 112, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 565, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 224, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 600, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 609, .adv_w = 112, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 611, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 618, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 622, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 626, .adv_w = 112, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 627, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 635, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 644, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 4},
    {.bitmap_index = 645, .adv_w = 112, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 646, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 650, .adv_w = 112, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 654, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 677, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 746, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 868, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 875, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 964, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 984, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1093, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1099, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1135, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1143, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1151, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1173, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1189, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1196, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1204, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1211, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1226, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1234, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1266, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1282, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1290, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1304, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1319, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1342, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1348, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1356, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1363, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1379, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1387, .adv_w = 112, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1396, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1412, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1419, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1427, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1435, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1443, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1451, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1468, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1477, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1484, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1491, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1499, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1506, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1513, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1521, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1534, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1549, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1567, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1576, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1585, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1590, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1598, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1613, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1621, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1635, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1641, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1648, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1655, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1670, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1686, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1693, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1701, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1715, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1721, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1727, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1734, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1741, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1749, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1774, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1782, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1789, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1813, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1820, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1835, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1843, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1850, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1858, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1865, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1872, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1878, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1886, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1893, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1903, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1910, .adv_w = 112, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1921, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1930, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1944, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1952, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1959, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1966, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1973, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1981, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1988, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2012, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2021, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2028, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2035, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2043, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2053, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2070, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2079, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2087, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2096, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2104, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2113, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2121, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2130, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2137, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2143, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2148, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2155, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2163, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2170, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2178, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2184, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2190, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2196, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2204, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2210, .adv_w = 112, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2219, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2227, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2234, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2250, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2259, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2269, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2275, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2281, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2287, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2293, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2303, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2309, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2322, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2328, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2335, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2342, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2348, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2354, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2360, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2366, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2372, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2378, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2384, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2392, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2399, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2407, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2413, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2422, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2428, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2436, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2446, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2453, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2459, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2465, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2471, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2477, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2488, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2495, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2500, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2505, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2511, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2516, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2522, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2527, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2532, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2539, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2544, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2549, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2554, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2559, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2564, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2569, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2575, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2580, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2587, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2593, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2603, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2608, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2615, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2620, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2627, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2635, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2641, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2646, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2651, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2656, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2661, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2666, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2673, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2680, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2689, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2696, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2701, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2706, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2713, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2720, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2727, .adv_w = 112, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2734, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2741, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2748, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2755, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2762, .adv_w = 112, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2771, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 2777, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2784, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}
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
        .range_start = 160, .range_length = 224, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 399, .range_length = 203, .glyph_id_start = 320,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1024, .range_length = 96, .glyph_id_start = 322,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1168, .range_length = 2, .glyph_id_start = 418,
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
    .cmap_num = 5,
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
const lv_font_t ui_font_unifont_14 = {
#else
lv_font_t ui_font_unifont_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_UNIFONT_14*/
