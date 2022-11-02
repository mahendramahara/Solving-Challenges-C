/* Program 54: Write a program to print the first 10 even numbers, first 10 odd numbers, first 10 multiples of 5. */
#include <stdio.h>

int main() {
    int i;

    // Print first 10 even numbers
    printf("First 10 even numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");

    // Print first 10 odd numbers
    printf("First 10 odd numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");

    // Print first 10 multiples of 5
    printf("First 10 multiples of 5: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i * 5);
    }
    printf("\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
