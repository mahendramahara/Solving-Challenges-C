/*
Title: Design Patterns in C
Author: Mahendra Mahara
Date: 2023
*/

#include <stdio.h>

// Singleton design pattern
typedef struct {
    int data;
} Singleton;

Singleton* getSingletonInstance() {
    static Singleton instance;
    return &instance;
}

int main() {
    Singleton *singleton1 = getSingletonInstance();
    Singleton *singleton2 = getSingletonInstance();

    printf("Address of singleton1: %p\n", (void*)singleton1);
    printf("Address of singleton2: %p\n", (void*)singleton2);

    return 0;
}
