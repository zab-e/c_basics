#include <stdio.h>

int main () {

    FILE *fp;
    fp = fopen("logindata.txt", "w");

    printf("Enter pin: ");
    int pin = 0;
    scanf("%d", &pin);
    fprintf(fp,"%d\n",pin);
    int balance = 0;
    printf("Enter balance: ");
    scanf("%d", &balance);
    fprintf(fp,"%d\n", balance);


    fclose(fp);


    return 0;
}