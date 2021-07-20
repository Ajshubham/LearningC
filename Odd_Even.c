#include<stdio.h>

int main()
{
    int in;
    printf("Enter any integer : ");
    scanf("%d",&in);
    (in % 2) == 0 ? (printf("%d is even",in)) :(printf("%d is odd",in));
}