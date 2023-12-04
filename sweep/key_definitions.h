#pragma once

#define US_ADIA ALGR(KC_Q)    // Ä
#define US_ODIA ALGR(KC_P)    // Ö

/* Base Layer */
#define MT_QUOT LGUI_T(KC_QUOT)
#define MT_Q LALT_T(KC_Q)
#define MT_J LCTL_T(KC_J)
#define MT_K LSFT_T(KC_K)

#define MT_M RSFT_T(KC_M)
#define MT_W RCTL_T(KC_W)
#define MT_V RALT_T(KC_V)
#define MT_Z RGUI_T(KC_Z)

#define LT_TAB LT(_FUN, KC_TAB)
#define LT_ENT LT(_SYM, KC_ENT)

/* Sym Layer */
#define MT_GRV LGUI_T(KC_GRV)
#define MT_1 LALT_T(KC_1)
#define MT_2 LCTL_T(KC_2)
#define MT_3 LSFT_T(KC_3)

#define MT_HOME RSFT_T(KC_HOME)
#define MT_INS RCTL_T(KC_INSERT)
#define MT_DEL RALT_T(KC_DEL)
#define MT_END RGUI_T(KC_END)

#define ARRLEFT S(KC_COMMA)
#define ARRRIGHT S(KC_DOT)

/* Fun Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LCTL_T(KC_F2)
#define MT_F3 LSFT_T(KC_F3)

#define MT_MPRV RSFT_T(KC_MPRV)
#define MT_MPLY RCTL_T(KC_MPLY)
#define MT_MNXT RALT_T(KC_MNXT)

#define FU_COPY LCTL(KC_C)
#define FU_PASTE LCTL(KC_V)

#define FU_GAME DF(_GAMING)

/* Gaming Layer */

#define GM_B LGUI_T(KC_B)
#define GM_Z LALT_T(KC_Z)
#define GM_X LCTL_T(KC_X)
#define GM_C LSFT_T(KC_C)

#define GM_M RSFT_T(KC_M)
#define GM_COMM RCTL_T(KC_COMM)
#define GM_DOT RALT_T(KC_DOT)
#define GM_SLSH RGUI_T(KC_SLSH)

#define GM_QUIT DF(_BASE)