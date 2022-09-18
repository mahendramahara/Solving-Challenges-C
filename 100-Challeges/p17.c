/* Command Line Arguments */
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <arg1>\n", argv[0]);
        return 1;
    }

    printf("Argument passed: %s\n", argv[1]);

    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
