#include<stdio.h>
#include<conio.h>
void main()
{
//	WAP to Find max. from 5 using ternary operator.
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
	
	(a>b)?
	(a>c)?
	(a>d)?
	(a>e)?printf("a is maximum"):
		printf("e is maximum")
		:(d>e)?printf("d is maximum"):
			printf("e is maximum")
			:(c>d)?(c>e)?printf("c is maximum"):
				printf("e is maximum"):
					(d>e)?printf("d is maximum"):
						printf("e is maximum")
						:(b>c)?(b>d)?(b>e)?printf("b is maximum"):
							printf("e is maximum"):(d>e)?printf("d is maximum"):
								printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):
									printf("e is maximum"):(d>e)?printf("d is maximum"):
										printf("e is maximum");
	
}
