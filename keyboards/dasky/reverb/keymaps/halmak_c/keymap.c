#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "combos.h"
#include "tapdance.h"

// defines

enum layers {
    _QWERTY = 0,
    _HALMAK,
    _H_RED,
    _NAV_FULL,
    _SYM_FULL,
    _ADJ_FULL,
    _NAV_RED,
    _SYM_RED
};

#define QWERTY   DF(_QWERTY)
#define HALMAK   DF(_HALMAK)
#define H_RED    DF(_H_RED)
#define NAV_FULL MO(_NAV_FULL)
#define SYM_FULL MO(_SYM_FULL)
#define ADJ_FULL MO(_ADJ_FULL)
#define NAV_RED  MO(_NAV_RED)
#define SYM_RED  MO(_SYM_RED)

#define LCTL_ESC  LCTL_T(KC_ESC)
#define RCTR_QUOT RCTL_T(KC_QUOT)
#define CUT       LCTL(KC_X)
#define COPY      LCTL(KC_C)
#define PASTE     LCTL(KC_V)

// Homerow
#define LGUI_S    LGUI_T(KC_S)
#define LALT_H    LALT_T(KC_H)
#define LCTL_N    LCTL_T(KC_N)
#define LSFT_T_T  LSFT_T(KC_T)
#define RSFT_A    RSFT_T(KC_A)
#define RCTL_E    RCTL_T(KC_E)
#define RALT_O    RALT_T(KC_O)
#define RGUI_I    RGUI_T(KC_I)

#define TD_LS_CAP TD(TD_LSFT_CAPS)
#define TD_RS_CAP TD(TD_RSFT_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
          KC_GRV,  KC_1,  KC_2,  KC_3,     KC_4,      KC_5,                        KC_6,     KC_7,     KC_8,    KC_9,     KC_0,    KC_PSCR,
          KC_TAB,  KC_Q,  KC_W,  KC_E,     KC_R,      KC_T,                        KC_Y,     KC_U,     KC_I,    KC_O,     KC_P,    KC_BSPC,
        LCTL_ESC,  KC_A,  KC_S,  KC_D,     KC_F,      KC_G,                        KC_H,     KC_J,     KC_K,    KC_L,  KC_SCLN,  RCTR_QUOT,
         KC_LSFT,  KC_Z,  KC_X,  KC_C,     KC_V,      KC_B,                        KC_N,     KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,    KC_RSFT,
                                        KC_LGUI,  NAV_FULL,  KC_SPC,  KC_ENT,  SYM_FULL,  KC_RALT
    ),
    [_HALMAK] = LAYOUT(
          KC_GRV,    KC_1,    KC_2,    KC_3,      KC_4,      KC_5,                        KC_6,     KC_7,    KC_8,    KC_9,    KC_0,      KC_NO,
          KC_TAB,    KC_W,    KC_L,    KC_R,      KC_B,      KC_Z,                     KC_SCLN,     KC_Q,    KC_U,    KC_D,    KC_J,    KC_BSPC,
        LCTL_ESC,  LGUI_S,  LALT_H,  LCTL_N,  LSFT_T_T,   KC_COMM,                      KC_DOT,   RSFT_A,  RCTL_E,  RALT_O,  RGUI_I,  RCTR_QUOT,
       TD_LS_CAP,    KC_F,    KC_M,    KC_V,      KC_C,   KC_SLSH,                        KC_G,     KC_P,    KC_X,    KC_K,    KC_Y,  TD_RS_CAP,
                                               KC_LGUI,  NAV_FULL,  KC_SPC,  KC_ENT,  SYM_FULL,  KC_RALT
    ),
    [_H_RED] = LAYOUT(
        KC_NO,    KC_1,    KC_2,    KC_3,      KC_4,     KC_5,                       KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  KC_NO,
        KC_NO,    KC_W,    KC_L,    KC_R,      KC_B,     KC_Z,                    KC_SCLN,     KC_Q,    KC_U,    KC_D,    KC_J,  KC_NO,
        KC_NO,  LGUI_S,  LALT_H,  LCTL_N,  LSFT_T_T,  KC_COMM,                     KC_DOT,   RSFT_A,  RCTL_E,  RALT_O,  RGUI_I,  KC_NO,
        KC_NO,    KC_F,    KC_M,    KC_V,      KC_C,  KC_SLSH,                       KC_G,     KC_P,    KC_X,    KC_K,    KC_Y,  KC_NO,
                                            KC_LGUI,  NAV_RED,  KC_SPC,  KC_ENT,  SYM_RED,  KC_RALT
    ),
    [_NAV_FULL] = LAYOUT(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,                       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,                     KC_PGUP,  KC_HOME,    KC_UP,   KC_END,  KC_VOLU,   KC_DEL,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,                     KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_VOLD,   KC_INS,
        KC_NO,  KC_NO,    CUT,   COPY,    PASTE,    KC_NO,                     KC_TRNS,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_PSCR,
                                          KC_LGUI,  KC_TRNS,  KC_SPC,  KC_ENT,  ADJ_FULL,  KC_RALT
    ),
    [_SYM_FULL] = LAYOUT(
          KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,                      KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,
         KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,      KC_5,                       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_EQL,
        KC_TILD,  KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,   KC_PERC,                    KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_PLUS,
        KC_PIPE,  KC_BSLS,  KC_COLN,  KC_SCLN,  KC_MINS,   KC_LBRC,                    KC_RBRC,  KC_UNDS,  KC_COMM,   KC_DOT,  KC_SLSH,  KC_QUES,
                                                KC_LGUI,  ADJ_FULL,  KC_SPC,  KC_ENT,  KC_TRNS,  KC_RALT
    ),
    [_ADJ_FULL] = LAYOUT(
        QK_BOOT,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PSCR,
          KC_NO,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                     QWERTY,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        RM_TOGG,  RM_HUEU,  RM_SATU,  RM_VALU,  KC_TRNS,  KC_TRNS,                     HALMAK,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        RM_NEXT,  RM_HUED,  RM_SATD,  RM_VALD,  KC_TRNS,  KC_TRNS,                      H_RED,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                KC_LGUI,  KC_TRNS,  KC_SPC,  KC_ENT,  KC_TRNS,  KC_RALT
    ),
    [_NAV_RED] = LAYOUT(
        KC_NO,  KC_F9,  KC_F10,  KC_F11,   KC_F12,    KC_NO,                       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
        KC_NO,  KC_F5,   KC_F6,   KC_F7,    KC_F8,    KC_NO,                     KC_PGUP,  KC_HOME,    KC_UP,   KC_END,  KC_VOLU,  KC_NO,
        KC_NO,  KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_NO,                     KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_VOLD,  KC_NO,
        KC_NO,  KC_NO,     CUT,    COPY,    PASTE,    KC_NO,                     KC_TRNS,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_NO,
                                          KC_LGUI,  KC_TRNS,  KC_SPC,  KC_ENT,  ADJ_FULL,  KC_RALT
    ),
    [_SYM_RED] = LAYOUT(
        KC_NO,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,                      KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,  KC_NO,
        KC_NO,     KC_1,     KC_2,     KC_3,     KC_4,      KC_5,                       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_NO,
        KC_NO,  KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,   KC_PERC,                    KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_NO,
        KC_NO,  KC_BSLS,  KC_COLN,  KC_SCLN,  KC_MINS,   KC_LBRC,                    KC_RBRC,  KC_UNDS,  KC_COMM,   KC_DOT,  KC_SLSH,  KC_NO,
                                              KC_LGUI,  ADJ_FULL,  KC_SPC,  KC_ENT,  KC_TRNS,  KC_RALT
    )
    // [_NAME] = LAYOUT(
    //     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    //     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    //     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    //     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    //                                             KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    // )
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


