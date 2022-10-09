/* Program 87: Multithreading: Use threads for concurrent programming. */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

// Function to be executed by each thread
void *threadFunction(void *threadId) {
    long tid = (long)threadId;
    printf("Hello from thread %ld\n", tid);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;

    // Create threads
    for (t = 0; t < NUM_THREADS; t++) {
        printf("Creating thread %ld\n", t);
        rc = pthread_create(&threads[t], NULL, threadFunction, (void *)t);
        if (rc) {
            printf("Error: unable to create thread, %d\n", rc);
            exit(EXIT_FAILURE);
        }
    }

    // Wait for all threads to finish
    for (t = 0; t < NUM_THREADS; t++) {
        pthread_join(threads[t], NULL);
    }

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
