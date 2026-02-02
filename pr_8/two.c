#include<stdio.h>
#include<conio.h>
void cube_array(int *ptr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",(*ptr)*(*ptr)*(*ptr));
			ptr++;
		}
		printf("\n");
	}
}
void main()
{
	int n,i,j;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	cube_array(&arr,n);
}
