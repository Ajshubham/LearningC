// C Program to calculate length of an array

#include<stdio.h>

int main()
{
    int arr[] = {5,9,0,6,4};
    int len;
    len = sizeof(arr)/sizeof(int);
    printf("The size of the array is %d",len);
    return 0;
}