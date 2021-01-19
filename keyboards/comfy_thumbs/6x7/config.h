#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DESCRIPTION     A 6x7, split, mostly-ortholinear keyboard

#define SPLIT_HAND_PIN F0
#define SOFT_SERIAL_PIN D0

/* key matrix size */
// Rows are doubled-up
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B7 }
#define MATRIX_COL_PINSG { B2, B3, B1, F7, F6, F5, F4 }
// #define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }
