#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
	{
	int gd=DETECT,gm,i;
	float x1,y1,x2,y2,len,xinc,yinc;

	printf("I/P X1 & Y1 :\n");
	scanf("%f %f",&x1,&y1);

	printf("I/P X2 & Y2 :\n");
	scanf("%f %f",&x2,&y2);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	if(fabs(x2-x1)>=fabs(y2-y1))
	  len=fabs(x2-x1);
	else
	  len=fabs(y2-y1);

	xinc=(x2-x1)/len;
	yinc=(y2-y1)/len;

	i=0;

	do{
	  putpixel(x1+0.5,y1+0.5,15);
	  delay(10);
	  x1=x1+xinc;
	  y1=y1+yinc;
	  i=i+1;
	  }while(i<=len);

	getch();
	closegraph();
	}