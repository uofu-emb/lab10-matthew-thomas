/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"

// Pico W devices use a GPIO on the WIFI chip for the LED,
// so when building for Pico W, CYW43_WL_GPIO_LED_PIN will be defined
#ifdef CYW43_WL_GPIO_LED_PIN
#include "pico/cyw43_arch.h"
#endif

#pragma GCC optimize ("O0")

int main() {
    while(1) {
        uint32_t k;
        for (int i = 0; i < 30; i++) {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
    }
}
