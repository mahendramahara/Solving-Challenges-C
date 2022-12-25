// Program to demonstrate displaying text "Mahendra Mahara" on a GUI window in C

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtextxy(100, 100, "Mahendra Mahara");

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
