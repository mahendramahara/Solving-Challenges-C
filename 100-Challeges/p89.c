// Program to draw a rectangle using GUI functions in C

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(100, 100, 200, 200);

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
