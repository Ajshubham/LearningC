// C Program to delete element from array at given index

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size, i, j, index;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    // int temp=size;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index of the element which you want to delete: ");
    scanf("%d",&index);
    if(index < size)
    {
        for(j = index; j < size-1; j++)
        {
            arr[j] = arr[j+1];
        }
        size--;
    }
    else
    {
        printf("Element not found at the given index!");
        exit(0);
    }
    printf("Array after deleting the elements:\n");
    for(i = 0; i < size; i++)
        printf("%d\t",arr[i]);
}