//Thhis program cannot on another pc if 
// maniram.h has not been included.

#include"maniram.h"

void main()
{
int r[4],i=0,gd=DETECT,gm,x=300,y=220,d1[3],d2[3];
char ch1[20],ch2[20],str[]="Created By : ",str3[]="Maniram Yadav";
r[0]=150;
for(i=1;i<4;i++)
{r[i]=r[i-1]-30*i;
d1[i]=r[i]*sin(.785);
d2[i]=r[i]*cos(.785);
  }

float a,b,c,d;
int a1[18]={x,y-r[0],x-d2[1],y-d2[1],x-r[0],y,x-d2[1],y+d1[1],x,y+r[0],x+d2[1],y+d1[1],x+r[0],y,x+d2[1],y-d1[1],x,y-r[0]};
int a2[18]={x,y-r[2],a1[2],a1[3],x-r[2],y,a1[6],a1[7],x,y+r[2],a1[10],a1[11],x+r[2],y,a1[14],a1[15],x,y-r[2]};
int a3[18]={a2[0],a2[1],x-d2[3],y-d2[3],a2[4],a2[5],x-d2[3],y+d1[3],a2[8],a2[9],x+d2[3],y+d1[3],a2[12],a2[13],x+d2[3],y-d1[3],a2[16],a2[17]};

i=4;
int arr,m,p,l;
char str1[]="THANK YOU!",str2[]="For watching this animated picture";
int ac[14]={1,2,8,11,3,9,6,7,5,12,13,10,14};
a=r[0]*sin(1.256);
b=r[0]*cos(1.256);
c=r[0]*sin(.628);
d=r[0]*cos(.628);
srand((unsigned)time(NULL));
arr=rand()%5;
p=rand()%9+1;
int e[12]={x+r[0],y,x-d,y-c,x+b,y+a,x+b,y-a,x-d,y+c,x+r[0],y};
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(RED);
settextstyle(4,HORIZ_DIR,3);
outtextxy(2,3,"WELCOME TO THE ALGOSAPIENS 2016 ");
if(arr<3)
{
drawpoly(6,e);
circle(x,y,155*(arr%2+arr/2));
circle(x,y,170*(arr/2));
circle(x,y,40);
line(x-40,y,x+40,y);
line(x,y-40,x,y+40);
if(arr==2)
{
setfillstyle(SOLID_FILL,ac[(p*7)%15]);
floodfill((x+164),y,RED);
setfillstyle(SOLID_FILL,arr);
floodfill((x-r[0]+5),y,RED);
}
if(arr==1)
{
setfillstyle(SOLID_FILL,arr);
floodfill((x-r[0]+5),y,RED);
}
setcolor(RED);
while(!kbhit())
{

setfillstyle(SOLID_FILL,ac[i%15]);
floodfill(x+3,y+3,RED);
setfillstyle(SOLID_FILL,ac[(i+1)%13]);
floodfill(x+3,y-3,RED);
setfillstyle(SOLID_FILL,ac[(i+2)%15]);
floodfill(x-3,y+3,RED);
setfillstyle(SOLID_FILL,ac[(i+3)%15]);
floodfill(x-3,y-3,RED);
setfillstyle(SOLID_FILL,ac[(i+4)%15]);
floodfill(x+r[0]-13,y,RED);
setfillstyle(SOLID_FILL,ac[(i+5)%15]);
floodfill(e[6]-7,e[7]+30,RED);
setfillstyle(SOLID_FILL,ac[(i+6)%15]);
floodfill(e[2]+10,e[3]+10,RED);
setfillstyle(SOLID_FILL,ac[(i+7)%15]);
floodfill(e[8]+15,e[9]-15,RED);
setfillstyle(SOLID_FILL,ac[(i+8)%15]);
floodfill(e[4]-7,e[5]-30,RED);
setfillstyle(SOLID_FILL,ac[(i+11)%15]);
floodfill(x+42,y+1,RED);
setcolor(i);
settextstyle(p%5,HORIZ_DIR,1);
outtextxy(20,400,t);
setcolor(i+1);
l=20+(textwidth(str)+7);
settextstyle(p,HORIZ_DIR,3);
outtextxy(l,400,n);
delay(100);
i+=1;
}
clearviewport();
}
else
{
setcolor(BLUE);
circle(x,y,r[0]+3);
drawpoly(9,a1);
setcolor(BLUE);
circle(x,y,r[1]);
circle(x,y,r[2]);
setcolor(BLUE);
drawpoly(9,a2);
circle(x,y,r[3]);
drawpoly(9,a3);
while(!kbhit())
{
setfillstyle(SOLID_FILL,ac[(13+i)%15]);
floodfill(a2[0],a2[1]-6,BLUE);
setfillstyle(SOLID_FILL,ac[(4+i)%15]);
floodfill(a2[4]-3,a2[5],BLUE);
setfillstyle(SOLID_FILL,ac[(5+i)%15]);
floodfill(a2[8],a2[9]+5,BLUE);
setfillstyle(SOLID_FILL,ac[(7+i)%15]);
floodfill(a2[12]+5,a2[13],BLUE);
setfillstyle(SOLID_FILL,ac[(3+i)%15]);
floodfill(a1[2],a1[3]-5,BLUE);
setfillstyle(SOLID_FILL,ac[(11+i)%15]);
floodfill(x,y,BLUE);
setcolor(i);
settextstyle(p%5,HORIZ_DIR,1);
outtextxy(20,400,t);
setcolor(i+1);
l=20+(textwidth(str)+7);
settextstyle(p,HORIZ_DIR,3);
outtextxy(l,400,n);
delay(750);
i+=5;
delay(600);
}
}
getch();
clearviewport();
while(!kbhit())
{
d=ac[(i+13)%15];
setcolor(d);
rectangle(10,15,630,400);
setfillstyle(SOLID_FILL,(i+1)%14);
floodfill(18,18,d);
setcolor(ac[(4+l)%14]);
settextstyle(i%10,HORIZ_DIR,5);
outtextxy(20,20,str1);
a=12+(textheight(str1)+10);
settextstyle((((7+i)%10)+1),HORIZ_DIR,3);
outtextxy(20,a,str2);
b=a+(textheight(str2)+10);
outtextxy(20,b,t);
c=b+(textheight(str)+20);
setcolor(ac[(l+7)%15]);
settextstyle((i%10)+1,HORIZ_DIR,7);
outtextxy(20,c,n);
delay(700);
l++;
}

clearviewport();
cleardevice();
closegraph();
restorecrtmode();
}