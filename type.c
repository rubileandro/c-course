#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int data1;
    int *array;
} Info;


int main(void)
{
    Info a;
    a.data1 = 7;
    a.array = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        a.array[i] = i + 1;

    Info b = a;
    printf("b.data1: %d\n", b.data1);
    for (int i = 0; i < 5; i++)
        printf("b.array[%d = %d\n", i , b.array[i]);

    printf("a.array: %p\n", a.array);
    printf("b.array: %p\n", b.array);

    b.array[0] = 10;
    for (int i = 0; i < 5; i++)
        printf("b.array[%d = %d\n", i , b.array[i]);


    free(a.array);

    return 0;
}
