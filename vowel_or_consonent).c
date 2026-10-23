#include <stdio.h>
#include <ctype.h>


int main()
{
    char x;
    printf("Enter your character:");
    scanf("%c" ,&x);
    x = tolower(x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )
    {
        printf("Given letter is vowel");
    }
    else
    {
        printf("Given letter is consonent");
    }
     
}
