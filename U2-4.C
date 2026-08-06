//WAP to display Area of A Circle
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,r;
	clrscr();
	printf("\n enter the value of r :");
	scanf("%d",&r);


	a=(3.14*r*r);
	printf("\n area of circle is : %d",a);
	getch();
}


