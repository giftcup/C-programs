/* Prints an n x n magic square */

#include <stdio.h>

int main(void)
{
    int n;
    int num = 0, i, j;

    printf("This program creates a magic square of specific sze.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int square[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            square[i][j] = 0;
    }

    i = 0, j = n / 2;
    while (num != n * n)
    {
        if (square[i][j] != 0)
        {
            i = (i + 1) % n;
            i += 1;
            j -= 1;
            if (j == -1)
                j = n - 1;
        }
        square[i][j] = num + 1;
        num ++;
        i = i - 1;
        if (i == -1)
            i = n - 1;
        j = (j + 1) % n; 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", square[i][j]);
        }
        printf("\n");
    }
}