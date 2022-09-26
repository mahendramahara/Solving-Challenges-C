/* Memory Management */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    *ptr = 10;
    printf("Value: %d\n", *ptr);
    
    free(ptr);
    
    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
