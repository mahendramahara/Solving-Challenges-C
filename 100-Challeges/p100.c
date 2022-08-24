// Program to display text "Mahendra Mahara" inside a moving rectangle in a GUI window

#include <graphics.h> 
#include <conio.h>

void drawMovingRectangleWithText(int x, int y, char *text) {
    setcolor(WHITE);
    rectangle(x, y, x + 150, y + 50); // Rectangle dimensions
    outtextxy(x + 10, y + 10, text); // Text position inside the rectangle
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 100;
    int dx = 5; // Change in x for movement

    while (!kbhit()) {
        cleardevice(); // Clear previous frame

        // Update position
        x += dx;

        // Draw moving rectangle with text
        drawMovingRectangleWithText(x, 200, "Mahendra Mahara");

        // Boundary checking
        if (x <= 0 || x >= getmaxx() - 150)
            dx = -dx;

        delay(50); // Adjust animation speed
    }

    closegraph();
    return 0;
}
