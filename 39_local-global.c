/*
          Local vs Global Variables
        ============================
*/

#include <stdio.h>

// Global variable
int global_var = 50;

void testFunction()
{
    // Local variable
    int local_var = 10;

    printf("\nInside testFunction:\n");
    printf("Local variable = %d\n", local_var);
    printf("Global variable = %d\n", global_var);
}

int main()
{
    // Local variable with same name as in testFunction
    int local_var = 20;

    printf("\nInside main function:\n");
    printf("Local variable = %d\n", local_var);
    printf("Global variable = %d\n", global_var);

    testFunction();

    return 0;
}