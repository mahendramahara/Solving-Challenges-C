/* Time Functions (time.h) */
#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;

    time(&currentTime);

    printf("Current time: %s", ctime(&currentTime));

    return 0;
}
