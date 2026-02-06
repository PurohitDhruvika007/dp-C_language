#include<stdio.h>

void even_element(int *ptr,int n)
{
	int i;
	printf("even elements of 1D array are : ");
	for(i=0;i<n;i++)
	{
		if(*ptr %2==0)
		{
			printf("%d, ",*ptr);
		}
		ptr++;
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
	even_element(&arr,n);
}
