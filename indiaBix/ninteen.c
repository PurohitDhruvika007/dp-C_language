#include<stdio.h>
#include<conio.h>
void main()
{
//	8, 6, 9, 23, 87 , ...
	int num=8;
	int i=1;
	for(i;i<=10;i++)
	{
		printf("%d ",num);
		num= num*i-(i+1);
	}
}
