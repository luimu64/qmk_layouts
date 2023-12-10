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

#define LT_TAB LT(_FUNCTION, KC_TAB)
#define LT_ENT LT(_SYMBOL, KC_ENT)

/* Symbol Layer */
#define MT_HOME RSFT_T(KC_HOME)
#define MT_INS RCTL_T(KC_INSERT)
#define MT_DEL RALT_T(KC_DEL)
#define MT_END RGUI_T(KC_END)

#define SY_LESS S(KC_COMMA)
#define SY_MORE S(KC_DOT)
#define SY_QUES S(KC_SLSH)
#define SY_HASH S(KC_3)
#define SY_EXCL S(KC_1)

/* Funtion Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LCTL_T(KC_F2)
#define MT_F3 LSFT_T(KC_F3)

#define MT_MPRV RSFT_T(KC_MPRV)
#define MT_MPLY RCTL_T(KC_MPLY)
#define MT_MNXT RALT_T(KC_MNXT)

#define FU_COPY LCTL(KC_C)
#define FU_PASTE LCTL(KC_V)

/* Gaming Layer */
#define GM_NUM OSL(_GAMING_FUNNUM)
