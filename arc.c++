#include <graphics.h>

#include <conio.h>

void main()
{

int gd = DETECT, gm;

initgraph(&gd, &gm, "C:\\TC\\BCI");

arc (100, 100, 0, 135, 50);

getch();

closegraph();
}
