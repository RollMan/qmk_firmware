#include QMK_KEYBOARD_H
#include <stdio.h>
#include "leds.c"

const uint16_t PROGMEM alt_combo[] = {LT(4, KC_DEL), MT(KC_LSFT, KC_TAB), COMBO_END};
const uint16_t PROGMEM super_combo[] = {LT(4, KC_DEL), LT(1, KC_ESC), COMBO_END};

combo_t key_combos[] = {
    COMBO(alt_combo, KC_LALT),
    COMBO(super_combo, KC_LGUI),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,          /*||*/  KC_Y,         KC_U,          KC_I,         KC_O,           KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G,          /*||*/  KC_H,         KC_J,  KC_K, KC_L,   KC_SCLN,
        KC_Z,         KC_X, KC_C,         KC_V,         KC_B,          /*||*/  KC_N,         KC_M,          KC_COMM,      MT(MOD_LSFT, KC_DOT), KC_SLSH,
  XXXXXXX, XXXXXXX, LT(1,KC_ESC), MT(MOD_LCTL,KC_SPC), MT(MOD_LSFT, KC_TAB),  /*||*/  LT(3,KC_ENT), LT(2,KC_BSPC), LT(4,KC_DEL), XXXXXXX, XXXXXXX
    ),

    [1] = LAYOUT(
        RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,   KC_NO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
        KC_NO,   KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
        XXXXXXX, XXXXXXX, KC_NO,   KC_NO,   KC_NO,   KC_BTN2, KC_BTN1, KC_BTN3, XXXXXXX, XXXXXXX
    ),

    [2] = LAYOUT(
        KC_LBRC, KC_7, KC_8,    KC_9,  KC_RBRC, KC_NO, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_SCLN, KC_4, KC_5,    KC_6,  KC_EQL,  KC_QUOTE, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_GRV,  KC_1, KC_2,    KC_3,  KC_BSLS, KC_NO, KC_NO,   KC_NO,   KC_RALT, KC_NO,
        XXXXXXX, XXXXXXX, KC_DOT,  KC_0, KC_MINS, KC_NO, KC_NO,   KC_NO, XXXXXXX, XXXXXXX
    ),

    [3] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_DQUO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,  KC_QUOTE, KC_NO,   KC_LSFT,   KC_RALT, KC_NO,
        XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_UNDS, KC_NO,   KC_NO,   KC_NO, XXXXXXX, XXXXXXX
    ),

    [4] = LAYOUT(
        KC_F12, KC_F7,  KC_F8,  KC_F9, 0x8B, 0x8A, KC_NO,   KC_NO,   KC_NO,   RESET,
        KC_F11, KC_F4,  KC_F5,  KC_F6, KC_SCRL, KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_F10, KC_F1,  KC_F2,  KC_F3, KC_PAUS, KC_NO, KC_NO,   KC_NO,   KC_RALT, KC_NO,
        XXXXXXX, XXXXXXX, KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO,   KC_NO, XXXXXXX, XXXXXXX
    )

};
