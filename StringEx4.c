// C program to separate characters in a given string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}