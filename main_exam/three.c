#include<stdio.h>

void odd_elements(int arr[],int n)
{
	int i;
	printf("odd elements of 1D array are = ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d, ",arr[i]);
		}
	}
}

void main()
{
	int n,i;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	odd_elements(arr,n);
}
