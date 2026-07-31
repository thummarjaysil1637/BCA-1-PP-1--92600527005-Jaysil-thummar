//WAP which calculates area of rectangle.
#include<stdio.h>
#include<stdio.h>

void main()

{
	int l,b,a;
	clrscr();
	printf("\n Enter value of l : ");
	scanf("%d",&l);

	printf("\n Enter value of b : ");
	scanf("%d",&b);
	a = l*b;

	printf("\n Area of rectangle is : %d" ,a);
	getch();
}