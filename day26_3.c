#include <stdio.h>

void run_code() {
    int pin = 1000;
    int input1,input2,input3;
    int max = 2;

    for (int i = 1; i <= 2; i++) {
        printf("Enter your pin: ");
        scanf("%d", &input1);
        if (input1 == pin) {
            printf("Enter your new pin: ");
            scanf("%d", &input2);
            printf("Confirm new pin: ");
            scanf("%d", &input3);
            if (input3 == input2) {
                printf("You have succesfully changed your pin\n");
                break;
            } else {
                printf("New pin missmatch, Try again\n");
                break;
            }


        } else {
            printf("Invalid pin, Try again\n");
            if (max == i) {
                printf("Locked. Try again later\n");
                return;
            }
        }
        
    }

}

int main () {
    run_code();
    return 0;
}