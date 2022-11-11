#include<stdio.h>

int gcd(int n1, int n2);

int main()
{
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("GCD of %d and %d is %d.",num1,num2,gcd(num1,num2));
}

int gcd(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2); 
}