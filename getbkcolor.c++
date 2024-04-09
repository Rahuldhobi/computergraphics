#include <graphics.h>

#include<conio.h>

void main()
{

int gd = DETECT, gm, bkcolor;

char s[100];

initgraph(&gd.&gm, "C:\\TC\\BGI");
 bkcolor = getbkcolor();

sprintf(a, "Current background color = %d", bkcolor);
 outtextxy(10, 10. a);

getch();

closegraph();
}
