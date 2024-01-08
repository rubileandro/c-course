#include <stdio.h>

int main(void)
{
    int number = 0;

    switch (number)
    {
        case 0:
            printf("Case 0!\n");
            break;

        case 1:
            printf("Case 1!\n");

        case 2:
        {
            printf("Case 2!\n");
        }
            printf("Switch over!\n");
    }


    return 0;
}
