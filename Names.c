#include<stdio.h>

int main()
{
    char str[100][100];
    printf("Enter strings : ");
    for(int i = 0; i < 5; i++)
    gets(str[i]);
    printf("Input names are : \n");
    for(int i = 0; i < 5; i++)
    {
    puts(str[i]);
    printf("\t");
    }
}
