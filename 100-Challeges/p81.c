/* Program 81: Regular Expressions: Match patterns in strings using regular expressions. */
#include <stdio.h>
#include <regex.h>

int main() {
    char *pattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$";
    char *string = "example@example.com";
    regex_t regex;
    int ret;

    // Compile regular expression
    ret = regcomp(&regex, pattern, REG_EXTENDED);
    if (ret != 0) {
        printf("Failed to compile regular expression.\n");
        return 1;
    }

    // Execute regular expression
    ret = regexec(&regex, string, 0, NULL, 0);
    if (ret == 0)
        printf("String matches the pattern.\n");
    else
        printf("String does not match the pattern.\n");

    // Free compiled regular expression
    regfree(&regex);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
