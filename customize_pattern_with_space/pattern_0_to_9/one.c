#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3||i==7||(j==2&&i==2)||(j==1&&i==3))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}
