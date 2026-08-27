#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e,z;
	clrscr();
	printf("\n Enter the mark of maths a : ");
	scanf("%d",&a);

	printf("\n Enter the mark of science b :");
	scanf("%d",&b);

	printf("\n Enter the mark of hindi c : ");
	scanf("%d",&c);

	printf("\n Enter the mark of english d : ");
	scanf("%d",&d);

	printf("\n Enter the mark of gujarati e : ");
	scanf("%d",&e);

	z=a+b+c+d+e;
	printf("\n %d is the answer" ,z);
	getch();

}
