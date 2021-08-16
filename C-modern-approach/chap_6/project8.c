/* Prints out a one-month calendar */

#include <stdio.h>

int main(void)
{
    int days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    for (int i = 1, d = 1; d <= days; i++)
    {
        if (i < start_day)
        {
            printf("%3c", ' ');
        }
        else
        {
            printf("%2d ", d);
            d++;
        }
        if(!(i % 7))
            printf("\n");
    }
    printf("\n");
}