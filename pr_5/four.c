#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j,r_no,c_no,r_sum=0,c_sum=0;
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
	printf("enter the row number = ");
	scanf("%d",&r_no);
	printf("elements of row %d = ",r_no);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==r_no)
			{
				printf("%d, ",arr[i][j]);
				r_sum+=arr[i][j];
			}
		}
	}
	printf("the sum of row %d = %d\n",r_no,r_sum);
	printf("enter the column number = ");
	scanf("%d",&c_no);
	printf("elements of column %d = ",c_no);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c_no)
			{
				printf("%d, ",arr[i][j]);
				c_sum+=arr[i][j];
			}
		}
	}
	printf("sum of column %d = %d\n",c_no,c_sum);
}
