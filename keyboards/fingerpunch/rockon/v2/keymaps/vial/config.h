/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x61, 0x68, 0xB7, 0x6E, 0x16, 0xBC, 0x18, 0x0D}

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define TAP_CODE_DELAY 25

#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
