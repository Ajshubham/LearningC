// C Program to find sum of array elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of all the elements of array is: %d",sum);
    return 0;
}