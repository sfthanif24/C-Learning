/*
         Capital and Small Letter Checker
         >>=============================<<

    Program Name: Letter Case Checker
    Author: sft Hanif
    Description: Checks if a character is capital or small letter

Algorithm:
STEP 1: START
STEP 2: Declare variable ch
STEP 3: Read a character from user
STEP 4: If ch >= 'A' AND ch <= 'Z' then
            Display "Capital Letter"
        Else If ch >= 'a' AND ch <= 'z' then
            Display "Small Letter"
        Else
            Display "Not an alphabet"
        End If
STEP 5: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare ch      │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read character    │
│from user         │
└─────┬─────────────┘
      │
┌─────▼─────────────────┐
│ ch >= 'A' AND ch <= 'Z'?│
│         │              │
│         ▼ Yes          ▼ No
│  "Capital Letter" ┌─────▼─────────────────┐
│         │          │ ch >= 'a' AND ch <= 'z'?│
│         │          │         │              │
│         │          │         ▼ Yes          ▼ No
│         │          │  "Small Letter"   "Not alphabet"
└─────┬───┴──────────┴─────────┴──────────────┘
      │
      ▼
┌─────▼───────────┐
│  DISPLAY RESULT │
└─────┬───────────┘
      │
┌─────▼─────┐
│   STOP    │
└───────────┘
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is a Capital Letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is a Small Letter.\n", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}