#include<stdio.h>
#include<conio.h>
void main()
{
	float num=1.5;
	int i=1;
	for(i;i<=10;i++)
	{
		printf("%.1f ",num);
		num+=0.8;
	}
}
