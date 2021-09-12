/* Reverses the words in a sentence */

#include <stdio.h>

#define SIZE 100

int main(void)
{
    char sentence[SIZE], ch;
    char stop;
    int i;

    printf("Enter a sentence: ");
    
    i = 0;
    while ((ch = getchar()) != '\n' && i < SIZE)
    {
        if (ch == '.' || ch == '!' || ch == '?')
        {
            stop = ch;
            break;
        }
        sentence[i++] = ch;
    }
    i --;

    for (int j = i; j >= 0; j--)
    {
        if (j == 0)
        {
            for (int k = j; k <= i && sentence[k] != ' '; k++)
            {   
                printf("%c", sentence[k]);
            }
        }
        else if (sentence[j] == ' ' && j != 0)
        {
            for (int k = j + 1; k <= i && sentence[k] != ' '; k++)
            {   
                printf("%c", sentence[k]);
            }
            printf("%c", ' ');
        }
    }
    printf("%c\n", stop);

    return 0;
}