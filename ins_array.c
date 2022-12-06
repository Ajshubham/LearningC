// C program to insert element at a given location in Array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size, i, value, index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the element in the array:\n");
    int arr[size];
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Enter the value you want to enter in the array: ");
    scanf("%d",&value);
    printf("Enter the location at wich you want to enter in the array: ");
    scanf("%d",&index);
    for(i = size-1; i >= value-1; i--)
        arr[i+1] = arr[i];
    arr[index-1] = value;
    printf("Array after inserting new element in the array:\n");
    for(i = 0; i <= size; i++)
        printf("%d ",arr[i]);
}