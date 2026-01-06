#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("enter the number = ");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		sum+=1;
	}
	printf("total number of digits = %d",sum);
}
