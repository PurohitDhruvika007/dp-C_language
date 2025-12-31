#include<stdio.h>
#include<conio.h>
int main()
{
//	WAP to perform all arithmetic operator such as +, -, *, /, %
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	
	printf("addition : %d\n",a+b);
	printf("substraction : %d\n",a-b);
	printf("multiplication : %d\n",a*b);
	printf("division : %d\n",a/b);
	printf("reminder : %d\n",a%b);
	return 0;
}
