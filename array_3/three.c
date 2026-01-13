#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array A elements = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("enter array B elements = \n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("array C is = \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]+b[i]);
		
	}
}
