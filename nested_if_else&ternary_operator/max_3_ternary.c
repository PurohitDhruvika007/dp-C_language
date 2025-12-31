#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find max. from 3 using ternary operator.
	int a,b,c;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	printf("enter c = ");
	scanf("%d",&c);
	(a>b)?(a>c)?printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
	
}
