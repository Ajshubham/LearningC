#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers respectively: ");
    scanf("%d %d",&num1,&num2);
    printf("First number is %d and second number is %d before swapping.",num1,num2);
    num1 = num1-num2;
    num2 = num1+num2;
    num1 = num2-num1;
    printf("First number is %d and second number is %d after swapping.",num1,num2);
}
