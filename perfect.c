#include<stdio.h>

int fact(int n);

int main()
{
    int num, sum = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(num)
    {
        rem = num % 10;
        sum = sum + fact(rem);
        num = num / 10;
    }

    if(temp == sum)
        printf("%d is perfect number.",temp);
    else
        printf("%d is not perfect number.",temp);
}

int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return n*fact(n - 1);
}