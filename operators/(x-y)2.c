#include<stdio.h>
#include<conio.h>
void main()
{
//	2.WAP to find a the answer given formula (x-y)2.
	int x,y;
	printf("enter x = ");
	scanf("%d",&x);
	printf("enter y = ");
	scanf("%d",&y);
	int ans=(x*x)-(2*x*y)+(y*y);
	printf("answer of (x-y)2 is %d",ans);
}
