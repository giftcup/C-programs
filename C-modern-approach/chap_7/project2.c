
#include <stdio.h>

int main(void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number: ");
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++)
    {
        printf("%20d%20d\n", i, i * i);
        while (i % 24 == 0)
        {
                printf("Press Enter to continue...");
                getchar();
                break;
        }
        
    }

    return 0;
}