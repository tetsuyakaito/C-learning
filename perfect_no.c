#include <stdio.h>
int main(){
    int i,sum =0 , n, t;
    printf("Enter a no:");
    scanf("%d", &n);
    t =n-1;
    
    while(t!=0)
    {
     if(n%t==0)
     {
        sum = sum + t;
     }
     t--;
    }
    if(sum == n)
    {
        printf("this is an perfect number");
    }
}