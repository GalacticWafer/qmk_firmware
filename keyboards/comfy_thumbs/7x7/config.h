#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAFD6
#define PRODUCT_ID      0x6900
#define DEVICE_VER      0x0001
#define MANUFACTURER    GalacticWafer
#define PRODUCT         ComfyThumbs
#define DESCRIPTION     A 7x7, split, mostly-ortholinear keyboard

#define SPLIT_HAND_PIN F0
#define SOFT_SERIAL_PIN D0

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 7

/* pro_micro pin-out */
#define MATRIX_ROW_PINS { D1, D4, C6, D7, E6, B4, B7 }
#define MATRIX_COL_PINS { F4, F5, F7, B1, F6, B3, B2 }
#define UNUSED_PINS

/* leds */
//#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_PIN B5
//#define BACKLIGHT_BREATHING
//#define BREATHING_PERIOD 5

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
