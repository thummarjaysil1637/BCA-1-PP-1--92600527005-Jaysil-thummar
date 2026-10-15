// 4. Write a program that Print 100 99 98... 90

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;
    clrscr();

    printf("using for loop \n\n");
    for (i = 100; i >= 90; i--)
    {
        printf("%d ", i);
    }
    printf("\n\n using while loop \n\n");
    j=100;
	 while(j>=90)
	 {
	 printf("%d\t",j);
	 j=j--;
	}
    getch();
}