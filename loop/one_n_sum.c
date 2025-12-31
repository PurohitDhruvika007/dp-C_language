#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	int n,sum=0;
	printf("enter n = ");
	scanf("%d",&n);
//	while(i<=n)
//	{
//		sum=sum+i;
//		i++;
//	}
	
	
//	do{
//		sum=sum+i;
//		i++;
//	}while(i<=n);
//
	for(i;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum from 1 to n = %d",sum);
}

