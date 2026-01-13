#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,j;
	printf("enter the size of a = ");
	scanf("%d",&a);
	int arr1[a];
	for(i=0;i<a;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	printf("enter the size of b = ");
	scanf("%d",&b);
	int arr2[b];
	for(i=0;i<b;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	c=a+b;
	int arr3[c];
	printf("array c is = ");
	for(i=0;i<a;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<b;j++)
	{
		arr3[i+j]=arr2[j];
	}
	for(i=0;i<c;i++)
	{
		printf("%d,",arr3[i]);
	}
}
