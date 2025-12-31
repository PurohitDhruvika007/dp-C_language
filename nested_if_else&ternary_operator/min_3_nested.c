#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find min. from given 3 no. using nested if else.
	int a,b,c;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	printf("enter c = ");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
}
