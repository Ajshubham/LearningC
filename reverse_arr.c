// C program to print array in reverse Order

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100], size, i, j;
    printf("Enter the size of the array not more than than 100: ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array in reverse order:\n");
    for( j = size-1; j >= 0; j--)
        printf("%d ",arr[j]);
    
}