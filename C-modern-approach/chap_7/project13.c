/* Finds the average word length */

#include <stdio.h>

int main(void)
{
    char ch;
    int letters, words;
    letters = 0;
    words = 1;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            words++;
        else
            letters++;
    }
    
    printf("Average word length: %.1f\n", (float) letters / (float)words);

    return 0;

}