#include <stdio.h>
#include <string.h>
int main ()
{
  char str[100];
  char temp;
  int i, j,len;
  printf("C Program to sort character in string\n");
  printf("Please enter the string : ");
  scanf("%[^\n]",str);
  len = strlen(str);
	for (i = 0; i < len-1; i++) {
		for (j = i+1; j < len; j++) {
			if (str[i] > str[j]) {
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
			}
		}
	}
	printf("After sorting the character in ascending : %s", str);
	return 0;
}