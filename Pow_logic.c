#include<stdio.h>

int main()
{
    int res = 1, num, deg;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the degree: ");    
    scanf("%d",&deg);   
    for(int i = 0; i < deg; i++)
    {
        res = res * num;
    }
    printf("Power of %d of degree %d is %d.",num,deg,res);

}