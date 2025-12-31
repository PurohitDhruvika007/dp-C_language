#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,answer;
	printf("press 1 for english\n");
	printf("press 2 for hindi \n");
	printf("press 3 for gujarati \n");
	printf("enter the choice = ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("press 1 to check balance");
			printf("press 2 to check data plan");
			printf("press 3 to talk to customer care");
			printf("enter the choice = ");
			scanf("%d",&answer);
			switch(answer)
			{
				case 1:printf("your balance is 5000");
				break;
				case 2:printf("data plans:\n2000/m\n3000/m etc");
				break;
				case 3:printf("you are connected with custome care");
				break;
				default:printf("invalid input");
			}
		break;
		case 2:
            printf("\n1. Balance Check Kare\n");
            printf("2. Data Plan Dekhe\n");
            printf("3. Customer Care Se Baat Kare\n");
            printf("Apna choice dijiye: ");
            scanf("%d", &answer);

            switch (answer)
            {
                case 1:
                    printf("Aapka balance Rs.5000 hai");
                    break;
                case 2:
                    printf("Data Plans:\nRs.2000/month\nRs.3000/month");
                    break;
                case 3:
                    printf("Aap Customer Care se jude hue hain");
                    break;
                default:
                    printf("Galat option");
            }
            break;

        case 3:
            printf("\n1. Balance Check Karo\n");
            printf("2. Data Plan Jovo\n");
            printf("3. Customer Care Sathe Vat Karo\n");
            printf("Tamaru choice aapo: ");
            scanf("%d", &answer);

            switch (answer)
            {
                case 1:
                    printf("Tamaro balance Rs.5000 chhe");
                    break;
                case 2:
                    printf("Data Plans:\nRs.2000/month\nRs.3000/month");
                    break;
                case 3:
                    printf("Tame Customer Care sathe connected chho");
                    break;
                default:
                    printf("Invalid option");
            }
            break;
            default:printf("invalued choice");
	}
}
