#include<stdio.h>
#include<conio.h>
void main()
{
	int num=3;
	int i=1;
	for(i;i<=10;i++)
	{
		printf("%d ",num);
		if(i%2==0)
		{
			num+=3;
		}
		else
		{
			num+=1;
		}
	}
}
