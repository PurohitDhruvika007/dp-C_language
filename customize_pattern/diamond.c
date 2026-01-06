#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,c1=10,c2=10;
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{
			if(j==c1 || j==c2)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		if(i<10)
		{
			c1--;
			c2++;
		}
		else
		{
			c1++;
			c2--;
		}
		printf("\n");
	}
}
