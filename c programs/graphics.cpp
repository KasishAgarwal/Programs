#include<graphics.h>
int main()
{
int gd=0,gm=0;
initgraph(&gd,&gm," ");             //it can not only access gd & gm....bt also keep values in it
circle(100,80,20);
getch();                              //third is path of graphics driver
closegraph();
return 0;
}
