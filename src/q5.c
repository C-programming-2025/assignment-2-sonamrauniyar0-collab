// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include <stdio.h>

int main()
{
    int num;
    unsigned long long factorial = 1;
    int i = 1;
    printf("Enter a positive integer:");
    scanf("%d", &num);
    
    if (num < 0)
     {
        printf("Factorial is not defined for negative numbers.\n");
    }
     else 
     {
        while (i <= num)
         {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is: %llu\n", num, factorial);
        }
    return 0;
}