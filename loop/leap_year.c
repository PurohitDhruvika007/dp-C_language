#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2000;
	printf("leap years :- ");
//	for(i;i<=3000;i++)
//	{
//		if(i%4==0)
//		{
//			printf("%d ",i);
//		}
//		
//	}
//	while(i<=3000)
//	{
//		if(i%4==0)
//		{
//			printf("%d ",i);
//		}
//		i++;
//	}

	do{
		if(i%4==0)
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=3000);
}
