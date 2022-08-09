// Program to position text at specific coordinates within a GUI window in C

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set font size and style
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2); // Default font, horizontal direction, size 2

    // Position text at specific coordinates
    outtextxy(200, 150, "Mahendra Mahara");

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
