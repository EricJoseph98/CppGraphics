#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gdriver=DETECT,gmode,errorcode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
errorcode = graphresult();
if(errorcode!=grOk)
  { printf("Graphics Error: %s\n",grapherrormsg(errorcode));
    printf("Press any key to halt");
    getch();
    exit(0);
  }
settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
setcolor(BLUE);
outtextxy(220,20,"PIANO");

int i,x=50,y=200;char ch;
setfillstyle(SLASH_FILL,8);
bar(40,190,530,410);

setfillstyle(SOLID_FILL,WHITE);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
for(i=0;i<7;i++,x+=70,ch++)
  bar(x,y,x+50,y+200);
setcolor(BLACK);
outtextxy(60, y+130,"A");
outtextxy(130, y+130,"B");
outtextxy(200, y+130,"C");
outtextxy(270, y+130,"D");
outtextxy(340, y+130,"E");
outtextxy(410, y+130,"F");
outtextxy(480, y+130,"G");

setfillstyle(SOLID_FILL,BLACK);
x=95;y=200;
for(i=0;i<6;i++,x+=70)
 bar(x,y,x+30,y+100);

settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
setcolor(WHITE);
outtextxy(105, y+50,"1");
outtextxy(175, y+50,"2");
outtextxy(245, y+50,"3");
outtextxy(315, y+50,"4");
outtextxy(385, y+50,"5");
outtextxy(455, y+50,"6");

settextstyle(SMALL_FONT, HORIZ_DIR, 5);
setcolor(LIGHTGREEN);
outtextxy(20,430,"PRESS Q TO QUIT");

for(i=0;ch!='q'&& ch!='Q';i++)
{
ch=getch();
if((ch=='a')||(ch=='A'))
sound(261);
else if((ch=='b')||(ch=='B'))
sound(293);
else if((ch=='c')||(ch=='C'))
sound(329);
else if((ch=='d')||(ch=='D'))
sound(349);
else if((ch=='e')||(ch=='E'))
sound(391);
else if((ch=='f')||(ch=='F'))
sound(440);
else if((ch=='g')||(ch=='G'))
sound(493);
else if((ch=='h')||(ch=='H'))
sound(523);
else if(ch=='1')
sound(277);
else if(ch=='2')
sound(311);
else if(ch=='3')
sound(369);
else if(ch=='4')
sound(415);
else if(ch=='5')
sound(466);
else if(ch=='6')
sound(554);
delay(200);
nosound();
}
}