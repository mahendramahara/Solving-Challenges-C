/*
Title: Error Handling Strategies
Author: Mahendra Mahara
Date: 2023
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(file);
    return 0;
}
