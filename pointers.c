#include <stdio.h>

void add_one(int *array, int length);

int main(void)
{
    int *a;
    a = malloc( sizeof(int) * 5 );

    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;
    for (int i = 0; i < 5; i++)
    printf("a[%d] = %d\n", i , a[i]);


    return 0;
}


