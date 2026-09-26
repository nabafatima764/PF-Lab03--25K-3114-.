#include <stdio.h>

int main()
{
    int plan, minutes;
    float bill;

    printf("Enter plan number (1-4): ");
    scanf("%d", &plan);

    printf("Enter minutes used: ");
    scanf("%d", &minutes);

    switch (plan)
    {
        case 1:
            bill = 500;

            if (minutes > 1000)
            {
                bill = bill + (minutes - 1000) * 2;
            }

            printf("Total bill = Rs. %.2f\n", bill);
            break;

        case 2:
            bill = 800;

            if (minutes > 2000)
            {
                bill = bill + (minutes - 2000) * 2;
            }

            printf("Total bill = Rs. %.2f\n", bill);
            break;

        case 3:
            bill = 1200;

            printf("Total bill = Rs. %.2f\n", bill);
            break;

        case 4:
            bill = minutes * 1;

            printf("Total bill = Rs. %.2f\n", bill);
            break;

        default:
            printf("Invalid plan number.\n");
    }

    return 0;
}
