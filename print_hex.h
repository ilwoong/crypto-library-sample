/**
 * The MIT License
 *
 * Copyright (c) 2018-2020 Ilwoong Jeong (https://github.com/ilwoong)
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


#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

static void print_title(const char* title)
{
    printf("\n");
    printf("********************************************************************************\n");
    printf("* %s\n", title);
    printf("********************************************************************************\n");
}

static inline void print_hex(const char* title, const uint8_t* data, size_t count) {
    printf("%s: ", title);
    for (int i = 0; i < count; ++i) {
        printf("%02x", data[i]);

        if (((i + 1) & 0x3) == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

static inline void print_hex_multiline(const char* title, const uint8_t* data, size_t count) {
    printf("%s:\n", title);
    for (int i = 0; i < count; ++i) {
        printf("%02x", data[i]);

        if (((i + 1) & 0x1f) == 0) {
            printf("\n");
        } else if (((i + 1) & 0x3) == 0) {
            printf(" ");
        }
    }
    printf("\n");
}