// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
    _HALMAK,
    _NUMPAD,
};

#define NUM_FN MO(_NUMPAD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HALMAK] = LAYOUT_ortho_7x7 (
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,    KC_F6,    /**/   KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_DEL,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,     KC_MINS,  /**/   KC_EQL,  KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_PSCR,
    KC_TAB,  KC_W,    KC_L,    KC_R,    KC_B,   KC_Z,     KC_LBRC,  /**/   KC_RBRC, KC_SCLN,  KC_Q,    KC_U,    KC_D,    KC_J,     KC_SLCK,
             KC_S,    KC_H,    KC_N,    KC_T,   KC_COMM,  KC_TAB,   /**/   KC_BSLS, KC_DOT,   KC_A,    KC_E,    KC_O,    KC_I,     KC_QUOT,
             KC_F,    KC_M,    KC_V,    KC_C,   KC_X,               /**/            KC_G,     KC_P,    KC_SLSH, KC_K,    KC_Y,     KC_NLCK,
    KC_CAPS, KC_APP,  KC_PAUS, KC_LSFT,         KC_BSPC,  KC_LGUI,  /**/   KC_RGUI, KC_SPC,            KC_RSFT,          KC_ENT,
    NUM_FN,  KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_LCTL,  KC_LALT,  /**/   KC_RALT, KC_RCTL,  KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, NUM_FN
),
[_NUMPAD] = LAYOUT_ortho_7x7 (
    _______, KC_PCMM, KC_PDOT, _______, _______, _______, _______,   /**/   _______, _______, _______, _______, _______, _______,  RESET,
    _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, _______,   /**/   _______, BL_INC,  KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,  _______,
    _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______, _______,   /**/   _______, BL_BRTG, KC_F13,  KC_F14,  KC_F15,  KC_F16,   _______,
             KC_P4,   KC_P5,   KC_P6,   KC_P0,   _______, _______,   /**/   _______, BL_STEP, KC_F17,  KC_F18,  KC_F19,  KC_F20,   _______,
             KC_P1,   KC_P2,   KC_P3,   KC_PEQL, _______,            /**/            BL_DEC,  KC_F21,  KC_F22,  KC_F23,  KC_F24,   _______,
    _______, _______, _______, _______,          _______, KC_SPC,    /**/   _______, _______,          _______,          _______,
    _______, _______, _______, _______, _______, _______, _______,   /**/   _______, _______, _______, _______, _______, _______,  _______
)
};
