/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x69, 0x3C, 0xEA, 0x84, 0xB6, 0xCC, 0xB4, 0xAC}

#if defined(ENCODER_ENABLE) && defined(VIAL_ENCODERS_ENABLE)
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, C(KC_LEFT), C(KC_RIGHT), \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS }
#endif

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#endif
