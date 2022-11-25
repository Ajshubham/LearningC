// C program to remove repeated character from string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len, j, k;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                for(k = j; k < len; k++)
                {
                    str[k] = str[k+1];
                }
                len--;
                j--;
            }
            
        }
    }
    printf("String after removing repeated character: %s",str);
    return 0;
}