// Program to set the font size and style when rendering text in a C GUI application

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set font size and style
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2); // Default font, horizontal direction, size 2

    outtextxy(100, 100, "Mahendra Mahara");

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
