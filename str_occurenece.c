#include<stdio.h>
#include<conio.h>
#include<string.h>

int countOcurrence(char *str, char ch)
{
    int i = 0, count = 0;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }
    return count;
}

void main()
{
    char str[100], ch,c;
    int count;
    printf("Enter the string: \n");
    scanf("%[^\n]%c",str,&c);
    printf("Enter a char want to count occurence: ");
    scanf("%c",&ch);
    count = countOcurrence(str,ch);
    printf("Total occurence of '%c':%d",ch,count);
    getch();
}