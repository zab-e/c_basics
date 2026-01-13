#include <stdio.h>
#include <string.h>

struct user {
    char username[50];
    char password[50];


};

void run_code () {
    int max = 3;

    char userinput1[20];
    char userinput2[20];


    struct user user[3];
   
    // usernames
    strcpy(user[0].username, "user");
    strcpy(user[1].username, "Admin");
    strcpy(user[2].username, "guest");
    // passwords
    strcpy(user[0].password, "User2009");
    strcpy(user[1].password, "Admin2009");
    strcpy(user[2].password, "guest2009");

    printf("Welcome back\n");
    printf("Enter username: ");
    fgets(userinput1,sizeof(userinput1), stdin);
    userinput1[strcspn(userinput1, "\n")] = 0;
    if (strcmp(userinput1,user[0].username) == 0 || strcmp(userinput1,user[1].username) == 0 || strcmp(userinput1,user[2].username) == 0  )  {
        for (int i = 1; i <= max; i++) {
            if (strcmp(userinput1,user[0].username) == 0) {
                printf("Enter password: ");
                fgets(userinput2,sizeof(userinput2), stdin);
                userinput2[strcspn(userinput2, "\n")] = '\0';
                if (strcmp(userinput2,user[0].password) == 0) {
                    printf("Acess granted\n");
                    break;
                } else {
                    if (strcmp(userinput2,user[0].password) != 0) {
                        printf("Incorrect password\n");
                    } 
                    if (i == max) {
                        printf("LOCKED\n");
                        break;
                    }

                } 

            } else if (strcmp(userinput1,user[1].username) == 0) {
                printf("Enter password: ");
                fgets(userinput2,sizeof(userinput2), stdin);
                userinput2[strcspn(userinput2, "\n")] = '\0';
                if (strcmp(userinput2,user[1].password) == 0) {
                    printf("Acess granted\n");
                    break;
                } else {
                    if (strcmp(userinput2,user[1].password) != 0) {
                        printf("Incorrect password\n");
                    } 
                    if (i == max) {
                        printf("LOCKED\n");
                        break;
                    }
                }



            } else if (strcmp(userinput1,user[2].username) == 0) {
                printf("Enter password: ");
                fgets(userinput2,sizeof(userinput2), stdin);
                userinput2[strcspn(userinput2, "\n")] = '\0';
                if (strcmp(userinput2,user[2].password) == 0) {
                    printf("Acess granted\n");
                    break;
                }
                else {
                    if (strcmp(userinput2,user[2].password) != 0) {
                        printf("Incorrect password\n");
                    } 
                    if (i == max) {
                        printf("LOCKED\n");
                        break;
                    }
                }


            }
            



        }
        



    } else {
        if (strcmp(userinput1,user[0].username) != 0 || strcmp(userinput1,user[1].username) != 0 || strcmp(userinput1,user[2].username) != 0  ) {
        printf("USER NOT FOUND\n");
        return;

        }

    }


}

int main () {
    run_code();
    return 0;
}