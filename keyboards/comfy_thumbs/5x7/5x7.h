#pragma once

#include "quantum.h"

#define LAYOUT_ortho_5x7( \
    L00, L01, L02, L03, L04, L05, L06,   R00, R01, R02, R03, R04, R05, R06, \
         L11, L12, L13, L14, L15, L16,   R10, R11, R12, R13, R14, R15, R16, \
         L21, L22, L23, L24, L25,             R21, R22, R23, R24, R25, R26, \
    L30, L31,      L33,      L35, L36,   R30, R31,      R33,      R35,      \
    L40,                     L45, L46,   R40, R41,                     R46 \
) { \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06 }, \
    { KC_NO, L11,   L12,   L13,   L14,   L15,   L16 }, \
    { KC_NO, L21,   L22,   L23,   L24,   L25,   KC_NO }, \
    { L30,   L31,   KC_NO, L33,   KC_NO, L35,   L36 }, \
    { L40,   KC_NO, KC_NO, KC_NO, KC_NO, L45,   L46 }, \
\
    { R00,   R01,   R02,   R03,   R04,   R05,   R06 }, \
    { R10,   R11,   R12,   R13,   R14,   R15,   R16 }, \
    { KC_NO, R21,   R22,   R23,   R24,   R25,   R26 }, \
    { R30,   R31,   KC_NO, KC_NO, R33,   R35,   KC_NO }, \
    { R40,   R41,   KC_NO, KC_NO, KC_NO, KC_NO, R46 } \
}

