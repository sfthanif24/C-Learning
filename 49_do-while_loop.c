// Program Name: Do-While loop example

#include <stdio.h>
int main()
{
    int i = 1; // Initialization
    printf("Prints 10 times do-while loop\n");

    do
    {
        printf("%d. do-while loop\n", i);
        i++; // Increment
    } while (i <= 10); // Condition
    printf("\n");

    return 0;
}