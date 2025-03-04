#include QMK_KEYBOARD_H
#include "combos_normal.h"
#include "combos_artsey.h"

combo_t key_combos[] = {
    COMBO(combo_pgup, KC_PGUP),
    COMBO(combo_pgdn, KC_PGDN),
    COMBO(combo_home, KC_HOME),
    COMBO(combo_end,  KC_END),
    COMBO(combo_vdl, LGUI(LCTL(KC_LEFT))),
    COMBO(combo_vlr,  LGUI(LCTL(KC_RGHT))),

    COMBO(combo_m, KC_M),
    COMBO(combo_n, KC_N),
    COMBO(combo_p, KC_P),
    COMBO(combo_q, KC_Q),
    COMBO(combo_u, KC_U),
    COMBO(combo_v, KC_V),
    COMBO(combo_w, KC_W),
    COMBO(combo_x, KC_X),
    COMBO(combo_z, KC_Z),
    COMBO(combo_b, KC_B),
    COMBO(combo_c, KC_C),
    COMBO(combo_d, KC_D),
    COMBO(combo_f, KC_F),
    COMBO(combo_g, KC_G),
    COMBO(combo_h, KC_H),
    COMBO(combo_j, KC_J),
    COMBO(combo_k, KC_K),
    COMBO(combo_l, KC_L),

    COMBO(combo_lock_nav, KC_PGUP),
    COMBO(combo_lock_mouse, KC_PGUP),
    
    COMBO(combo_quote, KC_QUOTE),
    COMBO(combo_comma, KC_COMMA),
    COMBO(combo_pipe, KC_PIPE),
    COMBO(combo_dot, KC_DOT),
    COMBO(combo_ques, KC_QUESTION),
    COMBO(combo_fslh, KC_SLASH),
    
    COMBO(combo_enter, KC_ENTER),
    COMBO(combo_space, KC_SPACE),
    
    COMBO(combo_esc, KC_ESCAPE),
    COMBO(combo_bspc, KC_BACKSPACE),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_del, KC_DELETE),
    
    COMBO(combo_shift, KC_LEFT_SHIFT),
    COMBO(combo_shift_once, KC_LEFT_SHIFT),
    COMBO(combo_ctrl, KC_LEFT_CTRL),
    COMBO(combo_gui, KC_LEFT_GUI),
    COMBO(combo_alt, KC_LEFT_ALT),
};