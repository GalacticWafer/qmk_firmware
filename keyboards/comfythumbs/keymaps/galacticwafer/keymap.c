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
    _NUMROW_LEFT,
    _NUMROW_RIGHT,
};

#define MY_LSF MO(_NUMROW_LEFT)
#define MY_RSF MO(_NUMROW_RIGHT)
#define MY_PAD MO(_NUMPAD)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_HALMAK] =  LAYOUT_ortho_7x7 (  
        KC_ESC,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    /**/   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_DEL,
        KC_GRV,  KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,  /**/   KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_PSCR,
        KC_INS,  KC_W,     KC_L,    KC_R,    KC_B,    KC_Z,    KC_LCBR,  /**/   KC_RCBR, KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J,     KC_EQL,
        KC_S,    KC_H,     KC_N,    KC_T,    KC_COMM, KC_TAB,            /**/   KC_BSLS, KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,     KC_QUOT,
        KC_F,    KC_M,     KC_V,    KC_C,    KC_X,                       /**/            KC_G,    KC_P,    KC_SLSH, KC_K,    KC_Y,     KC_APP,
        KC_CAPS, KC_APP,   KC_PAUS, MY_LSF,             KC_BSPC, KC_LGUI,  /**/    KC_RGUI, KC_SPC,           MY_RSF,           KC_ENT,
        MY_PAD,   KC_HOME,  KC_PGUP, KC_PGDN, KC_END,  KC_LCTL, KC_LALT,  /**/   KC_RALT, KC_RCTL, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, MY_PAD
),

[_NUMROW_LEFT] = LAYOUT_ortho_7x7 (
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  /**/   KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______, KC_LBRC,  /**/   KC_RBRC, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,           /**/   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                    /**/            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,          _______, _______,  /**/   _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, _______, _______, _______, _______, _______
),

[_NUMROW_RIGHT] = LAYOUT_ortho_7x7 (
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  /**/   KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______, KC_LBRC,  /**/   KC_RBRC, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,           /**/   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                    /**/            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,          _______, _______,  /**/   _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, _______, _______, _______, _______, _______
),

[_NUMPAD] = LAYOUT_ortho_7x7 (
        RESET,   _______, _______, _______, _______, _______, _______,  /**/   _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______,
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______,
        _______, _______, _______, _______, _______, _______,           /**/   _______, KC_PDOT, KC_P4,   KC_P5,   KC_P6,   KC_P0,   _______,
        _______, _______, _______, _______, _______,                    /**/            _______, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, _______,
        _______, _______, _______, _______,          _______, _______,  /**/   _______, _______, KC_P0,   KC_PENT,
        _______, _______, _______, _______, _______, _______, _______,  /**/   _______, _______, BL_DEC,  BL_STEP, BL_BRTG, BL_INC,  _______
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        if (layer_state_is(_NUMROW_LEFT) &&         
        keycode !=  KC_1 && 
        keycode !=  KC_2 &&
        keycode !=  KC_3 &&
        keycode !=  KC_4 &&
        keycode !=  KC_5 && 
        keycode !=  KC_MINS &&
        keycode !=  KC_EQL &&  
        keycode !=  KC_6 &&
        keycode !=  KC_7 &&
        keycode !=  KC_8 &&
        keycode !=  KC_9 &&
        keycode !=  KC_0 &&
        keycode !=  KC_LBRC &&
        keycode !=  KC_RBRC ) {
            register_code(KC_LSFT);
        } else {
            unregister_code(KC_LSFT);
        }
        if (layer_state_is(_NUMROW_RIGHT) &&         
        keycode !=  KC_1 && 
        keycode !=  KC_2 &&
        keycode !=  KC_3 &&
        keycode !=  KC_4 &&
        keycode !=  KC_5 && 
        keycode !=  KC_MINS &&
        keycode !=  KC_EQL &&  
        keycode !=  KC_6 &&
        keycode !=  KC_7 &&
        keycode !=  KC_8 &&
        keycode !=  KC_9 &&
        keycode !=  KC_0 &&
        keycode !=  KC_LBRC &&
        keycode !=  KC_RBRC) {
            register_code(KC_RSFT);
        } else {
            unregister_code(KC_RSFT);
        }
    }
    return true;
}

