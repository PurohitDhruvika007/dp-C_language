#include<stdio.h>
#include<conio.h>
void main()
{
	int a=80,b=10,i;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("%d ",b);
			b+=5;
		}
		else
		{
			printf("%d ",a);
			a-=10;
		}
	}
}
