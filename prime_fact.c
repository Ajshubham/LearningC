#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Prime factors are ");
    while (num != 1)
    {
        for(int i = 2; i <= num; i++)
        {
            if(num % i == 0)
            {
                printf("%d ",i);
                num = num / i;
                break;
            }
        }
    }
    
}