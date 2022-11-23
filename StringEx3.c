// C program to count alphabets, digits and special characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, len;
    int alpha = 0, digit = 0, spc = 0;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alpha++;
        else if(str[i] >= 48 && str[i] <= 57)
            digit++;
        else
            spc++;
    }
    printf("Occurrences of type of characters: \n");
    printf("Alphabet-->%d\nDigit-->%d\nSpecial Character-->%d",alpha,digit,spc);
}