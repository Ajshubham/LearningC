#include<stdio.h>

int main()
{
    int arr[] = {2,5,6,4,1,0,3,9,7,8}, i, j, st;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < len; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                st = arr[i];
                arr[i] = arr[j];
                arr[j] = st;
            }
        }
    }
    for(i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    } 
}