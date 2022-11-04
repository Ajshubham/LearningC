#include<stdio.h>

int main()
{
    int num, i, p = 1, temp, itr = 0;
    printf("Enter how many prime numbers to print: ");
    scanf("%d",&num);
    while(itr <= num)
    {
        for(i = 2; i <= (p/2); i++)
        {
            if(p % i == 0)
            {   
                temp = 1;
                break;
            }
            else
            {
                temp = 0;
            }
        }
        if(temp == 0)
        {
            printf("%d ",p);
        }
        p++;
        itr++;
    }
}