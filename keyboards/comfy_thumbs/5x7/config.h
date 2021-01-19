#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAFD6
#define PRODUCT_ID      0x6900
#define DEVICE_VER      0x0001
#define MANUFACTURER    GalacticWafer
#define PRODUCT         ComfyThumbs
#define DESCRIPTION     A 5x7, split, mostly-ortholinear keyboard

#define SPLIT_HAND_PIN F0
#define SOFT_SERIAL_PIN D0

/* key matrix size */
// Rows are doubled-up
#define MATRIX_COLS 7
#define MATRIX_ROWS 10

/* pro_micro pin-out */
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B7 }
#define MATRIX_COL_PINS { F4, F5, F7, B1, F6, B3, B2 }
#define MATRIX_COL_PINS_RIGHT { B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 5
#define BACKLIGHT_ON_STATE 1

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
