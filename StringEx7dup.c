#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int len;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len = strlen(str1);
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[len] = str2[i];
        len++;
    }
    printf("%s", str1);
}