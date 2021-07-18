#include<stdio.h>

int main(){
    int num, i;
    printf("Enter any Number");
    scanf("%d",&num);
    for(i = 2; i <= num-1; i++){
        if(num % i == 0){
            printf("Number is Not Prime Number");
            break;
        }
    }
    if(i == num){
        printf("%d is Prime Number",num);
    }
}