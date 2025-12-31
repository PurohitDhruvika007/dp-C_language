#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find if a given no. is neutral or not using
//ladder if else.
	int num;
	printf("enter num = ");
	scanf("%d",&num);
	if(num>0 || num<0)
	{
		printf("number is not neutral");
	}
	else if(num==0)
	{
		printf("number is neutral");
	}
}
