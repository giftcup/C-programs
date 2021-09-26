#include <assert.h>

void test(void);
int largest(int a[], int n);
int average(int a[], int n);
int positive_element(int a[], int n);

int main(void)
{
    test();

    return 0;
}

void test(void)
{
    int arr1[5] = {10, 61, 9, 73, 5};
    assert(largest(arr1, 5) == 73);
    assert(average(arr1, 5) == 31);
    assert(positive_element(arr1, 5) == 5);

    int arr2[6] = {-10, -7, -14, -90, -1, -3};
    assert(largest(arr2, 6) == -1);
    assert(average(arr2, 6) == -20);
    assert(positive_element(arr2, 6) == 0);
}

int largest(int a[], int n)
{
    int max = a[0];
    
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    
    return max;
}

int average(int a[], int n)
{
    int sum = a[0];

    for (int i = 1; i < n; i++)
        sum += a[i];

    return sum / n;
}

int positive_element(int a[], int n)
{
    int positive_numbers = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            positive_numbers++;

    return positive_numbers;
}