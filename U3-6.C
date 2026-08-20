#include<stdio.h>
#include<conio.h>

void main()

{

	float salary,hra,ta,da,pf,grosssalary;
	clrscr();

	printf("\n Enter salary :");
	scanf("%f",&salary);

	printf("\n Enter hra :");
	scanf("%f",&hra);

	printf("\n Enter ta :");
	scanf("%f",&ta);

	printf("\n Enter da :");
	scanf("%f",&da);

	printf("\n Enter pf :");
	scanf("%f",&pf);

	if (salary>=5000)

		{
			hra=(hra/100)*salary;
			ta=(ta/100)*salary;
			da=(da/100)*salary;
			pf=(pf/100)*salary;
		}

		else

		{
			hra=(hra/100)*salary;
			ta=(ta/100)*salary;
			da=(da/100)*salary;
			pf=(pf/100)*salary;

		}
		grosssalary = salary+hra+ta+da-pf;

		printf("\n salary =%2f",salary);
		printf("\n hra =%2f",hra);
		printf("\n ta =%2f",ta);
		printf("\n da =%2f",da);
		printf("\n pf =%2f",pf);
		printf("\n gross salary =%2f",grosssalary);

		getch();
}













