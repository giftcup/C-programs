#include <assert.h>
#include <math.h>

void test(void);
int digit(int num, int digit);

int main(void)
{
    test();

    return 0;
}

int digit(int num, int digit)
{
    int power = (int) pow(10, digit);

    return (num % power) / pow(10, digit - 1);
}

void test(void)
{
    assert(digit(829, 1) == 9);
    assert(digit(829, 2) == 2);
    assert(digit(829, 3) == 8);
}