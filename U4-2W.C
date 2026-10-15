
// 2. Write a program that Print 2 4 6 ..... 20

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;
    clrscr();
    printf("\n use  loop\n");
    for (i = 1; i <= 20; i++)
	 {
	 printf("%d\t ",i);
	 }
	 printf("\n use  whileloop\n");
	 j=1;
	 while(j<=20)
	 {
	 printf("%d\t",j);
	 j++;
	}


    getch();
}