#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find max. from 4 using ternary operator.
	int a,b,c,d;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	printf("enter c = ");
	scanf("%d",&c);
	printf("enter d = ");
	scanf("%d",&d);
	
	(a>b)?
	(a>c)?
	(a>d)?printf("a is maximum"):printf("d ie maximum")
	:(c>d)?printf("c is maximum"):printf("d is maximum")
	:(b>c)?(b>d)?printf("b is maximum"):printf("d is maximum")
	:(c>d)?printf("c is maximum"):printf("d is maximum");
	
}
