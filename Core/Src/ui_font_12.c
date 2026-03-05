/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: EN + RU + AZ (Liberation Mono Regular)
 *******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef UI_FONT_12
#define UI_FONT_12 1
#endif
#if UI_FONT_12

/*----
 * BITMAPS
 *----*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    0x00, 0xfd, 0xb6, 0xd0, 0x24, 0x49, 0xf9, 0x44, 0x9f, 0x92, 0x24, 0x10,
    0xf9, 0x52, 0x83, 0x82, 0x84, 0xea, 0x7c, 0x20, 0xe5, 0x4a, 0xa7, 0x81,
    0xe5, 0x52, 0xa7, 0x38, 0x91, 0x21, 0x86, 0x52, 0xb2, 0x3b, 0xf0, 0x2b,
    0x49, 0x24, 0xc8, 0x80, 0x89, 0x92, 0x49, 0x6a, 0x00, 0x27, 0x88, 0xa5,
    0x00, 0x21, 0x09, 0xf2, 0x10, 0x80, 0x69, 0x40, 0xe0, 0xc0, 0x08, 0x44,
    0x22, 0x31, 0x10, 0x80, 0x74, 0x63, 0x58, 0xc6, 0x2e, 0x23, 0x82, 0x08,
    0x20, 0x82, 0x3f, 0x74, 0x42, 0x33, 0x22, 0x1f, 0x74, 0x42, 0x60, 0x86,
    0x2e, 0x11, 0x94, 0xa9, 0x7c, 0x42, 0xfc, 0x21, 0xe0, 0x86, 0x2e, 0x76,
    0x61, 0xe8, 0xc6, 0x2e, 0xf8, 0x44, 0x22, 0x11, 0x88, 0x74, 0x62, 0xe8,
    0xc6, 0x2e, 0x74, 0x63, 0x17, 0x86, 0x6e, 0xc6, 0x50, 0x16, 0x80, 0x0b,
    0xa0, 0xe0, 0x80, 0xf8, 0x01, 0xf0, 0x83, 0x82, 0xe8, 0x00, 0xf4, 0x42,
    0x33, 0x10, 0x04, 0x38, 0x89, 0x0c, 0xfa, 0xb5, 0x6a, 0xde, 0x80, 0x88,
    0xe0, 0x10, 0x50, 0xa1, 0x44, 0x4f, 0x91, 0x41, 0xf2, 0x28, 0xbc, 0x8a,
    0x38, 0xbe, 0x72, 0x28, 0x20, 0x82, 0x0c, 0x9e, 0xf4, 0xe3, 0x18, 0xc6,
    0x7e, 0xfc, 0x21, 0xf8, 0x42, 0x1f, 0xfc, 0x21, 0xf8, 0x42, 0x10, 0x74,
    0x61, 0x09, 0xc6, 0x2f, 0x8c, 0x63, 0xf8, 0xc6, 0x31, 0xf9, 0x08, 0x42,
    0x10, 0x9f, 0x38, 0xc6, 0x31, 0x8e, 0x4e, 0x8a, 0x4a, 0x38, 0xa2, 0x48,
    0xa3, 0x84, 0x21, 0x08, 0x42, 0x1f, 0x8e, 0xf7, 0xba, 0xc6, 0x31, 0x8e,
    0x73, 0x5a, 0xce, 0x71, 0x74, 0x63, 0x18, 0xc6, 0x2e, 0xf4, 0x63, 0x1f,
    0x42, 0x10, 0x74, 0x63, 0x18, 0xc6, 0x2e, 0x30, 0xc0, 0xfa, 0x28, 0xbc,
    0x92, 0x48, 0xa2, 0x39, 0x14, 0x1c, 0x0c, 0x14, 0x5f, 0xfe, 0x20, 0x40,
    0x81, 0x02, 0x04, 0x08, 0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x82, 0x89, 0x12,
    0x22, 0x85, 0x0a, 0x08, 0x83, 0x06, 0x4a, 0xa6, 0xcd, 0x9b, 0x36, 0x44,
    0xd8, 0xa0, 0x83, 0x85, 0x11, 0x22, 0xc6, 0x88, 0xa0, 0x81, 0x02, 0x04,
    0x08, 0x7c, 0x08, 0x20, 0x83, 0x04, 0x10, 0x7f, 0xf8, 0x88, 0x88, 0x88,
    0x88, 0xf0, 0x84, 0x10, 0xc2, 0x18, 0x41, 0x08, 0xf1, 0x11, 0x11, 0x11,
    0x11, 0xf0, 0x22, 0x95, 0x18, 0x80, 0xfe, 0x44, 0x72, 0x60, 0xbe, 0x8a,
    0x6e, 0xc0, 0x84, 0x2d, 0x98, 0xc6, 0x39, 0xb0, 0x74, 0x61, 0x08, 0x45,
    0xc0, 0x08, 0x5b, 0x38, 0xc6, 0x33, 0x68, 0x74, 0x63, 0xf8, 0x45, 0xc0,
    0x3a, 0x3e, 0x84, 0x21, 0x08, 0x40, 0x6c, 0xe3, 0x18, 0xcd, 0xa1, 0x70,
    0x84, 0x2d, 0x98, 0xc6, 0x31, 0x88, 0x20, 0x0e, 0x08, 0x20, 0x82, 0x08,
    0xfc, 0x10, 0xf1, 0x11, 0x11, 0x13, 0xe0, 0x84, 0x23, 0x2a, 0x72, 0x52,
    0x88, 0xc2, 0x10, 0x84, 0x21, 0x08, 0x78, 0xfd, 0x6b, 0x5a, 0xd6, 0xa0,
    0xb6, 0x63, 0x18, 0xc6, 0x20, 0x74, 0x63, 0x18, 0xc5, 0xc0, 0xb6, 0x63,
    0x18, 0xe6, 0xd0, 0x80, 0x6c, 0xe3, 0x18, 0xcd, 0xa1, 0x08, 0xbb, 0x10,
    0x84, 0x21, 0x00, 0x74, 0x70, 0xe0, 0xc5, 0xc0, 0x42, 0x3e, 0x84, 0x21,
    0x08, 0x78, 0x8c, 0x63, 0x18, 0xcd, 0xa0, 0x44, 0x89, 0x11, 0x42, 0x85,
    0x04, 0x00, 0x83, 0x06, 0x53, 0x66, 0xcd, 0x93, 0x00, 0x8a, 0x94, 0x45,
    0x2a, 0x20, 0x44, 0x89, 0x91, 0x42, 0x82, 0x04, 0x18, 0x60, 0xf8, 0x84,
    0x44, 0x43, 0xe0, 0x39, 0x08, 0x42, 0x60, 0x84, 0x21, 0x0e, 0xff, 0xe0,
    0xe1, 0x08, 0x42, 0x0c, 0x84, 0x21, 0x38, 0xe1, 0xc0, 0xf7, 0x80, 0x72,
    0x28, 0x20, 0x82, 0x0c, 0x9e, 0x30, 0xc0, 0x50, 0x1d, 0x18, 0xc6, 0x31,
    0x8b, 0x80, 0x50, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80, 0x74, 0x61, 0x08,
    0x45, 0xc6, 0x30, 0x50, 0x1d, 0x18, 0xc6, 0x31, 0x70, 0x50, 0x23, 0x18,
    0xc6, 0x33, 0x68, 0x53, 0x80, 0xe8, 0xc2, 0x13, 0x8c, 0x5e, 0x53, 0x80,
    0xd9, 0xc6, 0x31, 0x9b, 0x42, 0xe0, 0x20, 0x3e, 0x42, 0x10, 0x84, 0x27,
    0xc0, 0xe0, 0x82, 0x08, 0x20, 0x8f, 0xc0, 0x39, 0x14, 0x1c, 0x0c, 0x14,
    0x5f, 0x18, 0x60, 0x74, 0x70, 0xe0, 0xc5, 0xc6, 0x30, 0x74, 0x42, 0x1f,
    0xc6, 0x2e, 0x74, 0x43, 0xf8, 0xc5, 0xc0, 0x41, 0x01, 0xf8, 0x43, 0xf0,
    0x84, 0x3e, 0x50, 0x3f, 0x08, 0x7e, 0x10, 0x87, 0xc0, 0xf8, 0x40, 0x81,
    0xe2, 0x64, 0x4b, 0x96, 0x11, 0x01, 0xf8, 0x42, 0x10, 0x84, 0x20, 0x73,
    0x28, 0x20, 0xe2, 0x08, 0x9e, 0x39, 0x14, 0x1c, 0x0c, 0x14, 0x5f, 0xf9,
    0x08, 0x42, 0x10, 0x9f, 0x50, 0x3e, 0x42, 0x10, 0x84, 0x27, 0xc0, 0x38,
    0xc6, 0x31, 0x8e, 0x4e, 0x30, 0xa1, 0x42, 0xe5, 0x2a, 0x54, 0xee, 0x91,
    0x22, 0x47, 0xe9, 0x32, 0x64, 0xce, 0xf8, 0x40, 0x81, 0xe2, 0x64, 0x48,
    0x91, 0x10, 0x80, 0x22, 0x92, 0xce, 0x2c, 0x92, 0x28, 0x80, 0x41, 0x01,
    0x19, 0xce, 0xb5, 0xce, 0x62, 0x24, 0x70, 0x06, 0x34, 0x45, 0x8a, 0x0c,
    0x10, 0x63, 0x80, 0x8c, 0x63, 0x18, 0xc6, 0x3f, 0x21, 0x00, 0x10, 0x50,
    0xa1, 0x44, 0x4f, 0x91, 0x41, 0xfa, 0x08, 0x3e, 0x8e, 0x18, 0xfe, 0xf2,
    0x28, 0xbc, 0x8a, 0x38, 0xbe, 0xfc, 0x21, 0x08, 0x42, 0x10, 0x3c, 0x48,
    0x91, 0x22, 0x48, 0x91, 0x7f, 0x83, 0x04, 0xfc, 0x21, 0xf8, 0x42, 0x1f,
    0x92, 0xa9, 0x51, 0xc5, 0x4a, 0x95, 0x49, 0x3d, 0x10, 0x46, 0x07, 0x14,
    0x4e, 0x8c, 0xe7, 0x5a, 0xe7, 0x31, 0x9b, 0x81, 0x19, 0xce, 0xb5, 0xce,
    0x62, 0x8a, 0x4b, 0x38, 0xb2, 0x48, 0xa2, 0x3c, 0x92, 0x49, 0x25, 0x94,
    0x71, 0x8e, 0xf7, 0xba, 0xc6, 0x31, 0x8c, 0x63, 0xf8, 0xc6, 0x31, 0x74,
    0x63, 0x18, 0xc6, 0x2e, 0xfc, 0x63, 0x18, 0xc6, 0x31, 0xf4, 0x63, 0x1f,
    0x42, 0x10, 0x72, 0x28, 0x20, 0x82, 0x0c, 0x9e, 0xfe, 0x20, 0x40, 0x81,
    0x02, 0x04, 0x08, 0xc6, 0x88, 0xb1, 0x41, 0x82, 0x0c, 0x70, 0x10, 0xfb,
    0x5c, 0x99, 0x3a, 0xdf, 0x08, 0x44, 0xd8, 0xa0, 0x83, 0x85, 0x11, 0x22,
    0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xbf, 0x04, 0x10, 0x8c, 0x63, 0x18, 0xfc,
    0x21, 0x96, 0x59, 0x65, 0x96, 0x59, 0x7f, 0x95, 0x2a, 0x54, 0xa9, 0x52,
    0xa5, 0x7f, 0x02, 0x04, 0xe0, 0x40, 0x81, 0xe2, 0x44, 0xc9, 0x1e, 0x8c,
    0x63, 0xdb, 0xce, 0xfd, 0x82, 0x08, 0x3e, 0x8e, 0x18, 0xfe, 0x39, 0x10,
    0x47, 0x04, 0x14, 0xce, 0x9d, 0x2a, 0x8f, 0x1a, 0x34, 0x65, 0x4e, 0x7d,
    0x14, 0x4f, 0x24, 0x94, 0x51, 0x72, 0x60, 0xbe, 0x8a, 0x6e, 0xc0, 0x7e,
    0x21, 0xe8, 0xc6, 0x31, 0x70, 0xf4, 0x63, 0xe8, 0xc7, 0xe0, 0xf8, 0x88,
    0x88, 0x80, 0x3c, 0x48, 0x91, 0x24, 0x48, 0xbf, 0xc1, 0x82, 0x74, 0x63,
    0xf8, 0x45, 0xc0, 0x92, 0xa9, 0x61, 0xc5, 0x4a, 0xa4, 0x80, 0x74, 0x42,
    0x60, 0xc5, 0xc0, 0x8c, 0xeb, 0x5a, 0xe6, 0x20, 0x8b, 0x81, 0x19, 0xd6,
    0xb5, 0xcc, 0x40, 0x8c, 0xa5, 0xc9, 0x4e, 0x20, 0x3c, 0x92, 0x51, 0x45,
    0x1c, 0x40, 0x8e, 0xf7, 0xbd, 0xd6, 0xa0, 0x8c, 0x63, 0xf8, 0xc6, 0x20,
    0x74, 0x63, 0x18, 0xc5, 0xc0, 0xfc, 0x63, 0x18, 0xc6, 0x20, 0xb6, 0x63,
    0x18, 0xe6, 0xd0, 0x80, 0x74, 0x61, 0x08, 0x45, 0xc0, 0xf9, 0x08, 0x42,
    0x10, 0x80, 0x44, 0x89, 0x91, 0x42, 0x82, 0x04, 0x18, 0x60, 0x10, 0x20,
    0xe2, 0xad, 0x7a, 0xf5, 0xaa, 0x38, 0x20, 0x40, 0x8a, 0x94, 0x45, 0x2a,
    0x20, 0x8a, 0x28, 0xa2, 0x8a, 0x2f, 0xc1, 0x04, 0x8c, 0x63, 0x1f, 0x84,
    0x20, 0xad, 0x6b, 0x5a, 0xd7, 0xe0, 0xaa, 0xaa, 0xaa, 0xaa, 0xaf, 0xc1,
    0x04, 0xe0, 0x40, 0x81, 0xe2, 0x64, 0x8f, 0x00, 0x8c, 0x63, 0xd9, 0xcf,
    0xa0, 0x84, 0x21, 0xf8, 0xc7, 0xc0, 0x74, 0x42, 0x70, 0xc5, 0xc0, 0x9d,
    0x2a, 0x8f, 0x1a, 0x32, 0xa7, 0x00, 0x3d, 0x14, 0x4f, 0x25, 0x14, 0x40,
    0x41, 0x00, 0xe8, 0xc7, 0xf0, 0x8b, 0x80, 0x50, 0x1d, 0x18, 0xfe, 0x11,
    0x70, 0x43, 0xc4, 0x16, 0x65, 0x14, 0x51, 0x44, 0x10, 0xc0, 0x24, 0x0f,
    0x88, 0x88, 0x88, 0x74, 0x61, 0xc8, 0x45, 0xc0, 0x74, 0x70, 0xe0, 0xc5,
    0xc0, 0x20, 0x0e, 0x08, 0x20, 0x82, 0x08, 0xfc, 0x50, 0x0e, 0x08, 0x20,
    0x82, 0x08, 0xfc, 0x10, 0xf1, 0x11, 0x11, 0x13, 0xe0, 0x30, 0xa1, 0x42,
    0xe5, 0x2a, 0x77, 0x00, 0xa2, 0x8a, 0x3e, 0xa6, 0x9b, 0x80, 0x43, 0xc4,
    0x16, 0x65, 0x14, 0x51, 0x44, 0x11, 0x01, 0x19, 0x4b, 0x92, 0x9c, 0x40,
    0x61, 0x01, 0x19, 0xd6, 0xb5, 0xcc, 0x40, 0x44, 0x70, 0x02, 0x24, 0x4c,
    0x8a, 0x14, 0x10, 0x20, 0xc3, 0x00, 0x8c, 0x63, 0x18, 0xc7, 0xe4, 0x20,
    0x6c, 0x8a, 0x14, 0x19, 0x3a, 0xd5, 0x36, 0x93, 0x25, 0x4a, 0x95, 0xcd,
    0x8a, 0x00, 0x41, 0xf1, 0x03, 0xe4, 0x68, 0x51, 0xbe, 0x20, 0x43, 0xe1,
    0x02, 0x07, 0x88, 0x91, 0x3c, 0x9d, 0x26, 0x87, 0xca, 0x14, 0x24, 0xce,
    0xba, 0x9a, 0x3c, 0xe2, 0x9b, 0x80, 0x10, 0x50, 0xa1, 0x47, 0xca, 0x95,
    0x49, 0x10, 0x50, 0xa1, 0x47, 0xca, 0x95, 0x00, 0x89, 0x32, 0x64, 0xaf,
    0xd5, 0xaa, 0xd5, 0x92, 0x4a, 0xaa, 0xfa, 0xdd, 0x40, 0x7c, 0x58, 0xa3,
    0xed, 0x72, 0x64, 0xc9, 0x7c, 0x50, 0xa3, 0xed, 0x72, 0x64, 0x80, 0xbd,
    0x2a, 0x67, 0xea, 0xb5, 0x6a, 0xd5, 0x9d, 0x2a, 0x67, 0xea, 0xb5, 0x6a,
    0x80, 0x2c, 0xa7, 0x91, 0x04, 0x60, 0x41, 0x05, 0xe8, 0x1f, 0x53, 0x1d,
    0x21, 0x10, 0x62, 0x64, 0x3e, 0x93, 0x26, 0x4a, 0x95, 0x4f, 0x84, 0x08,
    0x96, 0x55, 0x55, 0x55, 0x53, 0x84, 0x10, 0x74, 0x63, 0xd9, 0xc6, 0x2e,
    0x74, 0x63, 0xf8, 0xc5, 0xc0, 0x86, 0x44, 0x44, 0x48, 0x28, 0x28, 0x28,
    0x10, 0x46, 0x99, 0x21, 0x42, 0x86, 0x04, 0x00, 0x50, 0x28, 0x00, 0x86,
    0x44, 0x44, 0x48, 0x28, 0x28, 0x28, 0x10, 0x78, 0x50, 0x02, 0x34, 0xc9,
    0x0a, 0x14, 0x30, 0x20, 0x61, 0x66, 0xad, 0x5a, 0xd5, 0xa9, 0x32, 0x04,
    0x30, 0x73, 0x56, 0xad, 0x6a, 0xd4, 0x99, 0x02, 0x18, 0x23, 0xa3, 0x18,
    0xc6, 0x31, 0x71, 0x00, 0x10, 0xf9, 0x56, 0x38, 0x38, 0xd5, 0x3e, 0x10,
    0x38, 0xa8, 0x43, 0x68, 0x30, 0x60, 0xc1, 0x83, 0x07, 0x5b, 0x60, 0x38,
    0xa8, 0x43, 0x64, 0x50, 0x60, 0xc1, 0xc6, 0xf8, 0x7c, 0x00, 0x03, 0x64,
    0x50, 0xa0, 0xc9, 0xd6, 0xa9, 0xb0, 0x7c, 0x02, 0x4c, 0x95, 0x2a, 0x57,
    0x36, 0x28, 0x74, 0x61, 0x08, 0x43, 0x0c, 0x21, 0x00, 0x74, 0x61, 0x08,
    0x61, 0x84, 0x20, 0x10, 0xb8, 0x72, 0x70, 0xe8, 0x40, 0x1e, 0xf0, 0xe0,
    0xd0, 0x72, 0x30, 0x06, 0x06, 0xa6, 0x50, 0xa0, 0x00, 0x00, 0x0e, 0x07,
    0x00, 0x00, 0x00, 0x60, 0x65, 0x6a, 0x0a, 0x00, 0x08, 0x02, 0x30, 0x09,
    0x00, 0x00, 0x10, 0x10, 0x00, 0x02, 0x40, 0x92, 0x00, 0x40, 0x99, 0xc0,
    0x22, 0x9a, 0x6a, 0xaa, 0xcb, 0x28, 0xc2, 0x08, 0xc9, 0xc0, 0x22, 0x9a,
    0xaa, 0xaa, 0xca, 0x30, 0x82, 0x41, 0xc1, 0x03, 0xe4, 0x68, 0x51, 0xbe,
    0x43, 0x84, 0x10, 0x41, 0xf4, 0x51, 0x78, 0xf2, 0x28, 0xa6, 0xfa, 0x28,
    0x20, 0xb6, 0x63, 0x19, 0xef, 0xf1, 0x80, 0x0c, 0x3f, 0xe0, 0x82, 0x08,
    0x20, 0x82, 0x00, 0x08, 0x7f, 0x08, 0x42, 0x10, 0x80, 0x7d, 0x04, 0x10,
    0xf9, 0x04, 0x10, 0x7a, 0x11, 0xc4, 0x21, 0x00, 0xfc, 0x3d, 0x18, 0xc6,
    0x31, 0x0f, 0x80, 0xe4, 0x21, 0xe8, 0xc6, 0x21, 0xf0, 0x92, 0xa9, 0x51,
    0xc5, 0x4a, 0x95, 0x49, 0x02, 0x04, 0x92, 0xa9, 0x51, 0xc5, 0x4a, 0xa4,
    0x81, 0x02, 0x3d, 0x10, 0x46, 0x04, 0x1c, 0x5e, 0x10, 0xc0, 0x74, 0x42,
    0x60, 0xc5, 0xc2, 0x60, 0x8a, 0x4b, 0x38, 0xb2, 0x48, 0xa3, 0x04, 0x10,
    0x8c, 0xa5, 0xc9, 0x4e, 0x21, 0x08, 0x8b, 0x4b, 0x38, 0xb3, 0x4c, 0xa2,
    0x8d, 0xad, 0xcb, 0x5e, 0x20, 0x45, 0xd1, 0x63, 0x85, 0x89, 0x11, 0x22,
    0x43, 0xc4, 0x52, 0x49, 0xc4, 0x93, 0x44, 0xe4, 0xd9, 0xa3, 0x86, 0x8d,
    0x19, 0x33, 0xe4, 0xa2, 0x8e, 0x28, 0xb2, 0x40, 0x8a, 0x28, 0xbe, 0x8a,
    0x28, 0xa3, 0x04, 0x10, 0x8a, 0x28, 0xbe, 0x8a, 0x28, 0xc1, 0x04, 0x9e,
    0x69, 0xbe, 0x9a, 0x69, 0xa6, 0x9e, 0x49, 0x3c, 0x92, 0x49, 0x00, 0xf1,
    0x22, 0x74, 0xa9, 0x32, 0x64, 0xc9, 0x04, 0x38, 0xf1, 0x22, 0x44, 0xe9,
    0x32, 0x64, 0x81, 0x1c, 0x30, 0x99, 0x56, 0x9d, 0x29, 0x93, 0x1f, 0x62,
    0x6a, 0xaa, 0xaa, 0x67, 0xc0, 0x72, 0x28, 0x20, 0x82, 0x0c, 0x9e, 0x11,
    0x80, 0x74, 0x61, 0x08, 0x45, 0xc4, 0x60, 0xfe, 0x20, 0x40, 0x81, 0x02,
    0x04, 0x0c, 0x08, 0x10, 0xf9, 0x08, 0x42, 0x10, 0xc2, 0x10, 0xc6, 0x88,
    0xa0, 0x81, 0x02, 0x04, 0x08, 0x46, 0x89, 0x11, 0x42, 0x82, 0x04, 0x08,
    0x10, 0xc6, 0x88, 0xa1, 0x47, 0xc2, 0x04, 0x08, 0x46, 0x89, 0x11, 0x42,
    0x85, 0x04, 0x3e, 0x10, 0x44, 0xd8, 0xa0, 0x83, 0x85, 0x11, 0x23, 0x02,
    0x04, 0x8a, 0x94, 0x45, 0x2e, 0x21, 0x08, 0xf4, 0xc9, 0x93, 0x26, 0x4c,
    0x99, 0x3f, 0x02, 0x04, 0xf4, 0x48, 0x91, 0x22, 0x44, 0x8f, 0x81, 0x02,
    0x8a, 0x28, 0xa2, 0x8b, 0xe0, 0x83, 0x04, 0x10, 0x8a, 0x28, 0xa2, 0xf8,
    0x20, 0xc1, 0x04, 0x8c, 0x6b, 0x5a, 0xfc, 0xa1, 0x8c, 0x6b, 0x5f, 0x94,
    0x20, 0x82, 0x0f, 0xa2, 0x8e, 0x38, 0xe3, 0x84, 0x2d, 0x98, 0xc6, 0x31,
    0x88, 0x1c, 0x49, 0x8e, 0x1f, 0xe8, 0x09, 0x1e, 0x1c, 0x4a, 0x8f, 0xf2,
    0x04, 0xc7, 0x00, 0x1c, 0x49, 0x8e, 0x1f, 0xe8, 0x09, 0x1e, 0x08, 0x10,
    0x1c, 0x4a, 0x8f, 0xf2, 0x04, 0xc7, 0x04, 0x08, 0xf9, 0x08, 0x42, 0x10,
    0x9f, 0x24, 0x70, 0x04, 0x95, 0x4a, 0x8e, 0x2a, 0x54, 0xaa, 0x48, 0x24,
    0x70, 0x04, 0x95, 0x4b, 0x0e, 0x2a, 0x55, 0x24, 0x8a, 0x4b, 0x3c, 0x8a,
    0x18, 0x61, 0x89, 0xc0, 0x94, 0xa9, 0xe8, 0xc6, 0x21, 0x70, 0x3c, 0x48,
    0x91, 0x22, 0x4c, 0x91, 0x63, 0x04, 0x08, 0x3c, 0x48, 0x93, 0x24, 0x48,
    0xb1, 0x82, 0x04, 0x8c, 0x63, 0xf8, 0xc6, 0x31, 0x1f, 0x80, 0x8c, 0x63,
    0xf8, 0xc6, 0x21, 0xf0, 0x8a, 0x28, 0xbe, 0x8a, 0x28, 0xa3, 0x08, 0x20,
    0x8a, 0x28, 0xbe, 0x8a, 0x28, 0xc2, 0x08, 0x8c, 0x63, 0x18, 0xfc, 0x23,
    0x10, 0x80, 0x8c, 0x63, 0x1f, 0x84, 0x62, 0x10, 0x8b, 0x6d, 0xb6, 0xaa,
    0x28, 0xa3, 0x08, 0x20, 0x8a, 0x6d, 0xb6, 0xda, 0xaa, 0x42, 0x08, 0xc2,
    0x10, 0x84, 0x21, 0x08, 0x78, 0x28, 0x70, 0x00, 0x82, 0x85, 0x0a, 0x22,
    0x7c, 0x8a, 0x08, 0x51, 0xc0, 0x1c, 0x98, 0x2f, 0xa2, 0x9b, 0xb0, 0x28,
    0x00, 0x41, 0x42, 0x85, 0x11, 0x3e, 0x45, 0x04, 0x50, 0x07, 0x26, 0x0b,
    0xe8, 0xa6, 0xec, 0x1e, 0x50, 0xa1, 0x74, 0x8f, 0x12, 0x47, 0x6d, 0x24,
    0x4b, 0xf9, 0x12, 0x7b, 0x00, 0x4b, 0x81, 0xf8, 0x43, 0xf0, 0x84, 0x3e,
    0x53, 0x80, 0xe8, 0xc7, 0xf0, 0x8b, 0x80, 0x74, 0x42, 0x1f, 0xc6, 0x2e,
    0x74, 0x43, 0xf8, 0xc5, 0xc0, 0x50, 0x1d, 0x10, 0x87, 0xf1, 0x8b, 0x80,
    0x50, 0x1d, 0x10, 0xfe, 0x31, 0x70, 0x28, 0x02, 0x4a, 0xa5, 0x47, 0x15,
    0x2a, 0x55, 0x24, 0x28, 0x02, 0x4a, 0xa5, 0x87, 0x15, 0x2a, 0x92, 0x28,
    0x03, 0xd1, 0x04, 0x60, 0x71, 0x44, 0xe0, 0x50, 0x1d, 0x10, 0x98, 0x31,
    0x70, 0x7e, 0x08, 0x60, 0xe0, 0x48, 0xd1, 0x1c, 0xf8, 0xc8, 0x60, 0x84,
    0x31, 0x70, 0x70, 0x23, 0x39, 0xd6, 0xb9, 0xcc, 0x40, 0x70, 0x23, 0x3a,
    0xd6, 0xb9, 0x88, 0x50, 0x23, 0x39, 0xd6, 0xb9, 0xcc, 0x40, 0x50, 0x23,
    0x3a, 0xd6, 0xb9, 0x88, 0x50, 0x1d, 0x18, 0xc6, 0x31, 0x8b, 0x80, 0x50,
    0x1d, 0x18, 0xc6, 0x31, 0x70, 0x74, 0x63, 0xf8, 0xc6, 0x2e, 0x74, 0x63,
    0xf8, 0xc5, 0xc0, 0x50, 0x1d, 0x18, 0xfe, 0x31, 0x8b, 0x80, 0x50, 0x1d,
    0x18, 0xfe, 0x31, 0x70, 0x28, 0x03, 0x91, 0x04, 0x70, 0x41, 0x4c, 0xe0,
    0x50, 0x1d, 0x10, 0x9c, 0x31, 0x70, 0x38, 0x03, 0x1a, 0x22, 0xc5, 0x06,
    0x08, 0x31, 0xc0, 0x38, 0x01, 0x12, 0x26, 0x45, 0x0a, 0x08, 0x10, 0x61,
    0x80, 0x28, 0x03, 0x1a, 0x22, 0xc5, 0x06, 0x08, 0x31, 0xc0, 0x28, 0x01,
    0x12, 0x26, 0x45, 0x0a, 0x08, 0x10, 0x61, 0x80, 0x14, 0x50, 0x06, 0x34,
    0x45, 0x8a, 0x0c, 0x10, 0x63, 0x80, 0x14, 0x50, 0x02, 0x24, 0x4c, 0x8a,
    0x14, 0x10, 0x20, 0xc3, 0x00, 0x50, 0x23, 0x18, 0xc6, 0x3f, 0x08, 0x40,
    0x50, 0x23, 0x18, 0xc7, 0xe1, 0x08, 0xfc, 0x21, 0x08, 0x42, 0x18, 0x42,
    0x00, 0xf8, 0x88, 0x88, 0x88, 0x80, 0x50, 0x23, 0x18, 0xf6, 0xf3, 0xbf,
    0x40, 0x50, 0x23, 0x18, 0xf6, 0x73, 0xe8, 0x7d, 0x04, 0x3e, 0x41, 0x04,
    0x18, 0x23, 0x80, 0x7a, 0x11, 0xc4, 0x21, 0x08, 0xc0, 0x44, 0xd8, 0xa0,
    0x83, 0x85, 0x11, 0x21, 0x02, 0x0c, 0x8a, 0x94, 0x45, 0x2e, 0x21, 0x18,
    0x44, 0x50, 0xa3, 0xe2, 0x85, 0x11, 0x22, 0x8a, 0x95, 0xf5, 0x2a, 0x20,
};

/*----
 *  GLYPH DESCRIPTION
 *----*/
static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}, /* id = 0 reserved */
    {.bitmap_index = 0, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}, /* U+0020 " " */
    {.bitmap_index = 1, .adv_w = 112, .box_w = 1, .box_h = 8, .ofs_x = 3, .ofs_y = 0}, /* U+0021 "!" */
    {.bitmap_index = 2, .adv_w = 112, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = 5}, /* U+0022 """ */
    {.bitmap_index = 4, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0023 "#" */
    {.bitmap_index = 11, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1}, /* U+0024 "$" */
    {.bitmap_index = 20, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0025 "%" */
    {.bitmap_index = 27, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0026 "&" */
    {.bitmap_index = 34, .adv_w = 112, .box_w = 1, .box_h = 4, .ofs_x = 3, .ofs_y = 5}, /* U+0027 "'" */
    {.bitmap_index = 35, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2}, /* U+0028 "(" */
    {.bitmap_index = 40, .adv_w = 112, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -2}, /* U+0029 ")" */
    {.bitmap_index = 45, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4}, /* U+002A "*" */
    {.bitmap_index = 49, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1}, /* U+002B "+" */
    {.bitmap_index = 54, .adv_w = 112, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2}, /* U+002C "," */
    {.bitmap_index = 56, .adv_w = 112, .box_w = 3, .box_h = 1, .ofs_x = 2, .ofs_y = 3}, /* U+002D "-" */
    {.bitmap_index = 57, .adv_w = 112, .box_w = 1, .box_h = 2, .ofs_x = 3, .ofs_y = 0}, /* U+002E "." */
    {.bitmap_index = 58, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+002F "/" */
    {.bitmap_index = 64, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0030 "0" */
    {.bitmap_index = 69, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0031 "1" */
    {.bitmap_index = 75, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0032 "2" */
    {.bitmap_index = 80, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0033 "3" */
    {.bitmap_index = 85, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0034 "4" */
    {.bitmap_index = 90, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0035 "5" */
    {.bitmap_index = 95, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0036 "6" */
    {.bitmap_index = 100, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0037 "7" */
    {.bitmap_index = 105, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0038 "8" */
    {.bitmap_index = 110, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0039 "9" */
    {.bitmap_index = 115, .adv_w = 112, .box_w = 1, .box_h = 7, .ofs_x = 3, .ofs_y = 0}, /* U+003A ":" */
    {.bitmap_index = 116, .adv_w = 112, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = -2}, /* U+003B ";" */
    {.bitmap_index = 119, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2}, /* U+003C "<" */
    {.bitmap_index = 123, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 2}, /* U+003D "=" */
    {.bitmap_index = 126, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2}, /* U+003E ">" */
    {.bitmap_index = 130, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+003F "?" */
    {.bitmap_index = 135, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2}, /* U+0040 "@" */
    {.bitmap_index = 145, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0041 "A" */
    {.bitmap_index = 152, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0042 "B" */
    {.bitmap_index = 158, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0043 "C" */
    {.bitmap_index = 164, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0044 "D" */
    {.bitmap_index = 169, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0045 "E" */
    {.bitmap_index = 174, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0046 "F" */
    {.bitmap_index = 179, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0047 "G" */
    {.bitmap_index = 184, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0048 "H" */
    {.bitmap_index = 189, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0049 "I" */
    {.bitmap_index = 194, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004A "J" */
    {.bitmap_index = 199, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004B "K" */
    {.bitmap_index = 205, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004C "L" */
    {.bitmap_index = 210, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004D "M" */
    {.bitmap_index = 215, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004E "N" */
    {.bitmap_index = 220, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+004F "O" */
    {.bitmap_index = 225, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0050 "P" */
    {.bitmap_index = 230, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+0051 "Q" */
    {.bitmap_index = 237, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0052 "R" */
    {.bitmap_index = 243, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0053 "S" */
    {.bitmap_index = 249, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0054 "T" */
    {.bitmap_index = 256, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0055 "U" */
    {.bitmap_index = 261, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0056 "V" */
    {.bitmap_index = 268, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0057 "W" */
    {.bitmap_index = 275, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0058 "X" */
    {.bitmap_index = 282, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0059 "Y" */
    {.bitmap_index = 289, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+005A "Z" */
    {.bitmap_index = 296, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = -2}, /* U+005B "[" */
    {.bitmap_index = 302, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+005C "\" */
    {.bitmap_index = 308, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+005D "]" */
    {.bitmap_index = 314, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 3}, /* U+005E "^" */
    {.bitmap_index = 318, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2}, /* U+005F "_" */
    {.bitmap_index = 319, .adv_w = 112, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 8}, /* U+0060 "`" */
    {.bitmap_index = 320, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0061 "a" */
    {.bitmap_index = 326, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0062 "b" */
    {.bitmap_index = 332, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0063 "c" */
    {.bitmap_index = 337, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0064 "d" */
    {.bitmap_index = 343, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0065 "e" */
    {.bitmap_index = 348, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0066 "f" */
    {.bitmap_index = 354, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0067 "g" */
    {.bitmap_index = 360, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0068 "h" */
    {.bitmap_index = 366, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0069 "i" */
    {.bitmap_index = 373, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+006A "j" */
    {.bitmap_index = 379, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+006B "k" */
    {.bitmap_index = 385, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 0}, /* U+006C "l" */
    {.bitmap_index = 391, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+006D "m" */
    {.bitmap_index = 396, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+006E "n" */
    {.bitmap_index = 401, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+006F "o" */
    {.bitmap_index = 406, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0070 "p" */
    {.bitmap_index = 412, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0071 "q" */
    {.bitmap_index = 418, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0072 "r" */
    {.bitmap_index = 423, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0073 "s" */
    {.bitmap_index = 428, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0074 "t" */
    {.bitmap_index = 434, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0075 "u" */
    {.bitmap_index = 439, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0076 "v" */
    {.bitmap_index = 446, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0077 "w" */
    {.bitmap_index = 453, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0078 "x" */
    {.bitmap_index = 458, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0079 "y" */
    {.bitmap_index = 466, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+007A "z" */
    {.bitmap_index = 471, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+007B "{" */
    {.bitmap_index = 478, .adv_w = 112, .box_w = 1, .box_h = 11, .ofs_x = 3, .ofs_y = -2}, /* U+007C "|" */
    {.bitmap_index = 480, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+007D "}" */
    {.bitmap_index = 487, .adv_w = 112, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3}, /* U+007E "~" */
    {.bitmap_index = 489, .adv_w = 112, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 5}, /* U+00B0 "°" */
    {.bitmap_index = 491, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+00C7 "Ç" */
    {.bitmap_index = 499, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+00D6 "Ö" */
    {.bitmap_index = 506, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+00DC "Ü" */
    {.bitmap_index = 513, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+00E7 "ç" */
    {.bitmap_index = 519, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+00F6 "ö" */
    {.bitmap_index = 525, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+00FC "ü" */
    {.bitmap_index = 531, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+011E "Ğ" */
    {.bitmap_index = 538, .adv_w = 112, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2}, /* U+011F "ğ" */
    {.bitmap_index = 546, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0130 "İ" */
    {.bitmap_index = 553, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0131 "ı" */
    {.bitmap_index = 559, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+015E "Ş" */
    {.bitmap_index = 567, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+015F "ş" */
    {.bitmap_index = 573, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+018F "Ə" */
    {.bitmap_index = 578, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0259 "ə" */
    {.bitmap_index = 583, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+0400 "Ѐ" */
    {.bitmap_index = 590, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0401 "Ё" */
    {.bitmap_index = 597, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0402 "Ђ" */
    {.bitmap_index = 604, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+0403 "Ѓ" */
    {.bitmap_index = 611, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0404 "Є" */
    {.bitmap_index = 617, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0405 "Ѕ" */
    {.bitmap_index = 623, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0406 "І" */
    {.bitmap_index = 628, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0407 "Ї" */
    {.bitmap_index = 635, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0408 "Ј" */
    {.bitmap_index = 640, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0409 "Љ" */
    {.bitmap_index = 647, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+040A "Њ" */
    {.bitmap_index = 654, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+040B "Ћ" */
    {.bitmap_index = 661, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+040C "Ќ" */
    {.bitmap_index = 670, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+040D "Ѝ" */
    {.bitmap_index = 677, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+040E "Ў" */
    {.bitmap_index = 687, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+040F "Џ" */
    {.bitmap_index = 694, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0410 "А" */
    {.bitmap_index = 701, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0411 "Б" */
    {.bitmap_index = 707, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0412 "В" */
    {.bitmap_index = 713, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0413 "Г" */
    {.bitmap_index = 718, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+0414 "Д" */
    {.bitmap_index = 727, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0415 "Е" */
    {.bitmap_index = 732, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0416 "Ж" */
    {.bitmap_index = 739, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0417 "З" */
    {.bitmap_index = 745, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0418 "И" */
    {.bitmap_index = 750, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+0419 "Й" */
    {.bitmap_index = 757, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+041A "К" */
    {.bitmap_index = 763, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+041B "Л" */
    {.bitmap_index = 769, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+041C "М" */
    {.bitmap_index = 774, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+041D "Н" */
    {.bitmap_index = 779, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+041E "О" */
    {.bitmap_index = 784, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+041F "П" */
    {.bitmap_index = 789, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0420 "Р" */
    {.bitmap_index = 794, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0421 "С" */
    {.bitmap_index = 800, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0422 "Т" */
    {.bitmap_index = 807, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0423 "У" */
    {.bitmap_index = 814, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0424 "Ф" */
    {.bitmap_index = 821, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0425 "Х" */
    {.bitmap_index = 828, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+0426 "Ц" */
    {.bitmap_index = 836, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0427 "Ч" */
    {.bitmap_index = 841, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0428 "Ш" */
    {.bitmap_index = 847, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+0429 "Щ" */
    {.bitmap_index = 856, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+042A "Ъ" */
    {.bitmap_index = 863, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+042B "Ы" */
    {.bitmap_index = 868, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+042C "Ь" */
    {.bitmap_index = 874, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+042D "Э" */
    {.bitmap_index = 880, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+042E "Ю" */
    {.bitmap_index = 887, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+042F "Я" */
    {.bitmap_index = 893, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0430 "а" */
    {.bitmap_index = 899, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0431 "б" */
    {.bitmap_index = 905, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0432 "в" */
    {.bitmap_index = 910, .adv_w = 112, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 0}, /* U+0433 "г" */
    {.bitmap_index = 914, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0434 "д" */
    {.bitmap_index = 922, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0435 "е" */
    {.bitmap_index = 927, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0436 "ж" */
    {.bitmap_index = 934, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0437 "з" */
    {.bitmap_index = 939, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0438 "и" */
    {.bitmap_index = 944, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0439 "й" */
    {.bitmap_index = 951, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+043A "к" */
    {.bitmap_index = 956, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+043B "л" */
    {.bitmap_index = 962, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+043C "м" */
    {.bitmap_index = 967, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+043D "н" */
    {.bitmap_index = 972, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+043E "о" */
    {.bitmap_index = 977, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+043F "п" */
    {.bitmap_index = 982, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0440 "р" */
    {.bitmap_index = 988, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0441 "с" */
    {.bitmap_index = 993, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0442 "т" */
    {.bitmap_index = 998, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0443 "у" */
    {.bitmap_index = 1006, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2}, /* U+0444 "ф" */
    {.bitmap_index = 1016, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0445 "х" */
    {.bitmap_index = 1021, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0446 "ц" */
    {.bitmap_index = 1028, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0447 "ч" */
    {.bitmap_index = 1033, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0448 "ш" */
    {.bitmap_index = 1038, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0449 "щ" */
    {.bitmap_index = 1045, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+044A "ъ" */
    {.bitmap_index = 1052, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+044B "ы" */
    {.bitmap_index = 1057, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+044C "ь" */
    {.bitmap_index = 1062, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+044D "э" */
    {.bitmap_index = 1067, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+044E "ю" */
    {.bitmap_index = 1074, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+044F "я" */
    {.bitmap_index = 1080, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0450 "ѐ" */
    {.bitmap_index = 1087, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0451 "ё" */
    {.bitmap_index = 1093, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2}, /* U+0452 "ђ" */
    {.bitmap_index = 1102, .adv_w = 112, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = 0}, /* U+0453 "ѓ" */
    {.bitmap_index = 1107, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0454 "є" */
    {.bitmap_index = 1112, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0455 "ѕ" */
    {.bitmap_index = 1117, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0456 "і" */
    {.bitmap_index = 1124, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0457 "ї" */
    {.bitmap_index = 1131, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+0458 "ј" */
    {.bitmap_index = 1137, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0459 "љ" */
    {.bitmap_index = 1144, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+045A "њ" */
    {.bitmap_index = 1150, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+045B "ћ" */
    {.bitmap_index = 1157, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+045C "ќ" */
    {.bitmap_index = 1164, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+045D "ѝ" */
    {.bitmap_index = 1171, .adv_w = 112, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2}, /* U+045E "ў" */
    {.bitmap_index = 1182, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+045F "џ" */
    {.bitmap_index = 1188, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0460 "Ѡ" */
    {.bitmap_index = 1195, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0461 "ѡ" */
    {.bitmap_index = 1202, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0462 "Ѣ" */
    {.bitmap_index = 1209, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+0463 "ѣ" */
    {.bitmap_index = 1217, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0464 "Ѥ" */
    {.bitmap_index = 1224, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0465 "ѥ" */
    {.bitmap_index = 1230, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0466 "Ѧ" */
    {.bitmap_index = 1237, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0467 "ѧ" */
    {.bitmap_index = 1244, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0468 "Ѩ" */
    {.bitmap_index = 1251, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0469 "ѩ" */
    {.bitmap_index = 1257, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+046A "Ѫ" */
    {.bitmap_index = 1264, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+046B "ѫ" */
    {.bitmap_index = 1271, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+046C "Ѭ" */
    {.bitmap_index = 1278, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+046D "ѭ" */
    {.bitmap_index = 1285, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2}, /* U+046E "Ѯ" */
    {.bitmap_index = 1294, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2}, /* U+046F "ѯ" */
    {.bitmap_index = 1301, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0470 "Ѱ" */
    {.bitmap_index = 1308, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0471 "ѱ" */
    {.bitmap_index = 1315, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+0472 "Ѳ" */
    {.bitmap_index = 1320, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0473 "ѳ" */
    {.bitmap_index = 1325, .adv_w = 112, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0474 "Ѵ" */
    {.bitmap_index = 1333, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+0475 "ѵ" */
    {.bitmap_index = 1340, .adv_w = 112, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+0476 "Ѷ" */
    {.bitmap_index = 1351, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+0477 "ѷ" */
    {.bitmap_index = 1360, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+0478 "Ѹ" */
    {.bitmap_index = 1369, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0479 "ѹ" */
    {.bitmap_index = 1377, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -1}, /* U+047A "Ѻ" */
    {.bitmap_index = 1384, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -1}, /* U+047B "ѻ" */
    {.bitmap_index = 1392, .adv_w = 112, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0}, /* U+047C "Ѽ" */
    {.bitmap_index = 1403, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+047D "ѽ" */
    {.bitmap_index = 1412, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+047E "Ѿ" */
    {.bitmap_index = 1422, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+047F "ѿ" */
    {.bitmap_index = 1430, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+0480 "Ҁ" */
    {.bitmap_index = 1437, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0481 "ҁ" */
    {.bitmap_index = 1443, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0482 "҂" */
    {.bitmap_index = 1449, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -2, .ofs_y = 7}, /* U+0483 "҃" */
    {.bitmap_index = 1450, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -2, .ofs_y = 7}, /* U+0484 "҄" */
    {.bitmap_index = 1451, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -1, .ofs_y = 7}, /* U+0485 "҅" */
    {.bitmap_index = 1452, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -1, .ofs_y = 7}, /* U+0486 "҆" */
    {.bitmap_index = 1453, .adv_w = 0, .box_w = 6, .box_h = 2, .ofs_x = -3, .ofs_y = 8}, /* U+0487 "҇" */
    {.bitmap_index = 1455, .adv_w = 0, .box_w = 12, .box_h = 11, .ofs_x = -6, .ofs_y = -2}, /* U+0488 "҈" */
    {.bitmap_index = 1472, .adv_w = 0, .box_w = 10, .box_h = 11, .ofs_x = -5, .ofs_y = -2}, /* U+0489 "҉" */
    {.bitmap_index = 1486, .adv_w = 112, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2}, /* U+048A "Ҋ" */
    {.bitmap_index = 1496, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2}, /* U+048B "ҋ" */
    {.bitmap_index = 1505, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+048C "Ҍ" */
    {.bitmap_index = 1512, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+048D "ҍ" */
    {.bitmap_index = 1519, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+048E "Ҏ" */
    {.bitmap_index = 1525, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+048F "ҏ" */
    {.bitmap_index = 1531, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+0490 "Ґ" */
    {.bitmap_index = 1539, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+0491 "ґ" */
    {.bitmap_index = 1545, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+0492 "Ғ" */
    {.bitmap_index = 1551, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+0493 "ғ" */
    {.bitmap_index = 1556, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+0494 "Ҕ" */
    {.bitmap_index = 1563, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0495 "ҕ" */
    {.bitmap_index = 1569, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+0496 "Җ" */
    {.bitmap_index = 1578, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+0497 "җ" */
    {.bitmap_index = 1586, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+0498 "Ҙ" */
    {.bitmap_index = 1594, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+0499 "ҙ" */
    {.bitmap_index = 1600, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+049A "Қ" */
    {.bitmap_index = 1608, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+049B "қ" */
    {.bitmap_index = 1614, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+049C "Ҝ" */
    {.bitmap_index = 1620, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+049D "ҝ" */
    {.bitmap_index = 1625, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+049E "Ҟ" */
    {.bitmap_index = 1632, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+049F "ҟ" */
    {.bitmap_index = 1639, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04A0 "Ҡ" */
    {.bitmap_index = 1646, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+04A1 "ҡ" */
    {.bitmap_index = 1652, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04A2 "Ң" */
    {.bitmap_index = 1660, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04A3 "ң" */
    {.bitmap_index = 1667, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04A4 "Ҥ" */
    {.bitmap_index = 1673, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04A5 "ҥ" */
    {.bitmap_index = 1679, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04A6 "Ҧ" */
    {.bitmap_index = 1688, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04A7 "ҧ" */
    {.bitmap_index = 1696, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04A8 "Ҩ" */
    {.bitmap_index = 1703, .adv_w = 112, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04A9 "ҩ" */
    {.bitmap_index = 1709, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04AA "Ҫ" */
    {.bitmap_index = 1717, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04AB "ҫ" */
    {.bitmap_index = 1723, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04AC "Ҭ" */
    {.bitmap_index = 1732, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04AD "ҭ" */
    {.bitmap_index = 1738, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04AE "Ү" */
    {.bitmap_index = 1745, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04AF "ү" */
    {.bitmap_index = 1753, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04B0 "Ұ" */
    {.bitmap_index = 1760, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04B1 "ұ" */
    {.bitmap_index = 1768, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04B2 "Ҳ" */
    {.bitmap_index = 1777, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04B3 "ҳ" */
    {.bitmap_index = 1783, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04B4 "Ҵ" */
    {.bitmap_index = 1792, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04B5 "ҵ" */
    {.bitmap_index = 1800, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04B6 "Ҷ" */
    {.bitmap_index = 1808, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04B7 "ҷ" */
    {.bitmap_index = 1815, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04B8 "Ҹ" */
    {.bitmap_index = 1820, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04B9 "ҹ" */
    {.bitmap_index = 1825, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04BA "Һ" */
    {.bitmap_index = 1831, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04BB "һ" */
    {.bitmap_index = 1837, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04BC "Ҽ" */
    {.bitmap_index = 1844, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+04BD "ҽ" */
    {.bitmap_index = 1851, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04BE "Ҿ" */
    {.bitmap_index = 1860, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04BF "ҿ" */
    {.bitmap_index = 1868, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04C0 "Ӏ" */
    {.bitmap_index = 1873, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+04C1 "Ӂ" */
    {.bitmap_index = 1883, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04C2 "ӂ" */
    {.bitmap_index = 1892, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04C3 "Ӄ" */
    {.bitmap_index = 1900, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04C4 "ӄ" */
    {.bitmap_index = 1906, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04C5 "Ӆ" */
    {.bitmap_index = 1915, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2}, /* U+04C6 "ӆ" */
    {.bitmap_index = 1923, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04C7 "Ӈ" */
    {.bitmap_index = 1930, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04C8 "ӈ" */
    {.bitmap_index = 1936, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04C9 "Ӊ" */
    {.bitmap_index = 1944, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04CA "ӊ" */
    {.bitmap_index = 1951, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04CB "Ӌ" */
    {.bitmap_index = 1958, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04CC "ӌ" */
    {.bitmap_index = 1964, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04CD "Ӎ" */
    {.bitmap_index = 1972, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04CE "ӎ" */
    {.bitmap_index = 1979, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 0}, /* U+04CF "ӏ" */
    {.bitmap_index = 1985, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+04D0 "Ӑ" */
    {.bitmap_index = 1995, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04D1 "ӑ" */
    {.bitmap_index = 2003, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04D2 "Ӓ" */
    {.bitmap_index = 2012, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04D3 "ӓ" */
    {.bitmap_index = 2019, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04D4 "Ӕ" */
    {.bitmap_index = 2026, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0}, /* U+04D5 "ӕ" */
    {.bitmap_index = 2033, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0}, /* U+04D6 "Ӗ" */
    {.bitmap_index = 2040, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04D7 "ӗ" */
    {.bitmap_index = 2047, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04D8 "Ә" */
    {.bitmap_index = 2052, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04D9 "ә" */
    {.bitmap_index = 2057, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04DA "Ӛ" */
    {.bitmap_index = 2064, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04DB "ӛ" */
    {.bitmap_index = 2070, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04DC "Ӝ" */
    {.bitmap_index = 2079, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0}, /* U+04DD "ӝ" */
    {.bitmap_index = 2087, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04DE "Ӟ" */
    {.bitmap_index = 2095, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04DF "ӟ" */
    {.bitmap_index = 2101, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04E0 "Ӡ" */
    {.bitmap_index = 2108, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04E1 "ӡ" */
    {.bitmap_index = 2114, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04E2 "Ӣ" */
    {.bitmap_index = 2121, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04E3 "ӣ" */
    {.bitmap_index = 2127, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04E4 "Ӥ" */
    {.bitmap_index = 2134, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04E5 "ӥ" */
    {.bitmap_index = 2140, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04E6 "Ӧ" */
    {.bitmap_index = 2147, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04E7 "ӧ" */
    {.bitmap_index = 2153, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0}, /* U+04E8 "Ө" */
    {.bitmap_index = 2158, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04E9 "ө" */
    {.bitmap_index = 2163, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04EA "Ӫ" */
    {.bitmap_index = 2170, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04EB "ӫ" */
    {.bitmap_index = 2176, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04EC "Ӭ" */
    {.bitmap_index = 2184, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04ED "ӭ" */
    {.bitmap_index = 2190, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04EE "Ӯ" */
    {.bitmap_index = 2199, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2}, /* U+04EF "ӯ" */
    {.bitmap_index = 2209, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0}, /* U+04F0 "Ӱ" */
    {.bitmap_index = 2218, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2}, /* U+04F1 "ӱ" */
    {.bitmap_index = 2228, .adv_w = 112, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0}, /* U+04F2 "Ӳ" */
    {.bitmap_index = 2238, .adv_w = 112, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2}, /* U+04F3 "ӳ" */
    {.bitmap_index = 2249, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04F4 "Ӵ" */
    {.bitmap_index = 2256, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04F5 "ӵ" */
    {.bitmap_index = 2262, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2}, /* U+04F6 "Ӷ" */
    {.bitmap_index = 2269, .adv_w = 112, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = -2}, /* U+04F7 "ӷ" */
    {.bitmap_index = 2274, .adv_w = 112, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0}, /* U+04F8 "Ӹ" */
    {.bitmap_index = 2281, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0}, /* U+04F9 "ӹ" */
    {.bitmap_index = 2287, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04FA "Ӻ" */
    {.bitmap_index = 2295, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04FB "ӻ" */
    {.bitmap_index = 2301, .adv_w = 112, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2}, /* U+04FC "Ӽ" */
    {.bitmap_index = 2310, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2}, /* U+04FD "ӽ" */
    {.bitmap_index = 2316, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}, /* U+04FE "Ӿ" */
    {.bitmap_index = 2323, .adv_w = 112, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0}, /* U+04FF "ӿ" */
};

/*----
 *  CHARACTER MAPPING
 *----*/
static const uint16_t unicode_list_1[] = {
    0x0000, 0x0017, 0x0026, 0x002c, 0x0037, 0x0046, 0x004c, 0x006e,
    0x006f, 0x0080, 0x0081, 0x00ae, 0x00af, 0x00df, 0x01a9, 0x0350,
    0x0351, 0x0352, 0x0353, 0x0354, 0x0355, 0x0356, 0x0357, 0x0358,
    0x0359, 0x035a, 0x035b, 0x035c, 0x035d, 0x035e, 0x035f, 0x0360,
    0x0361, 0x0362, 0x0363, 0x0364, 0x0365, 0x0366, 0x0367, 0x0368,
    0x0369, 0x036a, 0x036b, 0x036c, 0x036d, 0x036e, 0x036f, 0x0370,
    0x0371, 0x0372, 0x0373, 0x0374, 0x0375, 0x0376, 0x0377, 0x0378,
    0x0379, 0x037a, 0x037b, 0x037c, 0x037d, 0x037e, 0x037f, 0x0380,
    0x0381, 0x0382, 0x0383, 0x0384, 0x0385, 0x0386, 0x0387, 0x0388,
    0x0389, 0x038a, 0x038b, 0x038c, 0x038d, 0x038e, 0x038f, 0x0390,
    0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398,
    0x0399, 0x039a, 0x039b, 0x039c, 0x039d, 0x039e, 0x039f, 0x03a0,
    0x03a1, 0x03a2, 0x03a3, 0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8,
    0x03a9, 0x03aa, 0x03ab, 0x03ac, 0x03ad, 0x03ae, 0x03af, 0x03b0,
    0x03b1, 0x03b2, 0x03b3, 0x03b4, 0x03b5, 0x03b6, 0x03b7, 0x03b8,
    0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 0x03be, 0x03bf, 0x03c0,
    0x03c1, 0x03c2, 0x03c3, 0x03c4, 0x03c5, 0x03c6, 0x03c7, 0x03c8,
    0x03c9, 0x03ca, 0x03cb, 0x03cc, 0x03cd, 0x03ce, 0x03cf, 0x03d0,
    0x03d1, 0x03d2, 0x03d3, 0x03d4, 0x03d5, 0x03d6, 0x03d7, 0x03d8,
    0x03d9, 0x03da, 0x03db, 0x03dc, 0x03dd, 0x03de, 0x03df, 0x03e0,
    0x03e1, 0x03e2, 0x03e3, 0x03e4, 0x03e5, 0x03e6, 0x03e7, 0x03e8,
    0x03e9, 0x03ea, 0x03eb, 0x03ec, 0x03ed, 0x03ee, 0x03ef, 0x03f0,
    0x03f1, 0x03f2, 0x03f3, 0x03f4, 0x03f5, 0x03f6, 0x03f7, 0x03f8,
    0x03f9, 0x03fa, 0x03fb, 0x03fc, 0x03fd, 0x03fe, 0x03ff, 0x0400,
    0x0401, 0x0402, 0x0403, 0x0404, 0x0405, 0x0406, 0x0407, 0x0408,
    0x0409, 0x040a, 0x040b, 0x040c, 0x040d, 0x040e, 0x040f, 0x0410,
    0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418,
    0x0419, 0x041a, 0x041b, 0x041c, 0x041d, 0x041e, 0x041f, 0x0420,
    0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428,
    0x0429, 0x042a, 0x042b, 0x042c, 0x042d, 0x042e, 0x042f, 0x0430,
    0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438,
    0x0439, 0x043a, 0x043b, 0x043c, 0x043d, 0x043e, 0x043f, 0x0440,
    0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448,
    0x0449, 0x044a, 0x044b, 0x044c, 0x044d, 0x044e, 0x044f,
};

static const lv_font_fmt_txt_cmap_t cmaps[] = {
    {
        .range_start = 0x20, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0,
        .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 0x00B0, .range_length = 0x0450, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL,
        .list_length = 271,
        .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
};

/*----
 *  ALL CUSTOM DATA
 *----*/
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
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
};

/*----
 *  PUBLIC FONT
 *----*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_12 = {
#else
lv_font_t ui_font_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,
    .line_height = 15,
    .base_line = 2,
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc
};

#endif /*#if UI_FONT_12*/