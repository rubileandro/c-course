#include <stdio.h>

int main(void)
{
    int number = 0;

    do
    {
        printf("Enter number (>0):");
        scanf("%d", &number);
        if (number <=0)
            printf("Number must be >0!\n");
    } while (number <= 0);



    return 0;
}
