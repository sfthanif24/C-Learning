/*
         Absolute Value Calculator
         >>=====================<<

    Program Name: Absolute Value Finder
    Author: sft Hanif
    Description: Finds absolute value of a number

    Formula:
        |-x| = x ex: |-5| = 5
        |x| = x ex: |5| = 5
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int integer_num;
    double decimal_num;
    int abs_int;
    double abs_double;

    printf("Enter an integer: ");
    scanf("%d", &integer_num);

    printf("Enter a decimal number: ");
    scanf("%lf", &decimal_num);

    // abs() for integers, fabs() for doubles/floats
    abs_int = abs(integer_num);
    abs_double = fabs(decimal_num);

    printf("Absolute value of %d is: %d\n", integer_num, abs_int);
    printf("Absolute value of %.2f is: %.2f\n", decimal_num, abs_double);

    return 0;
}