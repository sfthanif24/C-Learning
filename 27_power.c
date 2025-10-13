/*
         Power Calculator
         >>=============<<

    Program Name: Power Calculator
    Author: sft Hanif
    Description: Calculates base raised to exponent using pow() function
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    double result;

    printf("Enter X: "); // base
    scanf("%d", &x);

    printf("Enter Y: "); // exponent
    scanf("%d", &y);

    result = pow(x, y);

    printf("%d raised to power %d is: %.2f\n", x, y, result);

    return 0;
}