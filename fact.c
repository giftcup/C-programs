/* Calculates the factorial of a number using function pointers */

#include <stdio.h>

int factorial(int n);

int main(void)
{
    int num;
    int (*fact)(int n) = factorial;
    
    printf("Enter number: ");
    scanf("%d", &num);

    printf("factorial of %d is %d\n", num, fact(num));
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}