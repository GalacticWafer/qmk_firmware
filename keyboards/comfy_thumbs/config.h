#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAFD6
#define PRODUCT_ID      0x6900
#define DEVICE_VER      0x0001
#define MANUFACTURER    GalacticWafer
#define PRODUCT         ComfyThumbs

/* 
DESCRIPTION is defined in individual layout folders
#define DESCRIPTION     A NxM, split, mostly-ortholinear keyboard...
 */

#define SPLIT_HAND_PIN F0
#define SOFT_SERIAL_PIN D0

/* key matrix size */
// Rows are doubled-up
#define MATRIX_COLS 7

/* pro_micro pin-out 
MATRIX_ROW_PINS and MATRIX_ROWS are both defined in individual layout folders

#define MATRIX_ROWS ...
#define MATRIX_ROW_PINS { ... }
#define MATRIX_ROW_PINS_RIGHT { ... }
*/

#define UNUSED_PINS

#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_PIN B6
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
