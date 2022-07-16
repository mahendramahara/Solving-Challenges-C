/* Program 80: Command-Line Arguments: Process command-line arguments passed to a program. */
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <arg1> <arg2> ...\n", argv[0]);
        return 1;
    }

    printf("Arguments passed to the program:\n");
    for (int i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
