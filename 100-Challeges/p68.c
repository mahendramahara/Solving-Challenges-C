/* Program 68: Stacks: Implement a stack using an array and perform operations like push, pop, peek, and is_empty. */
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define structure for stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function to initialize stack
void initStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if stack is empty
bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push element onto stack
void push(struct Stack *stack, int data) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top] = data;
}

// Function to pop element from stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Function to peek element from stack
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element of stack: %d\n", peek(&stack));

    printf("Popping elements from stack: ");
    while (!isEmpty(&stack))
        printf("%d ", pop(&stack));
    printf("\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
