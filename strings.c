#include <stdio.h>
#include <string.h>

int main(void)
{

    char s1[] = "This is the way.";

    int length = strlen(s1);
    int num_is = 0;

    for (int i = 0; i < length; i++)
        if (s1[i] == 'i') num_is++;

    printf("Length: %d\n", length);
    printf("Number of is: %d\n", num_is);





    return 0;
}
