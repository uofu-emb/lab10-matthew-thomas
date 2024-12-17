/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/sync.h>

#define IN_PIN 21

int count = 0;

void irq_callback(uint gpio, uint32_t event_mask)
{
    for (int i = 0; i<2; i++) {
        count++;
    }
}

int main() {
    stdio_init_all();

    gpio_init(IN_PIN);
    gpio_set_dir(IN_PIN, GPIO_IN);

    gpio_set_irq_enabled_with_callback(IN_PIN, GPIO_IRQ_EDGE_RISE | GPIO_IRQ_EDGE_FALL , true, irq_callback);

    while(1) {
        __wfi();
    }
}
