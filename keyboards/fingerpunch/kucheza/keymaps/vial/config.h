/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0xC6, 0xA0, 0x11, 0xE2, 0x8C, 0x44, 0x2D, 0x88}

#if defined(ENCODER_ENABLE) && defined(VIAL_ENCODERS_ENABLE)
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS }
#endif

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#endif

// For via/vial only
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
