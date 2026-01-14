#include <stdio.h>
#include <string.h>
#define green "\033[92m"
#define reset "\033[0m"

int main()
{
    FILE *fp2 = fopen("bank.txt", "r");
    if (fp2 == NULL) {
        perror("Error opening file"); // detailed error
        return 1;
    }

    char username[20];
    int pin = 0;
    int balance = 0;
    char inputuser[20];

    // Remove '&' for the string
    fscanf(fp2, "%s", username);
    fscanf(fp2, "%d", &pin);
    fscanf(fp2, "%d", &balance);
    
    // Close file immediately if we have the data
    fclose(fp2); 

    int max = 3;
    int login_success = 0; // Flag to track success

    for (int i = 1; i <= max; i++)
    {
        printf("\nAttempt %d of %d\n", i, max);
        printf("Enter username: ");
        
        if (fgets(inputuser, sizeof(inputuser), stdin) == NULL) break;
        inputuser[strcspn(inputuser, "\n")] = '\0';

        if (strcmp(username, inputuser) == 0)
        {
            int inputpin = 0;
            printf("Enter pin: ");
            scanf("%d", &inputpin);
            
            // CLEAR THE BUFFER!
            while ((getchar()) != '\n'); 

            if (inputpin == pin)
            {
                login_success = 1; // Mark as successful
                char op;
                printf("Choose operation (D/W): ");
                scanf(" %c", &op); // The space before %c skips whitespace

                int amount = 0;
                
                if (op == 'D' || op == 'd')
                {
                    printf("Enter amount to deposit: ");
                    scanf("%d", &amount);
                    if (amount <= 0) {
                         printf("Invalid amount.\n");
                    } else {
                        balance += amount;
                        printf(green "Deposited $%d. New balance: $%d\n" reset, amount, balance);
                    }
                }
                else if (op == 'W' || op == 'w')
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%d", &amount);
                    
                    if (amount <= 0) {
                        printf("Invalid amount.\n");
                    }
                    else if (amount > balance) {
                        printf("Insufficient funds. You have $%d.\n", balance);
                    } 
                    else {
                        balance -= amount;
                        printf(green "Withdrawn $%d. New balance: $%d\n" reset, amount, balance);
                    }
                }
                else {
                    printf("Invalid operation.\n");
                }
                // Break the loop because we finished the transaction
                break; 
            }
            else
            {
                printf("Invalid PIN.\n");
                // Do NOT break here. Let the loop continue to give another try.
            }
        }
        else
        {
            printf("USER NOT FOUND\n");
            // Do NOT return 0 here. Let them try again.
        }
    }

    if (login_success == 0) {
        printf("\nAccount locked due to too many failed attempts.\n");
    }

    return 0;
}