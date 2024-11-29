/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "keymap_german.h"

// Layer Names
#define LAYER_NEO_1                  0
#define LAYER_NEO_3                  1
#define LAYER_NEO_4                  2
#define LAYER_FKEYS                  3
#define LAYER_NAV                    4

// Custom keycodes
#define N2_NEO3                      MO(LAYER_NEO_3)
#define N2_NEO4                      MO(LAYER_NEO_4)
#define N2_NAV                       MO(LAYER_NAV)
#define N2_ELL                       RALT(DE_DOT)                // …
#define N2_IEXC                      RSA(DE_1)                   // ¡
#define N2_IQUE                      RSA(DE_SS)                  // ¿

// Keys that need yet to be programmed.
#define TBD KC_NO
#define TBD_SS                       TBD  // Needs to be ß and ẞ
#define TBD_COMM                     TBD  // Needs to be , and –
#define TBD_DOT                      TBD  // Needs to be . and ·

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_NEO_1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO,    DE_X,    DE_V,    DE_L,    DE_C,    DE_W,                         DE_K,    DE_H,    DE_G,    DE_F,   DE_Q,   TBD_SS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      N2_NEO3,    DE_U,    DE_I,    DE_A,    DE_E,    DE_O,                         DE_S,    DE_N,    DE_R,    DE_T,    DE_D,    DE_Y,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, DE_UDIA, DE_ODIA, DE_ADIA,    DE_P,    DE_Z,                         DE_B,    DE_M,TBD_COMM, TBD_DOT,    DE_J, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_LALT, KC_LCTL,     KC_SPC, N2_NEO4,  N2_NAV
                                      //`--------------------------'  `--------------------------'
  ),

    [LAYER_NEO_3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO,  N2_ELL, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,                      DE_EXLM, DE_LABK, DE_RABK,  DE_EQL, DE_AMPR, DE_EURO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,                      DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN,   DE_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, DE_HASH,  DE_DLR, DE_PIPE, DE_TILD,  DE_GRV,                      DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______,   KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

    [LAYER_NEO_4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO, KC_PGUP, KC_BSPC,   KC_UP,  KC_DEL, KC_PGDN,                      N2_IEXC,    DE_7,    DE_8,    DE_9,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,                      N2_IQUE,    DE_4,    DE_5,    DE_6, DE_COMM,  DE_DOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,  KC_ESC,  KC_TAB,  KC_INS, KC_RETN, KC_UNDO,                        KC_NO,    DE_1,    DE_2,    DE_3,   KC_NO, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______,    DE_0
                                      //`--------------------------'  `--------------------------'
  ),

    [LAYER_FKEYS] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO, KC_MPRV, KC_MPLY, KC_MNXT,   KC_NO,   KC_NO,                        KC_NO,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_VOLD, KC_VOLU, KC_MUTE,   KC_NO,   KC_NO,                        KC_NO,   KC_F4,   KC_F5,   KC_F6,  KC_F11,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_F1,   KC_F2,   KC_F3,  KC_F12, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______,   KC_NO
                                      //`--------------------------'  `--------------------------'
  )

    [LAYER_META] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      RM_TOGG,   KC_NO,   MS_UP,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, MS_WHLU,   KC_NO,  KC_NO,    KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO, MS_LEFT, MS_DOWN, MS_RGHT,   KC_NO,   KC_NO,                        KC_NO, MS_WHLL, MS_WHLD, MS_WHLR,  KC_NO,    KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,    KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO, MS_BTN1, MS_BTN2,      KC_NO,   KC_NO,  N2_NAV
                                      //`--------------------------'  `--------------------------'
  )
};

void keyboard_post_init_user(void) {
  rgb_matrix_enable_noeeprom();
  rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
  rgb_matrix_sethsvnoeeprom(22, 255, 255);
}
