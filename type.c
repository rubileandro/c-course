#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 5;
    int b = 2;

    double c = (double) a / b;

    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %f\n", a, b, c);

    return 0;
}