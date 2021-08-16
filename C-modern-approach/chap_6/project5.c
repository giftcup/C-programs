/* Displaying the digits of a given number with
** its digits reversed.
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("The reversal is: ");

    do
    {
        printf("%d", number % 10);
        number /= 10;

    }while(number > 0);
    printf("\n");
}