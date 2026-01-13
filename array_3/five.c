#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("sum of all elements is %d",sum);
	
}
