// Program to implement user interaction to trigger the drawing of a rectangle in a C GUI program

#include <graphics.h> 
#include <conio.h>

void drawRectangle() {
    rectangle(100, 100, 200, 200);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Wait for user interaction (e.g., key press) to trigger rectangle drawing
    getch();
    drawRectangle();

    getch();
    closegraph();
    return 0;
}
/* Copyright Mahendra Mahara 2023 */
