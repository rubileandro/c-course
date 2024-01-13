#include <stdio.h>

void add_one(int *array, int length);

int main(void)
{

    int a[] = {1,2,3};
    int *p;
    p = a;

    printf("p: %p\n", p );
    printf("a: %p\n", a );

    printf("p[2] = %d\n", p[2]);
    printf("a[2] = %d\n", a[2]);

    return 0;
}

void add_one(int *array, int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}