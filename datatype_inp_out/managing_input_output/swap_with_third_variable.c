#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Swap two variables (with sing third variable).
	int a,b,c;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a after swapping is %d\n",a);
	printf("b after swapping is %d",b);
}
