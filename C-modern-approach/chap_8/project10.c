/* Allocates arrival and departure time for a travller */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(void)
{
    int departure[SIZE] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[SIZE] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int hour, minute;
    int min, i;
    int flightnum = 0;
    
    
    printf("Enter 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    minute += (hour * 60);

    min = abs(minute - departure[0]);
    
    for (i = 1; i < SIZE; i++)
    {
        int temp = abs(minute - departure[i]);
        if (temp < min)
        {
            min = temp;
            flightnum++;
        } else break;
    }

    printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", departure[flightnum] / 60, departure[flightnum] % 60, arrival[flightnum] / 60, arrival[flightnum] % 60);

    return 0;
}