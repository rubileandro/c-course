#include <stdio.h>

int main(void)
{
    float x = 5.2;
    double y = -9.8;

    printf("x: ");
    // single-precision floating point
    scanf("%f", &x);
    // double-precision floating point
    printf("x: %f\n", x);

    printf("y: ");
    scanf("%lf", &y);
    printf("y: %f\n", y);

    return 0;
}
