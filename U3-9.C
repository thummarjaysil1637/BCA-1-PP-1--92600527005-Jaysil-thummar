#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;
	clrscr();

	printf("\n Enter Number 1 : ");
	scanf("%d",&x);

	printf("\n Enter Number 2 : ");
	scanf("%d",&y);

	if ( y == 0 )
	{
		printf("\n not possible operation");
	}
	else
	{
		if(x %y == 0)
		{
			printf("\n x is  Divisible by y");
		}
		else
		{
			printf("\n x is not DIvisible by y");
		}
	}
		getch();
}

