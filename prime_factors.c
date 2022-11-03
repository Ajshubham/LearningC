#include<stdio.h>

int prime(int n);

int main()
{
    int num, i = 2, fact, j = 0, cnt = 0;
    int arr[100];
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i != num)
    {
        if(num % i == 0)
        {
            fact = prime(i);
            if(fact != 0)
            {
                arr[cnt] = fact;
                j++; cnt++;
            }
        }
        i++;
    }
    for(int k = 0; k < cnt; k++)
        printf("%d ",arr[k]);
    // printf("%d",size);
}

int prime(int n)
{
    static int i = 2;
    for(;i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
        else
            continue;
    }
    if(i == n)
        return n;
}