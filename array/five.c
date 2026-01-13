#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp;
	printf("enter number of elements = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("original array = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("\nreversed array = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
