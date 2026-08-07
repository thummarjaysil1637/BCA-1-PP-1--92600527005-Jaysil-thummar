#include<stdio.h>

void main()
{
	int A,B;
	clrscr();
	printf("\n Enter value of A: ");
	scanf("%d", &A);

	printf("\n Enter value of B: ");
	scanf("%d", &B);
	if (A==B)
	{
		printf("\n Both are same");
	}
	else
	{
		printf("\nBoth number not  equal");
		if(A>B)

		{
			printf("\n minimum is A ");
			printf("\n Square is A %d",A*A);
		}
		else
		{
			printf("\n minimum is B ");
			printf("\n Square is B= %d",B*B);
		}
	}
	getch();


}
