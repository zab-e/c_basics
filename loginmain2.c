#include <stdio.h>
#include <string.h>

struct user {
    char username[20];
    char password[20];

};
void run_code() {

    char userinput1[20];
    char userinput2[20];
    int max = 3;

    struct user user1;

    strcpy(user1.username, "user");
    strcpy(user1.password, "Pass");

    printf("Welcome back\n");
    printf("Enter username: ");
    fgets(userinput1,sizeof(userinput1), stdin);
    userinput1[strcspn(userinput1, "\n")] = '\0';
    if (strcmp(user1.username,userinput1) == 0) {
        for (int i = 1; i <= max; i++) {
            printf("Enter password: ");
            fgets(userinput2,sizeof(userinput2), stdin);
            userinput2[strcspn(userinput2, "\n")] = '\0';        
                if (strcmp(user1.password,userinput2) == 0) {
                printf("Access granted\n");
                break;
            } else {
                printf("Incorrect password\n");
                if (i == max) {
                    printf("LOCKED\n");
                    break;
                }
            }

        }
        
    }
    else {
        printf("USER NOT FOUND\n");
    }


}

int main () {
    run_code();
    return 0;
}