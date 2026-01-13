#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,root;
	printf("enter n = ");
	scanf("%d",&n);
	for(i=0;i*i<=n;i++)
	{
		root=i;
	}
	printf("square root of %d is %d",n,root);
}
