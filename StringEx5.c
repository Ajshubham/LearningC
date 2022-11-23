// C program to remove space in a given string
#include<stdio.h>
#include<string.h>

char * removeSpace(char *str)
{
    int nSpaceCnt = 0, i;
    for(i = 0; str[i]; i++)
    {
        if(str[i] != ' ')
        {
            str[nSpaceCnt] = str[i];
            nSpaceCnt++;
        }
    }
    str[nSpaceCnt] = '\0';
    return str;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("%s",removeSpace(str));
}