#include <stdio.h>

static const char fb[] = {
    0x31, 0x0a, 0x32, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x34, 0x0a,
    0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x37,
    0x0a, 0x38, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x42, 0x75, 0x7a,
    0x7a, 0x0a, 0x31, 0x31, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x31,
    0x33, 0x0a, 0x31, 0x34, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x42, 0x75,
    0x7a, 0x7a, 0x0a, 0x31, 0x36, 0x0a, 0x31, 0x37, 0x0a, 0x46, 0x69,
    0x7a, 0x7a, 0x0a, 0x31, 0x39, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a,
    0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x32, 0x32, 0x0a, 0x32, 0x33, 0x0a,
    0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x32,
    0x36, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x32, 0x38, 0x0a, 0x32,
    0x39, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x42, 0x75, 0x7a, 0x7a, 0x0a,
    0x33, 0x31, 0x0a, 0x33, 0x32, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a,
    0x33, 0x34, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x46, 0x69, 0x7a,
    0x7a, 0x0a, 0x33, 0x37, 0x0a, 0x33, 0x38, 0x0a, 0x46, 0x69, 0x7a,
    0x7a, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x34, 0x31, 0x0a, 0x46,
    0x69, 0x7a, 0x7a, 0x0a, 0x34, 0x33, 0x0a, 0x34, 0x34, 0x0a, 0x46,
    0x69, 0x7a, 0x7a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x34, 0x36, 0x0a,
    0x34, 0x37, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x34, 0x39, 0x0a,
    0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x35,
    0x32, 0x0a, 0x35, 0x33, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x42,
    0x75, 0x7a, 0x7a, 0x0a, 0x35, 0x36, 0x0a, 0x46, 0x69, 0x7a, 0x7a,
    0x0a, 0x35, 0x38, 0x0a, 0x35, 0x39, 0x0a, 0x46, 0x69, 0x7a, 0x7a,
    0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x36, 0x31, 0x0a, 0x36, 0x32, 0x0a,
    0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x36, 0x34, 0x0a, 0x42, 0x75, 0x7a,
    0x7a, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x36, 0x37, 0x0a, 0x36,
    0x38, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x42, 0x75, 0x7a, 0x7a,
    0x0a, 0x37, 0x31, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x37, 0x33,
    0x0a, 0x37, 0x34, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x42, 0x75, 0x7a,
    0x7a, 0x0a, 0x37, 0x36, 0x0a, 0x37, 0x37, 0x0a, 0x46, 0x69, 0x7a,
    0x7a, 0x0a, 0x37, 0x39, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x46,
    0x69, 0x7a, 0x7a, 0x0a, 0x38, 0x32, 0x0a, 0x38, 0x33, 0x0a, 0x46,
    0x69, 0x7a, 0x7a, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x38, 0x36,
    0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x38, 0x38, 0x0a, 0x38, 0x39,
    0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x39,
    0x31, 0x0a, 0x39, 0x32, 0x0a, 0x46, 0x69, 0x7a, 0x7a, 0x0a, 0x39,
    0x34, 0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a, 0x46, 0x69, 0x7a, 0x7a,
    0x0a, 0x39, 0x37, 0x0a, 0x39, 0x38, 0x0a, 0x46, 0x69, 0x7a, 0x7a,
    0x0a, 0x42, 0x75, 0x7a, 0x7a, 0x0a,
};

int main(void) {
    for (int i = 0; i < sizeof fb; i ++) {
        putchar(fb[i]);
    }
}
