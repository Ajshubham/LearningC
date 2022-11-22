// C program to Replace First Occurrence Of Vowel With ‘-‘ in String
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = '-';
            break;
        }
    }
    printf("%s",str);
}