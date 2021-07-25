/* Description: Calculates remaining amount of a loan after monthly payment.
** source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    float amount, interest, payment;
    int number_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &number_of_payments);

    for (int i = 0; i < number_of_payments; i++)
    {
        amount = amount - payment + (amount * interest / 120);
        printf("Balance remaining after %d payment: %.2f\n", i + 1, amount);
    }

    return 0;
}