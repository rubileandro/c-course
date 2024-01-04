#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);

    if (height != 160)
        printf("height is not 160!\n");
    else
        printf("Height is 160!\n");



    return 0;
}
