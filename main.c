#include <stdio.h>

int main(void)
{
    // input
    int speed = 60; // km/h
    int time = 7; // hrs

    // processing
    int distance = speed * time;

    // output
    printf("dist: %d\n", distance);

    return 0;
}
