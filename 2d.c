#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 3

void print_array(int data[ROWS][COLS]);

int main(void)
{
    int data[ROWS][COLS] = { 0 };

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
        printf("data [%d][%d] = ", i, j);
        scanf("%d", &data[i][j]);
        }

    print_array(data);


    return 0;
}

void print_array(int data[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            printf("data[%d][%d] = %d\n", i, j,
                                            data[i][j]);
}