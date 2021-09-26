#include <assert.h>

double triangle_area(double base, double height);
void test(void);

int main(void)
{
    test();

    return 0;
}

double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}

void test(void)
{
    assert(triangle_area(3, 6) == 9.0);
    assert(triangle_area(2, 4) == 4.0);
    assert(triangle_area(11, 15) == 82.5);
    assert(triangle_area(3.67, 4.5) == 8.2575);
}