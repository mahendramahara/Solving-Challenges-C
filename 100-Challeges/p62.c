/* Program 62: Write a function to search for an element in an array using linear search. */
#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target)
            return i; // Return index if element is found
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = linearSearch(arr, n, target);

    if (index != -1)
        printf("Element %d found at index %d\n", target, index);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
