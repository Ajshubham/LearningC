// C program to calculate sum of integers in string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len, sum = 0;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(str[i] >= 47 && str[i] <= 58)
        {
            sum = sum + str[i] - '0';
        }
    }
    printf("%d",sum);
    return 0;
}