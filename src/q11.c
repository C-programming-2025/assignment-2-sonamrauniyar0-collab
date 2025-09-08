/* Write a C program that prints a pattern of asterisks.
    *****
     ***
      *
*/
#include <stdio.h>

int main()
{
    int i , j;
    int rows = 3;

    for(i = 1; i <= rows; i++)
        {
             for(j = 1; j <= 2*(rows - i) + 1; j++)
            {
                printf("*");
            }
            printf("\n");
            for(int j=1; j<i; j++){
                printf(" ");
            }
        }
        return 0;
    
}