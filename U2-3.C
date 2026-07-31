//WAP to display Simple Interest
#include<stdio.h>
#include<conio.h>

void main()

{
	float pa,r,y,si;
	int year;
	clrscr();
	printf("Enter Principal Amount:");
	scanf("%f",&pa);

	printf("Enter Rate of Amount:");
	scanf("%f",r);

	printf("Enter Number of Year :");
	scanf("%f",&y);

	si = (pa*r*y) /100;
	printf("*******************************");
	printf("\n*Principal Amount : %.2f",pa);
	printf("\n*Rate of Amount   :   %.2f",r);
	printf("\n*Number of Year   :   %.2f",y);
	printf("\n*******************************");
	printf("\n simple interest is %f",si);
	getch();
}








