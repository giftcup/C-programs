/* Description: Tracks product information entered by the user.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    //Printing the table
    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%3d\t\t$%-4.2f\t\t%2d/%2d/%4d\n", number, unit_price, month, day, year);

    return 0;
}