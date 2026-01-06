#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=6;j++)
		{
			if((j==1&&(i==2||i==3||i==4||i==5||i==6||i==7))||((j==2||j==3)&&(i==1||i==4))||(j==4&&(i==1||i==3||i==5))||(j==5&&(i==2||i==6))||(j==6&&i==7))
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
