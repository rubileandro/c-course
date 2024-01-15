#include <stdio.h>

int main(void)

{
    int *numbers;
    int size = 2;
    numbers = malloc (sizeof(int) * size);
    int input = 0, i = 0;
    do
    {
        if (i == size)
        {
            size += 2;
            numbers = realloc(numbers, sizeof(int)*size);
            printf("Realloc for %d ints\n", size);
        }
        printf("Enter (-1 to quit): ");
        scanf("%d", &input);
        if (input != -1)
        {
            numbers[i] = input;
            i++;
        }

    } while (input != -1);

    int num_elemnts = i;
    int total = 0;
    for (int j = 0; j < num_elemnts; j++)
        total += numbers[j];
    printf("Average: %d\n", total / num_elemnts);

    free(numbers);

    return 0;
}


