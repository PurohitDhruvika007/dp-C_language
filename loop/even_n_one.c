#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("enter n = ");
	scanf("%d",&i);
//	while(i>=1)
//	{
//		if(i%2==0)
//		{
//			printf("%d ",i);
//		}
//		i--;
//	}
	
//	do{
//		if(i%2==0)
//		{
//			printf("%d ",i);
//		}
//		i--;
//	}while(i>=1);

	for(i;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	
}
