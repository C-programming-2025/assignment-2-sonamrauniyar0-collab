// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.
#include <stdio.h>

int main()
{
    int num, i=2;
    int isprime =1;
    printf("enter a positive integer:");
    scanf("%d", &num);
    if(num <=1)
    {
        isprime =0;
    }
    else
    {
        while (i<=num/2)
        {
            if(num % i ==0)
            {
                isprime=0;
                break;
            }
            i++;
        }
    }
    if(isprime)
    printf("prime number.\n");
    else
     printf("not prime number.\n");
     return 0;
    }
    