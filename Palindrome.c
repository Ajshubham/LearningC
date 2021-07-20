#include<stdio.h>

int main()
{
    int  in, n, rem, rev = 0;
    printf("Enter 5 digit number : ");
    fflush(stdin);
    scanf("%d",&in);
    n = in;
    while( in != 0)
    {
        rem = in % 10;
        rev = rev * 10 + rem;
        in /= 10; 
    }
    printf("Reversed number is : %d\n",rev);
    
    n == rev ? (printf("The number  is palindrome.")) : (printf("The number  is  not palindrome. "));
}