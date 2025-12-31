#include<stdio.h>
#include<conio.h>
void main()
{
	int celsius;
	printf("enter tempreture in celsius = ");
	scanf("%d",&celsius);
	float fahrenheit=(1.8*celsius)+32;
	printf("celsius to fahrenheit convert value is %f",fahrenheit);
}
