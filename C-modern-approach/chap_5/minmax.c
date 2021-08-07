/* Description: Gets the maximum and minimum of four given numbers.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    int min, max;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    min = max = n1;
    if (n2 > max)
        max = n2;
    else 
        min = n2;
    if (n3 > max)
        max = n3;
    else if (n3 < min)
        min = n3;
    if (n4 > max)
        max = n4;
    else if (n4 < min)
        min = n4;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
}