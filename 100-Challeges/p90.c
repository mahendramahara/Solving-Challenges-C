// Program to draw a circle on a graphical user interface in C

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    circle(300, 200, 50);

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
