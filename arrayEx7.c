// C program to insert an element at end of an Array

#include <stdio.h>

void main()
{
    int pos, i, n, value, arr[100];
    printf("Enter the size of the array not more than 100: ");
    scanf("%d", &n);
    // arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");
    
    for(i = 0; i < n+1; i++)
       printf("%d ",arr[i]);
}