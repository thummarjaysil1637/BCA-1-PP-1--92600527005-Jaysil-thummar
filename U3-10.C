#include<stdio.h>
#include<conio.h>

void main()

{
	char x;
	clrscr();
	printf("\n Enter Any Character : ");
	scanf("%c",&x);

	printf("\n Input Character is : %c" ,x-32);
	printf("\n ASCII code is : %d" ,x-32);
	getch();
}