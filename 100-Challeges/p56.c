/* Program 56: Strings: Write a program to count the vowels, consonants, and spaces in a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, spaces = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
