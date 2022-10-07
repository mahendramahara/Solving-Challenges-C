/* Program 78: Bitwise Operations: Use bitwise operators (AND, OR, XOR, NOT, shift) to perform operations on integers. */
#include <stdio.h>

int main() {
    unsigned int num1 = 10; // Binary: 1010
    unsigned int num2 = 6;  // Binary: 0110

    // Bitwise AND
    printf("Bitwise AND: %u\n", num1 & num2); // Output: 2 (Binary: 0010)

    // Bitwise OR
    printf("Bitwise OR: %u\n", num1 | num2); // Output: 14 (Binary: 1110)

    // Bitwise XOR
    printf("Bitwise XOR: %u\n", num1 ^ num2); // Output: 12 (Binary: 1100)

    // Bitwise NOT (Unary)
    printf("Bitwise NOT of num1: %u\n", ~num1); // Output: 4294967285 (Binary: 11111111111111111111111111110101)

    // Bitwise Left Shift
    printf("Left shift of num1 by 2: %u\n", num1 << 2); // Output: 40 (Binary: 101000)

    // Bitwise Right Shift
    printf("Right shift of num1 by 2: %u\n", num1 >> 2); // Output: 2 (Binary: 10)

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
