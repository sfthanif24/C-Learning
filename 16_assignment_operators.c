/*
                        Assignment Operators in C
                         >>=====================<<

    Program Name: Assignment Operators
    Author: sft Hanif
    Description: Demonstrates all assignment operators in C

    Assignment Operators:
    =   : Simple assignment
    +=  : Add and assign
    -=  : Subtract and assign
    *=  : Multiply and assign
    /=  : Divide and assign
    %=  : Modulus and assign
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 3;

    printf("4. ASSIGNMENT OPERATORS:\n");
    int x = a; // Simple assignment
    printf("   x = a : x = %d\n", x);

    x += b; // x = x + b
    printf("   x += b : x = %d\n", x);

    x -= c; // x = x - c
    printf("   x -= c : x = %d\n", x);

    x *= 2; // x = x * 2
    printf("   x *= 2 : x = %d\n", x);

    x /= 2; // x = x / 2
    printf("   x /= 2 : x = %d\n", x);

    x %= 4; // x = x % 4
    printf("   x %%= 4 : x = %d\n", x);
    printf("\n");

    return 0;
}