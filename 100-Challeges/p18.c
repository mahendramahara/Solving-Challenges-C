/* Error Handling */
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("nonexistent.txt", "r");

    if (fp == NULL) {
        perror("Error");
        return 1;
    }

    fclose(fp);

    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
