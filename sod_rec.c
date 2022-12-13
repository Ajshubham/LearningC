// C Program to find sum of digit of number using recursion

#include<stdio.h>

int rec(int num)
{
    if(num == 0)
        return 0;
    else
        return rec(num / 10) + num % 10;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Sum of the digits of %d is %d",num,rec(num));
    return 0;
}