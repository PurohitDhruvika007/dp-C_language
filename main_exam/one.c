#include<stdio.h>

void main()
{
	int maths,science,english,hindi,gujarati;
	float avg;
	printf("enter marks of math = ");
	scanf("%d",&maths);
	printf("enter marks of science = ");
	scanf("%d",&science);
	printf("enter marks of english = ");
	scanf("%d",&english);
	printf("enter marks of hindi = ");
	scanf("%d",&hindi);
	printf("enter marks of gujarati = ");
	scanf("%d",&gujarati);
	
	if(maths>100 || science>100 || english>100 || hindi>100 || gujarati>100)
	{
		printf("marks should be less than 100");
	}
	else
	{
		avg = (maths+science+english+hindi+gujarati)/5;
		printf("average marks is %.2f\n",avg);
		if(avg<0 || avg>100)
		{
			printf("enter valid input");
		}
		else if(avg>90 && avg<=100)
		{
			printf("grade is A+");
		}
		else if(avg>80 && avg<=90)
		{
			printf("grade is A");
		}
		else if(avg>60 && avg<=80)
		{
			printf("grade is B");
		}
		else if(avg>40 && avg<=60)
		{
			printf("grade is D");
		}
		else if(avg>33.33 && avg<=40 )
		{
			printf("grade is E");
		}
		else
		{
			printf("you'r fail, try next time");
		}
	}
}
