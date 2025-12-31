#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter first angle = ");
	scanf("%d",&a);
	printf("enter second angle = ");
	scanf("%d",&b);
	c=180-(a+b);
	printf("third angle is %d",c);
}
