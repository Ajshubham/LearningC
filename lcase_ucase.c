#include<stdio.h>
 int main()
 {
     char str[100];
     int i = 0;
     printf("Please enter a string: ");
     scanf("%[^\n]", str);
     while( str[i] != '\0' )
     {
        if( str[i] >= 'a' && str[i] <= 'z' )
        {
           str[i] = str[i] - 32;
        }
        i++;
     }
     printf("String after converting into upper case = %s", str);
     return 0;
 }