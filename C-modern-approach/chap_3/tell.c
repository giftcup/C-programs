/*Description: Displaying the telephone number the user entered in some particular format.
**Source: C Programming A Modern Approach
*/

#include <stdio.h>

int main(void)
{
    int first, second, third;

    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);
    printf("You entered %3d.%3d.%3d\n", first, second, third);

    return 0;
}