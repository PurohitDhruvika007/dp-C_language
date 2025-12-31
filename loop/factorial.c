#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fact=1;
	printf("enter n = ");
	scanf("%d",&n);
//	while(n>=1)
//	{
//		fact=fact*n;
//		n--;
//	}
//	do
//	{
//		fact=fact*n;
//		n--;
//	}while(n>=1);

	for(n;n>=1;n--)
	{
		fact=fact*n;
	}
	printf("factorial is %d",fact);
}
