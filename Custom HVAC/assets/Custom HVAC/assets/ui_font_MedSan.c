/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font C:/Users/lewst/Desktop/Custom_HVAC_02/assets/REFSAN.TTF -o C:/Users/lewst/Desktop/Custom_HVAC_02/assets\ui_font_MedSan.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_MEDSAN
#define UI_FONT_MEDSAN 1
#endif

#if UI_FONT_MEDSAN

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xaa, 0xa0,

    /* U+0023 "#" */
    0x14, 0x14, 0x7f, 0x24, 0x28, 0x28, 0xfe, 0x48,
    0x48,

    /* U+0024 "$" */
    0x21, 0xfa, 0x68, 0xe0, 0xf2, 0x49, 0xf8, 0x82,
    0x0,

    /* U+0025 "%" */
    0x61, 0x12, 0x22, 0x48, 0x49, 0x6, 0x4c, 0x12,
    0x42, 0x48, 0x89, 0x10, 0xc0,

    /* U+0026 "&" */
    0x30, 0x24, 0x12, 0xe, 0x5, 0x24, 0x52, 0x19,
    0x8c, 0x79, 0x0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x24, 0x48, 0x88, 0x88, 0x84, 0x42,

    /* U+0029 ")" */
    0x42, 0x21, 0x11, 0x11, 0x12, 0x24,

    /* U+002A "*" */
    0x25, 0x5d, 0xf2, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x7a,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x8, 0xc4, 0x22, 0x10, 0x88, 0x42, 0x21, 0x0,

    /* U+0030 "0" */
    0x7b, 0x28, 0x61, 0x86, 0x18, 0x72, 0x78,

    /* U+0031 "1" */
    0x27, 0x8, 0x42, 0x10, 0x84, 0xf8,

    /* U+0032 "2" */
    0xf2, 0x20, 0x82, 0x10, 0xc6, 0x30, 0xfc,

    /* U+0033 "3" */
    0x78, 0x10, 0x4e, 0xc, 0x10, 0x63, 0x78,

    /* U+0034 "4" */
    0x8, 0x62, 0x92, 0x8b, 0xf0, 0x82, 0x8,

    /* U+0035 "5" */
    0x7d, 0x4, 0x1e, 0xc, 0x10, 0x63, 0xf8,

    /* U+0036 "6" */
    0x39, 0x8, 0x3e, 0x8e, 0x18, 0x73, 0x78,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x42, 0x8, 0x40,

    /* U+0038 "8" */
    0x7a, 0x18, 0x73, 0x7a, 0x18, 0x71, 0x78,

    /* U+0039 "9" */
    0x7b, 0x38, 0x61, 0xc5, 0xf0, 0x42, 0x70,

    /* U+003A ":" */
    0x82,

    /* U+003B ";" */
    0x40, 0x15, 0x60,

    /* U+003C "<" */
    0x6, 0x33, 0x87, 0x3, 0x80, 0xc0, 0x0,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0xc0, 0x60, 0x38, 0x73, 0x98, 0x0, 0x0,

    /* U+003F "?" */
    0xf4, 0x42, 0x11, 0x10, 0x80, 0x20,

    /* U+0040 "@" */
    0x1e, 0x18, 0x65, 0xea, 0x89, 0xa2, 0x68, 0x9a,
    0x25, 0x7e, 0x60, 0x7, 0x80,

    /* U+0041 "A" */
    0x18, 0x18, 0x34, 0x24, 0x24, 0x7e, 0x42, 0x43,
    0x81,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x3c, 0x86, 0x4, 0x8, 0x10, 0x20, 0x21, 0x3c,

    /* U+0044 "D" */
    0xf9, 0x1a, 0xc, 0x18, 0x30, 0x60, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfe, 0x8, 0x20, 0xfc,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x80,

    /* U+0047 "G" */
    0x3e, 0x41, 0x80, 0x80, 0x8f, 0x81, 0xc1, 0x61,
    0x3e,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xe9, 0x24, 0x92, 0xe0,

    /* U+004A "J" */
    0x71, 0x11, 0x11, 0x11, 0xe0,

    /* U+004B "K" */
    0x85, 0x12, 0x45, 0xe, 0x16, 0x26, 0x46, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0xc3, 0xc3, 0xa5, 0xa5, 0x99, 0x99, 0x81, 0x81,
    0x81,

    /* U+004E "N" */
    0xc3, 0xc6, 0x8d, 0x99, 0x31, 0x63, 0xc3, 0x86,

    /* U+004F "O" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0050 "P" */
    0xfa, 0x38, 0x61, 0x8f, 0xc8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c, 0x4, 0x4, 0x3,

    /* U+0052 "R" */
    0xf8, 0x84, 0x84, 0x8c, 0xf8, 0x98, 0x8c, 0x84,
    0x82,

    /* U+0053 "S" */
    0x7d, 0x86, 0x6, 0x7, 0xc0, 0xc0, 0xc3, 0x7c,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7c,

    /* U+0056 "V" */
    0xc1, 0x43, 0x42, 0x62, 0x24, 0x24, 0x34, 0x18,
    0x18,

    /* U+0057 "W" */
    0x8c, 0x63, 0x18, 0xc7, 0x52, 0x52, 0x94, 0xa5,
    0x29, 0xcc, 0x21, 0x0,

    /* U+0058 "X" */
    0x42, 0x62, 0x24, 0x18, 0x18, 0x1c, 0x24, 0x62,
    0x42,

    /* U+0059 "Y" */
    0x82, 0x89, 0xb1, 0x41, 0x2, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0x41, 0x4, 0x18, 0x60, 0xfe,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x70,

    /* U+005C "\\" */
    0x41, 0x4, 0x8, 0x20, 0x81, 0x4, 0x8, 0x20,
    0x81,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0xf0,

    /* U+005E "^" */
    0x18, 0x38, 0x24, 0x42, 0xc2,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0x94,

    /* U+0061 "a" */
    0x78, 0x17, 0xf1, 0x86, 0x37, 0x40,

    /* U+0062 "b" */
    0x82, 0xf, 0xa3, 0x86, 0x18, 0x62, 0xf8,

    /* U+0063 "c" */
    0x7b, 0x18, 0x20, 0x83, 0x17, 0x80,

    /* U+0064 "d" */
    0x4, 0x17, 0xf1, 0x86, 0x18, 0x71, 0x7c,

    /* U+0065 "e" */
    0x7b, 0x38, 0x7f, 0x83, 0x7, 0xc0,

    /* U+0066 "f" */
    0x3a, 0x3c, 0x84, 0x21, 0x8, 0x40,

    /* U+0067 "g" */
    0x7d, 0x18, 0x61, 0x87, 0x17, 0xc1, 0xd, 0xe0,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x31, 0x88,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x21, 0x92, 0x49, 0x24, 0xe0,

    /* U+006B "k" */
    0x82, 0x8, 0xa4, 0xa3, 0x8b, 0x26, 0x88,

    /* U+006C "l" */
    0xff, 0x80,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0070 "p" */
    0xfa, 0x38, 0x61, 0x86, 0x2f, 0xa0, 0x82, 0x0,

    /* U+0071 "q" */
    0x7f, 0x18, 0x61, 0x87, 0x17, 0xc1, 0x4, 0x10,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x7c, 0x60, 0xe0, 0xc7, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x30,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0,

    /* U+0076 "v" */
    0x46, 0x89, 0x11, 0x42, 0x87, 0x4, 0x0,

    /* U+0077 "w" */
    0x4c, 0xa6, 0x53, 0x2a, 0xa3, 0x31, 0x98, 0x8c,

    /* U+0078 "x" */
    0x44, 0xd8, 0xe0, 0x82, 0x8d, 0x91, 0x0,

    /* U+0079 "y" */
    0x46, 0x89, 0x11, 0x42, 0x87, 0x4, 0x8, 0x30,
    0x40,

    /* U+007A "z" */
    0xf8, 0xc4, 0x44, 0x63, 0xe0,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x32, 0xc, 0x21, 0x8, 0x30,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x18, 0x26, 0x21, 0x9, 0x80,

    /* U+007E "~" */
    0x71, 0x99, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 68, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 76, .box_w = 1, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 23, .adv_w = 207, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 140, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 52, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 48, .adv_w = 87, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 54, .adv_w = 87, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 60, .adv_w = 122, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 64, .adv_w = 157, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 70, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 72, .adv_w = 87, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 73, .adv_w = 70, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 87, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 82, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 122, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 87, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 87, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 155, .adv_w = 157, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 157, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 166, .adv_w = 157, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 192, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 132, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 134, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 110, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 81, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 133, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 107, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 162, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 151, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 322, .adv_w = 134, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 190, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 132, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 87, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 406, .adv_w = 87, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 415, .adv_w = 87, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 420, .adv_w = 157, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 425, .adv_w = 122, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 426, .adv_w = 122, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 427, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 68, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 473, .adv_w = 122, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 53, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 66, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 486, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 53, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 187, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 117, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 522, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 530, .adv_w = 82, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 76, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 122, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 157, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 114, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 580, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 122, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 593, .adv_w = 87, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 595, .adv_w = 122, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 603, .adv_w = 157, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    8, 34,
    14, 34,
    14, 42,
    14, 43,
    14, 52,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    14, 59,
    14, 66,
    14, 87,
    14, 88,
    14, 89,
    14, 90,
    14, 91,
    15, 13,
    15, 14,
    34, 14,
    34, 52,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 13,
    35, 14,
    35, 15,
    35, 53,
    36, 14,
    37, 13,
    37, 15,
    37, 53,
    37, 56,
    37, 57,
    37, 58,
    37, 59,
    39, 13,
    39, 15,
    39, 27,
    39, 28,
    39, 32,
    39, 34,
    39, 53,
    39, 66,
    39, 70,
    39, 80,
    42, 14,
    43, 13,
    43, 15,
    43, 34,
    44, 14,
    44, 48,
    44, 66,
    44, 70,
    44, 80,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 8,
    45, 14,
    45, 36,
    45, 40,
    45, 43,
    45, 48,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 87,
    45, 90,
    48, 13,
    48, 15,
    48, 53,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 58,
    49, 66,
    49, 70,
    49, 80,
    50, 13,
    50, 15,
    51, 14,
    51, 53,
    51, 58,
    51, 66,
    51, 70,
    51, 80,
    51, 86,
    51, 90,
    52, 13,
    52, 15,
    52, 34,
    52, 52,
    52, 87,
    52, 88,
    52, 90,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    53, 32,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 52,
    53, 53,
    53, 66,
    53, 68,
    53, 70,
    53, 72,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 90,
    53, 91,
    54, 13,
    54, 15,
    54, 34,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 66,
    55, 70,
    55, 80,
    55, 86,
    55, 90,
    56, 13,
    56, 14,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 66,
    56, 70,
    56, 80,
    56, 83,
    56, 86,
    56, 90,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 66,
    57, 70,
    57, 80,
    57, 86,
    57, 90,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 48,
    58, 66,
    58, 69,
    58, 70,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 87,
    59, 14,
    59, 36,
    59, 40,
    59, 48,
    59, 59,
    59, 66,
    59, 70,
    59, 80,
    59, 88,
    59, 90,
    66, 87,
    66, 88,
    66, 90,
    67, 13,
    67, 15,
    67, 90,
    68, 14,
    68, 53,
    70, 53,
    71, 3,
    71, 8,
    71, 10,
    71, 11,
    71, 13,
    71, 14,
    71, 15,
    71, 32,
    71, 61,
    71, 62,
    71, 90,
    71, 94,
    73, 87,
    73, 88,
    73, 90,
    76, 14,
    76, 70,
    76, 80,
    78, 87,
    78, 88,
    78, 90,
    79, 87,
    79, 88,
    79, 90,
    80, 13,
    80, 15,
    80, 87,
    80, 89,
    80, 90,
    81, 13,
    81, 15,
    81, 90,
    83, 13,
    83, 14,
    83, 15,
    83, 66,
    85, 14,
    85, 90,
    87, 13,
    87, 14,
    87, 15,
    87, 66,
    87, 70,
    87, 80,
    88, 13,
    88, 14,
    88, 15,
    88, 66,
    89, 14,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    90, 13,
    90, 14,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 72,
    90, 80,
    90, 82,
    91, 14,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -9, -5, -3, -9, -2, -14, -5, -5,
    -7, -13, -3, -2, -4, -2, -5, -4,
    -4, -12, -15, -5, -1, -11, -1, -6,
    -5, -7, -2, -1, -5, -3, -5, -2,
    1, -2, -6, -5, -5, -5, -5, -2,
    -1, -2, -2, -28, -28, -6, -6, 6,
    -9, 3, -9, -5, -5, -3, -2, -2,
    -1, -10, -2, -6, -7, -7, -5, -7,
    -7, -7, -11, -15, -2, -2, 9, -2,
    -16, -10, -9, -15, -10, -10, -3, -3,
    -5, -1, -2, -2, -28, -28, -5, 2,
    -5, -5, -5, -3, -3, -9, -6, -2,
    -4, -5, -5, -2, -5, -2, -2, -2,
    -2, -3, -2, -3, -27, -14, -27, -19,
    -19, 6, -11, -4, -4, -5, -1, -7,
    -22, -21, -21, -20, -21, -19, -17, -19,
    -19, -19, -19, -16, -2, -2, -1, -27,
    -5, -27, -7, -7, -6, -9, -9, -9,
    -6, -6, -27, -5, -21, -7, -7, -5,
    -9, -9, -9, -6, -6, -6, -7, -1,
    -1, -1, -5, -6, -6, -3, -7, -27,
    -13, -27, -19, -19, -7, -2, -13, -11,
    -12, -12, -9, -9, -12, -9, -12, -9,
    -10, -10, -9, -6, -2, -2, -2, -1,
    -5, -6, -6, -4, -6, -1, -1, -1,
    -3, -2, 0, -2, -6, -13, 6, 6,
    9, 5, -12, -5, -11, 10, 9, 9,
    -1, 9, -2, -1, -2, -9, -2, -2,
    -2, -1, -2, -2, -1, -2, -3, -2,
    -1, -2, -1, -3, -2, 0, -27, -2,
    -27, -3, -4, -1, -17, -4, -17, -4,
    -2, -2, -7, -2, -7, -2, -5, -2,
    -1, -2, -1, -2, -18, -4, -18, -4,
    -2, -1, -2, -1, -2, -1, -2, -1,
    -1, -1, -1, -1, -1
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 277,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_MedSan = {
#else
lv_font_t ui_font_MedSan = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_MEDSAN*/

