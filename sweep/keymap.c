/* Copyright 2023 Luimu */
/* https://github.com/luimu64/qmk_layouts */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or KCTNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include QMK_KEYBOARD_H

#include "key_definitions.h"

enum layers {
  _BASE = 0,
  _SYM,
  _FUN,
  _GAMING,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layout */

  [_BASE] = LAYOUT(
  /*   ,-------------------------------------------------.    ,-------------------------------------------------.   */
  /*   | , .     | Ä       | Ö       | P       | Y       |    | F       | G       | C       | R       | L       |   */
         KC_COMM , US_ADIA , US_ODIA , KC_P    , KC_Y    ,      KC_F    , KC_G    , KC_C    , KC_R    , KC_L    ,     
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | A       | O       | E       | U       | I       |    | D       | H       | T       | N       | S       |   */
         KC_A    , KC_O    , KC_E    , KC_U    , KC_I    ,      KC_D    , KC_H    , KC_T    , KC_N    , KC_S    ,     
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | ' "     | Q       | J       | K       | X       |    | B       | M       | W       | V       | Z       |   */
         MT_QUOT , MT_Q    , MT_J    , MT_K    , KC_X    ,      KC_B    , MT_M    , MT_W    , MT_V    , KC_Z    ,     
  /*   `-------------------------------------------------|    |-------------------------------------------------'   */
  /*                                 | SPACE   | TAB     |    | ENTER   | BSPC    |                                 */
                                       KC_SPC  , LT_TAB  ,      LT_ENT  , KC_BSPC  
  /*                                 `-------------------'    `-------------------'                                 */
  ),
 
  [_SYM] = LAYOUT(
  /*   ,-------------------------------------------------.    ,-------------------------------------------------.   */
  /*   | ; :     | 7 &     | 8 *     | 9 (     | 0 )     |    | <       | >        | ▲       | CAPS   | PG UP   |   */
         KC_SCLN , KC_7    , KC_8    , KC_9    , KC_0    ,      SY_LESS , SY_MORE  , KC_UP   , KC_CAPS, KC_PGUP ,     
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | / \     | 4 $     | 5 %     | 6 [     | ? ]     |    | # ^     | ◀       | ▼       | ▶      | PG DN   |   */
         KC_SLSH , KC_4    , KC_5    , KC_6    , SY_QUES ,      SY_HASH , KC_LEFT , KC_DOWN , KC_RGHT , KC_PGDN ,     
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | ` ~     | 1 |     | 2 @     | 3 {     | ! }     |    | ESC     | HOME    | INSERT  | DEL     | END     |   */
         KC_GRV  , KC_1    , KC_2    , KC_3    , SY_EXCL ,      KC_ESC  , MT_HOME , MT_INS  , MT_DEL  , MT_END  ,     
  /*   `-------------------------------------------------|    |-------------------------------------------------'   */
  /*                                 | - _     |  = +    |    |         | WIN     |                                 */
                                       KC_MINS ,  KC_EQL ,      KC_TRNS , KC_RGUI     
  /*                                 `-------------------'    `-------------------'                                 */
  ),

  [_FUN] = LAYOUT(
  /*   ,-------------------------------------------------.    ,-------------------------------------------------.   */
  /*   | COPY   | F7      | F8      | F9      | F12      |    | ⇐       | ⇑       | ↑       | ⇓       | ⇒      |   */
         FU_COPY, KC_F7   , KC_F8   , KC_F9   , KC_F12  ,      KC_WH_L , KC_WH_U , KC_MS_U , KC_WH_D , KC_WH_R ,
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | PASTE   | F4      | F5      | F6      | F11     |    | MIDDLE  | ←       | ↓       | →       | GAMING  |   */
         FU_PASTE, KC_F4   , KC_F5   , KC_F6   , KC_F11  ,      KC_BTN3 , KC_MS_L , KC_MS_D , KC_MS_R , FU_GAME ,
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */
  /*   | LED TOG | F1      | F2      | F3      | F10     |    | LED HUE | <<      | PLAY    | >>      | LED SAT |   */
         RGB_TOG , MT_F1   , MT_F2   , MT_F3   , KC_F10  ,      RGB_HUI , MT_MPRV , MT_MPLY , MT_MNXT , RGB_SAI ,     
  /*   `-------------------------------------------------|    |-------------------------------------------------'   */
  /*                                 | WIN     |         |    | RIGHT   | LEFT    |                                 */
                                       KC_LGUI , KC_TRNS ,      KC_BTN2 , KC_BTN1
  /*                                 `-------------------'    `-------------------'                                 */
  ),

  [_GAMING] = LAYOUT(
  /*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
  /*   | TAB      | Q       | W       | E       | R      |    | Y       | U       | ▲       | O       | P       |   */\
         KC_TAB   , KC_Q    , KC_W    , KC_E    , KC_R   ,      KC_Y    , KC_U    , KC_UP   , KC_O    , KC_P    ,     \
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */\
  /*   | SHIFT    | A       | S       | D       | F      |    | H       | ◀       | ▼       | ▶      | BASE    |   */\
         KC_LSFT  , KC_A    , KC_S    , KC_D    , KC_F   ,      KC_H    , KC_LEFT , KC_DOWN , KC_RIGHT, GM_QUIT ,     \
  /*   |-------------------------------------------------|    |-------------------------------------------------|   */\
  /*   | CTRL     | Z       | X       | C       | V      |    | N       | M       | , <     | . >     | I       |   */\
         KC_LCTL  , KC_Z    , KC_X    , KC_C    , KC_V   ,      KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_I    ,     \
  /*   `-------------------------------------------------|    |-------------------------------------------------'   */\
  
  /*                                 | SPACE   | ESC     |    | ENTER   | BSPC    |                                 */\
                                       KC_SPC  , KC_ESC  ,      KC_ENT  , KC_BSPC
  /*                                 `-------------------'    `-------------------'                                 */
  )
};

const key_override_t comma_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_DOT);
const key_override_t slash_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLASH, KC_BSLS);
const key_override_t six_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_LBRC);
const key_override_t question_key_override = ko_make_basic(MOD_MASK_SHIFT, S(KC_SLASH), KC_RBRC);
const key_override_t hashtag_key_override = ko_make_basic(MOD_MASK_SHIFT, S(KC_3), S(KC_6));
const key_override_t three_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, S(KC_LBRC));
const key_override_t one_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, S(KC_BSLS));
const key_override_t exclamation_key_override = ko_make_basic(MOD_MASK_SHIFT, S(KC_1), S(KC_RBRC));


// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_key_override,
    &slash_key_override,
    &six_key_override,
    &question_key_override,
    &hashtag_key_override,
    &three_key_override,
    &exclamation_key_override,
    &one_key_override,    
    NULL // Null terminate the array of overrides!
};
