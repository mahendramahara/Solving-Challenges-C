/* System Calls */
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Executing ls command using system call:\n");
    int status = system("ls -l");
    if (status == -1) {
        perror("System call failed");
        return 1;
    }
    printf("ls command executed successfully\n");
    return 0;
}
