/* Program 67: Create a linked list and implement operations like insertion, deletion, and traversal. */
#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node **headRef, int newData) {
    // Allocate memory for new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Set data and next pointer of new node
    newNode->data = newData;
    newNode->next = *headRef;

    // Update head pointer to point to new node
    *headRef = newNode;
}

// Function to delete a node with given key from the linked list
void deleteNode(struct Node **headRef, int key) {
    // Initialize prev and current pointers
    struct Node *prev = NULL;
    struct Node *current = *headRef;

    // If head node itself holds the key to be deleted
    if (current != NULL && current->data == key) {
        *headRef = current->next; // Change head
        free(current); // Free the old head
        return;
    }

    // Search for the key to be deleted, keep track of the previous node as we need to change 'prev->next'
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If key was not present in linked list
    if (current == NULL)
        return;

    // Unlink the node from linked list
    prev->next = current->next;

    // Free memory
    free(current);
}

// Function to print the linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    // Insert nodes at beginning
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3);

    printf("Linked list after insertion: ");
    printList(head);

    // Delete node with key = 5
    deleteNode(&head, 5);
    printf("Linked list after deletion: ");
    printList(head);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
