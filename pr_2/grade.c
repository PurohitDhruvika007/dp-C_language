#include<stdio.h>
#include<conio.h>
void main()
{
	int score;
	char grade;
	printf("enter the score = ");
	scanf("%d",&score);
	(score<=100 && score>90)?grade='A':
		(score<=90 && score>80)?grade='B':
			(score<=80 && score>60)?grade='C':
				(score<=60 && score>35)?grade='D':
					(score<=35 && score>=0)?grade='F':
					printf("enter valid input!");
				
				
	switch(grade)
	{
		case 'A':printf("Your grade is A. Excellent work!");
		break;
		case 'B':printf("Your grade is B. Well done.");
		break;
		case 'C':printf("Your grade is C. Good job.");
		break;
		case 'D':printf("Your grade is D. You passed, but you could do better.");
		break;
		case 'F':printf("Your grade is F. sorry,you failed.");
	}
	
	if(grade>='A' && grade<='D')
	{
		printf("\nyou are eligible for the next level.");
	}
	else
	{
		printf("\nplease try again next time.");
	}
}