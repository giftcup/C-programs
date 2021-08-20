/* Computes the factorial table for positive integers */

#include <stdio.h>

int main(void)
{
    int num;
    int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    printf("%10s %10s\n", "Number", "Factorial");
    for (int j = 1; j <= num; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            fact *= i;
        }
        if (fact < 0)
            return 0;
        printf("%10d %10d\n", j, fact);
        fact = 1;
    }

}