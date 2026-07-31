//WAP to calculates Average
#include<stdio.h>
#include<stdio.h>

void main()

{
	int x,y,z,avg,total;
	clrscr();
	printf("\n Enter value of x,y,z :");
	scanf("%d%d%d",&x,&y,&z);

	total = x+y+z;
	avg =total/3;

	printf("\n Average is : %d",avg);
	getch();
}