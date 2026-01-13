#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,length=0;
	printf("enter the size of array = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
		length++;
	}
	printf("length of array is %d",length);
}
