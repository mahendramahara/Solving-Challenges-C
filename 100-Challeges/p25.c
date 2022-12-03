/* File Input/Output (stdio.h) */
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("example.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
