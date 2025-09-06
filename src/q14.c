// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.
#include <stdio.h>

int main()
 {
    int num, i;
     printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
      for(i = 1; i <= num; i++) {
        if(num % i == 0) { 
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}