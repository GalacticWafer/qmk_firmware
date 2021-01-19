#pragma once

#include "quantum.h"

#define LAYOUT_ortho_6x7( \
    L00, L01, L02, L03, L04, L05, L06,   R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16,   R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26,   R20, R21, R22, R23, R24, R25, R26, \
         L31, L32, L33, L34, L35,             R31, R32, R33, R34, R35, R36, \
    L40, L41,      L43,      L45, L46,   R40, R41,      R43,      R45,      \
    L50, L51, L52, L53, L54, L55, L56,   R50, R51, R52, R53, R54, R55, R56 \
) { \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06 }, \
    { L10,   L11,   L12,   L13,   L14,   L15,   L16 }, \
    { L20,   L21,   L22,   L23,   L24,   L25,   L26 }, \
    { KC_NO, L31,   L32,   L33,   L34,   L35,   KC_NO }, \
    { L40,   L41,   KC_NO, L43,   KC_NO, L45,   L46 }, \
    { L50,   L51,   L52,   L53,   L54,   L55,   L56 }, \
\
    { R00,   R01,   R02,   R03,   R04,   R05,   R06 }, \
    { R10,   R11,   R12,   R13,   R14,   R15,   R16 }, \
    { R20,   R21,   R22,   R23,   R24,   R25,   R26 }, \
    { KC_NO, R31,   R32,   R33,   R34,   R35,   R36 }, \
    { R40,   R41,   KC_NO, R43,   KC_NO, R45,   KC_NO }, \
    { R50,   R51,   R52,   R53,   R54,   R55,   R56 } \
}
