#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr1[100], i, chk, sum;
    printf("Input numbers : ");
    for(i = 0; i <= 5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number want to check : ");
    scanf("%d",&chk);
    for(i = 0; i <=5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            sum = arr1[i] + arr1[j];
            if(sum == chk)
            {
                printf("Your number %d is present in the array as sum of two elements",chk);
                exit(0);
            }
        }
    }
}