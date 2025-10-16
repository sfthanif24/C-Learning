/*
         Positive Negative Number Checker
         >>=============================<<

    Program Name: Positive Negative Checker
    Author: sft Hanif
    Description: Checks if a number is positive, negative or zero

Algorithm:
STEP 1: START
STEP 2: Declare variable number
STEP 3: Read number from user
STEP 4: If number > 0 then
            Display "Positive"
        Else If number < 0 then
            Display "Negative"
        Else
            Display "Zero"
        End If
STEP 5: STOP

Flowchart:
START → Declare number → Input number → Check conditions → Display result → STOP
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative.\n", number);
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}