#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter first no: ");
    scanf("%d", &a);

    printf("Enter second no: ");
    scanf("%d", &b);

    printf("Enter your operation:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");

    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Required sum is = %d", a + b);
            break;

        case 2:
            printf("Required difference is = %d", a - b);
            break;

        case 3:
            printf("Required product is = %d", a * b);
            break;

        case 4:
           printf("Required quotient is = %.2f", (float)a / b);
           
        default:
            printf("Invalid choice");
    }

    return 0;
}