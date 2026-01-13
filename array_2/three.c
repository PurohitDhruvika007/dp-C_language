#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("enter the array size = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("the squares are = ");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]*arr[i]);
	}
}
