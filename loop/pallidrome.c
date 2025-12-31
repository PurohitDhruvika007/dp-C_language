#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rev=0,ld;
	printf("enter the num = ");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		ld=temp%10;
		rev=(rev*10)+ld;
		temp=temp/10;
	}
	if(num==rev)
	{
		printf("number is pallidrome");
	}
	else
	{
		printf("number is not pallidrome");
	}
}
