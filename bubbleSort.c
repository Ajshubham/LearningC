#include<stdio.h>
#include<stdbool.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int arr[], int n)
{
    int i, j;
    bool status;
    for(i = 0; i < n-1; i++)
    {
        status = false;
        for(j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                status = true;
            }
        if(status == true)
            break;
    }
}

int main()
{
    int size, i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    bubblesort(arr, size);
    printf("Array after sorting the elements:\n");
    for(i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    return 0;
}