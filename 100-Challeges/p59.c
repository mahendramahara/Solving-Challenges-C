/* Program 59: Write a function to calculate the factorial of a number. */
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
