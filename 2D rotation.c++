#include<graphics.h>

#include<stdio.h>

void main()

{

int gd=DETECT,gm;

int i;

int x2,y2,x1,y1,x,y,xn,yn;

double r11,r12,r21, r22,th;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

printf("Enter the 2 line end points x1,y1,x2,y2: \n");
 scanf("%d%d%d%d",&x,&y,&x,&y2);

line(x1,y1,x2,y2);


printf("\n\n\n Enter the angle:\t");

scanf("%1f",&th);


r11=cos((th*3.1428)/180);

r12=sin((th*3.1428)/180);

r21=(-sin((th*3.1428)/180));

r22=cos((th*3.1428)/180);
xn=((x2*r11)-(y2*r21));

yn=((x2*r12)+(y2*r22));

line(x1,y1,xn,yn);

getch();

closegraph();

}
