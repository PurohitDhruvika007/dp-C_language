#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,sum=0;
	printf("enter the row = ");
	scanf("%d",&r);
	printf("enter the column = ");
	scanf("%d",&c);
	int arr[r][c];
	float avg;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=arr[i][j];
		}
	}
	avg=sum/(r*c);
	printf("average value of all elements are %.2f",avg);
}
