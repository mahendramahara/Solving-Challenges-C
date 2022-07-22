/* Stacks and Queues */
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void push(struct Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->arr[stack->top--];
}

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void enqueue(struct Queue* queue, int value) {
    if ((queue->rear + 1) % MAX_SIZE == queue->front) {
        printf("Queue Overflow\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->arr[queue->rear] = value;
}

int dequeue(struct Queue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue Underflow\n");
        exit(1);
    }
    queue->front = (queue->front + 1) % MAX_SIZE;
    return queue->arr[queue->front];
}

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    struct Queue queue;
    queue.front = 0;
    queue.rear = -1;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    return 0;
}
