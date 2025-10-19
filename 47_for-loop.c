// Program Name: For Loop Example

#include <stdio.h>
int main()
{
    int i;
    printf("Prints  10 times for loop\n");

    for (i = 1; i <= 10; i++) // for(initialization; condition; increment)
    {
        printf("%d. for loop\n", i);
    }
    printf("\n");

    return 0;
}