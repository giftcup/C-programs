/* Description: Program uses the beaufort scale to determine the type of wind.
** source: C Programming with Linux a Modern Approach
*/

#include <stdio.h>

int main(void)
{
    float wind_speed;
    printf("Enter wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if (wind_speed < 1.0f)
        printf("Calm\n");
    else if (wind_speed < 4.0f)
        printf("Light air");
    else if (wind_speed < 28.0f)
        printf("Breeze\n");
    else if (wind_speed < 48.0f)
        printf("Gale\n");
    else if (wind_speed < 63.0f)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    
    return 0;
}