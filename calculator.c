/*Performs addition, subtraction, multiplication and division of two integers*/

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    /* Doesn't perform division if second number is zero */
    if(num2 != 0)
        printf("Quotient: %d\n", num1/num2);

    return 0;
}