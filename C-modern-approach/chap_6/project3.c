/* Description: Reduces a fraction to the lowest terms.
** Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int num, denum;
    int m, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denum);

    m = num;
    n = denum;
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
            num /= m;
            denum /= m;
            printf("In lowest terms: %d/%d\n", num, denum);
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