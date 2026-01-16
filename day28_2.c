#include <stdio.h>
#include <string.h>

int main()
{
    int pin = 0;
    int balance = 0;

    FILE *fp;
    fp = fopen("logindata.txt", "r");

    fscanf(fp, "%d", &pin);
    fscanf(fp, "%d", &balance);
    int max = 3;
    for (int i = 1; i <= max; i++)
    {
        printf("Enter pin: ");
        int inputpin = 0;
        scanf("%d", &inputpin);
        if (pin == inputpin)
        {
            printf("Access granted\n");
            printf("Your current account balance is $%d\n", balance);
            printf("Choose operation(D/W): ");
            char op;
            scanf(" %c", &op);
            if (op == 'D' || op == 'd')
            {
                printf("Enter amount you wish to deposit: ");
                int amount = 0;
                scanf("%d", &amount);
                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                    break;
                }
                int new_balance = 0;
                new_balance = amount + balance;
                printf("\033[32m");
                printf("You have succesfully deposited $%d into your account\n", amount);
                printf("\033[0m");
                printf("You new balance is $%d\n", new_balance);
                fp = fopen("logindata.txt", "w");
                if (fp == NULL)
                {
                    return 1;
                }

                fprintf(fp, "%d\n", pin);
                fprintf(fp, "%d\n", new_balance);
                fclose(fp);
            }
            else if (op == 'W' || op == 'w')
            {
                if (balance <= 0)
                {
                    printf("Insufficient Funds\n");
                    break;
                }
                printf("Enter amount you wish to withdraw: ");
                int amount = 0;
                scanf("%d", &amount);
                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                    break;
                }
                if (amount > balance)
                {
                    printf("Invalid amount\n");
                    break;
                }
                int new_balance = 0;
                new_balance = balance - amount;
                printf("\033[32m");
                printf("You have succesfully withdrawn %d from your account\n", amount);
                printf("\033[0m");
                printf("Your new balance is $%d\n", new_balance);
                fp = fopen("logindata.txt", "w");
                if (fp == NULL)
                {
                    return 1;
                }

                fprintf(fp, "%d\n", pin);
                fprintf(fp, "%d\n", new_balance);
                fclose(fp);
            }
            else
            {
                printf("Invalid operation\n");
            }
        }
        else
        {
            printf("Incorrect pin\n");
            if (max == i)
            {
                printf("LOCKED: too many incorrect attempts\n");
                break;
            }
        }
    }

    fclose(fp);

    return 0;
}