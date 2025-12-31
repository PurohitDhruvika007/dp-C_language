#include<stdio.h>
#include<conio.h>
void main()
{
	int a=8,b=22,i=1;
	for(i;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("%d ",b);
			b+=6;
		}
		else
		{
			printf("%d ",a);
		}
	}
}
