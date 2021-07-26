/* Description: Program calculates the volume of a sphere.
** Source: C Programming A Modern Approach by K.N King
*/

#include <stdio.h>
#define RATIO (4.0/3.0)
#define PI 3.14

int main(void)
{
    float radius;
    printf("Enter the radius of the sphere: "); //prompts don't need a new line character
    scanf("%f", &radius);

    float volume = RATIO * PI * radius * radius *radius;

    printf("The volume of the sphere with radius %f is %f\n", radius, volume);

    return 0;
}