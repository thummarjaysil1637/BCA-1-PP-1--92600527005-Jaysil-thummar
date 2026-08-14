#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;
	clrscr();
	printf("\n Enter any number :");
	scanf("%d",&x);
	y = x % 2;

	if (y==0)

	{
		printf("\n Number is Even");
	}
	else
	{
		printf("\n Number is Odd");
	}
		getch();
}