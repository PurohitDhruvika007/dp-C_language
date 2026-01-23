#include<stdio.h>

void arithmatic_menu(int choice,int first,int second)
{
	switch(choice)
	{
		case 1:printf("addition of %d and %d is %d\n\n",first,second,first+second);
		break;
		case 2:printf("substraction of %d and %d is %d\n\n",first,second,first-second);
		break;
		case 3:printf("multiplication of %d and %d is %d\n\n",first,second,first*second);
		break;
		case 4:printf("division of %d and %d is %d\n\n",first,second,first/second);
		break;
		case 5:printf("modulus of %d and %d is %d\n\n",first,second,first%second);
		break;
		default:printf("enter valid choice!!\n\n");
		break;
	}
}
void main()
{
	int i=10;
	while(i>0)
	{
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");	
		printf("Press 0 for the exit\n\n");
		int choice,first,second;
		printf("enter the choice = ");
		scanf("%d",&choice);
		if(choice==0)
		{
			break;
		}
		printf("enter the first number = ");
		scanf("%d",&first);
		printf("enter the second number = ");
		scanf("%d",&second);
		
		arithmatic_menu(choice,first,second);
	}
}
