/*
         Bitwise Operators Demo
         >>==================<<

    Program Name: Bitwise Operators
    Author: sft Hanif
    Description: Demonstrates all bitwise operators

    Operators:
    &  - AND
    |  - OR
    ^  - XOR
    ~  - NOT
    << - Left Shift
    >> - Right Shift
*/

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Bitwise Operations\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("Bitswise AND (a & b) : %d\n", a & b);
    printf("Bitwise OR (a | b) : %d\n", a | b);
    printf("Bitwise XOR (a ^ b) : %d\n", a ^ b);
    printf("Bitwise NOT (~a) : %d\n", ~a);
    printf("Left Shift (a << 1) : %d\n", a << 1);
    printf("Right Shift (a >> 1) : %d\n", a >> 1);

    return 0;
}