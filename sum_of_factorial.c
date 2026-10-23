#include <stdio.h>

void main(){
    int i , n = 3, sum=0 ;
    printf("Enter a no:");
    scanf("%d",&n);
    
    while(n!=0)
    {   i = n;
          int product=1;
        while(i!=0)
        { 
            product = product * i;
            i--;
        }

        sum = sum + product;
        n--;

    }
    printf("Sum = %d", sum);
}