#include<stdio.h>
#include<conio.h>
void main()
{
	int salary,hra,da,ta;
	printf("enter salary = ");
	scanf("%d",&salary);
	printf("enter HRA = ");
	scanf("%d",&hra);
	printf("enter DA = ");
	scanf("%d",&da);
	printf("enter TA = ");
	scanf("%d",&ta);
	
	int HRA=(salary*hra)/100;
	int DA=(salary*da)/100;
	int TA=(salary*ta)/100;
	
	int gross_salary=salary+HRA+DA+TA;
	
	printf("gross salary = %d",gross_salary);
}
