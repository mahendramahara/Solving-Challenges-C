/* Big O Notation */
#include <stdio.h>

void bigONotation(int n) {
    // Example function with O(n^2) time complexity
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    bigONotation(n);
    return 0;
}
