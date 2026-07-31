#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter the value of x : ");
	scanf("%d" ,&x);

	printf("\n Enter the value of y: ");
	scanf("%d" ,&y);
	printf("\n  befor interchang : x +%d  y +%d",x,y);

	z=x;
	x=y;
	y=z;

	printf("\n after interchang : x +%d y +%d",x,y);
	getch();

}

