/*
         Ternary Operator
         ================

    Program Name: Ternary Operator Demo
    Author: sft Hanif
    Description: Demonstrates conditional (ternary) operator

    Syntax: condition ? expression1 : expression2
    If condition is true, returns expression1
    If condition is false, returns expression2
*/

#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using ternary operator to find maximum
    max = (a > b) ? a : b;

    printf("Maximum number is: %d\n", max);

    return 0;
}