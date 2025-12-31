#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	printf("enter n = ");
	scanf("%d",&n);
//	while(i<=10)
//	{
//		printf("%d X %d = %d\n",n,i,n*i);
//		i++;
//	}
//	do
//	{
//		printf("%d X %d = %d\n",n,i,n*i);
//		i++;
//	}while(i<=10);

	for(i;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
	
}
