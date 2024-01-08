#include <stdio.h>

int main(void)
{

    double initial = 0, step = 0, stop = 0;

    do
    {
        printf("Initial (m): ");
        scanf("%lf", &initial);
        if (initial <0) printf("Must be >=0\n");
    }   while (initial < 0);

    do
    {
        printf("Step (m): ");
        scanf("%lf", &step);
        if (step <=0) printf("Must be >0\n");
    }   while (step < 0);

    do
    {
        printf("Stop (m): ");
        scanf("%lf", &stop);
        if (stop <0) printf("Must be >=0\n");
    }   while (stop < 0);

    printf("\n");
    printf("Meters    Feet\n");
    printf("********************\n");
    for (double  conv = initial;
        conv <= stop;
        conv += step)
    {
        printf("%.2f %.2f\n", conv, conv * 3.28084);
    }


    return 0;
}
