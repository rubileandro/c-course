#include <stdio.h>

int main(void)
{
    int number = 3;

    switch (number)
    {
        case 0:
            printf("Case 0!\n");

        case 1:
            printf("Case 1!\n");

        default:
            printf("Default case!\n");
    }

    printf("Switch over!\n");


    return 0;
}
