/* Function Pointers */
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    void (*ptr)() = &greet;
    (*ptr)(); // Calling function using function pointer
    return 0;
}
