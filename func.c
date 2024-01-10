#include <stdio.h>

int find_max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int main(void)
{
    int max = find_max(10, 5);
    printf("Max: %d\n", max);

    return 0;
}