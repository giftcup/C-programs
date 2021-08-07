/* Description: Displays 4-hour time in a 
** 12-hour format.
** source: C Programming a Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12) {
        hour -= 12;
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
    }
    else if (hour == 0) {
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, minute);
    }
    else {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    }
}