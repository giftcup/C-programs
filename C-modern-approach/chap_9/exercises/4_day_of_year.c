#include <assert.h>

#define MONTHS 30

int day_of_year(int month, int day, int year);
void test(void);

int main(void)
{
    test();

    return 0;
}

void test(void)
{
    assert(day_of_year(2, 1, 2012));
    assert(day_of_year(1, 5, 2003));
}

int day_of_year(int m, int d, int y)
{
    return d + (m * d);
}