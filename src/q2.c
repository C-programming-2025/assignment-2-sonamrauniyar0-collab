/* Write a C program that prompts the user for their age and determines if they are eligible to vote (consider the legal voting age in your country).
Expected Output:
If age >= 18, print Eligible to vote (case-insensitive, extra messages allowed).
If age < 18, print Not eligible to vote (case-insensitive, extra messages allowed).
*/
#include <stdio.h>

int main()
 {
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("eligible to vote.\n");
    }
     else if(age >= 0)
     {
        printf("Not eligible to vote. You need to be at least 18 years old.\n");
    } 
    else 
    {
        printf("Invalid age entered.\n");
    }
    return 0;
}
    