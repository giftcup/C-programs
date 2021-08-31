/* Generating a random walk around an array */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    char mace[SIZE][SIZE];
    int random;
    int i, j;
    int up, down, left, right;
    bool present = false;

    up = 0, down = 1, left = 2, right = 3;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mace[i][j] = '.';
        }
    }

    i = 0, j = 0;
    srand((unsigned) time(NULL));

    mace[i][j] = 'A';
    for (int k = 1; k < 26; k++)
    {
        present = false;
        while (!present)
        {
            random = rand() % 4;
            printf("%d ", random);
            if (random == up)
            {   
                if (i - 1 >= 0 && i - 1 < 10 && mace[i-1][j] == '.')
                {
                    mace[i-1][j] = 'A' + k;
                    present = true;
                    i -= 1;
                }
            }
            else if (random == down)
            {
                if (i + 1 >= 0 && i + 1 < 10 && mace[i+1][j] == '.')
                {
                    mace[i+1][j] = 'A' + k;
                    present = true;
                    i += 1;
                }
            }
            else if (random == left)
            {
                if (j - 1 >= 0 && j - 1 < 10 && mace[i][j-1] == '.')
                {
                    mace[i][j-1] = 'A' + k;
                    present = true;
                    j -= 1;
                }
            }
            else
            {
                if (j + 1 >= 0 && j + 1 < 10 && mace[i][j+1] == '.')
                {
                    mace[i][j+1] = 'A' + k;
                    present = true;
                    j += 1;
                }
            }
        }
        printf("\n");
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", mace[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}