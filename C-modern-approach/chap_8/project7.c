/* Computes the sum of each row and each column in a 5 x 5 array of integers */

#include <stdio.h>

#define N 5

void inputs(int [][N]);
//void summing(int [][]);

int main(void)
{
    int arr[N][N];
    int sum;

    inputs(arr);

    printf("Row totals: ");
    for (int i = 0; i < N; i++)
    {
        sum = 0; 
        for (int j = 0; j < N; j++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < N; i++)
    {
        sum = 0; 
        for (int j = 0; j < N; j++)
        {
            sum += arr[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");
    
    return 0;
}

void inputs(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
}