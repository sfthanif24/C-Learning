
/*
        Arithmetic Operators in C
         >>=====================<<

    Program Name: Arithmetic Operations
    Author: sft Hanif
    Description: Demonstrates all arithmetic operators in C

    Arithmetic Operators:
    +  : Addition
    -  : Subtraction
    *  : Multiplication
    /  : Division
    %  : Modulus (Remainder)
*/

#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 3;

    printf("ARITHMETIC OPERATORS:\n");
    printf("   a + b = %d\n", a + b);  // Addition
    printf("   a - b = %d\n", a - b);  // Subtraction
    printf("   a * b = %d\n", a * b);  // Multiplication
    printf("   a / b = %d\n", a / b);  // Division
    printf("   a %% c = %d\n", a % c); // Modulus (remainder)

    return 0;
}