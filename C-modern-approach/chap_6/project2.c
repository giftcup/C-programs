/* Description: Finds the GCD of two numbers using the euclid's algorithm.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    
    do
    {
        if(n == 0)
        {
            printf("Greatest common divisor: %d\n", m);
            return 0;
        }
        else
        {
            int t = m;
            m = n;
            n = t % n;
        }
    } while (n >= 0);
}