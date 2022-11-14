#include<stdio.h>

int main ()
{
    float cel, fah;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fah);
    cel = ((fah - 32) * 5) / 9;
    printf("Temperature in fahrenheit is %.2f",cel);
}