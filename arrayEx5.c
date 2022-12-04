// C program to find second largest number in an array

#include<stdio.h>
#include<stdlib.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubblesort(int *arr, int s)
{
    int i, j;
    for(i = 0; i < s; i++)
    {
        for(j = 0; j < s-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
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
    printf("Second highest Number in the array is %d", arr1[size-2]);
    return 0;
}