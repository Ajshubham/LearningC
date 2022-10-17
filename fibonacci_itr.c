#include<stdio.h>

int main()
{
    int i, val, num1 = 0, num2 = 1, result;
    printf("Enter the value upto which series needed: ");
    scanf("%d",&val);
    for(i = 0; i < val; i++)
    {
        if(i <= 1)
            result = i;
        else
        {
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }
        printf("%d ",result);
    }
}