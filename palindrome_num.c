#include<stdio.h>

int main()
{
    int num, reverse = 0, temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    if(reverse == num)
        printf("The given number is palindrome.");
    else
        printf("The given number is not palindrome.");
}