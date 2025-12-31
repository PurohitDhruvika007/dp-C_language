#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	int n;
	printf("enter n = ");
	scanf("%d",&n);
//	while(i<=n)
//	{
//		if(i%2==1)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}
	
//	do{
//		if(i%2==1)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}while(i<=n);
//
	for(i;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
	
}
