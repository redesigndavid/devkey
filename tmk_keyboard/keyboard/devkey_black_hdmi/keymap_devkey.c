#include "keymap_common.h"

enum macro_id {
    LPAREN,
    RPAREN,
    PLUS,
    HOME,
    PIPE,
    LSWIRL,
    RSWIRL,
    AMPS,
    PRCNT,
    DLAR,
    HASH,
    UPRW,
    GRTN,
    LSTN,
    ARSK,
    ATSG,
    BANG,
    UNDS
};

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // base
    KEYMAP(
       GRV,      1,        2,        3,        4,        5,     PGUP,                     EQL,      6,        7,        8,        9,        0,        MINS,
       TAB,      Q,        W,        E,        R,        T,     PGDN,         UP,         CAPS,     Y,        U,        I,        O,        P,        ESC,
       LCTL,     A,        S,        D,        F,        G,     FN0,      LEFT, RIGHT,    ENT,      H,        J,        K,        L,        SCLN,     QUOT,
       LSFT,     Z,        X,        C,        V,        B,     ESC,         DOWN,        BSPC,     N,        M,        COMM,     DOT,      SLSH,     RSFT,
                                     LALT,     LGUI,     FN0,                                       SPC,      ENT,      FN1),
    // symbols
    KEYMAP(
       TRNS, F1,   F2,   F3,   F4,   F5,   TRNS,                        F12,  F6,   F7,   F8,   F9,   F10,  F11,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         TRNS,          TRNS, FN8,  SLSH, BSLS, FN10, FN11, TRNS,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,      TRNS, TRNS,       TRNS, GRV,  FN5,  FN6,  LBRC, RBRC, TRNS,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         TRNS,          TRNS, MINS, FN7,  EQL,  FN9,  TRNS, TRNS,
                         TRNS, TRNS, TRNS,                                    BSPC, ESC, TRNS),

    // mouse
    KEYMAP(
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,                        TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         MS_UP,         TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    MS_LEFT, MS_RIGHT,  TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,         MS_DOWN,       MS_BTN3, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                         TRNS, TRNS, TRNS,                                    MS_BTN1, MS_BTN2, TRNS),
};

/*
FN8,      SLSH,     BSLS,     FN10,     FN11
GRV,      LBRC,     RBRC,     FN5,      FN6,
MINS,     FN7,      EQL,      FN9,      TRNS
*/

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [1] = ACTION_LAYER_TOGGLE(2),
    [5] = ACTION_MACRO(LPAREN),
    [6] = ACTION_MACRO(RPAREN),
    [7] = ACTION_MACRO(PLUS),
    [8] = ACTION_MACRO(HOME),
    [9] = ACTION_MACRO(PIPE),
    [10] = ACTION_MACRO(LSWIRL),
    [11] = ACTION_MACRO(RSWIRL),
    [12] = ACTION_MODS_ONESHOT(MOD_LSFT),              // Oneshot Shift
    [13] = ACTION_LAYER_MOMENTARY(4),
    [14] = ACTION_MACRO(AMPS),
    [15] = ACTION_MACRO(PRCNT),
    [16] = ACTION_MACRO(DLAR),
    [17] = ACTION_MACRO(HASH),
    [18] = ACTION_MACRO(UPRW),
    [19] = ACTION_MACRO(LSWIRL),
    [20] = ACTION_MACRO(RSWIRL),
    [21] = ACTION_MACRO(LSTN),
    [22] = ACTION_MACRO(GRTN),
    [23] = ACTION_MACRO(ARSK),
    [24] = ACTION_MACRO(ATSG),
    [25] = ACTION_MACRO(BANG),
    [26] = ACTION_MACRO(UNDS)
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case LSWIRL:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(LBRC), END ) :
                    MACRO( U(LSFT), END ));
        case RSWIRL:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(RBRC), END ) :
                    MACRO( U(LSFT), END ));
        case LPAREN:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(9), END ) :
                    MACRO( U(LSFT), END ));
        case RPAREN:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(0), END ) :
                    MACRO( U(LSFT), END ));
        case PLUS:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(EQL), END ) :
                    MACRO( U(LSFT), END ));
        case HOME:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(GRV), END ) :
                    MACRO( U(LSFT), END ));
        case PIPE:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(BSLS), END ) :
                    MACRO( U(LSFT), END ));
        case AMPS:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(7), END ) :
                    MACRO( U(LSFT), END ));
        case PRCNT:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(5), END ) :
                    MACRO( U(LSFT), END ));
        case DLAR:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(4), END ) :
                    MACRO( U(LSFT), END ));
        case HASH:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(3), END ) :
                    MACRO( U(LSFT), END ));
        case UPRW:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(6), END ) :
                    MACRO( U(LSFT), END ));
        case GRTN:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(DOT), END ) :
                    MACRO( U(LSFT), END ));
        case LSTN:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(COMM), END ) :
                    MACRO( U(LSFT), END ));
        case ARSK:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(8), END ) :
                    MACRO( U(LSFT), END ));
        case ATSG:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(2), END ) :
                    MACRO( U(LSFT), END ));
        case BANG:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(1), END ) :
                    MACRO( U(LSFT), END ));
        case UNDS: 
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(MINS), END ) :
                    MACRO( U(LSFT), END ));
    }
    return MACRO_NONE;
}
