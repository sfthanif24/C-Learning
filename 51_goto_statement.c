// Program Name: Go To Statement

#include <stdio.h>
int main()
{
    int i = 1;
    printf("Numbers from 1 to 5 using goto\n");

start: // label
    printf("%d\n", i);
    i++;

    if (i <= 5)
    {
        goto start; // jump to the label 'start'
    }

    printf("\n");
    return 0;
}