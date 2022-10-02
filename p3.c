#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i;
    for(i = 2; i < num; i++)
    {
        if(num%i == 0)
            break;
    }
    if(num == i)
        printf("Number is prime.");
    else
        printf("Number is not prime.");
}