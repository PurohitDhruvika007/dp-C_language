#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the number of elements = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("negative elements from an array = ");
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			printf("%d, ",arr[i]);
		}
	}
}
