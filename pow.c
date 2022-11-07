#include<stdio.h>
#include<math.h>

int main()
{
    int res, num, deg;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the degree: ");    
    scanf("%d",&deg);    
    res = pow(num,deg);
    printf("Power of %d of degree %d is %d.",num,deg,res);

}