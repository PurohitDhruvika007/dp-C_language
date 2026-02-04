#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="hello world";
	printf("string is %s\n",str);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("length of string is %d",i);
	return 0;
}
