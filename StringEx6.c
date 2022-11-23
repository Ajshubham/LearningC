// C program to check given two string are equal or not
#include<stdio.h>
#include<string.h>

int strComp(char *str1, char *str2)
{
    int i = 0, flag = 0;
    for(; str1[i]; i++)
    {
        if(str1[i] == str2[i])
            flag = 1;
        else
            flag = 0;
    }
    return flag;
}

int main()
{
    char str1[100], str2[100];
    int chk = 1;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    if(chk == strComp(str1,str2))
        printf("Strings are equal.");
    else
        printf("Strings are not same.");
    return 0;
}