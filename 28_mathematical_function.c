/*
         Simple Mathematical Functions
         >>==========================<<

    Program Name: Math Functions
    Author: sft Hanif
    Description: Simple program for log, log10, sin, cos, tan, exp
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double num, angle, x;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Enter angle in radians: ");
    scanf("%lf", &angle);

    printf("Enter exponent: ");
    scanf("%lf", &x);

    printf("ln(%.2f) = %.4f\n", num, log(num));
    printf("log10(%.2f) = %.4f\n", num, log10(num));

    printf("sin(%.2f) = %.4f\n", angle, sin(angle));
    printf("cos(%.2f) = %.4f\n", angle, cos(angle));
    printf("tan(%.2f) = %.4f\n", angle, tan(angle));

    printf("e^%.2f = %.4f\n", x, exp(x));

    return 0;
}