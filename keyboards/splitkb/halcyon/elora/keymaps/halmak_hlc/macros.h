#include QMK_KEYBOARD_H

const uint16_t PROGMEM macro_pgup[] = {KC_Q, KC_U, COMBO_END};
const uint16_t PROGMEM macro_pgdn[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM macro_home[] = {KC_U, KC_D, COMBO_END};
const uint16_t PROGMEM macro_end[]  = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM macro_vdl[]  = {KC_D, KC_J, COMBO_END};
const uint16_t PROGMEM macro_vlr[]  = {KC_O, KC_I, COMBO_END};

combo_t key_combos[] = {
    COMBO(macro_pgup, KC_PGUP),
    COMBO(macro_pgdn, KC_PGDN),
    COMBO(macro_home, KC_HOME),
    COMBO(macro_end,  KC_END),
    COMBO(macro_vdl, LGUI(LCTL(KC_LEFT))),
    COMBO(macro_vlr,  LGUI(LCTL(KC_RGHT))),
};