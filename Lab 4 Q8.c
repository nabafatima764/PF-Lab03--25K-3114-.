#include <stdio.h>

int main()
{
    float cgpa, income;

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter monthly family income: ");
    scanf("%f", &income);

    if (cgpa > 3.7 && income < 50000)
    {
        printf("Full Scholarship\n");
    }
    else if (cgpa > 3.3 && income < 100000)
    {
        printf("Half Scholarship\n");
    }
    else
    {
        printf("No Scholarship\n");
    }

    return 0;
}
