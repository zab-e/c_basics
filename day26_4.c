#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool can_login(bool pw_ok, bool user_ok);

void run_code(void) {
    bool pw_ok = false;
    bool user_ok = false;

    char username[] = "Admin";
    char pass[] = "1234";
    char inputpass[20];
    char inputusername[20];

    printf("Enter username: ");
    fgets(inputusername, sizeof(inputusername), stdin);
    inputusername[strcspn(inputusername, "\n")] = '\0';

    printf("Enter password: ");
    fgets(inputpass, sizeof(inputpass), stdin);
    inputpass[strcspn(inputpass, "\n")] = '\0';

    if (strcmp(inputusername, username) == 0) {
        user_ok = true;
    }

    if (strcmp(inputpass, pass) == 0) {
        pw_ok = true;
    }

    if (can_login(pw_ok, user_ok)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }
}

bool can_login(bool pw_ok, bool user_ok) {
    return pw_ok && user_ok;
}

int main(void) {
    run_code();
    return 0;
}
