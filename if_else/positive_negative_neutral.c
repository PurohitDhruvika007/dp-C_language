#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP TO CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING NESTED IF ELSE.
	int num;
	printf("enter num = ");
	scanf("%d",&num);
	if(num>=0)
	{
		if(num==0)
		{
			printf("number is neutral");
		}
		else
		{
			printf("number is positive");
		}
	}
	else
	{
		printf("number is negative");
	}
}
