#include <stdio.h>
#include <string.h>
 

void run_code() {
    char input1; 
 
    for (int i = 1; i <= 3; i++) {
        printf("Confirm this action y/n: \n");
        scanf(" %c",&input1);
        if (input1 == 'Y' || input1 == 'y') {
            printf("Action Confirmed\n");
            break;

        } else if (input1 == 'n' || input1 =='N') {
            printf("Action declined\n");
            break;
        } if (i == 3) {
            printf("No confirmation recieved\n");
            return;
        } else {
            printf("Invalid input, try again\n");
        }


    }

}

int main () {
    run_code();
    return 0;
}