// Program to graphical elements in a C GUI application

#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Drawing a rectangle at specific coordinates
    rectangle(100, 100, 200, 200);

    // Drawing a circle at different coordinates
    circle(300, 200, 50);

    getch();
    closegraph();
    return 0;
}
