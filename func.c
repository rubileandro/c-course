#include <stdio.h>

double add(double x, double y);

float triple(float n);

int main(void)
{
    printf("%f\n", add(10.5, 5.9) );

    return 0;
}

float triple(float n)

{
    n = n * 3;
    return n;
}

double add(double x, double y)
{
    double result = x + y;
    return result;
}