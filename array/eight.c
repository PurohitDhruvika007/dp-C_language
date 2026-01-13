#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,sum=0;
	printf("enter row : ");
	scanf("%d",&r);
	printf("enter column : ");
	scanf("%d",&c);
	int arr[r][j];
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
			if(i==j)
			{
				sum+=arr[i][j];
			}
		}
	}
	printf("sum of all diagonal elements is %d",sum);
}
