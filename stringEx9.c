// C program to print all non repeating character in string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    int freq[256] = {0};
    printf("C Program to find all non repeating character\n");
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    printf("Character which has no repetitions are \n");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}