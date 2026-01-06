#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(((j==1||j==5)&&(i==1||i==2||i==3||i==4))||((j==2||j==4)&&(i==5))||(j==3&&i==6))
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
