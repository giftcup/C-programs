#include <assert.h>
#include <stdio.h>

double compute_GPA(char grades[], int n);
void test(void);

int main(void)
{
    test();

    return 0;
}

void test(void)
{
    char arr1[6] = {'A', 'D', 'A', 'B', 'A', 'C'};
    assert(compute_GPA(arr1, 6) == 3.0);

    char arr2[6] = {'c', 'd', 'A', 'f', 'A', 'a'};
    assert(compute_GPA(arr1, 6) == 2.5);

    char arr3[6] = {'a', 'a', 'b', 'b', 'a', 'a'};
    assert(compute_GPA(arr1, 6) == 3.667);
}

double compute_GPA(char a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A' || a[i] == 'a')
            sum += 4;
        else if (a[i] == 'B' || a[i] == 'b')
            sum += 3;
        else if (a[i] == 'C' || a[i] == 'c')
            sum += 2;
        else if (a[i] == 'D' || a[i] == 'd')
            sum += 1;
    }
    printf("%lf\n", (double)sum / (double)n);
    return (double)sum / (double)n;
}