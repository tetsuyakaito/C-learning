#include <stdio.h>

int main()
{

        int n,i=0,sum = 0;
        int a=0,b=1;
        printf("Enter no of terms");

        scanf("%d", &n);
        
        while(i<=n){
        printf("%d\n",a);
        sum = a + b;
        a = b;
        b = sum ;
        i++;
       
         }
        return 0;
}

