#include<stdio.h>
#include<conio.h>
void main()
{
	int num=14;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d ",num);
		if(i%2==0)
		{
			
		num-=8;
		}
		else
		{
			num+=num;
		}
		
	}
}
