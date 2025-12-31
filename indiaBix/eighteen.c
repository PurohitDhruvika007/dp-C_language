#include<stdio.h>
#include<conio.h>
void main()
{
	float num=5.2;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",num);
		num-=0.4;
	}
}
