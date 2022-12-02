//C program to find the largest and smallest number in an array.
#include<stdio.h>
#include<stdlib.h>
#define Max 100

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubblesort(int *arr, int n)
{
    int i, j;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
    }
}

int main()
{
    int *arr1, i, size;
    arr1 = (int*)malloc(sizeof(int)*size);
    printf("Enter the size of the array not more than 100: ");
    scanf("%d",&size);
    for(i = 0; i < size; i++)
        scanf("%d",&arr1[i]);
    bubblesort(arr1,size);
    printf("Largest number in array is %d and smallest number in array is %d.",arr1[size-1],arr1[0]);
    return 0;
}