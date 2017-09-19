#include "keymap_common.h"

enum macro_id {
    LPAREN,
    RPAREN,
    PLUS,
    HOME,
    PIPE,
    LSWIRL,
    RSWIRL,
    PREFIX,
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
    // 0 : default
     KEYMAP(
     GRV,      1,        2,        3,        4,        5,     PGUP,                EQL,      6,        7,        8,        9,        0,        MINS,     
     TAB,      Q,        W,        E,        R,        T,     PGDN,                CAPS,     Y,        U,        I,        O,        P,        ESC,     
     LCTL,     A,        S,        D,        FN3,      G,     FN0,                 ENT,      H,        J,        K,        L,        SCLN,     QUOT,     
     LSFT,     Z,        X,        C,        V,        B,     ESC,                 BSPC,     N,        M,        COMM,     DOT,      SLSH,     RSFT,     
                                   LALT,     LGUI,     FN2,                                  FN1,      ENT,      FN13),
    // 1 : layer 1 function, cursor and media keys
     KEYMAP(
     TRNS,     F1,       F2,       F3,       F4,       F5,    ESC,                 F12,      F6,       F7,       F8,       F9,       F10,      F11,      
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     VOLU,  VOLD,                TRNS,     MS_LEFT,  MS_DOWN,  MS_UP,    MS_RIGHT, PSCR,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,  TRNS,                TRNS,     LEFT,     DOWN,     UP,       RGHT,     TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,  TRNS,                TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     
                                   TRNS,     TRNS,     TRNS,                                 MS_BTN1,  MS_BTN2,  MS_BTN2),
    /* 2 : right space layer, flip
            #$%&
           <>{}^
            _!@*
    */
     KEYMAP(
     TRNS,     0,        9,        8,        7,        6,     TRNS,                TRNS,     5,        4,        3,        2,        1,        TRNS,     
     TRNS,     TRNS,     FN18,     FN17,     FN16,     FN15,  TRNS,                TRNS,     T,        R,        E,        W,        Q,        BSPC,     
     TRNS,     FN22,     FN23,     FN20,     FN21,     FN19,  TRNS,                TRNS,     G,        F,        D,        S,        A,        TRNS,     
     TRNS,     TRNS,     FN24,     FN26,     FN25,     FN27,  TRNS,                TRNS,     B,        V,        C,        X,        Z,        TRNS,     
                                   TRNS,     TRNS,     BSPC,                                 TRNS,     TRNS,     TRNS),
    /* 3 : left space layer, symbols and flip
         ~/\{}
         `[]()
         -+=|

     */
     KEYMAP(
     TRNS,     0,        9,        8,        7,        6,        TRNS,             TRNS,     5,        4,        3,        2,        1,        TRNS,
     BSPC,     P,        O,        I,        U,        Y,        TRNS,             TRNS,     FN8,      SLSH,     BSLS,     FN10,     FN11,     TRNS,
     TRNS,     SCLN,     L,        K,        J,        H,        TRNS,             TRNS,     GRV,      LBRC,     RBRC,     FN5,      FN6,      TRNS,
     TRNS,     SLSH,     DOT,      COMM,     M,        N,        TRNS,             TRNS,     MINS,     FN7,      EQL,      FN9,      TRNS,     TRNS,
                                             TRNS,     TRNS,     TRNS,             BSPC,     ESC,      TRNS),
    /* 4 : second symbol layer 
          &%$#             #$%&
          ^{}<>           <>{}^ 
          *@!_             _!@*
     */
     KEYMAP(
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     FN15,     FN16,     FN17,     FN18,     TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     FN19,     FN20,     FN21,     FN22,     FN23,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     FN24,     FN25,     FN26,     FN27,     TRNS,     TRNS,     
                                   TRNS,     TRNS,     TRNS,                                 MS_BTN1,  MS_BTN2,  MS_BTN2),
    // 5 : mouse layer
     KEYMAP(
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     MS_BTN1,  MS_BTN2,  MS_BTN2,  TRNS,     TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     MS_LEFT,  MS_DOWN,  MS_UP,    MS_RIGHT, TRNS,     TRNS,     
     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,             TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     TRNS,     
                                   TRNS,     TRNS,     TRNS,                                 MS_BTN1,  MS_BTN2,  MS_BTN2),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [2] = ACTION_LAYER_TAP_KEY(3, KC_SPC),
    [3] = ACTION_LAYER_TAP_KEY(1,  KC_F),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_MACRO(LPAREN),
    [6] = ACTION_MACRO(RPAREN),
    [7] = ACTION_MACRO(PLUS),
    [8] = ACTION_MACRO(HOME),
    [9] = ACTION_MACRO(PIPE),
    [10] = ACTION_MACRO(LSWIRL),
    [11] = ACTION_MACRO(RSWIRL),
    [12] = ACTION_MODS_ONESHOT(MOD_LSFT),              // Oneshot Shift
    [13] = ACTION_MACRO(PREFIX),
    [14] = ACTION_LAYER_MOMENTARY(4),
    [15] = ACTION_MACRO(AMPS),
    [16] = ACTION_MACRO(PRCNT),
    [17] = ACTION_MACRO(DLAR),
    [18] = ACTION_MACRO(HASH),
    [19] = ACTION_MACRO(UPRW),
    [20] = ACTION_MACRO(LSWIRL),
    [21] = ACTION_MACRO(RSWIRL),
    [22] = ACTION_MACRO(LSTN),
    [23] = ACTION_MACRO(GRTN),
    [24] = ACTION_MACRO(ARSK),
    [25] = ACTION_MACRO(ATSG),
    [26] = ACTION_MACRO(BANG),
    [27] = ACTION_MACRO(UNDS)
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
        case PREFIX:
            return (record->event.pressed ?
                    MACRO( D(LCTL), T(A), END ) :
                    MACRO( U(LCTL), END ));
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
