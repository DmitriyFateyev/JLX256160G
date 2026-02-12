#include "st75256.h"

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
    // Hardware reset: manual requires RESET low >= 1ms
    RST_LOW(lcd);
    HAL_Delay(10);
    RST_HIGH(lcd);
    HAL_Delay(10);

    // Init sequence mirrored from your JLX sample (mono mode)
    st75256_write_cmd(lcd, 0x30);   // EXT=0
    st75256_write_cmd(lcd, 0x94);   // Sleep out
    HAL_Delay(5);

    st75256_write_cmd(lcd, 0x31);   // EXT=1
    st75256_write_cmd(lcd, 0xD7);   // Autoread disable
    st75256_write_data(lcd, 0x9F);

    st75256_write_cmd(lcd, 0x32);   // Analog SET
    st75256_write_data(lcd, 0x00);  // OSC frequency adjust
    st75256_write_data(lcd, 0x01);  // booster cap frequency
    st75256_write_data(lcd, 0x03);  // bias (sample says 1/11)

    // Gray Level table (even in mono init they write it; keep same as sample)
    static const uint8_t gray_tbl[16] = {
        0x01,0x03,0x05,0x07,0x09,0x0B,0x0D,0x10,
        0x11,0x13,0x15,0x17,0x19,0x1B,0x1D,0x1F
    };
    st75256_write_cmd(lcd, 0x20);
    for (int i = 0; i < 16; i++) st75256_write_data(lcd, gray_tbl[i]);

    st75256_write_cmd(lcd, 0x30);   // EXT=0

    // Address ranges from sample:
    // Page end 0x28 corresponds to 160 rows mapping in their code; many configs use 0..0x13 (20 pages).
    // For mono framebuffer writes, we'll use pages 0..19 and cols 0..255.
    st75256_write_cmd(lcd, 0x75);   // Page Address setting
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0x13);  // 0..19 pages

    st75256_write_cmd(lcd, 0x15);   // Column Address setting
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0xFF);  // 0..255

    st75256_write_cmd(lcd, 0xBC);   // Data scan direction
    st75256_write_data(lcd, 0x00);  // MX/MY normal (per sample)
    st75256_write_data(lcd, 0xA6);  // normal display (not inverted)

    st75256_write_cmd(lcd, 0xCA);   // Display Control
    st75256_write_data(lcd, 0x00);
    st75256_write_data(lcd, 0x9F);  // Duty=160
    st75256_write_data(lcd, 0x20);  // Nline=off

    st75256_write_cmd(lcd, 0xF0);   // Display Mode
    st75256_write_data(lcd, 0x10);  // 0x10 = Monochrome

    st75256_write_cmd(lcd, 0x81);   // EV control / contrast
    st75256_write_data(lcd, 0x38);  // fine (VPR[5:0]) from sample
    st75256_write_data(lcd, 0x04);  // coarse (VPR[8:6]) from sample

    st75256_write_cmd(lcd, 0x20);   // Power control
    st75256_write_data(lcd, 0x0B);  // regulator/follower/booster on (per sample)
    HAL_Delay(1);

    st75256_write_cmd(lcd, 0xAF);   // Display ON

    // Clear after init
    st75256_clear(lcd, 0x00);
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
