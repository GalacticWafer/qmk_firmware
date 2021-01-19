// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
    _HALMAK,
    _OTHERS,
};

#define OTHERS MO(_OTHERS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HALMAK] =  LAYOUT_ortho_6x7 (
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_NLCK,  /**/   KC_PSCR, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL,
        KC_LBRC, KC_W,     KC_L,    KC_R,    KC_B,    KC_Z,    KC_MINS,  /**/   KC_EQL,  KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J,     KC_RBRC,
        KC_GRV,  KC_S,     KC_H,    KC_N,    KC_T,    KC_COMM, KC_TAB,   /**/   KC_BSLS, KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,     KC_QUOT,
                 KC_F,     KC_M,    KC_V,    KC_C,    KC_X,              /**/            KC_G,    KC_P,    KC_SLSH, KC_K,    KC_Y,     KC_INS,
        KC_CAPS, KC_APP,            KC_LSFT,          KC_BSPC,  KC_LGUI,  /**/  KC_RGUI, KC_SPC,           KC_RSFT,          KC_ENT,
        OTHERS,  KC_HOME,  KC_PGUP, KC_PGDN, KC_END,  KC_LCTL, KC_LALT,  /**/   KC_RALT, KC_RCTL, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, OTHERS 
),
[_OTHERS] = LAYOUT_ortho_6x7 (
        KC_NO,   KC_NO,   KC_NO,   KC_PSLS, KC_NO,   KC_NO,   KC_NO,     /**/   _______, _______, _______, _______, _______, _______,  RESET,
        KC_PPLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_NO,   KC_NO,     /**/   _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, 
        KC_PMNS, KC_P4,   KC_P5,   KC_P6,   KC_P0,   KC_PCMM, KC_NO,     /**/   _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, 
                 KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_NO,             /**/            _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______, _______,          _______,          _______, _______,   /**/   _______, _______,          KC_P0,            KC_PENT,
        _______, BL_DEC,  BL_STEP, BL_BRTG, BL_INC,  _______, _______,   /**/   _______, _______, BL_DEC,  BL_STEP, BL_BRTG, BL_INC,  _______
)
};
                                                                        