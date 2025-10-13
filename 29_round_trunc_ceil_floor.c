/*
         Rounding Functions
         >>===============<<

    Program Name: Rounding Functions
    Author: sft Hanif
    Description: Simple program for round, trunc, ceil, floor

round(): Rounds to nearest integer (0.5 rounds up)

trunc(): Removes decimal part (truncates toward zero)

ceil(): Rounds up to nearest integer

floor(): Rounds down to nearest integer
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double number;

    printf("Enter a decimal number: ");
    scanf("%lf", &number);

    printf("Original number: %.3f\n", number);
    printf("round(): %.0f\n", round(number));
    printf("trunc(): %.0f\n", trunc(number));
    printf("ceil():  %.0f\n", ceil(number));
    printf("floor(): %.0f\n", floor(number));

    return 0;
}