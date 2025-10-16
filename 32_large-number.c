/*
         Find Largest from Three Numbers
         >>===========================<<

    Program Name: Largest of Three Numbers
    Author: sft Hanif
    Description: Finds the largest number from three integers

Algorithm:
STEP 1: START
STEP 2: Declare variables a, b, c
STEP 3: Read three numbers a, b, c from user
STEP 4: If a > b AND a > c then
            Display "a is largest"
        Else If b > a AND b > c then
            Display "b is largest"
        Else
            Display "c is largest"
        End If
STEP 5: STOP

Flowchart:
START
  │
  ▼
Declare a, b, c
  │
  ▼
Input a, b, c
  │
  ▼
┌─────────────────┐
│   a > b &&      │──Yes──→┌─────────────────┐
│   a > c ?       │        │ "a is largest"  │
└─────┬───────────┘        └─────────────────┘
      │No
      ▼
┌─────────────────┐
│   b > a &&      │──Yes──→┌─────────────────┐
│   b > c ?       │        │ "b is largest"  │
└─────┬───────────┘        └─────────────────┘
      │No
      ▼
┌─────────────────┐
│ "c is largest"  │
└─────────────────┘
  │
  ▼
DISPLAY RESULT
  │
  ▼
STOP
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the largest.\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest.\n", b);
    }
    else
    {
        printf("%d is the largest.\n", c);
    }

    return 0;
}