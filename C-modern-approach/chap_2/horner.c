/* Description: Give the result of the value of x for a given polynomial using Horner's rule. The rule uses less multiplicaton.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    float x, y;
    printf("Value for x: ");
    scanf("%f", &x);

    y = ((((3 *x + 2) * x - 5) * x -1) * x + 7) * x - 6;
    printf("Answer: %.2f\n", y);

    return 0;
}