/* Tests whether two words are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 26

int main(void)
{
    int tracker[N] = {0};
    int i;
    bool anagram = true;
    char ch;

    printf("Enter first word: ");
    i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            tracker[tolower(ch) - 'a'] += 1;
    }

    printf("Enter second word: ");
    i = 0;
    while ((ch = getchar()) != '\n')
    {
        tracker[ch - 'a'] -= 1;
    }

    for (i = 0; i < N; i ++)
    {
        if (tracker[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");
    
    return 0;
}