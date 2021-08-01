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
    printf("Enter the number you want to check:");
    scanf("%d",&j);
    for(i = 0; i < len; i++)
    {
        if(j == arr[i])
        {
        printf("Number is in Array.");
        return 0;
        }
    }
    printf("Number not in Array.");
}