#include <stdio.h>
#include <string.h>

void run_code() {
    char pass[30] = "Admin";
    char userpass[30];
    int max = 3;


    printf("Welcome back\n");
    
    for (int i = 1; i <= max; i++) {
        printf("Enter password: ");
        fgets(userpass, sizeof(userpass) , stdin); // getting the password
        userpass[strcspn(userpass, "\n")] = 0; // removing new line
       if (strcmp(userpass,pass) == 0) {
        printf("Access granted\n");
        break;
       } else {
        printf("Access denied\n");
        if (i == max) {
            printf("Locked\n");
            break;
        }
       
       }
        


}
}

int main () {
    run_code();
    return 0;
}