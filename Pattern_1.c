#include<stdio.h>

int main(){

    int a, b, num = 1;
    for(a = 1; a <= 3; a++)
    {
        for(b = 1; b <= 4; b++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}