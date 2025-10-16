/*
         Letter Grade Calculator
         >>===================<<

    Program Name: Grade Calculator
    Author: sft Hanif
    Description: Calculates letter grade based on marks

Algorithm:
STEP 1: START
STEP 2: Declare variable marks
STEP 3: Read marks from user
STEP 4: If marks >= 90 AND marks <= 100 then
            Display "Grade: A+"
        Else If marks >= 80 AND marks <= 89 then
            Display "Grade: A"
        Else If marks >= 70 AND marks <= 79 then
            Display "Grade: B"
        Else If marks >= 60 AND marks <= 69 then
            Display "Grade: C"
        Else If marks >= 50 AND marks <= 59 then
            Display "Grade: D"
        Else If marks >= 0 AND marks <= 49 then
            Display "Grade: F (Fail)"
        Else
            Display "Invalid marks! Please enter between 0-100."
        End If
STEP 5: STOP

Flowchart:
START
  │
  ▼
Declare marks
  │
  ▼
Input marks
  │
  ▼
┌─────────────────┐
│ marks >= 90 ?   │──Yes──→ "Grade: A+"
└─────┬───────────┘
      │No
      ▼
┌─────────────────┐
│ marks >= 80 ?   │──Yes──→ "Grade: A"
└─────┬───────────┘
      │No
      ▼
┌─────────────────┐
│ marks >= 70 ?   │──Yes──→ "Grade: B"
└─────┬───────────┘
      │No
      ▼
┌─────────────────┐
│ marks >= 60 ?   │──Yes──→ "Grade: C"
└─────┬───────────┘
      │No
      ▼
┌─────────────────┐
│ marks >= 50 ?   │──Yes──→ "Grade: D"
└─────┬───────────┘
      │No
      ▼
┌─────────────────┐
│ marks >= 0 ?    │──Yes──→ "Grade: F (Fail)"
└─────┬───────────┘
      │No
      ▼
"Invalid marks!"
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
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade: A+\n");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Grade: D\n");
    }
    else if (marks >= 0 && marks <= 49)
    {
        printf("Grade: F (Fail)\n");
    }
    else
    {
        printf("Invalid marks! Please enter between 0-100.\n");
    }

    return 0;
}