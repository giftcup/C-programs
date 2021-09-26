#include <assert.h>

void test(void);
int num_digits(int n);

int main(void)
{
    test();

    return 0;
}

void test(void)
{
    assert(num_digits(345) == 3);
    assert(num_digits(98653456) == 8);
    assert(num_digits(0) == 1);
    assert(num_digits(12) == 2);
}

int num_digits(int n)
{
    int digits = 1; 
    n /= 10;
    while (n != 0)
    {
        digits += 1;
        n /= 10;
    }

    return digits;
}