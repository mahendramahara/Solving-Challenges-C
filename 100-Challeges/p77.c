/* Program 77: File I/O: Work with different file operations like reading, writing, appending, closing, error handling. */
#include <stdio.h>

int main() {
    // Writing to a file
    FILE *filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This is an example text written to a file.\n");
    fclose(filePointer);

    // Appending to a file
    filePointer = fopen("example.txt", "a");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This line is appended to the existing file content.\n");
    fclose(filePointer);

    // Reading from a file
    char buffer[100];
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
