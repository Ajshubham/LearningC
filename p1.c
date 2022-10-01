#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number to be reversed: ");
    scanf("%d",&num);
    int rev = 0;
    while(num != 0)
    {
        rev = rev * 10 + num%10;
        num = num/10;
    }
    printf("Revered number is: %d",rev);
}