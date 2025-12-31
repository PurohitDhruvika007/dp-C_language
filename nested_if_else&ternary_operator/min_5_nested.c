#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find min. from given 5 no. using nested if else.
	int a,b,c,d,e;
	printf("enter a = ");
	scanf("%d",&a);
	printf("enter b = ");
	scanf("%d",&b);
	printf("enter c = ");
	scanf("%d",&c);
	printf("enter d = ");
	scanf("%d",&d);
	printf("enter e = ");
	scanf("%d",&e);
	
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("a is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					printf("b is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
}
