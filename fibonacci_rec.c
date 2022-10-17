#include<stdio.h>

int fibonacci(int);

int main()
{
    int val, i;
    printf("Enter the number on how much the series is to be printed: ");
    scanf("%d",&val);
    for(i = 0; i < val; i++)
    {
        printf("%d ",fibonacci(i));
    }
}

int fibonacci(int i)
{
    int num1 = 0, num2 = 1, result;
    if(i == 0)
        return i;
    else if(i == 1)
        return i;
    else
        return (fibonacci(i-1)+fibonacci(i-2));
}