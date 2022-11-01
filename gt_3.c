#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && b > c)
        printf("%d is greatest among all three.",a);
    else if(a < c)
        printf("%d is greatest among all three",c);
    else
        printf("%d is greatest among all three",b);
} 
