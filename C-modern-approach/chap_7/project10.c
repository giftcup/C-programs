/* Counts the vowels in a sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int vowels = 0;

    printf("Enter a sentence: ");
    
    while((c = getchar()) != '\n')
    {
        c = tolower(c);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels ++;
    }

    printf("Your sentence contains %d vowels\n", vowels);

    return 0;
}