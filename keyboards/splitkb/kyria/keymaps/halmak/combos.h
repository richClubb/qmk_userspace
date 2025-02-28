#include QMK_KEYBOARD_H

const uint16_t PROGMEM combo_pgup[] = {KC_Q, KC_U, COMBO_END};
const uint16_t PROGMEM combo_pgdn[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo_home[] = {KC_U, KC_D, COMBO_END};
const uint16_t PROGMEM combo_end[]  = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM combo_vdl[]  = {KC_D, KC_J, COMBO_END};
const uint16_t PROGMEM combo_vlr[]  = {KC_O, KC_I, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_pgup, KC_PGUP),
    COMBO(combo_pgdn, KC_PGDN),
    COMBO(combo_home, KC_HOME),
    COMBO(combo_end,  KC_END),
    COMBO(combo_vdl, LGUI(LCTL(KC_LEFT))),
    COMBO(combo_vlr,  LGUI(LCTL(KC_RGHT))),
};