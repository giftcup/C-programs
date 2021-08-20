/* Finds the square root using Newton's method */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    y = 1.0;

    printf("ENter a positive number: ");
    scanf("%lf", &x);

    double y1 = (y + x / y) / 2;
    
    while ((fabs(y - y1) > (y * .00001)))
    {
        y = y1;
        y1 = (y1 + x / y1) / 2;
    }

    printf("The square root of %.1lf is %.5lf\n", x, y);

    return 0;
    
}