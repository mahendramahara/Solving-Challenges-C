/* File Handling */
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("example.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello, world!");

    fclose(fp);

    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
