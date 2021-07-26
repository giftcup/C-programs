/*Description: Reading groups of numbers from stdin and displaying separately on stdout.
**Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int prefix, identifier, code, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &item, &check);

    printf("GS! prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, identifier, code, item, check);

    return 0;
}