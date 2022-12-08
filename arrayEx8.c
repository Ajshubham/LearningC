// C Program to delete given element from array

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, size, value,j,temp;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    temp=size;
    for(i = 0; i < size; i++)
    {
        // printf("Give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to delete : ");
    scanf("%d", &value);
        for(i=0; i<size; i++)
        {
            if(arr[i]==value)
            {
                for(j=i; j<size-1; j++)
                {
                    arr[j] = arr[j+1];
                }
                size--;
                i--;                                                                                                                                           ;
            }
        }
        if(temp==size){
            printf("No element %d found in array ",value);
            exit(0);
        }
        printf("Rest elements of array after deleting %d are\n",value);
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
        return 0;
    }