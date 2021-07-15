#include<stdio.h>

int main(){

    int a, b, c;
    for(a = 5; a >= 1; a--)
    {
        for(b = 5; b > a; b--)
        {
            printf(" ");
        }
        for(c = a; c >= 1; c--)
        {
            printf("*");
        }
        printf("\n");
    }
}