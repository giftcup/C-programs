/* Converts a 12-hour time to 24-hour time */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, min;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &min);

    scanf(" %c", &ch);
    ch = toupper(ch);

    if(ch == 'P')
        hour += 12;
    
    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, min);

    return 0;
}