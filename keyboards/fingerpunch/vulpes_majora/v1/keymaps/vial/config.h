/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x2C, 0x58, 0x13, 0xC2, 0xD8, 0x4B, 0xDD, 0x0F}

#if defined(ENCODER_ENABLE) && defined(VIAL_ENCODERS_ENABLE)
#ifdef MOUSEKEY_ENABLE
#define VIAL_ENCODER_DEFAULT { KC_MS_WH_DOWN, KC_MS_WH_UP, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS }
#else
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_VOLD, KC_VOLU, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS, \
                               KC_TRNS, KC_TRNS }
#endif
#endif

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 1, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 2 }
#endif

// For via/vial only
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
