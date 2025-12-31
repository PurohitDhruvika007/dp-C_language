#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Simple interest.
	int SI,p,r,t;
	printf("enter the principal = ");
	scanf("%d",&p);
	printf("enter the rate = ");
	scanf("%d",&r);
	printf("enter the time = ");
	scanf("%d",&t);
	SI=(p*r*t)/100;
	printf("simple interest is %d",SI);
}
