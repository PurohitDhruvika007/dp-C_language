#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	printf("enter the name = ");
	scanf("%s",name);
	int length = strlen(name);
	int i,j;
	char rev[20];
	for(i=length-1,j=0;i>=0;i--,j++)
	{
		rev[j]=name[i];
	}
	
	
	int ans = strcmp(name,rev);
	if(ans==0)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}
