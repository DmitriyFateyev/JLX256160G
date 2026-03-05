/**
 * @file    lv_example_1.c
 * @brief   Industrial monitoring UI for ESP/PED controller
 *          ST75256 256x160 mono, LVGL v9.5, STM32F411
 *
 * Layout (similar to the reference photo):
 * ┌──────────────────────────────────────┐
 * │ STATION STATUS              RUN  ●   │  <- header 16px
 * ├──────────────────────────────────────┤
 * │ LAST STOP: 29/11/24 11:51           │
 * │ REASON: LOW GRID VOLTAGE            │  <- info block ~40px
 * │ UPTIME:        68d 03h 57m          │
 * ├──────────────────────────────────────┤
 * │ I PED(A) A/B/C   18.3  18.8  18.8  │
 * │ U GRID(V) AB/BC  413   414   415   │
 * │ COS/LOAD(%)      0.79  62          │  <- data table ~56px
 * │ F SET (Hz/RPM)   44.9 / 44.9       │
 * │ F OUT (Hz/RPM)   44.9 / 44.9       │
 * │ R INSUL(kOhm)    9999              │
 * │ P IN(atm)/T(°C)  27.9  83.0       │
 * ├──────────────────────────────────────┤
 * │ 05/03/26 18:19:43    HEATER:OFF     │  <- footer 16px
 * └──────────────────────────────────────┘
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include <string.h>
#include "main.h"

/* ── Forward declarations ─────────────────────────────── */
static void create_main_screen(void);
static void update_timer_cb(lv_timer_t * timer);

/* ── Simulated sensor data (replace with real readings) ── */
typedef struct {
    /* Motor currents A/B/C */
    float i_a, i_b, i_c;
    /* Grid voltages AB/BC/CA */
    float u_ab, u_bc, u_ca;
    /* Power factor & load */
    float cos_phi;
    float load_pct;
    /* Frequency set / output (Hz and RPM) */
    float f_set_hz, f_set_rpm;
    float f_out_hz, f_out_rpm;
    /* Insulation resistance kOhm */
    float r_insul;
    /* Inlet pressure (atm) and PED temperature (°C) */
    float p_inlet;
    float t_ped;
    /* Uptime */
    uint16_t up_days;
    uint8_t  up_hours;
    uint8_t  up_mins;
    /* Last stop */
    char last_stop[20];
    char stop_reason[32];
    /* Status */
    uint8_t running;       /* 1 = running, 0 = stopped */
    uint8_t heater_on;     /* 1 = on, 0 = off */
} ped_data_t;

static ped_data_t g_data = {
    .i_a = 18.3f, .i_b = 18.8f, .i_c = 18.8f,
    .u_ab = 413.0f, .u_bc = 414.0f, .u_ca = 415.0f,
    .cos_phi = 0.79f, .load_pct = 62.0f,
    .f_set_hz = 44.9f, .f_set_rpm = 44.9f,
    .f_out_hz = 44.9f, .f_out_rpm = 44.9f,
    .r_insul = 9999.0f,
    .p_inlet = 27.891f, .t_ped = 83.0f,
    .up_days = 68, .up_hours = 3, .up_mins = 57,
    .last_stop = "29/11/24 11:51",
    .stop_reason = "LOW GRID VOLTAGE",
    .running = 1,
    .heater_on = 0,
};

/* ── Label handles for dynamic update ──────────────────── */
static lv_obj_t * lbl_status_ind;
static lv_obj_t * lbl_last_stop;
static lv_obj_t * lbl_reason;
static lv_obj_t * lbl_uptime;
static lv_obj_t * lbl_i_ped;
static lv_obj_t * lbl_u_grid;
static lv_obj_t * lbl_cos_load;
static lv_obj_t * lbl_f_set;
static lv_obj_t * lbl_f_out;
static lv_obj_t * lbl_r_insul;
static lv_obj_t * lbl_p_t;
static lv_obj_t * lbl_footer;

/* ── Styles ────────────────────────────────────────────── */
static lv_style_t style_header;
static lv_style_t style_line;
static lv_style_t style_row;
static lv_style_t style_footer;

/* ── Mono helper: horizontal line ─────────────────────── */
static lv_obj_t * add_hline(lv_obj_t * parent, int32_t y)
{
    static lv_point_precise_t pts[2];
    pts[0].x = 0;   pts[0].y = 0;
    pts[1].x = 255; pts[1].y = 0;

    lv_obj_t * line = lv_line_create(parent);
    lv_line_set_points(line, pts, 2);
    lv_obj_set_pos(line, 0, y);
    lv_obj_set_style_line_width(line, 1, 0);
    lv_obj_set_style_line_color(line, lv_color_black(), 0);
    return line;
}

/* ── Create a data row label ──────────────────────────── */
static lv_obj_t * add_row_label(lv_obj_t * parent, int32_t y, const char * txt)
{
    lv_obj_t * lbl = lv_label_create(parent);
    lv_label_set_text(lbl, txt);
    lv_obj_set_pos(lbl, 2, y);
    lv_obj_set_style_text_font(lbl, &lv_font_unscii_8, 0);
    lv_obj_set_style_text_color(lbl, lv_color_black(), 0);
    return lbl;
}

/* ══════════════════════════════════════════════════════════
 *  PUBLIC: call from main after LVGL + display init
 * ══════════════════════════════════════════════════════════ */
void lv_example_industrial_monitor(void)
{
    create_main_screen();

    /* Update every 500 ms (simulated; replace with real sensor poll) */
    lv_timer_create(update_timer_cb, 1000, NULL);
}

/* ── Build the screen ─────────────────────────────────── */
static void create_main_screen(void)
{
    lv_obj_t * scr = lv_screen_active();
    lv_obj_set_style_bg_color(scr, lv_color_white(), 0);
    lv_obj_set_style_pad_all(scr, 0, 0);

    char buf[64];
    int32_t y = 0;

    /* ── HEADER ─────────────────────────────────────────── */
    lv_obj_t * lbl_title = lv_label_create(scr);
    lv_label_set_text(lbl_title, "STATION STATUS");
    lv_obj_set_pos(lbl_title, 2, 1);
    lv_obj_set_style_text_font(lbl_title, &lv_font_unscii_8, 0);
    lv_obj_set_style_text_color(lbl_title, lv_color_black(), 0);

    /* Status indicator: RUN/STOP */
    lbl_status_ind = lv_label_create(scr);
    lv_obj_set_style_text_font(lbl_status_ind, &lv_font_unscii_8, 0);
    lv_obj_set_style_text_color(lbl_status_ind, lv_color_black(), 0);
    lv_label_set_text(lbl_status_ind, g_data.running ? "PED:ON  AUTO" : "PED:OFF MANUAL");
    lv_obj_set_pos(lbl_status_ind, 130, 1);

    y = 11;
    add_hline(scr, y);

    /* ── INFO BLOCK ─────────────────────────────────────── */
    y += 10;
    snprintf(buf, sizeof(buf), "LAST STOP: %s", g_data.last_stop);
    lbl_last_stop = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "REASON: %s", g_data.stop_reason);
    lbl_reason = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "UPTIME: %dd %02dh %02dm",
             g_data.up_days, g_data.up_hours, g_data.up_mins);
    lbl_uptime = add_row_label(scr, y, buf);
    y += 11;

    add_hline(scr, y);

    /* ── DATA TABLE ─────────────────────────────────────── */
    y += 10;

    snprintf(buf, sizeof(buf), "I PED(A) A/B/C  %5.1f %5.1f %5.1f",
             g_data.i_a, g_data.i_b, g_data.i_c);
    lbl_i_ped = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "U GRID(V) AB/BC %4.0f  %4.0f  %4.0f",
             g_data.u_ab, g_data.u_bc, g_data.u_ca);
    lbl_u_grid = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "COS / LOAD(%%)    %4.2f  %4.0f",
             g_data.cos_phi, g_data.load_pct);
    lbl_cos_load = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "F SET (Hz/RPM)  %5.1f / %5.1f",
             g_data.f_set_hz, g_data.f_set_rpm);
    lbl_f_set = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "F OUT (Hz/RPM)  %5.1f / %5.1f",
             g_data.f_out_hz, g_data.f_out_rpm);
    lbl_f_out = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "R INSUL(kOhm)   %5.0f", g_data.r_insul);
    lbl_r_insul = add_row_label(scr, y, buf);
    y += 10;

    snprintf(buf, sizeof(buf), "P IN(atm)/T(C)  %5.1f  %5.1f",
             g_data.p_inlet, g_data.t_ped);
    lbl_p_t = add_row_label(scr, y, buf);
    y += 11;

    add_hline(scr, y);

    /* ── FOOTER ─────────────────────────────────────────── */
    y += 3;
    snprintf(buf, sizeof(buf), "05/03/26 18:19:43   HEATER:%s",
             g_data.heater_on ? "ON" : "OFF");
    lbl_footer = add_row_label(scr, 151, buf);
}

/* ── Periodic update callback ─────────────────────────── */
static void update_timer_cb(lv_timer_t * timer)
{
    LV_UNUSED(timer);
    char buf[64];
    
    printf("TIMER CALLBACK - %u\n", HAL_GetTick());

    /* ── Here: read real sensors into g_data ── */
    /* Example: g_data.i_a = read_current_a(); */

    /* Update status */
    lv_label_set_text(lbl_status_ind,
        g_data.running ? "PED:ON  AUTO" : "PED:OFF MANUAL");

    /* Update info block */
    snprintf(buf, sizeof(buf), "LAST STOP: %s", g_data.last_stop);
    lv_label_set_text(lbl_last_stop, buf);

    snprintf(buf, sizeof(buf), "REASON: %s", g_data.stop_reason);
    lv_label_set_text(lbl_reason, buf);

    snprintf(buf, sizeof(buf), "UPTIME:          %dd %02dh %02dm",
             g_data.up_days, g_data.up_hours, g_data.up_mins);
    lv_label_set_text(lbl_uptime, buf);

    /* Update data rows */
    snprintf(buf, sizeof(buf), "I PED(A) A/B/C  %5.1f %5.1f %5.1f",
             g_data.i_a, g_data.i_b, g_data.i_c);
    lv_label_set_text(lbl_i_ped, buf);

    snprintf(buf, sizeof(buf), "U GRID(V) AB/BC %4.0f  %4.0f  %4.0f",
             g_data.u_ab, g_data.u_bc, g_data.u_ca);
    lv_label_set_text(lbl_u_grid, buf);

    snprintf(buf, sizeof(buf), "COS / LOAD(%%)    %4.2f  %4.0f",
             g_data.cos_phi, g_data.load_pct);
    lv_label_set_text(lbl_cos_load, buf);

    snprintf(buf, sizeof(buf), "F SET (Hz/RPM)  %5.1f / %5.1f",
             g_data.f_set_hz, g_data.f_set_rpm);
    lv_label_set_text(lbl_f_set, buf);

    snprintf(buf, sizeof(buf), "F OUT (Hz/RPM)  %5.1f / %5.1f",
             g_data.f_out_hz, g_data.f_out_rpm);
    lv_label_set_text(lbl_f_out, buf);

    snprintf(buf, sizeof(buf), "R INSUL(kOhm)   %5.0f", g_data.r_insul);
    lv_label_set_text(lbl_r_insul, buf);

    snprintf(buf, sizeof(buf), "P IN(atm)/T(C)  %5.1f  %5.1f",
             g_data.p_inlet, g_data.t_ped);
    lv_label_set_text(lbl_p_t, buf);

    /* Footer with RTC time */
    snprintf(buf, sizeof(buf), "05/03/26 18:19:43   HEATER:%s",
             g_data.heater_on ? "ON" : "OFF");
    lv_label_set_text(lbl_footer, buf);
}
