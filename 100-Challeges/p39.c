/* Multi-threading */
#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 5

void *printMessage(void *threadId) {
    long id = (long)threadId;
    printf("Thread %ld: Hello, world!\n", id);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    
    for (t = 0; t < NUM_THREADS; t++) {
        rc = pthread_create(&threads[t], NULL, printMessage, (void *)t);
        if (rc) {
            printf("Error: Unable to create thread, %d\n", rc);
            return 1;
        }
    }

    pthread_exit(NULL);
}
