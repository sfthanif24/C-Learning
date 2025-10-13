/*
         Quadratic Equation Solver
         >>=====================<<

    Program Name: Quadratic Equation Calculator
    Author: sft Hanif
    Description: Solves quadratic equation ax² + bx + c = 0

    Formula:
        Roots = [-b ± √(b² - 4ac)] / (2a)
*/
#include <stdio.h>
int main()
{
    double a, b, c, d, X1, X2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = sqrt(b * b - 4 * a * c); // discriminant
    X1 = (-b + d) / (2 * a);
    X2 = (-b - d) / (2 * a);

    printf("X1 = %.2lf\n", X1);
    printf("X2 = %.2lf\n", X2);
    return 0;
}