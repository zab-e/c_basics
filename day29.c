#include <stdio.h>

int main()
{

    int slots[5] = {0};
    int op = 0;

    for (int i = 1; i <= 20; i++)
    {

        printf("Choose operation:\n");
        printf("1. = Park a car\n");
        printf("2. = Remove a car\n");
        printf("3. = View parking slots\n");
        printf("4. = Exit:  ");
        scanf("%d", &op);
        if (op > 4 || op < 1)
        {
            printf("Invalid option\n");
            break;
        }
        printf("Available slots: 5\n");
        switch (op)
        {
        case 1:
        {

            printf("Enter slot number: ");
            int slotinput = 0;
            scanf("%d", &slotinput);
            if (slotinput < 1 || slotinput > 5)
            {
                printf("Invalid slot\n");
                break;
            }
            if (slots[slotinput - 1] == 1)
            {
                printf("Slot already occupied\n");
                break;
            }
            slots[slotinput - 1] = 1;
            printf("\033[32m");
            printf("Car parked succesfully\n");
            printf("\033[0m");
            break;
        }
        case 2:
        {
            printf("Enter slot number: ");
            int slotinput = 0;
            scanf("%d", &slotinput);
            if (slotinput < 1 || slotinput > 5)
            {
                printf("Invalid slot\n");
                break;
            }
            if (slots[slotinput - 1] == 0)
            {
                printf("Slot is already empty\n");
                break;
            }
            else
            {
                slots[slotinput - 1] = 0;
                printf("Removed succesfully\n");
                break;
            }
        }

        case 3:
        {
            for (int i = 0; i < 5; i++)
            {
                if (slots[i] == 0)
                    printf("Slot %d: Empty\n", i + 1);
                else
                    printf("Slot %d: Occupied\n", i + 1);
            }
            break;
        }
        case 4:
        {
            printf("\033[32m");
            printf("Exitted succesfully\n");
            printf("\033[0m");
            return 0;
        }
        }
    }

    return 0;
}
