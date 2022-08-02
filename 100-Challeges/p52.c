/* Program 52: Write a program to read two numbers and print their sum, difference, product, quotient, and remainder. */
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %d\n", num1 / num2);
    printf("Remainder: %d\n", num1 % num2);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/

