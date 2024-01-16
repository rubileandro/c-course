#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 3


int main(void)
{
    int data[ROWS][COLS] = { {1,2,3},
                             {4,5,6}};

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
        printf("data [%d][%d] = ", i, j);
        scanf("%d", &data[i][j]);
        }


    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            printf("data[%d][%d] = %d\n", i, j,
                                             data[i][j]);


    return 0;
}
