/* Program 86: System Programming: Create simple system utilities like file viewers, text editors. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    // A simple file viewer utility
    FILE *filePointer;
    char fileName[100];
    char buffer[1000];

    // Get file name from user
    printf("Enter the name of the file to view: ");
    scanf("%s", fileName);

    // Open the file
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", fileName);
        return 1;
    }

    // Read and display file contents
    printf("Contents of the file \"%s\":\n", fileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
