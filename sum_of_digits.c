#include <stdio.h>

int main(){
    int n , digit , sum=0;

    printf("Enter your number:");
    scanf("%d", &n);


    if(n>=0){
        while(n != 0){
        digit = n%10;
        sum = sum + digit;
        n = n/10 ;
        }
    printf("Sum of digit of given nummber are %d", sum);
    }
    
    else{
        printf("you entered a negative number");
    }

}