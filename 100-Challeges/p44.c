/*
Title: Code Optimization Techniques
Author: Mahendra Mahara
Date: 2023
*/

#include <stdio.h>

int main() {
    // Example of loop unrolling for optimization
    int sum = 0;
    for (int i = 1; i <= 100; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
