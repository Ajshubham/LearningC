#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&a,&b);
    printf("First number is %d and second number is %d before swapping.",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("First number is %d and second number is %d after swapping.",a,b);
}