#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,max;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maximum element from the array is %d",max);
}
