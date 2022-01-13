/*
Copyright 2021 Sadek Baroudi <sadekbaroudi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FINGERPUNCH_RGBMATRIX
#define FINGERPUNCH_RGBMATRIX
#endif

#ifndef FINGERPUNCH_PIMORONI
#define FINGERPUNCH_PIMORONI
#endif

#define PIMORONI_TRACKBALL_ADDRESS 0x0A // default 0x0A
#define PIMORONI_TRACKBALL_INTERVAL_MS 8 // default 8
#define PIMORONI_TRACKBALL_MOUSE_SCALE 5 // default 5
#define PIMORONI_TRACKBALL_SCROLL_SCALE 1 // default 1
#define PIMORONI_TRACKBALL_DEBOUNCE_CYCLES 20 // default 20
#define PIMORONI_TRACKBALL_ERROR_COUNT 10 // default 10

#pragma once
#include "config_common.h"
