#include <graphics.h>

#include <stdio.h>

#include <math.h>

void main() {

float x,y,x1,y1,x2,y2,dx,dy,pixel;
 int i,gd,gm;

printf("Enter the value of x1 : "); 
scanf("%f",&x1);

printf("Enter the value of yl: "); 
scanf("%f",&yl);

printf("Enter the value of x2: ");
 scanf("%f", &x2);

printf("Enter the value of y2: ");
 scanf("%f",&y2);

detectgraph(&gd.&gm);
 initgraph(&gd.&gm,"c:\\turboc3\\bgi");

dx=abs(x2-x1);
 dy=absty2-y1);

if(dx>=dy)

pixel=dx;
else
pixel=dy;
dx=dx/pixel;
dy=dy/pixel;
x=xl;

y=yl;

i=1;

while(i<=pixel)

{

putpixel(x,y,1);

x=x+dx;

y=y+dy;



i=i+1;

delay(100);


}

getch();

closegraph();

}
