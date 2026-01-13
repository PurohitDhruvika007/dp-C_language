#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r,c,sum=0;
	printf("enter the row = ");
	scanf("%d",&r);
	printf("enter the column = ");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	float avg;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=arr[i][j];
		}
	}
	avg=sum/(r*c);
	printf("average of all elements of array is %.2f",avg);
}
