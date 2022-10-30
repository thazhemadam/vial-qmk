/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#define VIAL_KEYBOARD_UID {0x9C, 0x27, 0x08, 0x26, 0xDE, 0x12, 0x9E, 0x2E}

#ifndef VIAL_INSECURE
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define TAP_CODE_DELAY 25

#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
