#include <stdio.h>

int main(void)
{

    char mydata[5];
    mydata[0] = 'a';
    mydata[1] = 'b';
    mydata[2] = 'c';
    mydata[3] = 'd';
    mydata[4] = '\0';

    printf("mydata[2] = %c\n", mydata[2]);

    printf("\n%s\n", mydata);


    return 0;
}
