// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define PRODUCT Snagpad RP2040
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { 2, 3, 4, 5, 6 }
#define MATRIX_COL_PINS { 29, 28, 27, 26 }
//#define UNUSED_PINS

// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

//#define RGB_DI_PIN 7



/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
//#define STRICT_LAYER_RELEASE

#ifdef RGB_DI_PIN
//#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 1
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
