#include <stdio.h>
#include <string.h>

void run_code() {
    int unlock_code = 2009;
    int max = 4;
    int inputcode;

    for (int i = 1; i <= 4; i++) {
        printf("Enter unlock code: ");
        scanf("%d", &inputcode);
        if (inputcode == unlock_code) {
            printf("Access granted\n");
            break;
        } else {
            if (inputcode != unlock_code){
                printf("Invalid code try again\n");
            }
            if (i == 3) {
                printf("Warning: one attempt remaining\n");

            } if (i == max) {
                printf("Access locked try again later\n");
                break;
            }
            
        
        } 


    }

}

int main () {
    run_code();
    return 0;
}