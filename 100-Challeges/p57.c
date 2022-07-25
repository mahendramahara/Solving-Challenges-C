/* Program 57: Write a function to check if a number is prime. */
#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is prime.\n", num);
    else
        printf("%d is not prime.\n", num);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
