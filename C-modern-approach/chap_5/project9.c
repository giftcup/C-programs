/* Description: Program indicate which date comes earlier on the calender.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int month1, day1, year1;
    int month2, day2, year2;
    bool m1, d1, y1, m2, d2, y2;
    bool date1, date2;
    m1 = d1 = y1 = m2 = d2 = y2 = false;
    date1 = date2 = false;    

    printf ("Enter first date (mm/dd/yy): ");
    scanf ("%d/%d/%d", &month1, &day1, &year1);
    printf ("Enter second date (mm/dd/yy): ");
    scanf ("%d/%d/%d", &month2, &day2, &year2);

    // Checks which month comes first
    if (month1 < month2)
    {
        m1 = true;
    }
    else if (month2 < month1)
    {
        m2 = true;
    }

    // Checks which day comes first
    if (day1 < day2)
    {
        d1 = true;
    }
    else if (day2 <  day1)
    { 
        d2 = true;
    }
    
    // Checks which year comes first
    if (year1 < year2)
    {
        y1 = true;
    }
    else if (year2 < year1)
    {
        y2 = true;
    }

    // Finding which date comes first.
    // Checks the years first if the year of the first date is smaller
    // the program displays the first date as the earlier date else it 
    // displays the second date
    if (y1 == true)
    {
        date1 = true;
    }
    else if (y2 == true)
    {
        date2 = true;
    }
    // If both the years are equal the program then checks the months
    else
    {
        // If the first month is smaller, the program displays the first date
        // as the earlier date else it displays the second date.
        if (m1 == true)
        {
            date1 = true;
        }
        else if(m2 == true)
        {
            date2 = true;
        }
        // If both months are equal, the program checks the days.
        else 
        {
            // If the first date is smaller, the program displays the first
            // date as the earlier date, else it displays the second date.
            if (d1 == true)
            {
                date1 = true;
            }
            else
            {
                date2 = true;
            }
        }
    }

    // Displaying which date is earlier than the other.
    if (date1 == true)
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n\n", month1, day1, year1, month2, day2, year2);
    }
    else
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n\n", month2, day2, year2, month1, day1, year1);
    }

    return 0;
}