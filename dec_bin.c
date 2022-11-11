#include<stdio.h>

int main()
{
    int bin, dec;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    while(dec)
    {
        bin = dec % 2;
        printf("%d",bin);
        dec = dec / 2;
    }
}