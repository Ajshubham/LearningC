#include<stdio.h>

int main()
{
    int num, i = 0, n, result = 0, a;
    printf("Enter a number: ");
    scanf("%d", &num);
    a = num;
    // while(num != 0)
    // {
    //     num = num/10;
    //     i++;
    // }

    while(num != 0)
    {
        n = num%10;
        printf("n = %d num = %d",n,num);
        result = result + (n*n*n);
       // printf("\n result = %d pow = %d");
        num = num/10;
    }
    if(a == result)
        printf("is armstrong number.");
    else
        printf("is not armstrong number.");
    // printf("%d,%d, %d",result,a,i);
}
