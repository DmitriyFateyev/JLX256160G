#include "st75256.h"
#include <string.h>

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
    RST_LOW(lcd);
    HAL_Delay(10);
    RST_HIGH(lcd);
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

     // Data Scan Direction (Screen Orientation)
    st75256_write_cmd(lcd, 0xBC);   // Data Scan Direction
    st75256_write_data(lcd, 0x00);  // 0x00 = Normal (MX=0, MY=0, MV=0)
                                     // 0x01 = Mirror X (MX=1)
                                     // 0x02 = Mirror Y (MY=1)
                                     // 0x03 = Mirror X+Y (MX=1, MY=1)
    st75256_write_data(lcd, 0xA6);  // Second parameter (vendor-specific)

    // Display Control
    st75256_write_cmd(lcd, 0xCA);   // Display Control
    st75256_write_data(lcd, 0x00);  // CL dividing ratio
    st75256_write_data(lcd, 0x9F);  // Duty = 160 (0x9F = 159+1)
    st75256_write_data(lcd, 0x20);  // N-line inversion off

    // Display Mode Selection
    st75256_write_cmd(lcd, 0xF0);   // Display Mode
    st75256_write_data(lcd, 0x10);  // 0x10 = Monochrome Mode
                                     // 0x11 = 4-Gray Mode

    // Contrast/Voltage Control (EV Control)
    st75256_write_cmd(lcd, 0x81);   // Vop Control
    st75256_write_data(lcd, 0x38);  // VPR[5:0] = 0x38 (lower 6 bits)
    st75256_write_data(lcd, 0x04);  // VPR[8:6] = 0x04 (upper 3 bits)
                                     // Total: 9-bit contrast value                                     

    // Power Control
    st75256_write_cmd(lcd, 0x20);   // Power Control
    st75256_write_data(lcd, 0x0B);  // VB ON, VR ON, VF ON
                                     // Bit 0: Regulator ON
                                     // Bit 1: Follower ON
                                     // Bit 3: Booster ON
    HAL_Delay(10);

    // Data Format Select - CRITICAL FOR BIT ORDER
    //st75256_write_cmd(lcd, 0x0C);   // Data Format Select
                                     // Sets LSB (bit 0) at top of 8-pixel page
                                     // Without this: MSB (bit 7) is at top

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

    // MSB (bit 7) is at top of the 8-pixel page group.
    uint8_t mask = (uint8_t)(0x80u >> bit);

    size_t idx = (size_t)page * ST75256_WIDTH + (size_t)x;
    if (on) fb[idx] |= mask;
    else    fb[idx] &= (uint8_t)~mask;
}

void st75256_draw_hline(uint8_t *fb, int y, uint8_t on)
{
    if (y < 0 || y >= ST75256_HEIGHT) return;
    int page = y >> 3;
    uint8_t mask = (uint8_t)(0x80u >> (y & 7)); // MSB = верхний пиксель
    for (int x = 0; x < ST75256_WIDTH; x++) {
        size_t idx = (size_t)page * ST75256_WIDTH + (size_t)x;
        if (on) fb[idx] |= mask;
        else    fb[idx] &= (uint8_t)~mask;
    }
}

// Рисует вертикальную линию в колонке x от y0 до y1 включительно.
// on == 1 — установить пиксели, on == 0 — сбросить пиксели.
void st75256_draw_vline(uint8_t *fb, int x, int y0, int y1, uint8_t on)
{
    if (x < 0 || x >= ST75256_WIDTH) return;

    if (y0 > y1) { int t = y0; y0 = y1; y1 = t; }
    if (y1 < 0 || y0 >= ST75256_HEIGHT) return;

    if (y0 < 0) y0 = 0;
    if (y1 >= ST75256_HEIGHT) y1 = ST75256_HEIGHT - 1;

    int p0 = y0 >> 3;
    int p1 = y1 >> 3;

    for (int p = p0; p <= p1; ++p) {
        uint8_t mask = 0;
        int start_y = (p == p0) ? y0 : (p << 3);
        int end_y   = (p == p1) ? y1 : ((p << 3) + 7);

        for (int y = start_y; y <= end_y; ++y) {
            int bit = y & 7;
            mask |= (uint8_t)(0x80u >> bit); // MSB = верхний пиксель
        }

        size_t idx = (size_t)p * ST75256_WIDTH + (size_t)x;
        if (on) fb[idx] |= mask;
        else    fb[idx] &= (uint8_t)~mask;
    }
}

void st75256_test_checkerboard(st75256_t *dev)
{
    // 1. Явно задаем окно 0-255 по горизонтали
    st75256_write_cmd(dev, 0x15);
    st75256_write_data(dev, 0x00); // Start Column
    st75256_write_data(dev, 0xFF); // End Column (255)

    // 2. Задаем окно 0-19 по страницам (160 строк / 8)
    st75256_write_cmd(dev, 0x75);
    st75256_write_data(dev, 0x00); // Start Page
    st75256_write_data(dev, 0x13); // End Page (19)

    st75256_write_cmd(dev, 0x30); // EXT=0
    st75256_write_cmd(dev, 0x5C); // Write RAM

    for (int page = 0; page < 20; page++) 
    {
        for (int col = 0; col < 256; col++) 
        {
            // (col / 8) - меняет паттерн каждые 8 пикселей по горизонтали
            // (page % 2) - инвертирует паттерн каждую страницу (8 пикселей по вертикали)
            // Используем 0xFF и 0x00 для четких квадратов 8x8
            
            if (((col / 8) + (page % 2)) % 2 == 0) {
                st75256_write_data(dev, 0xFF); // Черный квадрат
            } else {
                st75256_write_data(dev, 0x00); // Белый квадрат
            }
        }
    }
}

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

void st75256_draw_image(st75256_t *dev, const uint8_t *img)
{
    // Установить окно на весь экран
    st75256_write_cmd(dev, 0x15);        // Column address
    st75256_write_data(dev, 0x00);       // start
    st75256_write_data(dev, 0xFF);       // end (255)

    st75256_write_cmd(dev, 0x75);        // Page address
    st75256_write_data(dev, 0x00);       // start
    st75256_write_data(dev, 0x13);       // end (19 = 160/8 - 1)

    st75256_write_cmd(dev, 0x5C);        // Write data

    // Отправить все данные (256 * 20 = 5120 байт)
    st75256_write_data_buf(dev, img, 256 * 20);
}

// Исправленный шрифт: буквы развернуты так же, как были цифры в 1-й строке
static const uint8_t font_final_A[40][14] = {
    {0x00,0x7C,0x82,0x82,0x82,0x7C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 0
    {0x00,0x00,0x42,0xFE,0x02,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 1
    {0x00,0x42,0x86,0x8A,0x92,0x62,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 2
    {0x00,0x44,0x82,0x92,0x92,0x6C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 3
    {0x00,0x18,0x28,0x48,0xFE,0x08,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 4
    {0x00,0xE4,0xA2,0xA2,0xA2,0x9C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 5
    {0x00,0x7C,0x92,0x92,0x92,0x4C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 6
    {0x00,0x82,0x42,0x22,0x12,0x0E,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 7
    {0x00,0x6C,0x92,0x92,0x92,0x6C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 8
    {0x00,0x62,0x92,0x92,0x92,0x7C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // 9
    {0x00,0x00,0x00,0x80,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // .
    {0x00,0x3F,0x48,0x48,0x48,0x3F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // A
    {0x00,0x7F,0x49,0x49,0x49,0x36,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // B
    {0x00,0x3E,0x41,0x41,0x41,0x22,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // C
    {0x00,0x7F,0x41,0x41,0x22,0x1C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // D
    {0x00,0x7F,0x49,0x49,0x49,0x41,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // E
    {0x00,0x7F,0x09,0x09,0x09,0x01,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // F
    {0x00,0x3E,0x41,0x49,0x49,0x2F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // G
    {0x00,0x7F,0x08,0x08,0x08,0x7F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // H
    {0x00,0x41,0x41,0x7F,0x41,0x41,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // I
    {0x00,0x02,0x01,0x41,0x3F,0x40,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // J
    {0x00,0x7F,0x08,0x14,0x22,0x41,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // K
    {0x00,0x7F,0x40,0x40,0x40,0x40,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // L
    {0x00,0x7F,0x20,0x18,0x20,0x7F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // M
    {0x00,0x7F,0x20,0x18,0x04,0x7F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // N
    {0x00,0x3E,0x41,0x41,0x41,0x3E,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // O
    {0x00,0x7F,0x09,0x09,0x09,0x06,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // P
    {0x00,0x3E,0x41,0x45,0x42,0x3D,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // Q
    {0x00,0x7F,0x09,0x19,0x29,0x46,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // R
    {0x00,0x31,0x49,0x49,0x49,0x46,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // S
    {0x00,0x01,0x01,0x7F,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // T
    {0x00,0x3F,0x40,0x40,0x40,0x3F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // U
    {0x00,0x1F,0x20,0x40,0x20,0x1F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // V
    {0x00,0x7F,0x40,0x30,0x40,0x7F,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // W
    {0x00,0x63,0x14,0x08,0x14,0x63,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // X
    {0x00,0x03,0x04,0x78,0x04,0x03,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // Y
    {0x00,0x43,0x45,0x49,0x51,0x61,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // Z
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // SP
};

void draw_final_char(uint8_t *fb, int x, int page, char ch) {
    int idx = 37; // пробел
    if (ch >= '0' && ch <= '9') idx = ch - '0';
    else if (ch == '.') idx = 10;
    else if (ch >= 'A' && ch <= 'Z') idx = 11 + (ch - 'A');

    const uint8_t *g = font_final_A[idx];
    for (int col = 0; col < 7; col++) {
        if (x + col >= 256) break;
        fb[page * 256 + x + col]       = g[col];
        fb[(page + 1) * 256 + x + col] = g[col + 7];
    }
}

void st75256_test_final(uint8_t *fb) {
    memset(fb, 0x00, ST75256_FB_SIZE);
    const char *line1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *line2 = "0123456789 . HZ V A";
    
    // Выводим на страницы 0, 2, 4, 6 БЕЗ ФЛИПА (как в 1-й строке прошлого теста)
    int x = 5;
    while (*line1) { draw_final_char(fb, x, 0, *line1++); x += 8; }
    
    x = 5;
    while (*line2) { draw_final_char(fb, x, 2, *line2++); x += 8; }
    
    x = 5;
    const char *line3 = "50.0 HZ  380 V  14.2 A";
    while (*line3) { draw_final_char(fb, x, 4, *line3++); x += 8; }
    
    x = 5;
    const char *line4 = "TEST OK 1234567890";
    while (*line4) { draw_final_char(fb, x, 6, *line4++); x += 8; }
}
