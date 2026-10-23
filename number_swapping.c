#include <stdio.h>

void main(){
    int x ,y;
    printf("Enter first no: ");
    scanf("%d", &x);

    printf("Enter second no: ");
    scanf("%d", &y);

    printf("your given number is x = %d and y =%d ", x,y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("your swapped number is x = %d and y = %d, x,y");

}