/*
         Swap Two Numbers Without Temporary Variable
         >>=======================================<<

    Method:
        Using arithmetic operations:
        num1 = num1 + num2
        num2 = num1 - num2
        num1 = num1 - num2
*/

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping without temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}