#include<stdio.h>
#define MAX 1000

int main()
{
    int arr[MAX], i, len, j;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter numbers:\n");
    for(i = 0; i < len; i++)
    scanf("%d",&arr[i]);
    printf("Duplicate Numbers are : ");
    for(i = 0; i < len; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(arr[i] == arr[j])
            printf("%d ",arr[j]);
        }
    }
}