/*
         Leap Year Checker
         >>=============<<

    Program Name: Leap Year Checker
    Author: sft Hanif
    Description: Checks if a year is leap year or not

Algorithm:
STEP 1: START
STEP 2: Declare variable year
STEP 3: Read year from user
STEP 4: If ((year % 4 == 0 AND year % 100 != 0) OR (year % 400 == 0)) then
            Display "Leap Year"
        Else
            Display "Not Leap Year"
        End If
STEP 5: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare year   │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read year         │
└─────┬─────────────┘
      │
┌─────▼─────────────────┐
│ (year % 4 == 0 &&     │
│  year % 100 != 0) ||  │
│  year % 400 == 0 ?    │
│         │              │
│         ▼ Yes          ▼ No
│ "Leap Year"       "Not Leap Year"
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
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}