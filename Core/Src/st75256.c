#include "st75256.h"
#include "font_industrial_16x16.h"
#include <string.h>
#include "font_test_9to14_16cell.h"

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

static void st75256_write_data_buf(st75256_t *lcd, const uint8_t *buf, size_t len)
{
    CS_LOW(lcd);
    A0_DATA(lcd);
    (void)HAL_SPI_Transmit(lcd->hspi, (uint8_t*)buf, (uint16_t)len, HAL_MAX_DELAY);
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
    // From your vendor sample:
    // 0x15: Column Address setting (start,end)
    // 0x75: Page Address setting (start,end)
    st75256_write_cmd(lcd, 0x15);
    st75256_write_data(lcd, col_start);
    st75256_write_data(lcd, col_end);

    st75256_write_cmd(lcd, 0x75);
    st75256_write_data(lcd, page_start);
    st75256_write_data(lcd, page_end);

    // Prepare write
    st75256_write_cmd(lcd, 0x30); // EXT=0 (per sample)
    st75256_write_cmd(lcd, 0x5C); // Write Display Data RAM
}

void st75256_init(st75256_t *lcd)
{
    // Hardware Reset Sequence
    HAL_GPIO_WritePin(lcd->rst_port, lcd->rst_pin, GPIO_PIN_RESET);
    HAL_Delay(10);
    HAL_GPIO_WritePin(lcd->rst_port, lcd->rst_pin, GPIO_PIN_SET);
    HAL_Delay(10);

    // Extension Command Set 0 (Basic Commands)
    st75256_write_cmd(lcd, 0x30);   // EXT=0
    st75256_write_cmd(lcd, 0x94);   // Sleep Out
    HAL_Delay(50);                  // Wait for oscillator stabilization

    // Extension Command Set 1 (Extended Commands)
    st75256_write_cmd(lcd, 0x31);   // EXT=1
    st75256_write_cmd(lcd, 0xD7);   // Auto Read Disable
    st75256_write_data(lcd, 0x9F);  // Disable auto-read

    // Analog Circuit Configuration
    st75256_write_cmd(lcd, 0x32);   // Analog SET
    st75256_write_data(lcd, 0x00);  // OSC Frequency adjustment
    st75256_write_data(lcd, 0x01);  // Booster efficiency = 6kHz
    st75256_write_data(lcd, 0x03);  // Bias = 1/11

    // Booster Level (Optional - for better contrast/brightness)
    st75256_write_cmd(lcd, 0x51);   // Booster Level x10
    st75256_write_data(lcd, 0xFB);  // Set to x10 boost (0xFA = x8)

    // Gray Level Configuration (16 levels for 4-gray mode)
    st75256_write_cmd(lcd, 0x20);   // Gray Level
    st75256_write_data(lcd, 0x01);
    st75256_write_data(lcd, 0x03);
    st75256_write_data(lcd, 0x05);
    st75256_write_data(lcd, 0x07);
    st75256_write_data(lcd, 0x09);
    st75256_write_data(lcd, 0x0B);
    st75256_write_data(lcd, 0x0D);
    st75256_write_data(lcd, 0x10);
    st75256_write_data(lcd, 0x11);
    st75256_write_data(lcd, 0x13);
    st75256_write_data(lcd, 0x15);
    st75256_write_data(lcd, 0x17);
    st75256_write_data(lcd, 0x19);
    st75256_write_data(lcd, 0x1B);
    st75256_write_data(lcd, 0x1D);
    st75256_write_data(lcd, 0x1F);

    // Back to Extension Command Set 0
    st75256_write_cmd(lcd, 0x30);   // EXT=0

    // Set Display Address Range
    st75256_write_cmd(lcd, 0x75);   // Set Page Address (Y-axis)
    st75256_write_data(lcd, 0x00);  // Start page = 0
    st75256_write_data(lcd, 0x28);  // End page = 40 (160 rows / 4 = 40 for 4-gray)
                                     // For monochrome: 160 rows / 8 = 20 pages

    st75256_write_cmd(lcd, 0x15);   // Set Column Address (X-axis)
    st75256_write_data(lcd, 0x00);  // Start column = 0
    st75256_write_data(lcd, 0xFF);  // End column = 255 (256 columns)

    // Power Control
    st75256_write_cmd(lcd, 0x20);   // Power Control
    st75256_write_data(lcd, 0x0B);  // VB ON, VR ON, VF ON
                                     // Bit 0: Regulator ON
                                     // Bit 1: Follower ON
                                     // Bit 3: Booster ON

    // Contrast/Voltage Control (EV Control)
    st75256_write_cmd(lcd, 0x81);   // Vop Control
    st75256_write_data(lcd, 0x38);  // VPR[5:0] = 0x38 (lower 6 bits)
    st75256_write_data(lcd, 0x04);  // VPR[8:6] = 0x04 (upper 3 bits)
                                     // Total: 9-bit contrast value

    // Data Format Select - CRITICAL FOR BIT ORDER
    st75256_write_cmd(lcd, 0x0C);   // Data Format Select
                                     // Sets LSB (bit 0) at top of 8-pixel page
                                     // Without this: MSB (bit 7) is at top

    // Display Mode Selection
    st75256_write_cmd(lcd, 0xF0);   // Display Mode
    st75256_write_data(lcd, 0x10);  // 0x10 = Monochrome Mode
                                     // 0x11 = 4-Gray Mode

    // Display Control
    st75256_write_cmd(lcd, 0xCA);   // Display Control
    st75256_write_data(lcd, 0x00);  // CL dividing ratio
    st75256_write_data(lcd, 0x9F);  // Duty = 160 (0x9F = 159+1)
    st75256_write_data(lcd, 0x20);  // N-line inversion off

    // Data Scan Direction (Screen Orientation)
    st75256_write_cmd(lcd, 0xBC);   // Data Scan Direction
    st75256_write_data(lcd, 0x00);  // 0x00 = Normal (MX=0, MY=0, MV=0)
                                     // 0x01 = Mirror X (MX=1)
                                     // 0x02 = Mirror Y (MY=1)
                                     // 0x03 = Mirror X+Y (MX=1, MY=1)
    st75256_write_data(lcd, 0xA6);  // Second parameter (vendor-specific)

    // Display ON
    st75256_write_cmd(lcd, 0xAF);   // Display ON

    HAL_Delay(100);                 // Stabilization delay
}

void st75256_write_fb(st75256_t *lcd, const uint8_t *fb)
{
    st75256_set_window(lcd, 0, 255, 0, 19);
    st75256_write_data_buf(lcd, fb, ST75256_FB_SIZE);
}

void st75256_clear(st75256_t *lcd, uint8_t value)
{
    // Stream a constant buffer in chunks
    uint8_t chunk[64];
    for (size_t i = 0; i < sizeof(chunk); i++) chunk[i] = value;

    st75256_set_window(lcd, 0, 255, 0, 19);

    size_t remaining = ST75256_FB_SIZE;
    while (remaining) {
        size_t n = (remaining > sizeof(chunk)) ? sizeof(chunk) : remaining;
        st75256_write_data_buf(lcd, chunk, n);
        remaining -= n;
    }
}

void st75256_draw_pixel(uint8_t *fb, int x, int y, uint8_t on)
{
    if (x < 0 || x >= ST75256_WIDTH || y < 0 || y >= ST75256_HEIGHT) return;
    int page = y >> 3;
    int bit  = y & 7;

    // Manual notes D0 at top, D7 at bottom within the byte (common ST75256 mapping).
    // That means bit=0 is top pixel in the 8-row group.
    uint8_t mask = (uint8_t)(1u << bit);

    size_t idx = (size_t)page * ST75256_WIDTH + (size_t)x;
    if (on) fb[idx] |= mask;
    else    fb[idx] &= (uint8_t)~mask;
}


//=======================================================================================================


/**
 * @brief Draws a 16x16 character into the framebuffer.
 * 
 * @param fb    Pointer to your uint8_t fb[5120]
 * @param x     X coordinate (0 to 240)
 * @param page  The starting page (0 to 18). 
 *              Note: A 16px font occupies 'page' and 'page + 1'.
 * @param c     The ASCII character to draw.
 */
void draw_char_16x16(uint8_t *fb, int x, int page, char c) {
    // Range check for ASCII table
    if (c < FONT16X16_FIRST_CHAR || c > FONT16X16_LAST_CHAR) {
        c = ' '; // Fallback to space
    }
    
    // Boundary check for screen dimensions (256x160)
    if (x > 240 || page > 18) return;

    uint8_t char_idx = c - FONT16X16_FIRST_CHAR;
    const uint8_t *glyph = font_industrial_16x16[char_idx];

    // Copy top 8 pixels (Page N)
    // fb index = (page * width) + x
    memcpy(&fb[page * 256 + x], &glyph[0], 16);

    // Copy bottom 8 pixels (Page N + 1)
    memcpy(&fb[(page + 1) * 256 + x], &glyph[16], 16);
}

/**
 * @brief Draws a string of 16x16 characters.
 * 
 * @param fb    Pointer to framebuffer
 * @param x     Starting X coordinate
 * @param page  Starting page (0-18)
 * @param str   Null-terminated string
 */
void draw_string_16x16(uint8_t *fb, int x, int page, const char *str) {
    while (*str && x <= 240) {
        draw_char_16x16(fb, x, page, *str++);
        x += 16; // Move to next character slot
    }
}

void draw_test_char_16cell(uint8_t *fb, int x, int page,
                           char c, int size_index)
{
    if (size_index < 0 || size_index >= TEST_FONT_SIZE_VARIANTS) return;
    if (c < TEST_FONT_FIRST_CHAR || c > TEST_FONT_LAST_CHAR) c = ' ';

    if (x > 240 || page > 18) return; // bounds check for 256x160

    int glyph_idx = c - TEST_FONT_FIRST_CHAR;
    const uint8_t *glyph = font_test_9to14_16cell[size_index][glyph_idx];

    // page -> top 8 rows
    memcpy(&fb[page * 256 + x],     &glyph[0],  16);
    // page+1 -> bottom 8 rows
    memcpy(&fb[(page + 1) * 256 + x], &glyph[16], 16);
}

void draw_test_string_16cell(uint8_t *fb, int x, int page,
                             const char *s, int size_index)
{
    while (*s && x <= 240) {
        draw_test_char_16cell(fb, x, page, *s++, size_index);
        x += 16; // 16‑pixel cell width
    }
}

#include "font_test10_simple.h"
#include <string.h>

static int test10_find_glyph_index(char c)
{
    for (int i = 0; i < TEST10_GLYPH_COUNT; i++) {
        if (test10_chars[i] == c) return i;
    }
    return 0; // fall back to space
}

void draw_char_10x10(uint8_t *fb, int x, int y, char c)
{
    if (x < 0 || x > 246 || y < 0 || y > 150) return;

    int gi = test10_find_glyph_index(c);
    const uint8_t *g = test10_font[gi];

    for (int row = 0; row < 10; row++) {
        int yy = y + row;
        if (yy < 0 || yy >= 160) continue;

        int page = yy / 8;
        int bit  = yy % 8;

        uint16_t row_bits = ((uint16_t)g[row*2] << 8) | g[row*2 + 1];

        for (int col = 0; col < 10; col++) {
            int xx = x + col;
            if (xx < 0 || xx >= 256) continue;

            int on = (row_bits & (1u << (15 - col))) != 0;

            size_t idx = page * 256 + xx;
            uint8_t mask = (uint8_t)(1u << bit);  // Bit 0 = top pixel
            
            if (on) fb[idx] |= mask;
            else    fb[idx] &= (uint8_t)~mask;
        }
    }
}

void draw_string_10x10(uint8_t *fb, int x, int y, const char *s)
{
    while (*s && x <= 246) {
        draw_char_10x10(fb, x, y, *s++);
        x += 10; // 10‑pixel advance
    }
}
