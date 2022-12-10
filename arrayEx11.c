// C Program to print all even numbers in array

#include<stdio.h>

int main()
{
    int size, i, j = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size], even[] = {0};
    printf("Enter the elements in the array:\n");
    
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
        
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
    }
    printf("Even numbers in the array are:\n");
    for(i = 0; i < j; i++)
        printf("%d\t",even[i]);
    return 0;
}