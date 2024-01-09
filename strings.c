#include <stdio.h>

int main(void)
{

    char s1[] = "This is my string.";

    for (int i = 0; i < 19; i++)
    {
        if (s1[i] == '\0')
        printf("s1[%d] = \\0 null terminator\n", i);
        else
        printf("s1[%d] = %c\n", i, s1[i]);
    }
    printf("\n%s\n", s1);

    return 0;
}
