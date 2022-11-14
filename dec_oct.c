#include<stdio.h>

int main()
{
    int oct[10], i = 0, j, dec, rem;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while(dec)
    {
        rem = dec % 8;
        oct[i] = rem;
        i++;
        dec = dec / 8;
    }
    for(j = i-1; j >= 0; j--)
        printf("%d",oct[j]);
}