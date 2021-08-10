/* Description: Program displays the departure and arrival time for a flight whose departure is closest to that entered by the user.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int hour, min, time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    // Convert the time inputed to minutes
    time = (hour * 60) + min;


    // Convert each departure time to minutes.
    // To find the departure time closest to the inputted time, add, then divide by 
    // 2 the two close departure times to come up with a range.
    if (time < 533)
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
    else if (time < 632)
         printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
    else if (time < 724)
         printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
    else if (time < 805)
         printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m\n");
    else if (time < 894)
         printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
    else if (time < 1044)
         printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
    else if (time < 1224)
         printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
    else
         printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");

    return 0;
}