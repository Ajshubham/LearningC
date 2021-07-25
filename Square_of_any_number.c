#include<stdio.h>

int main( )
{
    char another ; 
    float num ; 
do{
   printf ( "Enter a number " ) ;
   scanf ( "%f", &num ) ;
   printf ( "square of %.2f is %.4f", num, num * num ) ;
   printf ( "\nWant to enter another number y/n " ) ;
   scanf ( " %c", &another ) ;
} while ( another == 'y' ) ;
}