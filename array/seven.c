#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r,c;
	printf("enter the row size = ");
	scanf("%d",&r);
	printf("enter the column size = ");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int ans[r][c];
	printf("enter array a elements = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter array b elements = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("array c is = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
}
