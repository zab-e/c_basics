#include <stdio.h>

void run_code()
{
    char input1;
    int input2; // number 1
    int input3; // number 2
    int sum;
    double divsum;
    float divnum1 = 0.0f;
    float divnum2 = 0.0f;

    printf("Calculator: \n");
    printf("1 = Addition\n");
    printf("2 = Subtraction\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    printf("Choose option 1-4: ");
    scanf(" %c", &input1);
    switch (input1)
    {
    case '1':
        printf("Enter first #: "); // # = number
        scanf("%d", &input2);
        printf("Enter second #: ");
        scanf("%d", &input3);
        sum = input2 + input3;
        printf("RESULT: %d", sum);
        break;
    case '2':
        printf("Enter first #: ");
        scanf("%d", &input2);
        printf("Enter second #: ");
        scanf("%d", &input3);
        sum = input2 - input3;
        printf("RESULT: %d", sum);
        break;
    case '3':
        printf("Enter first #: ");
        scanf("%d", &input2);
        printf("Enter second #: ");
        scanf("%d", &input3);
        sum = input2 * input3;
        printf("RESULT: %d", sum);
        break;
    case '4':
        printf("Enter first #: ");
        scanf("%f", &divnum1);
        printf("Enter second #: ");
        scanf("%f", &divnum2);
        if (divnum2 == 0)
        {
            printf("Cannot divide by 0\n");
            return;
        }
        else
        {
            divsum = divnum1 / divnum2;
            printf("RESULT: %.2f", divsum);
            return;
        }
    default:
        printf("Invalid choice");
        return;
    }
}

int main()
{
    run_code();
    return 0;

}


