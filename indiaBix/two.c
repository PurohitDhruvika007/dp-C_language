#include<stdio.h>
#include<conio.h>
void main()
{
	int num=7;
	int i=1;
	for (1;i<=10;i++)
	{
		printf("%d ",num);
		if(i%2==0)
	{
		num-=2;
	}
	else
	{
		num+=3;
	}
	}
}
