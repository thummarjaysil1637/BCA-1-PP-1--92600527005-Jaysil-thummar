// 5. Write a program that Print 200 198 196 ... 180

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;
    clrscr();

    printf("using for loop \n\n");
    for (i = 200; i >= 180; i--) {
        printf("%d ", i);
    }
    printf("\n\nusing while ploop \n\n");
     j=200;
	 while(j>=180)
    {
	 printf("%d\t",j);
	 j=j--;
	}
    getch();
}