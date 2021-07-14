#include<stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n > 0){
        i = 0;
        j = 1;
        printf("\n%d\n%d",i,j);
        k = i + j;
        while(k <= n){
            printf("\n%d",k);
            i = j;
            j = k;
            k = i + j;
        }
    }
    else
    {
        printf("Enter a number greater than 0");
    }
    
}