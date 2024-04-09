#include <graphics.h>

#include <conio.h>

void main()

{

int gd=DETECT,gm,points[]={320,150,420,300,250,300,32 0,150);

initgraph(&gd, &gm, "C:\\TC\\BGI");

drawpoly(4, points);

getch();

closegraph();

}
