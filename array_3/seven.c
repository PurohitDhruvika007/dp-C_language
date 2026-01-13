#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("multiplication table of %d = \n",arr[i]);
		for(j=1;j<=10;j++)
		{
			printf("%d X %d = %d\n",arr[i],j,arr[i]*j);
		}
		printf("\n");
	}
}
