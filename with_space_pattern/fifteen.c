#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	for(i='E';i>='A';i--)
	{
		for(j='E';j>i;j--)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
