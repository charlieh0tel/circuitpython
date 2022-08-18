/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * SPDX-FileCopyrightText: Copyright (c) 2022 Lee Atkinson, MeanStride Technology, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_ADCBUFFER_BUFFEREDINPUT_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_ADCBUFFER_BUFFEREDINPUT_H

#include "common-hal/microcontroller/Pin.h"
#include "common-hal/adcbuffer/BufferedInput.h"

// #ifdef CIRCUITPY_BUFFEREDINPUT #endif

extern const mp_obj_type_t adcbuffer_bufferedinput_type;

void common_hal_adcbuffer_bufferedinput_construct(adcbuffer_bufferedinput_obj_t *self, const mcu_pin_obj_t *pin, uint8_t *buffer, uint32_t len, uint8_t bytes_per_sample, bool samples_signed, mp_float_t sample_rate);
void common_hal_adcbuffer_bufferedinput_deinit(adcbuffer_bufferedinput_obj_t *self);
bool common_hal_adcbuffer_bufferedinput_deinited(adcbuffer_bufferedinput_obj_t *self);
bool common_hal_adcbuffer_bufferedinput_readmultiple(adcbuffer_bufferedinput_obj_t *self);

#endif  // __MICROPY_INCLUDED_SHARED_BINDINGS_ADCBUFFER_BUFFEREDINPUT_H__
