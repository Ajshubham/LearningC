#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    printf("Enter the number: ");
    scanf("%f",&num);
    printf("Square root of %.2f is %.2f",num,pow(num,0.5));
    // printf("Square root of %.2f is %.2f",num,num*0.5);
}