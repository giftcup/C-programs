/* Description: Finds the maximum of a series of numbers inputted by the user.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    float number, max = 0;

    printf("Enter 0 or a negative number to quite.\n");

    for(;;)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number > max)
        {
            max = number;
        }
        if (number <= 0)
        {
            printf("\nThe largest number entered was %.2f\n", max);
            return 0;
        }
    }
}