// Program to animate the movement of a rectangle across a GUI window in C, incorporating the text "Mahendra Mahara" within the animation

#include <graphics.h> 
#include <conio.h>

void drawRectangleWithText(int x, int y, char *text) {
    setcolor(WHITE);
    rectangle(x, y, x + 100, y + 50);
    outtextxy(x + 20, y + 20, text);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 100;
    int dx = 5, dy = 3; // Change in x and y for movement

    while (!kbhit()) {
        cleardevice(); // Clear previous frame

        // Update position
        x += dx;
        y += dy;

        // Draw rectangle with text
        drawRectangleWithText(x, y, "Mahendra Mahara");

        // Boundary checking
        if (x <= 0 || x >= getmaxx() - 100)
            dx = -dx;
        if (y <= 0 || y >= getmaxy() - 50)
            dy = -dy;

        delay(50); // Adjust animation speed
    }

    closegraph();
    return 0;
}
//Mahendra Mahara