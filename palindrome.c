#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char str[20];
    int flag = 0;
    int i, len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len-i-1])
            flag = 1;
            break;
    }
    if(flag == 0)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");
}