// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
    _QWERTY,
    _OTHERS,
};

#define OTHERS MO(_OTHERS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_ortho_6x7 (
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  /**/   KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL, 
        KC_GRV,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,  /**/   KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_PSCR,
                 KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_INS,   /**/   KC_BSLS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
                 KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,              /**/            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_INS,
        KC_CAPS, KC_APP,            KC_LSFT,          KC_BSPC, KC_LGUI,  /**/   KC_RGUI, KC_SPC,           KC_RSFT,          KC_ENT,
        OTHERS,  KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_LCTL, KC_LALT,  /**/   KC_RALT, KC_RCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,    OTHERS 
),
[_OTHERS] = LAYOUT_ortho_6x7 (
        RESET,   _______, _______, _______, _______, _______,  BL_DEC,   /**/    BL_INC, _______, _______, _______, _______, _______,  RESET,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______,   /**/   _______, KC_PAST, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,  _______,
                 KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, BL_TOGG,   /**/   _______, KC_PDOT, KC_P4,   KC_P5,   KC_P6,   KC_P0,    KC_PCMM,
                 KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,            /**/            KC_PSLS, KC_P1,   KC_P2,   KC_P3,   KC_PEQL,  _______,
        _______,  _______,          _______,          _______, _______,   /**/   _______, _______, KC_P0,   KC_PENT,
        _______, _______, _______, _______, _______, _______, _______,   /**/   _______, _______, BL_DEC,  BL_STEP, BL_BRTG, BL_INC,   _______
)
};
