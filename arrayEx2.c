// C Program to find which number is not present in the second array

#include<stdio.h>
#define Max 5

int main()
{
    int arr1[Max] = {1,2,3,4,5};
    int arr2[Max] = {2,3,1,0,5};
    int s1 = 0;
    for(int i = 0; i < Max; i++)
    {
        s1 += arr1[i];
    }
    
    for(int j = 0; j < Max; j++)
    {
        s1 -= arr2[j];
    }
    printf("The missing number from first array is %d.",s1);
}