#include <graphics.h>

#include <conio.h>



void main()

{


int gd = DETECT, gm;

initgraph(&gd, &gm, "C:\\TC\\BGI"); 
sector(100, 100, 0, 135, 25, 35);
 getch();

closegraph();

}
