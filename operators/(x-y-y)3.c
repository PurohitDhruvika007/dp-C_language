#include<stdio.h>
#include<conio.h>
void main()
{
//	5.WAP to find a the answer given formula (x-y-z)3.
	int x,y,z;
	printf("enter x = ");
	scanf("%d",&x);
	printf("enter y = ");
	scanf("%d",&y);
	printf("enter z = ");
	scanf("%d",&z);
	int ans = (x*x*x)-(y*y*y)-(z*z*z)-(3*x*x*y)+(3*x*y*y)-(3*y*y*z)-(3*y*z*z)+(3*x*z*z)-(3*x*x*z)+(6*x*y*z);
	printf("answer of (x-y-z)3 is %d",ans);
}
