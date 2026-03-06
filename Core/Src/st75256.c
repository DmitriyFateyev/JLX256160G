#include "st75256.h"
#include <string.h>
#include <stdlib.h>

/* Single global instances */
st75256_t lcd;
uint8_t fb[ST75256_FB_SIZE];

static inline void CS_LOW(st75256_t *lcd)  { HAL_GPIO_WritePin(lcd->cs_port,  lcd->cs_pin,  GPIO_PIN_RESET); }
static inline void CS_HIGH(st75256_t *lcd) { HAL_GPIO_WritePin(lcd->cs_port,  lcd->cs_pin,  GPIO_PIN_SET);   }
static inline void A0_CMD(st75256_t *lcd)  { HAL_GPIO_WritePin(lcd->a0_port,  lcd->a0_pin,  GPIO_PIN_RESET); }
static inline void A0_DATA(st75256_t *lcd) { HAL_GPIO_WritePin(lcd->a0_port,  lcd->a0_pin,  GPIO_PIN_SET);   }
static inline void RST_LOW(st75256_t *lcd) { HAL_GPIO_WritePin(lcd->rst_port, lcd->rst_pin, GPIO_PIN_RESET); }
static inline void RST_HIGH(st75256_t *lcd){ HAL_GPIO_WritePin(lcd->rst_port, lcd->rst_pin, GPIO_PIN_SET);   }

static void st75256_write_cmd(st75256_t *lcd, uint8_t cmd)
{
    CS_LOW(lcd);
    A0_CMD(lcd);
    (void)HAL_SPI_Transmit(lcd->hspi, &cmd, 1, HAL_MAX_DELAY);
    CS_HIGH(lcd);
}

static void st75256_write_data(st75256_t *lcd, uint8_t data)
{
    CS_LOW(lcd);
    A0_DATA(lcd);
    (void)HAL_SPI_Transmit(lcd->hspi, &data, 1, HAL_MAX_DELAY);
    CS_HIGH(lcd);
}

void st75256_write_data_buf(st75256_t *lcd, const uint8_t *buf, size_t len)
{
    CS_LOW(lcd);
    A0_DATA(lcd);
    (void)HAL_SPI_Transmit(lcd->hspi, (uint8_t *)buf, (uint16_t)len, HAL_MAX_DELAY);
    CS_HIGH(lcd);
}

void st75256_display_on(st75256_t *lcd, uint8_t on)
{
    st75256_write_cmd(lcd, on ? 0xAF : 0xAE);
}

void st75256_set_window(st75256_t *lcd,
                        uint8_t col_start, uint8_t col_end,
                        uint8_t page_start, uint8_t page_end)
{
    st75256_write_cmd(lcd, 0x15);
    st75256_write_data(lcd, col_start);
    st75256_write_data(lcd, col_end);

    st75256_write_cmd(lcd, 0x75);
    st75256_write_data(lcd, page_start);
    st75256_write_data(lcd, page_end);

    st75256_write_cmd(lcd, 0x30);
    st75256_write_cmd(lcd, 0x5C);
}

void st75256_write_fb(st75256_t *lcd, const uint8_t *buf)
{
    st75256_set_window(lcd, 0, 255, 0, 19);
    st75256_write_data_buf(lcd, buf, ST75256_FB_SIZE);
}

void st75256_clear(st75256_t *lcd, uint8_t value)
{
    uint8_t chunk[64];
    for(size_t i = 0; i < sizeof(chunk); i++) chunk[i] = value;

    st75256_set_window(lcd, 0, 255, 0, 19);

    size_t remaining = ST75256_FB_SIZE;
    while(remaining) {
        size_t n = (remaining > sizeof(chunk)) ? sizeof(chunk) : remaining;
        st75256_write_data_buf(lcd, chunk, n);
        remaining -= n;
    }
}

void st75256_draw_pixel(uint8_t *buf, int x, int y, uint8_t on)
{
    if(x < 0 || x >= ST75256_WIDTH || y < 0 || y >= ST75256_HEIGHT) return;

    int page = y >> 3;
    int bit  = y & 7;

    /* MSB (bit 7) is top pixel of the 8-pixel page */
    uint8_t mask = (uint8_t)(0x80u >> bit);

    size_t idx = (size_t)page * ST75256_WIDTH + (size_t)x;
    if(on) buf[idx] |= mask;
    else   buf[idx] &= (uint8_t)~mask;
}

void st75256_draw_hline(uint8_t *buf, int y, uint8_t on)
{
    if(y < 0 || y >= ST75256_HEIGHT) return;

    int page = y >> 3;
    uint8_t mask = (uint8_t)(0x80u >> (y & 7));

    for(int x = 0; x < ST75256_WIDTH; x++) {
        size_t idx = (size_t)page * ST75256_WIDTH + (size_t)x;
        if(on) buf[idx] |= mask;
        else   buf[idx] &= (uint8_t)~mask;
    }
}

void st75256_draw_vline(uint8_t *buf, int x, int y0, int y1, uint8_t on)
{
    if(x < 0 || x >= ST75256_WIDTH) return;

    if(y0 > y1) {
        int t = y0;
        y0 = y1;
        y1 = t;
    }

    if(y1 < 0 || y0 >= ST75256_HEIGHT) return;

    if(y0 < 0) y0 = 0;
    if(y1 >= ST75256_HEIGHT) y1 = ST75256_HEIGHT - 1;

    int p0 = y0 >> 3;
    int p1 = y1 >> 3;

    for(int p = p0; p <= p1; ++p) {
        uint8_t mask = 0;
        int start_y = (p == p0) ? y0 : (p << 3);
        int end_y   = (p == p1) ? y1 : ((p << 3) + 7);

        for(int y = start_y; y <= end_y; ++y) {
            int bit = y & 7;
            mask |= (uint8_t)(0x80u >> bit);
        }

        size_t idx = (size_t)p * ST75256_WIDTH + (size_t)x;
        if(on) buf[idx] |= mask;
        else   buf[idx] &= (uint8_t)~mask;
    }
}

void st75256_test_checkerboard(st75256_t *dev)
{
    st75256_write_cmd(dev, 0x15);
    st75256_write_data(dev, 0x00);
    st75256_write_data(dev, 0xFF);

    st75256_write_cmd(dev, 0x75);
    st75256_write_data(dev, 0x00);
    st75256_write_data(dev, 0x13);

    st75256_write_cmd(dev, 0x30);
    st75256_write_cmd(dev, 0x5C);

    for(int page = 0; page < 20; page++) {
        for(int col = 0; col < 256; col++) {
            if(((col / 8) + (page % 2)) % 2 == 0) {
                st75256_write_data(dev, 0xFF);
            } else {
                st75256_write_data(dev, 0x00);
            }
        }
    }
}

static inline size_t FB_IDX(int page, int col)
{
    return (size_t)page * ST75256_WIDTH + (size_t)col;
}

void st75256_test_lcdic_pattern(st75256_t *lcd)
{
    static uint8_t test_fb[ST75256_FB_SIZE];
    memset(test_fb, 0x00, sizeof(test_fb));

    for(int page = 0; page < ST75256_PAGES; page++) {
        test_fb[FB_IDX(page, 0)]   = 0xFF;
        test_fb[FB_IDX(page, 255)] = 0xFF;
    }

    for(int col = 2; col < 34; col++) {
        test_fb[FB_IDX(0, col)]  = 0xFF;
        test_fb[FB_IDX(19, col)] = 0xFF;
    }

    const uint8_t bits[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
    for(int i = 0; i < 8; i++) {
        test_fb[FB_IDX(0, 40 + i)] = bits[i];
    }

    for(int i = 0; i < 8; i++) {
        test_fb[FB_IDX(0, 50 + i)] = bits[7 - i];
    }

    for(int i = 0; i < 8; i++) {
        test_fb[FB_IDX(1, 40 + i)] = bits[i];
    }

    st75256_write_fb(lcd, test_fb);
}

void st75256_draw_image(st75256_t *dev, const uint8_t *img)
{
    st75256_write_cmd(dev, 0x15);
    st75256_write_data(dev, 0x00);
    st75256_write_data(dev, 0xFF);

    st75256_write_cmd(dev, 0x75);
    st75256_write_data(dev, 0x00);
    st75256_write_data(dev, 0x13);

    st75256_write_cmd(dev, 0x5C);

    st75256_write_data_buf(dev, img, ST75256_FB_SIZE);
}

void st75256_init(st75256_t *lcd)
{
    RST_LOW(lcd);
    HAL_Delay(10);
    RST_HIGH(lcd);
    HAL_Delay(10);

    st75256_write_cmd(lcd, 0x30);
    st75256_write_cmd(lcd, 0x94);
    HAL_Delay(50);

    st75256_write_cmd(lcd, 0x31);
    st75256_write_cmd(lcd, 0xD7);
    st75256_write_data(lcd, 0x9F);

    st75256_write_cmd(lcd, 0x32);
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0x01);
    st75256_write_data(lcd, 0x03);

    st75256_write_cmd(lcd, 0x51);
    st75256_write_data(lcd, 0xFB);

    st75256_write_cmd(lcd, 0x30);

    st75256_write_cmd(lcd, 0x75);
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0x28);

    st75256_write_cmd(lcd, 0x15);
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0xFF);

    st75256_write_cmd(lcd, 0xBC);
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0xA6);

    st75256_write_cmd(lcd, 0xCA);
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0x9F);
    st75256_write_data(lcd, 0x20);

    st75256_write_cmd(lcd, 0xF0);
    st75256_write_data(lcd, 0x10);

    st75256_write_cmd(lcd, 0x81);
    st75256_write_data(lcd, 0x38);
    st75256_write_data(lcd, 0x04);

    st75256_write_cmd(lcd, 0x20);
    st75256_write_data(lcd, 0x0B);
    HAL_Delay(10);

    /* If needed later:
       st75256_write_cmd(lcd, 0x0C); // LSB-top mode
       currently using MSB-top mode
    */

    st75256_write_cmd(lcd, 0xAF);
    HAL_Delay(100);
}

static void fb_draw_line(uint8_t *buf, int x0, int y0, int x1, int y1)
{
    int dx = abs(x1 - x0);
    int dy = -abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx + dy;

    while(1) {
        if(x0 >= 0 && x0 < ST75256_WIDTH && y0 >= 0 && y0 < ST75256_HEIGHT) {
            int page = y0 / 8;
            int bit  = y0 % 8;
            buf[page * ST75256_WIDTH + x0] |= (uint8_t)(1u << (7 - bit));
        }

        if(x0 == x1 && y0 == y1) break;

        int e2 = 2 * err;
        if(e2 >= dy) { err += dy; x0 += sx; }
        if(e2 <= dx) { err += dx; y0 += sy; }
    }
}

void fb_draw_parallelogram(uint8_t *buf,
                           int x0, int y0,
                           int x1, int y1,
                           int x2, int y2,
                           int x3, int y3)
{
    fb_draw_line(buf, x0, y0, x1, y1);
    fb_draw_line(buf, x1, y1, x2, y2);
    fb_draw_line(buf, x2, y2, x3, y3);
    fb_draw_line(buf, x3, y3, x0, y0);
}
