#include<stdio.h>
#include<conio.h>
void main()
{
	int i,min,n;
	printf("enter the n = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("minimum from 1D array is %d",min);
	
}
