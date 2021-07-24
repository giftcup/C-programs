/* Description: User enters an amount in francs and is showed how to pay it using the smallest number of 100, 50 and 25 coins.
** Source: C Programming A Modern Approach modified.
*/

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter an FCFA amount: ");
    scanf("%d", &amount);

    printf("XAF 100 coins: %d\n", amount / 100);
    amount = amount % 100;
    printf("XAF 50 coins: %d\n", amount / 50);
    amount %= 50;
    printf("XAF 25 coins: %d\n", amount / 25);
}