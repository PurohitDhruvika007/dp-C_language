#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Swap two variables (without using third variable)
	int a,b;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a after swapping is %d\n",a);
	printf("b after swapping is %d",b);
	
	
}
