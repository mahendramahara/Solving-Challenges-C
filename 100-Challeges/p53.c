/* Program 53: Write a program to check if a given number is positive, negative, or zero. */
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
