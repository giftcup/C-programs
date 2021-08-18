/* Description: Program indicate which date comes earlier on the calender.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_MONTH 30
#define DAYS_IN_YEAR 365


int main(void)
{
    int min_mon, min_day, min_yr;
    int mon, day, yr;
    int min, read;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &min_mon, &min_day, &min_yr);

    min = min_day + (min_mon * DAYS_IN_MONTH) + (min_yr * DAYS_IN_YEAR);
    printf("Enter 0/0/0 to quit\n");
    
    while (1)
    {
        printf("Enter date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mon, &day, &yr);

        // Exits the program when user enters 0/0/0
        if (mon == 0 && day == 0 && yr == 0) break;
        read = day + (mon * DAYS_IN_MONTH) + (yr * DAYS_IN_YEAR);
        //Checks if the date read is earlier than the previous.
        if (read < min) min = read;
    }
    
    yr = min / DAYS_IN_YEAR;
    min %= DAYS_IN_YEAR;
    mon = min / DAYS_IN_MONTH;
    day = min % DAYS_IN_MONTH;

    printf("%.2d/%.2d/%.2d is the earliest date\n", mon, day, yr);
    
    return 0;
}