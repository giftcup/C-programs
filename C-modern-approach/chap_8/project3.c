/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeated = false;
    int digit;
    long n;

    printf("\nEnter zero(0) to quit.\n");
    printf("======================\n");

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] =  true;
            n /= 10;
        }
        if (n > 0)
            repeated = true;

        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    

    if (repeated)
        printf("Repeated digits\n");
    else
        printf("No repeated digits\n");

    return 0;
}