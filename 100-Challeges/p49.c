/*
Title: Implementation of Memory Leak Detection
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Use allocated memory
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    
    // Free allocated memory
    free(ptr);
    
    return 0;
}

/* Copyright (c) 2023 Mahendra Mahara */
