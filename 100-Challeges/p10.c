/* Structures */
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;

    strcpy(person1.name, "John");
    person1.age = 30;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
/* Copyright (c) 2023 Mahendra Mahara */
