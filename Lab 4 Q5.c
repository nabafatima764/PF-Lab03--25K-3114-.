#include <stdio.h>

int main()
{
    float orderAmount;
    int premium, withinCity;

    printf("Enter order amount: ");
    scanf("%f", &orderAmount);

    printf("Premium member? (1 = Yes, 0 = No): ");
    scanf("%d", &premium);

    printf("Within city? (1 = Yes, 0 = No): ");
    scanf("%d", &withinCity);

    if (orderAmount > 3000 || premium == 1)
    {
        printf("Delivery: FREE\n");
    }
    else
    {
        printf("Delivery: Charges apply\n");
    }

    if (orderAmount < 50000 && withinCity == 1)
    {
        printf("COD: Available\n");
    }
    else
    {
        printf("COD: Not Available\n");
    }

    return 0;
}
