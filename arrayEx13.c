// C program to perform right rotation in array by 2 positions

#include<stdio.h>

int main()
{
    int size, i, j, temp;
    printf("Enter the size of the elements: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Original array:\n");
    for(i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    for(i = 0; i < 2; i++)
    {
        temp = arr[size-1];
        for(j = size-1; j >= 0; j--)
            arr[j] = arr[j-1];
        arr[0] = temp;
    }
    printf("\nArray after two right rotations are:\n");
    for(i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    return 0;
}