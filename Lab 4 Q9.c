#include <stdio.h>

int main()
{
    int people;
    float weight;

    printf("Enter number of people: ");
    scanf("%d", &people);

    printf("Enter total weight: ");
    scanf("%f", &weight);

    if (people <= 10 && weight <= 1000)
    {
        printf("Elevator can operate normally.\n");
    }
    else if (people > 10 && weight > 1000)
    {
        printf("Entry denied due to exceeding people limit and overweight.\n");
    }
    else if (people > 10)
    {
        printf("Entry denied due to exceeding people limit.\n");
    }
    else
    {
        printf("Entry denied due to overweight.\n");
    }

    return 0;
}
