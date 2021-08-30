/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

#define SIZE 10

int main(void)
{
    int digit_seen[SIZE] = {0};
    int digit;
    long n;
    bool repeated;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit] += 1;
        if (digit_seen[digit] > 1)
            repeated = true;
        n /= 10;
    }

    if (repeated)
    {
        printf("Repeated digit(s): ");
        for (int i = 0; i < SIZE; i++)
        {
            if (digit_seen[i] > 1)
                printf(" %d", i);
        }printf("\n");
    }
    else {
        printf("No repeated digits.\n");
    }
    
return 0;
}