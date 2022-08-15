// Program to handle events like mouse movement or keyboard input in a C GUI program

#include <graphics.h> 
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    while (!kbhit()) {
        // Continuous monitoring for events like mouse movement
        delay(100); // Adjust delay as needed
    }

    closegraph();
    return 0;
}
