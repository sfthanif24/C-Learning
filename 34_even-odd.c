/*
         Even-Odd Number Checker
         >>===================<<

    Program Name: Even-Odd Checker
    Author: sft Hanif
    Description: Checks if a number is even or odd

Algorithm:
STEP 1: START
STEP 2: Declare variable number
STEP 3: Read number from user
STEP 4: If (number % 2 == 0) then
            Display "Even"
        Else
            Display "Odd"
        End If
STEP 5: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare number  │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read number        │
└─────┬─────────────┘
      │
┌─────▼─────────────────┐
│ number % 2 == 0 ?     │
│         │              │
│         ▼ Yes          ▼ No
│    "Even Number"   "Odd Number"
└─────┬─────────────┬─────┘
      │             │
      └─────┬───────┘
            │
┌───────────▼───────────┐
│     DISPLAY RESULT    │
└───────────┬───────────┘
            │
┌───────────▼─────┐
│      STOP       │
└─────────────────┘
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}