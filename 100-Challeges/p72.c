/* Program 72: Pointers: Write a function to copy one string to another using pointers. */
#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; // Append null character at the end
}

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    stringCopy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
