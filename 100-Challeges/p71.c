/* Program 71: Recursion: Write a function to calculate the Fibonacci sequence using recursion. */
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Calculate Fibonacci sequence up to the 10th term
    int i;

    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
