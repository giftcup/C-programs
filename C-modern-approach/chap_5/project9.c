#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_MONTH 30
#define DAYS_IN_YEAR 365


int main(void)
{
    int firstmon, firstday, firstyr;
    int secmon, secday, secyr;
    int first, sec;

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &firstmon, &firstday, &firstmon);
    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &secmon, &secday, &secyr);

    first = firstday + firstmon * DAYS_IN_MONTH + firstyr * DAYS_IN_YEAR;
    sec = secday + secmon * DAYS_IN_MONTH + secyr * DAYS_IN_YEAR;
    
    if (first < sec) printf("%.2d/%.2d/%.2d is earlier\n", firstmon, firstday, firstyr);
    else if (sec < first) printf("%.2d/%.2d/%.2d is earlier\n", secmon, secday, secyr);
    else printf("The dates are the same.\n");

}