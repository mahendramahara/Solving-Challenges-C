/* Program 88: Real-Time Systems: Simulate real-time scenarios with deadlines and constraints. */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

// Function to simulate a real-time task
void realTimeTask(int taskNumber, int executionTime) {
    struct timeval start, end;
    gettimeofday(&start, NULL);

    // Simulate task execution
    printf("Executing Real-Time Task %d...\n", taskNumber);
    usleep(executionTime * 1000); // Convert milliseconds to microseconds

    gettimeofday(&end, NULL);
    long elapsedTime = (end.tv_sec - start.tv_sec) * 1000 + (end.tv_usec - start.tv_usec) / 1000;

    printf("Real-Time Task %d completed in %ld milliseconds.\n", taskNumber, elapsedTime);
}

int main() {
    // Simulate real-time tasks with different execution times
    realTimeTask(1, 100);
    realTimeTask(2, 50);
    realTimeTask(3, 150);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
