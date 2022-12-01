// Program to remove duplicate elements from array using C
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100

void notDup(int *arr, int s)
{
    int i, j, k = 0, k1 = 0, flag = 0;
    int arr2[s];
    for(i = 0; i < s; i++)
    {
       for(j = 0; j < s; j++)
       {
           flag = 0;
           if(i != j)
           {
               for(k1 = 0; k1 < k; k1++)
                   if(arr2[k1] == arr[j])
                     flag = 1;
               if(flag != 1)
                   arr2[k++] = arr[j];
           }
       }
    }
    printf("Array after removing duplicate number:\n");
    for(i = 0; i < k; i++)
      printf("%d ",arr2[i]);
}

int main()
{
    int *arr1, i, size;
    arr1 = (int*)malloc(sizeof(int)*size);
    printf("Enter the size of the array not more than 100: ");
    scanf("%d",&size);
    for(int i = 0; i < size; i++)
        scanf("%d",&arr1[i]);
    notDup(arr1,size);
    return 0;
}