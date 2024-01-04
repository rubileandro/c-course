#include <stdio.h>

int main(void)
{
    // input
    int speed = 0; // km/h
    int time = 0; // hrs

    printf("Speed: ");
    scanf("%d", &speed);
    printf("Time: ");
    scanf("%d", &time);

    // processing
    int distance = speed * time;

    // output
    printf("dist: %d\n", distance);

    return 0;
}
