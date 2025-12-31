#include<stdio.h>
#include<conio.h>
void main()
{
	int a=21,b=9,i=1;
	for(i;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("%d ",b);
			b+=2;
		}
		else
		{
			printf("%d ",a);
		}
	}
}
