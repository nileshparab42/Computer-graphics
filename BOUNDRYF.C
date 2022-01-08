#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundryfill(int,int,int,int);
void main()
	{
	int p[2][10],gd=DETECT,gm,v,i,j,x,y,boundry_colour=WHITE,fill_colour=RED;
	printf("How many vertex polygone have :");
	scanf("%d",&v);
	for(i=0;i<v;i++)
		{
		printf("\nEnter X%d and Y%d\n",i+1,i+1);
		for(j=0;j<=1;j++)
			{
			scanf("%d",&p[j][i]);
			}
		}
	printf("\nSeed Point\n");
	scanf("%d%d",&x,&y);
	initgraph(&gd,&gm,"");
	for(i=0;i<v-1;i++)
		{
		line(p[0][i],p[1][i],p[0][i+1],p[1][i+1]);
		}
	line(p[0][v-1],p[1][v-1],p[0][0],p[1][0]);
	boundryfill(x,y,boundry_colour,fill_colour);
	getch();
	closegraph();
	clrscr();
	}
void boundryfill(x,y,boundry_colour,fill_colour)
	{
	if(getpixel(x,y)!=boundry_colour && getpixel(x,y)!=fill_colour)
		{
		putpixel(x,y,fill_colour);
		boundryfill(x+1,y,boundry_colour,fill_colour);
		boundryfill(x,y+1,boundry_colour,fill_colour);
		boundryfill(x-1,y,boundry_colour,fill_colour);
		boundryfill(x,y-1,boundry_colour,fill_colour);
		}
	}















