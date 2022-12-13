// C Program to add two number using recursion

#include<stdio.h>

int rec(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    else
        return rec(n1, n2 - 1) + 1;
}

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Sum of two numbers are %d.",rec(num1,num2));
    return 0;
    
}