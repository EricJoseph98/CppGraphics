#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <iostream.h>
#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80
/*
BLACK        ³  0  ³ Yes ³ Yes
BLUE         ³  1  ³ Yes ³ Yes
GREEN        ³  2  ³ Yes ³ Yes
/*CYAN         ³  3  ³ Yes ³ Yes
RED          ³  4  ³ Yes ³ Yes
MAGENTA      ³  5  ³ Yes ³ Yes
BROWN        ³  6  ³ Yes ³ Yes
LIGHTGRAY    ³  7  ³ Yes ³ Yes
DARKGRAY     ³  8  ³ No  ³ Yes
LIGHTBLUE    ³  9  ³ No  ³ Yes
LIGHTGREEN   ³ 10  ³ No  ³ Yes
LIGHTCYAN    ³ 11  ³ No  ³ Yes
LIGHTRED     ³ 12  ³ No  ³ Yes
LIGHTMAGENTA ³ 13  ³ No  ³ Yes
YELLOW       ³ 14  ³ No  ³ Yes
WHITE        ³ 15  ³ No  ³ Yes
"EMPTY_FILL", 0
"SOLID_FILL", 1
"LINE_FILL",  2
"LTSLASH_FILL",3
"SLASH_FILL",  4
"BKSLASH_FILL",5
"LTBKSLASH_FILL",6
"HATCH_FILL",   7
"XHATCH_FILL",   8
"INTERLEAVE_FILL",9
"WIDE_DOT_FILL",   10
"CLOSE_DOT_FILL",  11
"USER_FILL"    12
*/
int x=20,y=20,d=0,ppos=9,f=100,e=300,c=0,l,m,n,o,a,chance=3,obs;
int health=500,epos=9,coins=0,p,q,r,s;
char ch='r';
void play();
void batmobile2(char a)
{
cleardevice();
int bm2l1[41],bm2l2[33],bm2l3[17],bm2l4[17],bm2d1[17],bm2d2[17],bm2d3[17];
if((a==LEFT)&&(x>-180))
x-=20;
else if((a==RIGHT)&&(x<180))
x+=20;
else if(a==UP)
{y-=20;d+=50;}
//else if(a==DOWN)
//y+=20;
if(y==-380)
y=+20;
setcolor(15);
setfillstyle(1,7);
bm2l1[0]=300+x;
bm2l1[1]=300+y;
bm2l1[2]=320+x;
bm2l1[3]=330+y;
bm2l1[4]=300+x;
bm2l1[5]=400+y;
bm2l1[6]=370+x;
bm2l1[7]=400+y;
bm2l1[8]=350+x;
bm2l1[9]=330+y;
bm2l1[10]=370+x;
bm2l1[11]=300+y;
bm2l1[12]=300+x;
bm2l1[13]=300+y;
fillpoly(7,bm2l1);

setfillstyle(11,8);
bm2l2[0]=200+x;
bm2l2[1]=340+y;
bm2l2[2]=300+x;
bm2l2[3]=340+y;
bm2l2[4]=300+x;
bm2l2[5]=410+y;
bm2l2[6]=200+x;
bm2l2[7]=410+y;
bm2l2[8]=200+x;
bm2l2[9]=340+y;
fillpoly(5,bm2l2);

bm2l3[0]=470+x;
bm2l3[1]=340+y;
bm2l3[2]=370+x;
bm2l3[3]=340+y;
bm2l3[4]=370+x;
bm2l3[5]=410+y;
bm2l3[6]=470+x;
bm2l3[7]=410+y;
bm2l3[8]=470+x;
bm2l3[9]=340+y;
fillpoly(5,bm2l3);

setfillstyle(1,7);
bm2l4[0]=300+x;
bm2l4[1]=250+y;
bm2l4[2]=290+x;
bm2l4[3]=280+y;
bm2l4[4]=285+x;
bm2l4[5]=275+y;
bm2l4[6]=205+x;
bm2l4[7]=275+y;
bm2l4[8]=205+x;
bm2l4[9]=300+y;
bm2l4[10]=210+x;
bm2l4[11]=300+y;
bm2l4[12]=210+x;
bm2l4[13]=340+y;
bm2l4[14]=215+x;
bm2l4[15]=340+y;
bm2l4[16]=215+x;
bm2l4[17]=300+y;
bm2l4[18]=455+x;
bm2l4[19]=300+y;
bm2l4[20]=455+x;
bm2l4[21]=340+y;
bm2l4[22]=460+x;
bm2l4[23]=340+y;
bm2l4[24]=460+x;
bm2l4[25]=300+y;
bm2l4[26]=465+x;
bm2l4[27]=300+y;
bm2l4[28]=465+x;
bm2l4[29]=275+y;
bm2l4[30]=395+x;
bm2l4[31]=275+y;
bm2l4[32]=390+x;
bm2l4[33]=280+y;
bm2l4[34]=370+x;
bm2l4[35]=250+y;
bm2l4[36]=300+x;
bm2l4[37]=250+y;
fillpoly(19,bm2l4);

setcolor(15);
setfillstyle(1,0);
bm2d1[0]=305+x;
bm2d1[1]=255+y;
bm2d1[2]=300+x;
bm2d1[3]=275+y;
bm2d1[4]=370+x;
bm2d1[5]=275+y;
bm2d1[6]=365+x;
bm2d1[7]=255+y;
bm2d1[8]=305+x;
bm2d1[9]=255+y;
fillpoly(5,bm2d1);

bm2d2[0]=300+x;
bm2d2[1]=250+y;
bm2d2[2]=210+x;
bm2d2[3]=270+y;
bm2d2[4]=215+x;
bm2d2[5]=275+y;
bm2d2[6]=300+x;
bm2d2[7]=255+y;
bm2d2[8]=300+x;
bm2d2[9]=250+y;
fillpoly(5,bm2d2);

bm2d3[0]=370+x;
bm2d3[1]=250+y;
bm2d3[2]=460+x;
bm2d3[3]=270+y;
bm2d3[4]=455+x;
bm2d3[5]=275+y;
bm2d3[6]=370+x;
bm2d3[7]=255+y;
bm2d3[8]=370+x;
bm2d3[9]=250+y;
fillpoly(5,bm2d3);

l=bm2l4[0];
m=bm2l4[1];
n=bm2l4[34];
o=bm2l4[35];

if((((l>=p)&&(l<=q))&&((m>=p)&&(m<=q)))||(((n>=p)&&(n<=q))&&((o>=p)&&(o<=q))))
ppos=0;
else if((((l>q)&&(l<=r))&&((m>=p)&&(m<=q)))||(((n>q)&&(n<=r))&&((o>=p)&&(o<=q))))
ppos=1;
else if((((l>r)&&(l<=s))&&((m>=p)&&(m<=q)))||(((n>r)&&(n<=s))&&((o>=p)&&(o<=q))))
ppos=2;
else if((((l>=p)&&(l<=q))&&((m>q)&&(m<=r)))||(((n>=p)&&(n<=q))&&((o>q)&&(o<=r))))
ppos=3;
else if((((l>q)&&(l<=s))&&((m>q)&&(m<=r)))||(((n>q)&&(n<=s))&&((o>q)&&(o<=r))))
ppos=4;
else if((((l>r)&&(l<=s))&&((m>q)&&(m<=r)))||(((n>r)&&(n<=s))&&((o>q)&&(o<=r))))
ppos=5;
else if((((l>=p)&&(l<=q))&&((m>r)&&(m<=s)))||(((n>=p)&&(n<=q))&&((o>r)&&(o<=s))))
ppos=6;
else if((((l>q)&&(l<=r))&&((m>r)&&(m<=s)))||(((n>q)&&(n<=r))&&((o>r)&&(o<=s))))
ppos=7;
else if((((l>r)&&(l<=s))&&((m>r)&&(m<=s)))||(((n>r)&&(n<=s))&&((o>r)&&(o<=s))))
ppos=8;

if((epos==ppos)&&(obs==0))
{ c=0;chance--;
  delay(500);
  epos=random(10);
}
else if((epos==ppos)&&(obs==1))
 { coins++;
  delay(500);
  epos=random(10);
 }
else if((epos==ppos)&&(obs==2))
 { ++chance;
  delay(500);
  epos=random(10);
 }

if(chance==0)
 { cleardevice();
   setbkcolor(0);
   cout<<"\n\n\nDistance travelled : "<<d<<" metres\nHealth : "<<health
     <<"Coins : "<<coins;
   getch();
   exit(0);
 }
}
void batmobile1(char a)
{
cleardevice();
setfillstyle(1,8);
int bm1l0[21],bm1l1[21],bm1l2[21],bm1d0[9],bm1d1[9],bm1d2[9];
if((a==LEFT)&&(x>-180))
x-=20;
else if((a==RIGHT)&&(x<180))
x+=20;
else if(a==UP)
{y-=20;d+=50;}
//else if(a==DOWN)
//y+=20;
if(y==-380)//-380
y=-20;

bm1l0[0]=300+x;
bm1l0[1]=300+y;
bm1l0[2]=350+x;
bm1l0[3]=300+y;
bm1l0[4]=360+x;
bm1l0[5]=330+y;
bm1l0[6]=380+x;
bm1l0[7]=360+y;
bm1l0[8]=385+x;
bm1l0[9]=390+y;
bm1l0[10]=390+x;
bm1l0[11]=420+y;
bm1l0[12]=260+x;
bm1l0[13]=420+y;
bm1l0[14]=265+x;
bm1l0[15]=390+y;
bm1l0[16]=270+x;
bm1l0[17]=360+y;
bm1l0[18]=290+x;
bm1l0[19]=330+y;
bm1l0[20]=300+x;
bm1l0[21]=300+y;
fillpoly(11,bm1l0);
bm1l1[0]=290+x;
bm1l1[1]=330+y;
bm1l1[2]=270+x;
bm1l1[3]=320+y;
bm1l1[4]=265+x;
bm1l1[5]=300+y;
bm1l1[6]=250+x;
bm1l1[7]=310+y;
bm1l1[8]=250+x;
bm1l1[9]=330+y;
bm1l1[10]=240+x;
bm1l1[11]=340+y;
bm1l1[12]=255+x;
bm1l1[13]=410+y;
bm1l1[14]=260+x;
bm1l1[15]=420+y;
bm1l1[16]=265+x;
bm1l1[17]=390+y;
bm1l1[18]=270+x;
bm1l1[19]=360+y;
bm1l1[20]=290+x;
bm1l1[21]=330+y;
fillpoly(11,bm1l1);
bm1l2[0]=360+x;
bm1l2[1]=330+y;
bm1l2[2]=380+x;
bm1l2[3]=320+y;
bm1l2[4]=385+x;
bm1l2[5]=300+y;
bm1l2[6]=400+x;
bm1l2[7]=310+y;
bm1l2[8]=400+x;
bm1l2[9]=330+y;
bm1l2[10]=410+x;
bm1l2[11]=340+y;
bm1l2[12]=400+x;
bm1l2[13]=410+y;
bm1l2[14]=390+x;
bm1l2[15]=420+y;
bm1l2[16]=385+x;
bm1l2[17]=390+y;
bm1l2[18]=380+x;
bm1l2[19]=360+y;
bm1l2[20]=360+x;
bm1l2[21]=330+y;
fillpoly(11,bm1l2);
setfillstyle(5,4);
bm1d0[0]=290+x;
bm1d0[1]=340+y;
bm1d0[2]=310+x;
bm1d0[3]=340+y;
bm1d0[4]=330+x;
bm1d0[5]=360+y;
bm1d0[6]=310+x;
bm1d0[7]=360+y;
bm1d0[8]=290+x;
bm1d0[9]=340+y;
setfillstyle(1,7);
fillpoly(5,bm1d0);
bm1d1[0]=340+x;
bm1d1[1]=340+y;
bm1d1[2]=360+x;
bm1d1[3]=340+y;
bm1d1[4]=340+x;
bm1d1[5]=360+y;
bm1d1[6]=320+x;
bm1d1[7]=360+y;
bm1d1[8]=340+x;
bm1d1[9]=340+y;
fillpoly(5,bm1d1);
bm1d2[0]=290+x;
bm1d2[1]=360+y;
bm1d2[2]=360+x;
bm1d2[3]=360+y;
bm1d2[4]=340+x;
bm1d2[5]=380+y;
bm1d2[6]=310+x;
bm1d2[7]=380+y;
bm1d2[8]=290+x;
bm1d2[9]=360+y;
fillpoly(5,bm1d2);
setfillstyle(1,14);
fillellipse(280+x,405+y,10,10);
fillellipse(370+x,405+y,10,10);
setfillstyle(1,4);
fillellipse(310+x,405+y,10,10);
fillellipse(340+x,405+y,10,10);

l=bm1l0[0];
m=bm1l0[1];
n=bm1l2[4];
o=bm1l2[5];

if((((l>=p)&&(l<=q))&&((m>=p)&&(m<=q)))||(((n>=p)&&(n<=q))&&((o>=p)&&(o<=q))))
ppos=0;
else if((((l>q)&&(l<=r))&&((m>=p)&&(m<=q)))||(((n>q)&&(n<=r))&&((o>=p)&&(o<=q))))
ppos=1;
else if((((l>r)&&(l<=s))&&((m>=p)&&(m<=q)))||(((n>r)&&(n<=s))&&((o>=p)&&(o<=q))))
ppos=2;
else if((((l>=p)&&(l<=q))&&((m>q)&&(m<=r)))||(((n>=p)&&(n<=q))&&((o>q)&&(o<=r))))
ppos=3;
else if((((l>q)&&(l<=s))&&((m>q)&&(m<=r)))||(((n>q)&&(n<=s))&&((o>q)&&(o<=r))))
ppos=4;
else if((((l>r)&&(l<=s))&&((m>q)&&(m<=r)))||(((n>r)&&(n<=s))&&((o>q)&&(o<=r))))
ppos=5;
else if((((l>=p)&&(l<=q))&&((m>r)&&(m<=s)))||(((n>=p)&&(n<=q))&&((o>r)&&(o<=s))))
ppos=6;
else if((((l>q)&&(l<=r))&&((m>r)&&(m<=s)))||(((n>q)&&(n<=r))&&((o>r)&&(o<=s))))
ppos=7;
else if((((l>r)&&(l<=s))&&((m>r)&&(m<=s)))||(((n>r)&&(n<=s))&&((o>r)&&(o<=s))))
ppos=8;

if((epos==ppos)&&(obs==0))
{ c=0;chance--;
  delay(500);
  epos=random(10);
}
else if((epos==ppos)&&(obs==1))
 { coins++;
  delay(500);
  epos=random(10);
 }
else if((epos==ppos)&&(obs==2))
 { ++chance;
  delay(500);
  epos=random(10);
 }

if(chance==0)
 { cleardevice();
   setbkcolor(0);
   cout<<"\n\n\nDistance travelled : "<<d<<" metres\nHealth : "<<health
     <<"Coins : "<<coins;
   getch();
   exit(0);
 }
}
void obstacle()
{
if(((c==1)||(m>50))&&(d%1000==0))
 {
randomize();
a=random(10);
randomize();
obs=random(3);
epos=a;
 }
{
if(a==0)
{f=100;e=100;}
else if(a==1)
{f=200;e=100;}
else if(a==2)
{f=300;e=100;}
else if(a==3)
{f=100;e=200;}
else if(a==4)
{f=200;e=200;}
else if(a==5)
{f=300;e=200;}
else if(a==6)
{f=100;e=300;}
else if(a==7)
{f=200;e=300;}
else if(a==8)
{f=300;e=300;}
}
if(obs==0)
{setcolor(15);
setfillstyle(8,6);
bar3d(f-20,e-20,f+120,e+70,10,1);
p=100;q=200;r=300;s=400;
}
if(obs==1)
{
setcolor(15);
setfillstyle(1,14);
bar3d(f-20,e-20,f+120,e+70,10,1);
p=100;q=200;r=300;s=400;
}
if(obs==2)
{
setcolor(15);
setfillstyle(11,GREEN);
bar3d(f-20,e-20,f+120,e+70,10,1);
p=100;q=200;r=300;s=400;
}
}
void start1()
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,10);
textcolor(GREEN);
outtextxy(60,120,"BATMAN");
delay(1500);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(60,250,"A  R  K  H  A  M  O  R  I  G  I  N  S");
settextstyle(SMALL_FONT,HORIZ_DIR,5);
delay(500);
outtextxy(180,300,"PRESS ANY KEY TO CONTINUE");
getch();
cleardevice();
char str[300];
strcpy(str,"Date:12-31-1999\nTime:10:00 pm\nTroubleshooting Batmobile\nLocating Batman......\nBatman Located\nWARNING : Bounty Detected\nBounty by BLACK MASK ");
for(int i=0;str[i]!='\0';i++)
{
cout<<str[i];
delay(100);
}
/*
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
setcolor(BLUE);
outtextxy(150,120,"8 VILLIANS 1 NIGHT");
setcolor(RED);
outtextxy(150,160,"TO FINISH THE BAT");
setcolor(DARKGRAY);
outtextxy(200,240,"BLACK MASK");
setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(40,190,"REWARD : $50,00,000");
getch(); */
}
void bckgrd()
{
   setcolor(WHITE);
   line(0,50,600,50);
   setfillstyle(1,BLACK);
   bar(0,0,600,50); //night sky
   setcolor(WHITE);  //buildings
   setfillstyle(8,7);
      for(int i=0,x=20;i<25;i++,x+=30)
	bar(x,50,x+20,20);
   setfillstyle(1,7);
   bar3d(20,50,40,20,10,1);
   bar3d(50,50,70,10,10,1);
   setfillstyle(1,7);
   bar3d(90,50,120,30,5,1);
   bar3d(130,50,160,40,5,1);
   setfillstyle(1,8);
   bar3d(170,50,180,5,5,1);
   bar3d(200,50,240,30,10,1);
   setfillstyle(1,7);
   bar3d(260,50,270,40,10,1);
   bar3d(285,50,300,30,15,1);
   bar3d(330,50,350,40,15,1);
   setfillstyle(2,8);
   bar3d(370,50,380,25,5,1);
   bar3d(400,50,430,30,10,1);
   setfillstyle(11,7);
   bar3d(440,50,470,43,10,1);
   bar3d(485,50,500,32,15,1);
   bar3d(520,50,550,28,15,1);
   setfillstyle(2,8);
   bar3d(570,50,580,25,5,1);
   setfillstyle(1,GREEN);
   bar(500,5,500+(30*chance),20);
}
void play()
{
while(ch!='q')
   {
   bckgrd();
   obstacle();
   ch=getch();
   batmobile2(ch);
   setcolor(4);
   };
   setbkcolor(1);
   setcolor(15);
   getch();
   closegraph();
   exit(0);
}
int main(void)
{ // start1();
   int gdriver = DETECT,gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);
   }
   play();
}