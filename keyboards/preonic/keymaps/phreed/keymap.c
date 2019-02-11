/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

#define KC_LBGR LT(_ALT,KC_LBRC)
#define KC_RBQU LT(_CTL,KC_RBRC)

enum preonic_layers {
  _QWERT = 0,
  _MATH = 1, // MATH Pad
  _NAV = 2, // Command Keys
  _FUN = 3, // Function Key
  _PLOVER = 4 // Stenography
};

enum preonic_keycodes {
  QWERT = SAFE_RANGE,
  MATH,
  SC,
  NAV,
  FUN,
  PLOVER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERT] = LAYOUT_preonic_grid( \
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_QUOT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0, \
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,  KC_MINS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, \
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_ESC,  KC_BSLS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
  MO(_MATH),KC_LGUI,KC_BSPC, KC_ENT,  KC_LSPO, KC_LALT, KC_LCTL, KC_RSPC, KC_SPC,  KC_DEL,  MO(_NAV),MO(_FUN) \
),

[_MATH] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, KC_LABK, KC_RABK, KC_7,    KC_8,    KC_9,    KC_DOT, \
  XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, XXXXXXX, KC_RIGHT,KC_PPLS, KC_PMNS, KC_4,    KC_5,    KC_6,    KC_0, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, KC_PAST, KC_PSLS, KC_1,    KC_2,    KC_3,    KC_EQL, \
  _______, KC_LSFT, KC_LALT, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),

[_FUN] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, _______ \
),

[_NAV] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_HOME, KC_END,  XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_PGUP, KC_DEL,  XXXXXXX, KC_LEFT, XXXXXXX, KC_RIGHT,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_PGDN, KC_INS,  XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, _______, XXXXXXX \
),

[_PLOVER] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1   , \
  XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, \
  XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  XXXXXXX, XXXXXXX, KC_C,    KC_V,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
)


};

