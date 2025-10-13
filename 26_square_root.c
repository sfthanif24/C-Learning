/*
         Square Root Calculator
         >>==================<<

    Program Name: Square Root Finder
    Author: sft Hanif
    Description: Finds square root of a number using sqrt() function
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    double square_root = sqrt(num);

    printf("Square root of %d is: %.2f\n", num, square_root);

    return 0;
}