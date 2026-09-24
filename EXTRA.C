#include<stdio.h>
#include<conio.h>

void main()

{

	int age;
	clrscr();
	printf("Enter Age: ");
	scanf("%d",&age);
	(age>=18)?printf("Can Vote"):printf("Can't Vote");
	getch();
}

