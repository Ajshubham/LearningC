#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    int  freq[256],i,j,k=0,count=0,len;
    printf("Please Enter a String :  ");
    scanf("%[^\n]", str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        freq[i] = 0;
        count = 1;
        if(str[i])
        {
            for(j = i+1; j < len; j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }
            }
        }
        freq[i] = count;
        if(count >= k)
            k = count;
    }
    printf("Highest occuring charaters: \n");
    for(j = 0; j < len; j++)
    {
        if(freq[j] == k)
        {
            printf("%c--> %d times.",str[j],k);
        }
    }
}