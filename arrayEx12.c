// C Program to print all odd numbers in array

#include<stdio.h>

#include<stdio.h>

int main()
{
    int size, i, j = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Odd numbers in the array are:\n");
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}