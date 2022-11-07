#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    int smallest = a < b ? (a < c ? a : c) : (b < c ? b : c);
    printf("%d is the smallest.",smallest);
}