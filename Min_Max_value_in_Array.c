#include<stdio.h>
#define MAX 1000
int main()
{
    int arr[MAX], min, max, i, len;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter numbers:\n");
    for(i = 0; i < len; i++)
    scanf("%d",&arr[i]);
    min = max = arr[0];
    for(i = 1; i < len; i++)
    {
        if(min > arr[i])
        min = arr[i];
        if(max < arr[i])
        max = arr[i];
    }
    printf("Maximum value in the given array = %d\n",max);
    printf("Minimum value in the given array = %d",min);
}