/* Program 69: Queues: Implement a queue using an array and perform operations like enqueue, dequeue, peek, and is_empty. */
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define structure for queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize queue
void initQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if queue is empty
bool isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if queue is full
bool isFull(struct Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue element into queue
void enqueue(struct Queue *queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(queue))
        queue->front = queue->rear = 0;
    else
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->arr[queue->rear] = data;
}

// Function to dequeue element from queue
int dequeue(struct Queue *queue) {
    int data;
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    data = queue->arr[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front = (queue->front + 1) % MAX_SIZE;
    return data;
}

// Function to peek front element of queue
int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->arr[queue->front];
}

int main() {
    struct Queue queue;
    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Front element of queue: %d\n", peek(&queue));

    printf("Dequeueing elements from queue: ");
    while (!isEmpty(&queue))
        printf("%d ", dequeue(&queue));
    printf("\n");

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
