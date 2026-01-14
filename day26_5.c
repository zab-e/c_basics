#include <stdio.h>
#include <stdbool.h>

int main()
{

    FILE *io_output;

    io_output = fopen("io.txt", "w");
    // fputs("zabe\n", io_output);
    // fputs("abc\n", io_output);
    // fprintf(io_output,"%d", 6);

    // for (int i = 1; i <= 10; i++) {
    // fprintf(io_output,"%d\n", i);
    //}

    int no;
    int max = 10;
    for (int i = 1; i <= 20; i++)
    {
        printf("Enter number (-1 quit): ");
        scanf("%d", &no);
        if (no == -1)
            break;
        else
            fprintf(io_output, "%d\n", no);
        if (i == max)
        {
            break;
        }
    }
    fclose(io_output);

    int numbers[100];
    int lines = 0;
    int ioinput = 0;

    FILE *io_input;
    io_input = fopen("io.txt", "r");

    while (fscanf(io_input, "%d", &no) != EOF)
    {
        numbers[lines] = no;
        printf("file line %d : %d\n", lines + 1, no);
        lines++;
    }
    int total = 0;
    for (int i = 0; i < lines; i++)
        total += numbers[i];
    printf("Average: %d", total / lines);

    fclose(io_input);

    return 0;
}
