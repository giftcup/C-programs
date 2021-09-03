/* Project 8 of Chapter 8 */

#include <stdio.h>

#define N 3

void inputs(int [][N]);

int main(void)
{
    int arr[N][N];
    int sum;
    int high, low;

    inputs(arr);

    printf("Quiz total: ");
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

    printf("High scores: ");
    for (int i = 0; i < N; i++)
    {
        high = arr[i][0];
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] > high)
                high = arr[i][j];
        }
        printf("%d ", high);
    }
    printf("\n");

    printf("Low scores: ");
    for (int i = 0; i < N; i++)
    {
        low = arr[i][0]; 
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] < low)
                low = arr[i][j];
        }
        printf("%d ", low);
    }
    printf("\n");

    printf("Student totals: ");
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

    printf("Student averages: ");
    for (int i = 0; i < N; i++)
    {
        sum = 0; 
        for (int j = 0; j < N; j++)
        {
            sum += arr[j][i];
        }
        printf("%.2lf ", (double) sum / (double) N);
    }
    printf("\n");
    
    return 0;
}

void inputs(int arr[][N])
{
    for (int i = 0; i < N; i++)
    {
        printf("Enter quiz %d: ", i+1);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
}