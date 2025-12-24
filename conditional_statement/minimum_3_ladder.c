#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b && a<c)
	{
		printf("a is minimum");
	}
	else if(b<c && b<a)
	{
		printf("b is minimum");
	}
	else
	{
		printf("c is minimum");
	}
}
