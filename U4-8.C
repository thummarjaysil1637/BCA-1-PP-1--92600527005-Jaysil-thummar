// 8. Write a program to print 0 1 1 2 3 5 8 13....n

#include<stdio.h>
#include<conio.h>

void main()
{
    int n1=0,n2=1,s,n;
    clrscr();

    s=n1+n2;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("%d %d %d",n1,n2,s);

    while(s<=n)
    {
	n1=n2;
	n2=s;
	s=n1+n2;
	if(s>n)
	{
		break;
	}
	printf(" %d" ,s);


    }
    getch();
}