#include <stdio.h>

int main()
{
    int zone, speed, limit;
    int fine = 1000;

    printf("Enter zone type:\n");
    printf("1 = School Zone\n");
    printf("2 = Highway\n");
    printf("3 = Residential Area\n");
    printf("Enter zone: ");
    scanf("%d", &zone);

    printf("Enter driver's speed: ");
    scanf("%d", &speed);

    switch (zone)
    {
        case 1:
            limit = 30;
            break;

        case 2:
            limit = 100;
            break;

        case 3:
            limit = 50;
            break;

        default:
            printf("Invalid zone.\n");
            return 0;
    }

    if (speed > limit)
    {
        if (speed - limit > 20)
        {
            fine = 2000;
        }

        printf("Violation! Fine = Rs. %d\n", fine);
    }
    else
    {
        printf("No violation. No fine.\n");
    }

    return 0;
}
