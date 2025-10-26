/*
         Armstrong Number Checker
         >>====================<<

    Program Name: Armstrong Number
    Author: sft Hanif
    Description: Checks if a number is Armstrong number
    Armstrong Number: Sum of cubes of digits equals the number itself
    Example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
*/

#include <stdio.h>

int main()
{
    int number, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (original != 0)
    {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}