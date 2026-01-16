#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,max;
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
	max=arr[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
		}
	}
	printf("the largest element is %d",max);
	
}
