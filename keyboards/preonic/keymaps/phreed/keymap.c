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


#define LOCK LGUI(KC_L)
#define DASH LGUI(KC_A)

enum preonic_layers {
  _QWERT = 0,
  _MTH = 1, // MATH Pad
  _SCL = 2, // Special Keys
  _NAV = 3, // Command Keys
  _FUN = 4 // Function Key
};

enum preonic_keycodes {
  QWERT = SAFE_RANGE,
  MTH,
  SCL,
  NAV,
  FUN
};

#define MO_MTH MO(_MTH)
#define MO_SCL MO(_SCL)
#define MO_NAV MO(_NAV)
#define MO_FUN MO(_FUN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERT] = LAYOUT_preonic_grid( \
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,  KC_BSLS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0, \
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,  KC_MINS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, \
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_GRV,  KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
  MO_MTH,  MO_SCL,  KC_BSPC, KC_ENT,  KC_LSPO, KC_LALT, KC_LCTL, KC_RSPC, KC_SPC,  KC_DEL,  MO_FUN,  MO_NAV \
),

[_MTH] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSLS, KC_PAST, KC_P0, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, \
  _______, KC_NLCK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LABK, KC_RABK, KC_P0,   KC_PDOT, KC_PENT \
),

[_SCL] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_LCTL), OSM(MOD_RCTL), XXXXXXX, DEBUG,    RESET, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_LSFT), OSM(MOD_RSFT), XXXXXXX, XXXXXXX,  XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_LALT), OSM(MOD_RALT), XXXXXXX, KC_POWER, KC_PWR, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_LGUI), OSM(MOD_RGUI), KC_MUTE, KC_WAKE,  KC_SLEP, \
  XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_HYPR), OSM(MOD_MEH),  KC_APP,  DASH,     LOCK \
),

[_FUN] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, _______, XXXXXXX  \
),

[_NAV] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_HOME, KC_UP,   KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_LEFT, XXXXXXX, KC_RIGHT,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  KC_END,  KC_DOWN, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_INS,  KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, _______ \
)

};

