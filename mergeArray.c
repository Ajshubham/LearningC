// C Program to merge two arrays

#include<stdio.h>

int main()
{
    int size1, size2, i, k;
    printf("Enter the size of 1st array: ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the elements in the 1st array:\n");
    for(i = 0; i < size1; i++)
        scanf("%d",&arr1[i]);
    k = i;
    printf("Enter the size of 2nd array: ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the elements in the 2nd array:\n");
    for(i = 0; i < size2; i++)
        scanf("%d",&arr2[i]);
    int t_size = size1 + size2;
    for(i = 0; i < size2; i++)
    {
        arr1[k] = arr2[i];
        k++;
    }
    printf("Array after merging the two arrays:\n");
    for(i = 0; i < k; i++)
        printf("%d\t",arr1[i]);
    return 0;
}