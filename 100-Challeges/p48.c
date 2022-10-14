/*
Title: Example of Unit Testing Frameworks
*/

#include <stdio.h>
#include "unittest.h" // Assume unittest.h contains unit testing framework functions

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Unit test cases for add function
void test_add() {
    assert(add(1, 2) == 3);
    assert(add(5, 7) == 12);
    assert(add(-3, 3) == 0);
}

int main() {
    // Run unit tests
    test_add();
    
    printf("All unit tests passed!\n");
    
    return 0;
}

/* Copyright (c) 2023 Mahendra Mahara */
