/*
         Swap Two Numbers
         >>=============<<

    Program Name: Number Swapper
    Author: sft Hanif
    Description: Swaps two numbers using temporary variable

    Method:
        Using temporary variable:
        temp = num1
        num1 = num2
        num2 = temp
*/

#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter Number 01: ");
    scanf("%d", &num1);

    printf("Enter Number 02: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping using temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}