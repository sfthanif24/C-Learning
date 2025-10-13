/*
         Unary Operators
         >>============<<

    Program Name: Unary Operators Demo
    Author: sft Hanif
    Description: Simple program for unary operators +, -, ++, --
*/

#include <stdio.h>

int main()
{
    int num, x, y;
    ;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    printf("Original number: %d\n", num);
    printf("Unary plus (+): %d\n", +num);
    printf("Unary minus (-): %d\n", -num);

    printf("Initial values: x = %d, y = %d\n", x, y);

    printf("x++ = %d\n", x++);
    printf("After x++: x = %d\n", x);

    printf("++y = %d\n", ++y);
    printf("After ++y: y = %d\n", y);

    printf("x-- = %d\n", x--);
    printf("After x--: x = %d\n", x);

    printf("--y = %d\n", --y);
    printf("After --y: y = %d\n", y);

    return 0;
}