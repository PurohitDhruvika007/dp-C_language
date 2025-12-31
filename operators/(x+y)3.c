#include<stdio.h>
#include<conio.h>
void main()
{
//	3.WAP to find a the answer given formula (x+y)3.
	int x,y;
	printf("enter x = ");
	scanf("%d",&x);
	printf("enter y = ");
	scanf("%d",&y);
	int ans = (x*x*x)+(3*(x*x)*y)+(3*x*(y*y))+(y*y*y);
	printf("answer of (x+y)3 is %d",ans);
}
