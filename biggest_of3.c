#include <stdio.h>

int main()
{

        int a,b,c;

        printf("Enter first no:");

        scanf("%d", &a);
        printf("Enter second no:");
        scanf("%d", &b);
        printf("Enter third no:");
        scanf("%d", &c);
        
        a>b
        ?(a>c?printf("a is biggest"):printf("c is biggest"))
        :(b>c?printf("b is biggest"):printf("c is biggest"));

        return 0;
}

