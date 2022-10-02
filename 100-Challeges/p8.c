/* Pointers */
#include <stdio.h>

int main() {
    int var = 10;
    int *ptr;

    ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value pointed by pointer: %d\n", *ptr);

    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
