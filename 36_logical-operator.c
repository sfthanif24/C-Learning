/*
         Logical Operators Demo
         >>==================<<

    Program Name: Logical Operators
    Author: sft Hanif
    Description: Demonstrates AND, OR, NOT operators

    && - AND Operator: Both conditions must be true
    || - OR Operator: At least one condition must be true
    !  - NOT Operator: Reverses the logical state

     Time Classification:
    5:00 - 11:59 : Morning
    12:00 - 16:59 : Afternoon
    17:00 - 20:59 : Evening
    21:00 - 4:59  : Night
*/

#include <stdio.h>

int main()
{
    int hour;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour <= 11)
    {
        printf("Good Morning! (%d:00)\n", hour);
    }
    else if (hour >= 12 && hour <= 16)
    {
        printf("Good Afternoon! (%d:00)\n", hour);
    }
    else if (hour >= 17 && hour <= 20)
    {
        printf("Good Evening! (%d:00)\n", hour);
    }
    else if ((hour >= 21 && hour <= 23) || (hour >= 0 && hour <= 4))
    {
        printf("Good Night! (%d:00)\n", hour);
    }
    else
    {
        printf("Invalid hour! Please enter between 0-23.\n");
    }

    return 0;
}
