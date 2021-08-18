/* Finding an approximation for the mathematical constant e */

#include <stdio.h>

int main(void)
{
    int num;
    double e = 1;
    
    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int d = 1;
        for (int j = 1; j <= i; j++)
        {
            d *= j;
        }
        
        e += 1.0 / (double)d;
        d = 1;
    }
    printf("e ~ %.8lf\n", e);
}