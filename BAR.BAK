#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
#include<stdio.h>
//int er[50],int m,char str[50][50],int cnt
long int ch,ch0,i,m,ent[50],er[50],avg=0,cnt=0,z,ls,lw,sum=0,l,t,b,j,k,h,ang;
char title[50],xname[50],yname[50],str[100][50];
void frontpage();
void box();
void grid();
void bar2d();
void bar3d();
void column2d();
void column3d();
void line2d();
void colline();
void pie2d();
void dnut2d();
void choice();
void getval();
void select();
void display();
void options();
void getval()
{  sum=0;avg=0;z=0,cnt=0;
   setbkcolor(1);
   setfillstyle(1,9);
   bar3d(190,25,400,60,1,10);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
   setcolor(15);
   outtextxy(200,27,"DATA ENTRY");
   setcolor(8);
   line(20,20,605,20);
   line(605,20,605,650);
   line(20,20,20,650);
   gotoxy(1,3);
   cout<<"\n\n\tENTER NUMBER OF ENTERIES REQUIRRED\n\t";
   line(20,20,20,650);
   cin>>m;
   cout<<"\tENTER NAME OF EACH ENTERY\n\t";
   for(i=0;i<m;i++)
   {line(20,20,20,650);
   gets(str[i]);cout<<"\t";}
   cout<<"ENTER VALUE OF EACH ENTERY\n\t";
   for(i=0;i<m;i++)
   {line(20,20,20,650);
   cin>>ent[i];cout<<"\t";}
   cout<<"ENTER CHART TITLE\n\t";
   line(20,20,20,650);
   gets(title);
   cout<<"\tENTER CHART X-AXIS NAME\n\t";
   line(20,20,20,650);
   gets(xname);
   cout<<"\tENTER CHART Y-AXIS NAME\n\t";
   line(20,20,20,650);
   gets(yname);
   line(20,20,20,650);
   getch();
   cleardevice();
   setbkcolor(0);
	for(i=0;i<m;i++)
	er[i]=ent[i];
	for(i=0;i<m;i++)
	sum+=ent[i];
	avg=sum/m;
	z=avg;
	while(z!=0)
	{cnt++;
	z/=10;
	}
   display();
   }
void select()
   {
   setfillstyle(1,15);
   bar(0,0,650,600);
   setcolor(14);
   line(20,20,610,20);
   line(610,20,610,460);
   line(610,460,20,460);
   line(20,460,20,20);

   setfillstyle(1,0);
   bar(120,70,180,130);
   bar(270,70,330,130);
   bar(420,70,480,130);
   bar(120,190,180,250);
   bar(270,190,330,250);
   bar(420,190,480,250);
   bar(120,320,180,380);
   bar(270,320,330,380);
   bar(420,320,480,380);

   setfillstyle(1,15);
   setcolor(15);
   setlinestyle(0,1,3);
   line(125,80,125,120); //1.bar 2d
   line(125,120,175,120);
   bar(125,85,140,90);
   bar(125,95,145,100);
   bar(125,105,150,110);

   line(425,80,425,120); //3.coloumn 2d
   line(425,120,475,120);
   bar(430,90,435,120);
   bar(440,100,445,120);
   bar(450,110,455,120);

   line(125,200,125,240);   //4.coloumn 3d
   line(125,240,175,240);
   bar3d(130,210,135,240,1,1);
   bar3d(145,220,150,240,1,1);

   bar3d(160,230,165,240,1,1);

   line(275,200,275,240);  //5.line
   line(275,240,325,240);
   line(280,210,290,215);
   line(290,215,300,225);
   line(300,225,310,240);

   line(425,200,425,240);  //6.col with line
   line(425,240,475,240);
   bar(430,210,435,240);
   bar(440,220,445,240);
   bar(450,230,455,240);
   line(432,210,442,220);
   line(442,220,452,230);

   setfillstyle(0,15);
   line(275,80,275,120);//2.bar 3d
   line(275,120,325,120);
   bar3d(275,85,290,90,1,1);
   bar3d(275,95,295,100,1,1);
   bar3d(275,110,300,115,1,1);

   line(125,200,125,240);   //4.coloumn 3d
   line(125,240,175,240);
   bar3d(130,210,135,240,1,1);
   bar3d(145,220,150,240,1,1);
   bar3d(160,230,165,240,1,1);
/*
   for(i=0,ang=0;i<5;i++,ang+=72)  //7.pie 2d
   { setfillstyle(SOLID_FILL,0);
   pieslice(150,350,ang,ang+72,20);}

   for(i=0,ang=0;i<5;i++,ang+=72)  //8.dougnut 2d
   { setcolor(i+1);
   pieslice(300,350,ang,ang+72,20);}
   setfillstyle(SOLID_FILL,0);
   pieslice(300,350,0,360,10);
 */
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);//9.exit
   setcolor(RED);
   outtextxy(440,325,"X");

   setfillstyle(1,BLUE);
   bar3d(180,30,400,60,1,10);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
   setcolor(15);
   outtextxy(200,35,"SELECT YOUR CHART");
   setcolor(0);
   outtextxy(125,140,"1.BAR 2D");
   outtextxy(275,140,"2.BAR 3D");
   outtextxy(425,140,"3.COLUMN 2D");
   outtextxy(125,260,"4.COLUMN 3D");
   outtextxy(275,260,"5.LINE");
   outtextxy(425,260,"6.COLUMN");
   outtextxy(425,275,"WITH LINE");
 //  outtextxy(125,390,"7.PIE 2D");
 //  outtextxy(275,390,"8.DOUGNUT 2D");
   outtextxy(425,390,"9.EXIT");

   outtextxy(125,425,"CHOOSE YOUR CHART NUMBER");
   gotoxy(35,25);
   cin>>ch;

   if(ch==5)
   {cleardevice();
   setbkcolor(2);
   setcolor(14);
   line(20,20,610,20);
   line(610,20,610,460);
   line(610,460,20,460);
   line(20,460,20,20);
   setcolor(15);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
   outtextxy(120,40,"LINE CHART PARAMETERS");
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
   setcolor(10);
   outtextxy(100,110,"CHOOSE LINE STYLE");
   outtextxy(100,130,"0...SOLID LINE");
   outtextxy(100,150,"1...CENTER LINE");
   outtextxy(100,170,"2...DASHED LINE");
   outtextxy(100,190,"3...USERBIT LINE");
   gotoxy(14,15);
   cin>>ls;
   outtextxy(100,240,"CHOOSE LINE WIDTH (ENTER 1 OR 3)");
   gotoxy(14,18);
   cin>>lw;
   }
   else if(ch==9)
   { exit(0);
   }
   getch();
   cleardevice();
   setbkcolor(0);
   choice();
   }
void choice()
   {
   if(ch==1)
   bar2d();
   else if(ch==2)
   bar3d();
   else if(ch==3)
   column2d();
   else if(ch==4)
   column3d();
   else if(ch==5)
   line2d();
   else if(ch==6)
   colline();
  /* else if(ch==7)
   pie2d();
   else if(ch==8)
   dnut2d(); */
   else if(ch==9)
   exit(0);
   }
void frontpage()
{
floodfill(0,0,WHITE);
setcolor(10);
 for(i=0,l=25,t=15;i<500;i++,l+=30)
 {  if((i!=0)&&(i%21==0))
     { t+=35;l=25; }
 circle(l,t,10);
 }
setcolor(2);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
outtextxy(105,25,"O");
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 6);
outtextxy(150,50,"MNIVERSE");
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
setcolor(1);
outtextxy(300,100,"CHARTING YOUR IDEAS");
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
setcolor(5);
outtextxy(70,170,"A PROGRAM DEVELOPED BY");
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
setcolor(1);
outtextxy(70,220,"ERIC JOSEPH");
getch();
cleardevice();
setbkcolor(0);
getval();
}
void grid()
{
line(70,60,530,60);
line(530,60,530,400);
line(530,400,70,400);
line(70,400,70,60);

line(70,100,530,100);
line(70,150,530,150);
line(70,200,530,200);
line(70,250,530,250);
line(70,300,530,300);
line(70,350,530,350);
line(70,400,530,400);

line(130,60,130,400);
line(190,60,190,400);
line(250,60,250,400);
line(310,60,310,400);
line(370,60,370,400);
line(430,60,430,400);
line(490,60,490,400);
}
void box()
{
for(i=0;i<m;i++)
   er[i]=ent[i];
setcolor(8);
line(20,20,585,20);
line(585,20,585,440);
line(585,440,20,440);
line(20,440,20,20);

setfillstyle(1,7);
bar(570,100,585,150);
bar(570,200,585,300);

setlinestyle(0, 1, 3);
setcolor(15);
line(5,10,600,10);
line(600,10,600,450);
line(600,450,5,450);
line(5,450,5,10);
setlinestyle(0, 1, 1);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
setcolor(14);
outtextxy(200,20,title);
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
outtextxy(250,410,xname);
settextstyle(TRIPLEX_FONT, VERT_DIR, 2);
outtextxy(20,200,yname);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
setcolor(15);
}
void display()
   {
   cleardevice();
   setbkcolor(3);
   setcolor(8);
   line(20,20,605,20);
   line(605,20,605,650);
   line(20,20,20,650);
   setcolor(5);
   bar3d(120,28,450,60,1,5);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
   setcolor(15);
   outtextxy(150,30,"DISPLAYING THE ENTRIES");
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
   setcolor(12);
   outtextxy(121,70,xname);
   setcolor(13);
   outtextxy(190,70,yname);
   gotoxy(4,5);
   setcolor(8);
   cout<<"\n\n\t\t";
   for(i=0;i<m;i++)
   {cout<<str[i]<<"\t"<<ent[i]<<"\n\t\t";
   line(20,460,20,20);}
   getch();
   cleardevice();
   setbkcolor(0);
   select();
   }
void options()
{
cleardevice();
setbkcolor(4);
setcolor(15);
line(20,20,605,20);
line(605,20,605,650);
line(20,20,20,650);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(150,40,"OPTIONS");

setfillstyle(1,14);
bar(100,100,150,150);
bar(170,100,220,150);
bar(240,100,290,150);
bar(310,100,360,150);
bar(380,100,430,150);

settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
setcolor(4);
outtextxy(390,105,"X");
outtextxy(320,105,"BC");
setfillstyle(0,15);
line(105,110,105,140); //coloumn ICON
line(105,140,140,140);
bar(110,110,115,140);
bar(120,120,125,140);
bar(130,130,135,140);

settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
setcolor(15);
outtextxy(175,110,"VIEW");
outtextxy(245,110,"NEW");
setcolor(2);
outtextxy(175,130,"123");
outtextxy(245,130,"789");

setcolor(14);
outtextxy(90,165,"1.CHANGE");
outtextxy(90,180,"GRAPH");
outtextxy(170,165,"2.VIEW");
outtextxy(175,180,"DATA");
outtextxy(240,165,"3.ADD");
outtextxy(245,180,"NEW");
outtextxy(245,195,"DATA");
outtextxy(310,165,"4.BACK");
outtextxy(315,180,"TO");
outtextxy(315,195,"CHART");
outtextxy(380,165,"5.EXIT");

gotoxy(10,14);
cin>>ch0;
cleardevice();
setbkcolor(0);
if(ch0==1)
select();
if(ch0==2)
display();
if(ch0==3)
getval();
if(ch0==4)
choice();
else
exit(0);
}
void bar3d()
{  l=70;t=80;b=120;
   box();
   grid();
   for (i=0; i<m; i++)
   {
   if((i!=0)&&(i%5==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=70;t=80;b=120;
   }
   er[i]/=pow(10,cnt-2);
   outtextxy(30,t+10,str[i]);
   outtextxy(er[i]+l+10,t+10,str[i]);
   setfillstyle(1,i+1);
   bar3d(l,t,er[i]+l,b,10,1);
   t+=60;b+=60;
   }
   getch();
   options();
}
void column3d()
{
   l=90;t=400;b=400;
   box();
   grid();
   for(i=0;i<m;i++)
   {
   if((i!=0)&&(i%10==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=90;t=400;b=400;
   }
   er[i]/=pow(10,cnt-2);
   j=b-(er[i]+20);
   outtextxy(l,t+10,str[i]);
   outtextxy(l,j-10,str[i]);
   setfillstyle(1, i+1);
   bar3d(l,t,l+20,b-er[i],10,1);
   l+=45;
   }
   getch();
   options();
}
void bar2d()
{
   l=80;t=80;b=120;
   box();
   grid();
   for (i=0; i<m; i++)
   {
   if((i!=0)&&(i%7==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=80;t=80;b=120;
   }
   er[i]/=pow(10,cnt-2);
   outtextxy(30,t+10,str[i]);
   outtextxy(er[i]+l+10,t+10,str[i]);
   setfillstyle(1, i+1);
   bar(l,t,er[i]+l,b);
   t+=50;b+=50;
   }
   getch();
   options();
}
void column2d()
{
   l=80;t=400;b=400;
   box();
   grid();
   for(i=0;i<m;i++)
   {
   if((i!=0)&&(i%10==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=80;t=400;b=400;
   }
   er[i]/=pow(10,cnt-2);
   j=b-(er[i]+20);
   outtextxy(l,t+10,str[i]);
   outtextxy(l,j-10,str[i]);
   setfillstyle(1, i+1);
   bar(l,t,l+20,j);
   l+=50;
   }
   getch();
   options();
}
void line2d()
{  l=100;t=400;
   box();
   grid();
   for(i=0;i<m;i++)
   {if((i!=0)&&(i%8==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=100;t=400;
   }
   er[i]/=pow(10,cnt-2);
   setlinestyle(ls,1,lw);
   setcolor(i+1);
   b=400-er[i];
   outtextxy(l,b-10,str[i]);
   line(l,t,l+50,b);
   l+=50;t=b;
   }
   setlinestyle(SOLID_LINE,1,1);
   getch();
   options();
}
void colline()
{  l=80;t=400;b=400;
   box();
   grid();
   for(i=0;i<m;i++)
   {
   if((i!=0)&&(i%10==0))
   {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    grid();
    l=80;t=400;b=400;
   }
   h=er[i+1];
   er[i]/=pow(10,cnt-2);
   h/=pow(10,cnt-2);
   j=b-(er[i]+20);
   outtextxy(l,t+10,str[i]);
   outtextxy(l,j-10,str[i]);
   setfillstyle(1, i+1);
   bar(l,t,l+20,j);
   k=b-(h+20);
   if(i<m-1)
   {
   setcolor(15);
   line(l+10,j,l+60,k);
   }
   setfillstyle(2,3);
   circle(l+10,j,2);
   l+=50;
   }
   getch();
   options();
}
void pie2d()
{  cleardevice();
   setbkcolor(0);
   long int ang=0,h1=0;float e;
   box();
   for(i=0;i<m;i++)
   {
    if((i!=0)&&(i%10==0))
    {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    }
   setfillstyle(1, i+1);
   h1=(ent[i]*360)/sum;
   pieslice(200,200,ang,ang+h1,100);
   ang+=h1;
   }
   getch();
   options();
}
void dnut2d()
{  cleardevice();
   setbkcolor(0);
   long int ang=0,h1=0;float e;
   box();
   for(i=0;i<m;i++)
   {
    if((i!=0)&&(i%10==0))
    {outtextxy(100,470,"PRESS ENTER FOR NEXT PAGE");
    getch();
    cleardevice();
    box();
    }
   setfillstyle(1, i+1);
   h1=(ent[i]*360)/sum;
   pieslice(200,200,ang,ang+h1,100);
   ang+=h1;
   }
setfillstyle(SOLID_FILL,0);
pieslice(200,200,0,360,60);
floodfill(20,200,BLACK);
getch();
options();
}
void main()
{  int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   errorcode = graphresult();
   if(errorcode != grOk)
   {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);
   }
   frontpage();
}
