/***************************************************************************//**
 * @file PinNames.h
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "CommonPinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    EFM32_STANDARD_PIN_DEFINITIONS,

    /* Starter Kit says LED0 and LED1, but mbed expects 1 and 2. This way using 1 and 2 or 0 and 1 will work. */
    LED0 = PF4,
    LED1 = PF5,
    LED2 = LED0,
    LED3 = LED0,
    LED4 = LED1,

    /* Push Buttons */
    SW0 = PF6,
    SW1 = PF7,
    BTN0 = SW0,
    BTN1 = SW1,

    /* Expansion headers */
    EXP3  = PA8,
    EXP4  = PC6,
    EXP5  = PA9,
    EXP6  = PC7,
    EXP7  = PF3,
    EXP8  = PC8,
    EXP9  = PF4,
    EXP10 = PC9,
    EXP11 = PF5,
    EXP12 = PA6,
    EXP13 = PF6,
    EXP14 = PA7,
    EXP15 = PC11,
    EXP16 = PC10,

    /* Serial (just some usable pins) */
    SERIAL_TX   = PA6,
    SERIAL_RX   = PA7,

    /* Board Controller UART (USB)*/
    USBTX       = PA0,
    USBRX       = PA1,

    /* Board Controller */
    STDIO_UART_TX = USBTX,
    STDIO_UART_RX = USBRX
} PinName;

#ifdef __cplusplus
}
#endif

#endif
