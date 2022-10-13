/* Inter-process Communication */
#include <stdio.h>
#include <unistd.h>

int main() {
    int pipefd[2];
    char buffer[5];

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    write(pipefd[1], "hello", 5);
    read(pipefd[0], buffer, 5);

    printf("Message received from pipe: %s\n", buffer);

    return 0;
}
