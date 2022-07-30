// Program to discuss the importance of error handling when performing GUI operations in C

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    if (graphresult() != grOk) {
        printf("Error initializing graphics mode: %s\n", grapherrormsg(graphresult()));
        return 1;
    }

    // Perform GUI operations here

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
