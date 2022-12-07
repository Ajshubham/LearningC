// C Program to delete element at end of Array


#include <stdio.h>
void main()
{
    int position, i, n, value;
    printf("First enter number of elements you want in Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements int array: ");
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    value=arr[n-1];
    printf("Element %d is deleting at %d index. \n",value,n-1);
    n=n-1;
    printf("New Array after deleting element at end:\n ");
    for(i = 0; i < n; i++)
    {
       printf("%d \t",arr[i]);
    }
}
