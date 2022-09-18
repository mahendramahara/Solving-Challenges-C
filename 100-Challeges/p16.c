/* Recursion */
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d: %d\n", num, factorial(num));
    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
