/* Allocates arrival and departure time for a travller */

#include <stdio.h>

#define SIZE 8

int main(void)
{
    int departure[SIZE] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[SIZE] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int hour, minute;
    int min, i, mindex;
    
    
    printf("Enter 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    minute += (hour * 60);

    min = (int) fabs(minute - departure[0]);
    
    mindex = 0;
    for (i = 1; i < SIZE; i++)
    {
        if (minute < departure[i])
        {
            min = departure[i];
            mindex = i;
        }
    }
    i--;

    printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s\n", min / 60, min % 60, min >= 720 ? "pm" : "am", arrival[mindex] / 60, arrival[mindex] % 60, arrival[mindex] >= 720 ? "pm" : "am");

    return 0;
}