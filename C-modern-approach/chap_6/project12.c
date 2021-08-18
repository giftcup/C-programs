/* Modification of project11.c. Program stops only when the value
** entered by the user is less than the calculated e.
*/

#include <stdio.h>

int main(void)
{

    double e_user;
    double e = 1;

    printf("Enter small floating point number greater than 1: ");
    scanf("%lf", &e_user);

    for (int i = 1;; i++)
    {
        int d = 1;
        for (int j = 1; j <= i; j++)
        {
            d *= j; 
        }
        e += 1.0 / (double)d;
        d = 1;
        if (e > e_user) break;

    }
    printf("e = %.8lf\n", e);
}