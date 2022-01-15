#include "graphics.h"
#pragma comment(lib, "graphics.lib")
 
int main()
{
   int gd = DETECT, gm; 
   initgraph(&gd, &gm, "c:\\tc\\bgi");
   
   line(0, 200, 100, 200); // ve 1 duong thang
 
   getch();
   closegraph();   
 
   return 0;
}
