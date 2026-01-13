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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==1||j==1||i==r-1||j==c-1)
			{
				sum+=arr[i][j];
			}
		}
	}
	printf("sum of all boundary element is %d",sum);
}
