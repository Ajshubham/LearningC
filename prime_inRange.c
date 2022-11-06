#include<stdio.h>
void main()
{
    int i=0,fr,sr, temp,temp1=1;
    printf("C Program to Print Prime number in a given range\n");
	printf("Please give the first number: ");
	scanf("%d",&fr);
	printf("Please give the second number: ");
	scanf("%d",&sr);
	while(fr <= sr)
    {
        temp=0;
        for(i=2; i <= (fr/2); i++)
        {
		    if(fr % i == 0)
		    {
                temp = 1;
                break;
		    }
	    }
	if(temp == 0)
		printf("%d is  a prime number \n",fr);
	fr++;
    }
}