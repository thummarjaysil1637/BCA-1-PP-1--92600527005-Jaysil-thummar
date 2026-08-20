#include<stdio.h>
#include<conio.h>

void main()

{

	float salary,hra,ta,da,pf,gross salary;
	clrscr();

	printf("\ Enter salary :");
	scanf("%f",&salary);

	if (salary>=5000)

		{
			hra=(5.0/100)*salary;
			ta=(5.0/100)*salary;
			da=(5.0/100)*salary;
			pf=(5.0/100)*salary;
		}

		else

		{
			hra=(4.0/100)*salary;
			ta=(5.0/100)*salary;
			da=(3.0/100)*salary;
			pf=(4.0/100)*salary;

		}
		grosss_salary = salary+hra+ta+da-pf;

		printf("\ salary =%2f",salary);
		printf("\ hra =%2f",hra);
		printf("\ ta =%2f",ta);
		printf("\ da =%2f",da);
		printf("\ pf =%2f",pf);
		printf("\ gross salary =%2f",gross salaey);

		getch();
}













