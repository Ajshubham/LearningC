#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int vs = 0 ,cs = 0;
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vs++;
        }
        else if(str[i] == ' ');
        else
            cs++;
            
    }
    printf("Number of vowels: %d \nNumber of consonants: %d",vs,cs);
}