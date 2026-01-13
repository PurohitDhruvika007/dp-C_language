#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j,r,c;
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
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
			sum+=arr[i][j];	
			}
		}
	}
	printf("sum of all fiagonal element is %d",sum);
}
