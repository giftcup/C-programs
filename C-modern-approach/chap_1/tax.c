/*Description: Program asks the user for an amount then displays the amount with a percentage tax added to it.
** Source: C Programming A modern Approach
*/

#include <stdio.h>

int main(void)
{
    float amount;
    float tax;

    printf("Enter the amount of money to be paid: ");
    scanf("%f", &amount);
    printf("Enter the percentage of tax required: ");
    scanf("%f", &tax);

    amount = amount + (amount * tax / 100.0);
    printf("With tax added: FCFA %.2lf\n", amount);

    return 0;
}