#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,upd,del,ele;
	printf("enter the number of array size = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("array before deletion and updation = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
}
	printf("\n");
	printf("on which index you want to update value = ");
	scanf("%d",&upd);
	printf("which value you want to update = ");
	scanf("%d",&ele);
	arr[upd]=ele;
	printf("on which index you want to delete value = ");
	scanf("%d",&del);
	printf("array after deletion and updation = ");
	for(i=0;i<n;i++)
	{
		if(i!=del)
		{
			printf("%d ",arr[i]);
		}
	}
}
