/*******************************************************************************
 * Size: 13 px
 * Bpp: 1
 * Opts: --bpp 1 --size 13 --no-compress --stride 1 --align 1 --font TerminusTTF-Bold-4.49.3.ttf --range 32-127,192-255,286-287,304-305,350-351,399,601,1024-1119 --format lvgl -o ui_font_terminus_13.c
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



#ifndef UI_FONT_TERMINUS_13
#define UI_FONT_TERMINUS_13 1
#endif

#if UI_FONT_TERMINUS_13

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf9,

    /* U+0022 "\"" */
    0x99,

    /* U+0023 "#" */
    0x49, 0x2f, 0xd2, 0x4b, 0xf4, 0x92,

    /* U+0024 "$" */
    0x21, 0x3f, 0x5a, 0x3c, 0xb5, 0xf9, 0x0,

    /* U+0025 "%" */
    0xed, 0xfc, 0x42, 0x3f, 0xb7,

    /* U+0026 "&" */
    0x71, 0x45, 0x1c, 0x5e, 0x28, 0x9f,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x7a, 0x49, 0x13,

    /* U+0029 ")" */
    0xc4, 0x92, 0x56,

    /* U+002A "*" */
    0x78, 0xcf, 0xcc, 0x48,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0x60,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x18, 0x88, 0x44, 0x22, 0x10,

    /* U+0030 "0" */
    0xfc, 0x67, 0x5c, 0xc6, 0x2e,

    /* U+0031 "1" */
    0x59, 0x24, 0x97,

    /* U+0032 "2" */
    0xfc, 0x62, 0x13, 0x22, 0x1f,

    /* U+0033 "3" */
    0xfc, 0x42, 0xf0, 0x86, 0x2e,

    /* U+0034 "4" */
    0x8, 0xdb, 0x18, 0xfc, 0x21,

    /* U+0035 "5" */
    0xfc, 0x21, 0xe0, 0x86, 0x3f,

    /* U+0036 "6" */
    0x7c, 0x21, 0xe8, 0xc6, 0x3f,

    /* U+0037 "7" */
    0xfc, 0x66, 0x22, 0x10, 0x84,

    /* U+0038 "8" */
    0xfc, 0x63, 0xf8, 0xc6, 0x2e,

    /* U+0039 "9" */
    0xfc, 0x63, 0x17, 0x84, 0x3e,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x40, 0x18,

    /* U+003C "<" */
    0x19, 0x91, 0x8, 0x20, 0xc3,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x82, 0x8, 0x31, 0x11, 0x10,

    /* U+003F "?" */
    0xfc, 0x62, 0x22, 0x0, 0x4,

    /* U+0040 "@" */
    0xfa, 0x7a, 0xeb, 0xae, 0xf8, 0x1f,

    /* U+0041 "A" */
    0x74, 0x63, 0x1f, 0xc6, 0x31,

    /* U+0042 "B" */
    0xfc, 0x63, 0xe8, 0xc6, 0x3f,

    /* U+0043 "C" */
    0xfa, 0x38, 0x20, 0x82, 0x8, 0xde,

    /* U+0044 "D" */
    0xf4, 0x63, 0x18, 0xc6, 0x3e,

    /* U+0045 "E" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+0046 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x10,

    /* U+0047 "G" */
    0xfc, 0x61, 0x78, 0xc6, 0x2e,

    /* U+0048 "H" */
    0x8c, 0x63, 0xf8, 0xc6, 0x31,

    /* U+0049 "I" */
    0xe9, 0x24, 0x97,

    /* U+004A "J" */
    0x1c, 0x20, 0x82, 0x8, 0x28, 0x9c,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8c, 0x52, 0x51,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+004D "M" */
    0x87, 0xfb, 0x61, 0x86, 0x18, 0x61,

    /* U+004E "N" */
    0x8c, 0x73, 0x59, 0xc6, 0x31,

    /* U+004F "O" */
    0xfc, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0050 "P" */
    0xfc, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0xfc, 0x63, 0x18, 0xc6, 0xae, 0x8,

    /* U+0052 "R" */
    0xfc, 0x63, 0x1f, 0x72, 0x51,

    /* U+0053 "S" */
    0xfc, 0x61, 0xe0, 0x86, 0x3f,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0x8c, 0x52, 0x95, 0x29, 0x46,

    /* U+0057 "W" */
    0x86, 0x18, 0x61, 0xb7, 0xfc, 0xe1,

    /* U+0058 "X" */
    0xcd, 0x23, 0xc, 0x30, 0xc4, 0xb3,

    /* U+0059 "Y" */
    0x8c, 0xd4, 0xc2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0x44, 0x44, 0x42, 0x1f,

    /* U+005B "[" */
    0xf2, 0x49, 0x27,

    /* U+005C "\\" */
    0x84, 0x10, 0xc2, 0x8, 0x43,

    /* U+005D "]" */
    0xe4, 0x92, 0x4f,

    /* U+005E "^" */
    0x31, 0x4c, 0xc0,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x8c,

    /* U+0061 "a" */
    0xf8, 0x5f, 0x18, 0xfc,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3f,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0xfc,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x3f,

    /* U+0065 "e" */
    0x74, 0x63, 0xf8, 0x7c,

    /* U+0066 "f" */
    0x19, 0x3e, 0x42, 0x10, 0x84,

    /* U+0067 "g" */
    0x7c, 0x63, 0x18, 0xfc, 0x3e,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x31,

    /* U+0069 "i" */
    0x43, 0x24, 0x97,

    /* U+006A "j" */
    0x10, 0x31, 0x11, 0x11, 0x96,

    /* U+006B "k" */
    0x84, 0x27, 0x2a, 0x62, 0xd3,

    /* U+006C "l" */
    0xc9, 0x24, 0x97,

    /* U+006D "m" */
    0xf5, 0x6b, 0x5a, 0xd4,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc4,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xfc,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0xfe, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xfc, 0x21,

    /* U+0072 "r" */
    0xbe, 0x21, 0x8, 0x40,

    /* U+0073 "s" */
    0x7b, 0x38, 0x1e, 0xf, 0xe0,

    /* U+0074 "t" */
    0x21, 0x3e, 0x42, 0x10, 0x83,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0076 "v" */
    0x8a, 0x54, 0xa5, 0x18,

    /* U+0077 "w" */
    0x8c, 0x6b, 0x5a, 0xb8,

    /* U+0078 "x" */
    0x8c, 0x94, 0xe9, 0x44,

    /* U+0079 "y" */
    0x8c, 0x63, 0x18, 0xbc, 0x3e,

    /* U+007A "z" */
    0xf8, 0x8c, 0x8c, 0x7c,

    /* U+007B "{" */
    0x74, 0x4c, 0x44, 0x43,

    /* U+007C "|" */
    0xff,

    /* U+007D "}" */
    0xe2, 0x23, 0x22, 0x2c,

    /* U+007E "~" */
    0xec, 0x80,

    /* U+00C0 "À" */
    0x60, 0x1d, 0x18, 0xc7, 0xf1, 0x8c, 0x40,

    /* U+00C1 "Á" */
    0x11, 0x1d, 0x18, 0xc7, 0xf1, 0x8c, 0x40,

    /* U+00C2 "Â" */
    0x72, 0x9d, 0x18, 0xc7, 0xf1, 0x8c, 0x40,

    /* U+00C3 "Ã" */
    0x6a, 0xdf, 0x18, 0xc7, 0xf1, 0x8c, 0x40,

    /* U+00C4 "Ä" */
    0x50, 0x1d, 0x18, 0xc7, 0xf1, 0x8c, 0x40,

    /* U+00C5 "Å" */
    0x72, 0x94, 0xe8, 0xc6, 0x3f, 0x8c, 0x62,

    /* U+00C6 "Æ" */
    0x7e, 0x49, 0x3f, 0x92, 0x49, 0x27,

    /* U+00C7 "Ç" */
    0xfa, 0x38, 0x20, 0x82, 0x8, 0xde, 0x21, 0x0,

    /* U+00C8 "È" */
    0x60, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00C9 "É" */
    0x1, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CA "Ê" */
    0x62, 0xbf, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CB "Ë" */
    0x50, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+00CC "Ì" */
    0xc3, 0xa4, 0x92, 0x5c,

    /* U+00CD "Í" */
    0xb, 0xa4, 0x92, 0x5c,

    /* U+00CE "Î" */
    0x57, 0xa4, 0x92, 0x5c,

    /* U+00CF "Ï" */
    0xa3, 0xa4, 0x92, 0x5c,

    /* U+00D0 "Ð" */
    0xf4, 0x63, 0xd8, 0xc6, 0x3e,

    /* U+00D1 "Ñ" */
    0x6a, 0xe3, 0x1c, 0xd6, 0x71, 0x8c, 0x40,

    /* U+00D2 "Ò" */
    0x60, 0x3f, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00D3 "Ó" */
    0x11, 0x3f, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00D4 "Ô" */
    0x72, 0xbf, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00D5 "Õ" */
    0x6a, 0xdf, 0x18, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+00D6 "Ö" */
    0x50, 0x3d, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00D7 "×" */
    0xcc, 0xc3, 0x12, 0xc4,

    /* U+00D8 "Ø" */
    0xfc, 0x67, 0x5c, 0xc6, 0x2e,

    /* U+00D9 "Ù" */
    0x60, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DA "Ú" */
    0x11, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DB "Û" */
    0x72, 0xa3, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DC "Ü" */
    0x50, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DD "Ý" */
    0x1, 0x23, 0x35, 0x30, 0x84, 0x21, 0x0,

    /* U+00DE "Þ" */
    0x87, 0xa3, 0x18, 0xfe, 0x10,

    /* U+00DF "ß" */
    0xfc, 0x63, 0xf8, 0xc7, 0x3f,

    /* U+00E0 "à" */
    0x41, 0x3e, 0x17, 0xc6, 0x3f,

    /* U+00E1 "á" */
    0x11, 0x3e, 0x17, 0xc6, 0x3f,

    /* U+00E2 "â" */
    0x72, 0xbe, 0x17, 0xc6, 0x3f,

    /* U+00E3 "ã" */
    0x6a, 0xde, 0x17, 0xc6, 0x2f,

    /* U+00E4 "ä" */
    0x50, 0x3c, 0x17, 0xc6, 0x3f,

    /* U+00E5 "å" */
    0x73, 0xbe, 0x17, 0xc6, 0x3f,

    /* U+00E6 "æ" */
    0xec, 0x25, 0xce, 0xf9, 0x1f, 0xc0,

    /* U+00E7 "ç" */
    0x74, 0x61, 0x8, 0xfc, 0x88,

    /* U+00E8 "è" */
    0x41, 0x1d, 0x18, 0xfe, 0x1f,

    /* U+00E9 "é" */
    0x11, 0x1d, 0x18, 0xfe, 0x1f,

    /* U+00EA "ê" */
    0x72, 0x9d, 0x18, 0xfe, 0x1f,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x18, 0xfe, 0x1f,

    /* U+00EC "ì" */
    0x8b, 0x24, 0x97,

    /* U+00ED "í" */
    0x2b, 0x24, 0x97,

    /* U+00EE "î" */
    0x57, 0x24, 0x97,

    /* U+00EF "ï" */
    0xa3, 0x24, 0x97,

    /* U+00F0 "ð" */
    0x77, 0x9d, 0x18, 0xc6, 0x3f,

    /* U+00F1 "ñ" */
    0x6a, 0xff, 0x18, 0xc6, 0x31,

    /* U+00F2 "ò" */
    0x41, 0x1d, 0x18, 0xc6, 0x3f,

    /* U+00F3 "ó" */
    0x11, 0x1d, 0x18, 0xc6, 0x3f,

    /* U+00F4 "ô" */
    0x72, 0x9d, 0x18, 0xc6, 0x3f,

    /* U+00F5 "õ" */
    0x6a, 0xdf, 0x18, 0xc6, 0x2f,

    /* U+00F6 "ö" */
    0x50, 0x1d, 0x18, 0xc6, 0x3e,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x2, 0x0,

    /* U+00F8 "ø" */
    0x7c, 0x6f, 0x98, 0xfc,

    /* U+00F9 "ù" */
    0x41, 0x23, 0x18, 0xc6, 0x2f,

    /* U+00FA "ú" */
    0x11, 0x23, 0x18, 0xc6, 0x2f,

    /* U+00FB "û" */
    0x72, 0xa3, 0x18, 0xc6, 0x2f,

    /* U+00FC "ü" */
    0x50, 0x23, 0x18, 0xc6, 0x2f,

    /* U+00FD "ý" */
    0x11, 0x23, 0x18, 0xc6, 0x2f, 0xf, 0x80,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc6, 0x3f, 0x84, 0x0,

    /* U+00FF "ÿ" */
    0x50, 0x23, 0x18, 0xc6, 0x2f, 0xf, 0x80,

    /* U+011E "Ğ" */
    0x70, 0x3f, 0x18, 0x5e, 0x31, 0x8b, 0x80,

    /* U+011F "ğ" */
    0x70, 0x1f, 0x18, 0xc6, 0x3f, 0xf, 0x80,

    /* U+0130 "İ" */
    0x43, 0xa4, 0x92, 0x5c,

    /* U+0131 "ı" */
    0xc9, 0x25, 0xc0,

    /* U+015E "Ş" */
    0xfc, 0x61, 0xe0, 0x86, 0x3f, 0x22, 0x0,

    /* U+015F "ş" */
    0x7b, 0x78, 0x1e, 0xf, 0xe2, 0x10,

    /* U+018F "Ə" */
    0xfc, 0x43, 0xf8, 0xc6, 0x2e,

    /* U+0259 "ə" */
    0xf4, 0x43, 0xf8, 0xfc,

    /* U+0400 "Ѐ" */
    0x60, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+0401 "Ё" */
    0x50, 0x3f, 0x8, 0x7a, 0x10, 0x87, 0xc0,

    /* U+0402 "Ђ" */
    0xe1, 0x4, 0x1f, 0x45, 0x14, 0x56,

    /* U+0403 "Ѓ" */
    0x1, 0x3f, 0x8, 0x42, 0x10, 0x84, 0x0,

    /* U+0404 "Є" */
    0xfa, 0x38, 0x3c, 0x82, 0x8, 0xde,

    /* U+0405 "Ѕ" */
    0xfc, 0x61, 0xe0, 0x86, 0x3f,

    /* U+0406 "І" */
    0xe9, 0x24, 0x97,

    /* U+0407 "Ї" */
    0xa3, 0xa4, 0x92, 0x5c,

    /* U+0408 "Ј" */
    0x1c, 0x20, 0x82, 0x8, 0x28, 0x9c,

    /* U+0409 "Љ" */
    0x62, 0x8a, 0x2f, 0xa6, 0x9a, 0x6e,

    /* U+040A "Њ" */
    0x91, 0x22, 0x47, 0xf9, 0x32, 0x64, 0xce,

    /* U+040B "Ћ" */
    0xe1, 0x4, 0x1e, 0x45, 0x14, 0x51,

    /* U+040C "Ќ" */
    0x1, 0x23, 0x2a, 0x63, 0x14, 0x94, 0x40,

    /* U+040D "Ѝ" */
    0x60, 0x23, 0x18, 0xcf, 0xb1, 0x8c, 0x40,

    /* U+040E "Ў" */
    0x70, 0x23, 0x18, 0xc5, 0xe1, 0xf, 0x80,

    /* U+040F "Џ" */
    0x8c, 0x63, 0x18, 0xc6, 0x3f, 0x21, 0x0,

    /* U+0410 "А" */
    0x74, 0x63, 0x1f, 0xc6, 0x31,

    /* U+0411 "Б" */
    0xfc, 0x21, 0xf8, 0xc6, 0x3e,

    /* U+0412 "В" */
    0xfc, 0x63, 0xe8, 0xc6, 0x3f,

    /* U+0413 "Г" */
    0xfc, 0x21, 0x8, 0x42, 0x10,

    /* U+0414 "Д" */
    0x79, 0x24, 0x92, 0x49, 0x24, 0xbf, 0x86, 0x10,

    /* U+0415 "Е" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f,

    /* U+0416 "Ж" */
    0xad, 0x6a, 0xeb, 0x56, 0xb5,

    /* U+0417 "З" */
    0xfc, 0x42, 0xf0, 0x86, 0x2e,

    /* U+0418 "И" */
    0x8c, 0x63, 0x3e, 0xc6, 0x31,

    /* U+0419 "Й" */
    0x70, 0x23, 0x18, 0xcf, 0xb1, 0x8c, 0x40,

    /* U+041A "К" */
    0x8c, 0xa9, 0x8c, 0x52, 0x51,

    /* U+041B "Л" */
    0x7a, 0x52, 0x94, 0xa5, 0x31,

    /* U+041C "М" */
    0x87, 0xfb, 0x61, 0x86, 0x18, 0x61,

    /* U+041D "Н" */
    0x8c, 0x63, 0xf8, 0xc6, 0x31,

    /* U+041E "О" */
    0xfc, 0x63, 0x18, 0xc6, 0x2e,

    /* U+041F "П" */
    0xfc, 0x63, 0x18, 0xc6, 0x31,

    /* U+0420 "Р" */
    0xfc, 0x63, 0x1f, 0x42, 0x10,

    /* U+0421 "С" */
    0xfa, 0x38, 0x20, 0x82, 0x8, 0xde,

    /* U+0422 "Т" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0423 "У" */
    0x8c, 0x63, 0x17, 0x84, 0x3e,

    /* U+0424 "Ф" */
    0x27, 0xeb, 0x5a, 0xd6, 0xb5, 0x71, 0x0,

    /* U+0425 "Х" */
    0xcd, 0x23, 0xc, 0x30, 0xc4, 0xb3,

    /* U+0426 "Ц" */
    0x8a, 0x28, 0xa2, 0x8a, 0x28, 0x9f, 0x4, 0x10,

    /* U+0427 "Ч" */
    0x8c, 0x63, 0x17, 0x84, 0x21,

    /* U+0428 "Ш" */
    0xad, 0x6b, 0x5a, 0xd6, 0xaf,

    /* U+0429 "Щ" */
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x9f, 0x4, 0x10,

    /* U+042A "Ъ" */
    0xc1, 0x7, 0x91, 0x45, 0x14, 0x5f,

    /* U+042B "Ы" */
    0x86, 0x1e, 0x65, 0x96, 0x59, 0x7d,

    /* U+042C "Ь" */
    0x84, 0x3d, 0x18, 0xc6, 0x3f,

    /* U+042D "Э" */
    0xfc, 0x42, 0xf0, 0x86, 0x2e,

    /* U+042E "Ю" */
    0xbe, 0x9a, 0x79, 0xa6, 0x9a, 0x66,

    /* U+042F "Я" */
    0xfc, 0x63, 0x17, 0x9d, 0x31,

    /* U+0430 "а" */
    0xf8, 0x5f, 0x18, 0xfc,

    /* U+0431 "б" */
    0x74, 0x21, 0xf8, 0xc6, 0x3e,

    /* U+0432 "в" */
    0xf4, 0xa5, 0xe8, 0xc6, 0x3e,

    /* U+0433 "г" */
    0xfc, 0x21, 0x8, 0x40,

    /* U+0434 "д" */
    0x7c, 0x63, 0x18, 0xfc, 0x3e,

    /* U+0435 "е" */
    0x74, 0x63, 0xf8, 0x7c,

    /* U+0436 "ж" */
    0xad, 0x9d, 0x6a, 0xd4,

    /* U+0437 "з" */
    0x74, 0x42, 0xf8, 0xfc,

    /* U+0438 "и" */
    0x8c, 0x63, 0x18, 0xbc,

    /* U+0439 "й" */
    0x53, 0xa3, 0x18, 0xc6, 0x2f,

    /* U+043A "к" */
    0x9c, 0xa9, 0x8b, 0x4c,

    /* U+043B "л" */
    0x3a, 0x52, 0x94, 0xc4,

    /* U+043C "м" */
    0x86, 0x3f, 0xe3, 0x8e, 0x30,

    /* U+043D "н" */
    0x8c, 0x63, 0xf8, 0xc4,

    /* U+043E "о" */
    0x74, 0x63, 0x18, 0xfc,

    /* U+043F "п" */
    0xfc, 0x63, 0x18, 0xc4,

    /* U+0440 "р" */
    0xf4, 0x63, 0x18, 0xfe, 0x10,

    /* U+0441 "с" */
    0x74, 0x61, 0x8, 0xfc,

    /* U+0442 "т" */
    0xf9, 0x8, 0x42, 0x10,

    /* U+0443 "у" */
    0x8c, 0x63, 0x18, 0xbc, 0x3e,

    /* U+0444 "ф" */
    0x23, 0xab, 0x5a, 0xd7, 0xe4,

    /* U+0445 "х" */
    0x8c, 0x94, 0xe9, 0x44,

    /* U+0446 "ц" */
    0x8a, 0x28, 0xa2, 0x89, 0xf0, 0x41,

    /* U+0447 "ч" */
    0x8c, 0x62, 0xf0, 0x84,

    /* U+0448 "ш" */
    0xad, 0x6b, 0x5a, 0xbc,

    /* U+0449 "щ" */
    0xaa, 0xaa, 0xaa, 0xa9, 0xf0, 0x41,

    /* U+044A "ъ" */
    0xc2, 0x1e, 0x94, 0xbc,

    /* U+044B "ы" */
    0x86, 0x1f, 0x65, 0x97, 0xd0,

    /* U+044C "ь" */
    0x88, 0xf9, 0x9f,

    /* U+044D "э" */
    0x74, 0x42, 0x78, 0xfc,

    /* U+044E "ю" */
    0x9a, 0x9a, 0x79, 0xa6, 0xf0,

    /* U+044F "я" */
    0x7c, 0x62, 0xf6, 0xe4,

    /* U+0450 "ѐ" */
    0x41, 0x1d, 0x18, 0xfe, 0x1f,

    /* U+0451 "ё" */
    0x50, 0x1d, 0x18, 0xfe, 0x1f,

    /* U+0452 "ђ" */
    0xf1, 0x7, 0x91, 0x45, 0x14, 0x51, 0x4, 0x70,

    /* U+0453 "ѓ" */
    0x11, 0x3f, 0x8, 0x42, 0x10,

    /* U+0454 "є" */
    0x74, 0x61, 0xc8, 0xfc,

    /* U+0455 "ѕ" */
    0x7b, 0x38, 0x1e, 0xf, 0xe0,

    /* U+0456 "і" */
    0x43, 0x24, 0x97,

    /* U+0457 "ї" */
    0xa3, 0x24, 0x97,

    /* U+0458 "ј" */
    0x10, 0x31, 0x11, 0x11, 0x96,

    /* U+0459 "љ" */
    0xe2, 0x8b, 0xe9, 0xa6, 0xf0,

    /* U+045A "њ" */
    0x91, 0x22, 0x7f, 0x99, 0x33, 0xc0,

    /* U+045B "ћ" */
    0x43, 0xc7, 0x91, 0x45, 0x14, 0x51,

    /* U+045C "ќ" */
    0x33, 0x27, 0x2a, 0x62, 0xd3,

    /* U+045D "ѝ" */
    0x41, 0x23, 0x18, 0xc6, 0x2f,

    /* U+045E "ў" */
    0x70, 0x23, 0x18, 0xc6, 0x2f, 0xf, 0x80,

    /* U+045F "џ" */
    0x8c, 0x63, 0x18, 0xfc, 0x84
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 104, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 104, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 104, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 104, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 28, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 104, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 38, .adv_w = 104, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 42, .adv_w = 104, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 43, .adv_w = 104, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 44, .adv_w = 104, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 104, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 104, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 101, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 104, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 109, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 104, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 273, .adv_w = 104, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 274, .adv_w = 104, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 275, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 307, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 104, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 320, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 345, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 350, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 385, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 104, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 104, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 104, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 104, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 400, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 456, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 104, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 551, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 104, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 642, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 104, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 713, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 744, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 751, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 758, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 772, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 104, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 786, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 792, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 104, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 104, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 899, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 927, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 954, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 964, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1013, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1027, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1045, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1051, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1092, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1096, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1101, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1126, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1143, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1152, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1156, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1165, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1170, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1174, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1180, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1194, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 104, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1229, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1237, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1242, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1246, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1254, .adv_w = 104, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 104, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1262, .adv_w = 104, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1267, .adv_w = 104, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1289, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1296, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x1, 0x12, 0x13, 0x40, 0x41, 0x71, 0x13b
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
        .range_start = 286, .range_length = 316, .glyph_id_start = 160,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 8, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1024, .range_length = 96, .glyph_id_start = 168,
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
const lv_font_t ui_font_terminus_13 = {
#else
lv_font_t ui_font_terminus_13 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_TERMINUS_13*/
