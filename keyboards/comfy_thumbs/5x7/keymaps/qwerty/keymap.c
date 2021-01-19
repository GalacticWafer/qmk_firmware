// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
    _HALMAK,
    _NUMNAV,
    _NUMPAD,
};

#define LTL_AR LT(_NUMPAD, KC_BSPC)
#define RTL_AR LT(_NUMPAD, KC_SPC)
#define NUMNAV MO(_NUMNAV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HALMAK] =  LAYOUT_ortho_5x7 (
        KC_ESC,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,  /**/   KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_INS,
        /*NA*/   KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_INS,   /**/   KC_BSLS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_APP,
        /*NA*/   KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,              /**/            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_DEL,
        KC_CAPS, KC_APP,   /*NA*/   KC_LSFT, /*NA*/   LTL_AR,  KC_LGUI,  /**/    KC_RGUI, RTL_AR,  /*NA*/   KC_RSFT, KC_ENT,  /*NA*/    /*NA*/   
        NUMNAV,  /*NA*/    /*NA*/  /*NA*/    /*NA*/   KC_RCTL, KC_LALT,  /**/    KC_RALT, KC_RCTL, /*NA*/   /*NA*/   /*NA*/   /*NA*/    NUMNAV
),
[_NUMNAV] = LAYOUT_ortho_5x7 (
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    /**/    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______,
        /*NA*/   KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______, _______,  /**/    _______, KC_PDOT, KC_LEFT, KC_UP, KC_DOWN,   KC_RIGHT, _______,
        /*NA*/   _______, _______, _______, _______, _______, /*NA*/    /**/     /*NA*/  _______, _______, _______, _______, _______,  _______,
        _______, _______, /*NA*/   _______, /*NA*/   _______, _______,  /**/    _______, _______, /*NA*/   _______, _______, /*NA*/    /*NA*/
        _______, /*NA*/   /*NA*/   /*NA*/   /*NA*/   _______, _______,  /**/    _______, _______, /*NA*/   /*NA*/   /*NA*/   /*NA*/   _______
),  
[_NUMPAD] = LAYOUT_ortho_5x7 (
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC,  /**/    KC_CIRC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DQUO,
        /*NA*/   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  /**/    KC_PLUS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_QUOT,
        /*NA*/   KC_TILD, KC_LBRC, KC_LCBR, KC_PIPE, KC_UNDS, /*NA*/    /**/    /*NA*/   KC_EQL,  KC_RCBR, KC_RBRC, KC_BSLS, KC_PIPE, _______, 
        _______, _______, /*NA*/   _______, /*NA*/   _______, _______,  /**/    _______, _______, /*NA*/   _______, _______, /*NA*/   /*NA*/
        _______, /*NA*/   /*NA*/   /*NA*/   /*NA*/   _______, _______,  /**/    _______, _______, /*NA*/   /*NA*/   /*NA*/   /*NA*/  _______
),
};