/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x5F, 0xC8, 0xB9, 0x79, 0x18, 0x72, 0x56, 0xF2}

#if defined(ENCODER_ENABLE) && defined(VIAL_ENCODERS_ENABLE)
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, C(KC_LEFT), C(KC_RIGHT), LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,            KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,            KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,            KC_TRNS, \
                               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,     KC_TRNS,            KC_TRNS }
#endif
#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 3, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }
#endif
// For via/vial only
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define XXX KC_NO

/*
 * 5-col wrapper for the layout mechanism
 */
#define LAYOUT_ffkb_5col( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     K30, K31, K32, K33, K34,      K35, K36, K37, K38   \
) \
LAYOUT_ffkb( \
XXX, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, XXX, \
          K30, K31, K32, K33,      K34, K35, K36, K37,              \
                              K38 \
)
