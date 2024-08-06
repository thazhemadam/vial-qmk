#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _LAYER0,
    _LAYER1,
    _LAYER2,
    _LAYER3
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_LAYER0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LAYER1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [_LAYER2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_LAYER3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) }
};
#endif

// +-------+-------+-------+-------+-------+-------+-------+
// |       |       |       |       |       |       |       |
// +-------+-------+-------+-------+-------+-------+-------+
// |       |       |       |       |       |       |       |
// +-------+-------+-------+-------+-------+-------+-------+
// |       |       |       |       |       |       |       |
// +-------+-------+-------+-------+-------+-------+-------+           +-------+
// |       |       |       |       |       |       |                   |       |
// +-------+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+
// |       |       |       |       |       |       |       |   |       |       |       |    <--- 5 way nav
// +-------+-------+-------+       +-------+-------+-------+   +-------+-------+-------+
//                                                                     |       |
//                                                                     +-------+
//                                 +-------+-------+-------+
//                                 |       |       |       |   <--- 3 way thumb
//                                 +-------+-------+-------+

//    ----.
//         '..
//            '
//        +-------+
//        |       |
//        |       |    <---- foot pedal via TRRS
//        |       |
//        +-------+


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_LAYER0] = LAYOUT_kucheza(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,
    KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_LBRC,
    KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_LCBR,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                           KC_VOLU,
    KC_LCTL,   KC_LGUI,   KC_LALT,              KC_DEL,    KC_ENT,    KC_SPC,     KC_MPRV, KC_MPLY, KC_MNXT,
                                                                                           KC_VOLD,
                                                TO(_LAYER3),   KC_MUTE,   TO(_LAYER1),
    KC_LSFT
),

[_LAYER1] = LAYOUT_kucheza(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,
    KC_TAB,    KC_Q,      KC_W,      KC_F,      KC_P,      KC_B,      KC_LBRC,
    KC_CAPS,   KC_A,      KC_R,      KC_S,      KC_T,      KC_G,      KC_LCBR,
    KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_D,      KC_V,                           KC_VOLU,
    KC_LCTL,   KC_LGUI,   KC_LALT,              KC_DEL,    KC_ENT,    KC_SPC,     KC_MPRV, KC_MPLY, KC_MNXT,
                                                                                           KC_VOLD,
                                                TO(_LAYER0),   KC_MUTE,   TO(_LAYER2),
    KC_LSFT
),

[_LAYER2] =  LAYOUT_kucheza(
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,                            _______,
    _______,   _______,      _______,                    _______,      _______,     _______,      _______, _______, _______,
                                                                                                           _______,
                                                         TO(_LAYER1),   KC_MUTE,   TO(_LAYER3),
    _______
),

[_LAYER3] =  LAYOUT_kucheza(
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,     _______,
    _______,   _______,      _______,      _______,      _______,      _______,                            _______,
    _______,   _______,      _______,                    _______,      _______,     _______,      _______, _______, _______,
                                                                                                           _______,
                                                         TO(_LAYER2),   KC_MUTE,   TO(_LAYER0),
    _______
)
};
