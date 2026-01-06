#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ld;
	printf("enter the number = ");
	scanf("%d",&n);
	ld=n%10;
	while(n>9)
	{
		n=n/10;
	}
	printf("sum of first and last digit is %d",ld+n);
}
