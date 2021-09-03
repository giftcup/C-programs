/* Calculates the points for words in a scrabble game */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score, i;

    score = 0, i = 0;

    printf("\nEnter a word: ");
    while ((ch = toupper (getchar())) != '\n')
    {
        score += scores[ch - 'A'];
    }
    
    printf("Scrabble value: %d\n", score);
}