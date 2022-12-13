// C Program to find highest frequency element in array

#include<stdio.h>

int main()
{
    int size, i, j, count = 0, maxCount = 0, maxElement;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array:\n");
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    for(i = 0; i < size; i++)
    {
        count = 1;
        for(j = i+1; j < size; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxElement = arr[i];
            maxCount = count;
        }
    }
    printf("%d is occured %d times which is highest times in the array.",maxElement,maxCount);
    return 0;
}