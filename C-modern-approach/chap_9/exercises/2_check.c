#include <assert.h>

int check(int x, int y, int n);
void test(void);

int main(void)
{
    test();

    return 0;
}

int check(int x, int y, int n)
{
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1)
        return 1;
    else
        return 0;
}

void test(void)
{
    assert(check(2, 5, 9) == 1);
    assert(check(9, 5, 10) == 1);
    assert(check(-1, 5, 9) == 0);
    assert(check(0,0, 0) == 0);
}