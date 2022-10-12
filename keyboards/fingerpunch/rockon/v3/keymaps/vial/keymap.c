#include QMK_KEYBOARD_H

#ifdef CASEMODES_ENABLE
#include "users/sadekbaroudi/casemodes.h"
#endif

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    NEXTSEN = USER00,
    NEW_SAFE_RANGE
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT_rockon(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_LPRN,                                          KC_RPRN,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_LBRC,                                          KC_RBRC,   KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSLS,
    KC_LCTL,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_LCBR,                                          KC_RCBR,   KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      ADJUST,                                           ADJUST,    KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_ENT,
               KC_MUTE,   KC_LCTL,   KC_LGUI,   LOWER,     KC_SPC,    KC_LALT,   KC_MS_BTN3, KC_MS_BTN1, KC_MS_BTN2,    KC_RALT,   KC_SPC,    RAISE,     KC_RGUI,   KC_RCTL,   KC_MUTE,
                                                                                               KC_MUTE
),


[_LOWER] = LAYOUT_rockon(
    KC_GRV,        _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       KC_MINS,       KC_EQL,        _______,
    _______,       KC_PGUP,       KC_UP,         KC_PGDN,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
    KC_HOME,       KC_LEFT,       KC_DOWN,       KC_RGHT,       KC_END,        _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       NEXTSEN,       _______,       _______,
                   _______,       _______,       _______,       _______,       _______,       _______,    _______,      _______,     _______,    _______,       _______,       ADJUST,        _______,       _______,       _______,
                                                                                                                        _______
),

[_RAISE] = LAYOUT_rockon(
    KC_GRV,        _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       KC_MINS,       KC_EQL,        _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
    KC_CAPS,       _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       _______,       _______,       _______,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
                   _______,       _______,       _______,       ADJUST,        _______,       _______,    _______,      _______,     _______,    _______,       _______,       _______,       _______,       _______,       _______,
                                                                                                                        _______
),

[_ADJUST] =  LAYOUT_rockon(
    RESET,         KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,         _______,                                           _______,       KC_F6,         KC_F7,         KC_F8,         KC_F9,         KC_F10,        _______,
    _______,       RGB_TOG,       RGB_RMOD,      RGB_MOD,       _______,       _______,       _______,                                           _______,       _______,       _______,       _______,       KC_F11,        KC_F12,        _______,
    _______,       RGB_SPI,       RGB_HUI,       RGB_SAI,       RGB_VAI,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
    _______,       RGB_SPD,       RGB_HUD,       RGB_SAD,       RGB_VAD,       _______,       _______,                                           _______,       _______,       _______,       _______,       _______,       _______,       _______,
                   _______,       _______,       _______,       _______,       _______,       _______,    _______,      _______,     _______,    _______,       _______,       _______,       _______,       _______,       _______,
                                                                                                                        _______
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case NEXTSEN:
            if (record->event.pressed) {
                SEND_STRING(". ");
                add_oneshot_mods(MOD_BIT(KC_LSHIFT));  // Set one-shot mod for shift.
            }
            break;
        default:
            break;
    }

    return true;
}

