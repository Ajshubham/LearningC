// C program to reverse an Array in two ways

#include<stdio.h>

int main()
{
    int size, i, startIndex, lastIndex;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size], reverse[size];
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Original Array:\n ");
    for(i = 0; i < size; i++)
        printf("%d ",arr[i]);
    startIndex = 0;
    lastIndex = size-1;
    while(lastIndex >= 0)
    {
        reverse[startIndex] = arr[lastIndex];
        startIndex++;
        lastIndex--;
    }
    printf("\nArray after reversing:\n ");
    for(i = 0; i < startIndex; i++)
        printf("%d ",reverse[i]);
    return 0;
}