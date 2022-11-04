#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    temp = a;
    for(int i = 0; i < b; i++)
    {
        a++;
    }
    printf("Sum of %d and %d is %d without using arithmetic operator.",temp,b,a);
}