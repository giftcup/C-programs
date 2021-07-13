/* Description: A simple program that converts a floating
** point number to an integer
**/
/* Version 09.07.21 */
/* by ~giftcup */

#include <stdio.h>

int main(void) {
    float num;

    scanf("%f", &num);
    printf("%d\n", (int)num);
    printf("%c\n", (int)num);
    //printf("%d", num);
    return 0;
}