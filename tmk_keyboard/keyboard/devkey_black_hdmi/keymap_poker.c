#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
         GRV,      1,        2,        3,        4,        5,    ESC,        EQL,         6,        7,        8,        9,        0,        MINS,     
         TAB,      Q,        W,        E,        R,        T,    LGUI,       RBRC,        Y,        U,        I,        O,        P,        LBRC,     
         LCTL,     A,        S,        D,        F,        G,    LALT,       ENT,         H,        J,        K,        L,        SCLN,     QUOT,     
         LSFT,     Z,        X,        C,        V,        B,    PAUS,       CAPS,        N,        M,        COMM,     DOT,      SLSH,     RSFT,     
                             LALT,     LGUI,     SPC,                                     SPC,      ENT,      SPC),

};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
