#include <stdio.h>

void print_two(float a, float b);

int main(void)
{
    float x = 2.5, y = 4.2;
    print_two(x, y);


    return 0;
}

void print_two(float a, float b)
{
    printf("%f\n%f\n", a,b);
}
