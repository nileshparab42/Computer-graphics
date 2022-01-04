#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void main()
	{
	int gd=DETECT, gm, t[3][3]={0}, r, c, oc[3][10], nc[3][10], e, i;

	t[0][0]=t[1][1]=t[2][2]=1;

	printf("ENTER THE NO OF VERTEX OF POLYGON :");
	scanf("%d",&e);

	for(i=0;i<e;i++)
	   {
	   printf("ENTER CO-ORDINATE OF VERTEX %d :\n",i+1);
	   scanf("%d %d", &oc[0][i], &oc[1][i]);
	   oc[2][i]=1;
	   }


	printf("ENTER TX & TY : ");
	scanf("%d %d", &t[0][2], &t[1][2]);

	initgraph(&gd,&gm," ");

	for(i=0;i<e-1;i++)
	   line(oc[0][i], oc[1][i], oc[0][i+1], oc[1][i+1]);
	line(oc[0][i], oc[1][i], oc[0][0], oc[1][0]);


	getch();
	setcolor(RED);


	for( r = 0; r < 3; r++)
	     for( c = 0; c < e; c++)
		  nc[r][c]= t[r][0]*oc[0][c] +
			    t[r][1]*oc[1][c] +
			    t[r][2]*oc[2][c];

	for(i=0;i<e-1;i++)
	      line(nc[0][i], nc[1][i], nc[0][i+1], nc[1][i+1]);
	line(nc[0][i], nc[1][i], nc[0][0],nc[1][0]);

	getch();
	closegraph();
	}


