// Write a C program that calculates the factorial of a given number using a do-while loop.
#include <stdio.h>

int main() 
{
    int num, i = 1;
    unsigned long long factorial = 1;
     printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers . \n");

    }
    else
    {
        do{
            factorial *= i;
            i++;
        }
        while(i <= num);
        printf("Factorialis : %llu\n" , factorial);
    }
    return 0;
    }
