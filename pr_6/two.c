#include<stdio.h>
#include<string.h>
void main()
{
	char str[25];
	printf("enter the string = ");
	scanf("%s",str);
	int n = strlen(str);
	int i,j;
	printf("Frequency of each letter is :\n");
	for(i=0;i<n;i++)
	{
		if(str[i]=='\0')
			continue;
		int count = 1;
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				count++;
				str[j]='\0';
			}
		}
		printf("%c => %d\n",str[i],count);
	}
}
