/*
Title: Illustration of Testing Strategies
*/

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    // Test cases
    int test_cases[] = {0, 1, 5, 10};
    
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); ++i) {
        int n = test_cases[i];
        printf("Factorial of %d: %d\n", n, factorial(n));
    }
    
    return 0;
}

/* Copyright (c) 2023 Mahendra Mahara */
