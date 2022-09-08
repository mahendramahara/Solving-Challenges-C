/* Program 55: Write a program to find the sum, average, maximum, and minimum of elements in an array. */
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    // Calculate sum, max, min
    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
