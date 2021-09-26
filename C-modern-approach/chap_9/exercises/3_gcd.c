#include <assert.h>

int gcd(int m, int n);
void test(void);

int main(void)
{
    test();

    return 0;
}

int gcd(int m, int n)
{   
    int gcd, i;

    i = 1, gcd = 1;
    while (i <= m && i <= n)
    {
        if (m % i == 0 && n % i == 0)
            gcd = i;
        i++;
    }
    return gcd;
}

void test(void)
{
    assert(gcd(24, 36) == 12);
    assert(gcd(2, 4) == 2);
    assert(gcd(2, 9) == 1);
    assert(gcd(30, 18) == 6);
    assert(gcd(30, 25) == 5);
}