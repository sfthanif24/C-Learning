/*
                Sum and Average of Three Numbers
                     >>==================<<

    Program Name: Sum and Average Calculator
    Author: Beginner Coder
    Description: Calculates sum and average of three numbers

    Algorithm:
    STEP 1: START
    STEP 2: Declare variables num1, num2, num3, sum, avg
    STEP 3: Read three numbers from user
    STEP 4: Calculate sum = num1 + num2 + num3
    STEP 5: Calculate average = sum / 3
    STEP 6: Display sum value
    STEP 7: Display average value
    STEP 8: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare variables│
│num1, num2, num3│
│sum, avg        │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read three numbers │
│from user          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│sum = num1 + num2  │
│+ num3             │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│avg = sum / 3      │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Display sum and    │
│average values     │
└─────┬─────────────┘
      │
┌─────▼─────┐
│   STOP    │
└───────────┘
*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int sum;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = (float)sum / 3;

    printf("Sum is : %d\n", sum);
    printf("Average is : %.2f\n", avg);

    return 0;
}