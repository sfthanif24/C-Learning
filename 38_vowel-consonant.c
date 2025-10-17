/*
         Vowel or Consonant Checker
         >>======================<<

    Program Name: Vowel Consonant Checker
    Author: sft Hanif
    Description: Checks if a character is vowel or consonant

Algorithm:
STEP 1: START
STEP 2: Declare variable ch
STEP 3: Read a character from user
STEP 4: Convert character to lowercase
STEP 5: If ch is 'a' or 'e' or 'i' or 'o' or 'u' then
            Display "Vowel"
        Else If ch is between 'a' and 'z' then
            Display "Consonant"
        Else
            Display "Not an alphabet"
        End If
STEP 6: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare ch     │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read character    │
│from user         │
└─────┬─────────────┘
      │
┌─────▼─────────────────┐
│Convert to lowercase  │
└─────┬─────────────────┘
      │
┌─────▼─────────────────────────────────┐
│ ch == 'a' OR 'e' OR 'i' OR 'o' OR 'u'?│
│         │                              │
│         ▼ Yes                          ▼ No
│    "Vowel"                      ┌─────▼─────────────────┐
│         │                        │ ch >= 'a' AND ch <= 'z'?│
│         │                        │         │              │
│         │                        │         ▼ Yes          ▼ No
│         │                        │   "Consonant"     "Not alphabet"
└─────┬───┴────────────────────────┴─────────┴──────────────┘
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
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a consonant. \n", ch);
    }
    else
    {
        printf("%c is not an alphabet. \n", ch);
    }
}