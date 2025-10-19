// Program name: While loop example

#include <stdio.h>
int main()
{
    int i = 1; // Initialization
    printf("Prints 10 times while loop\n");

    while (i <= 10) // Condition
    {
        printf("%d.while loop\n", i);
        i++; // Increment
    }

    printf("\n");
    return 0;
}