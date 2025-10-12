/*
         Rectangle Area and Perimeter
         >>==========================<<

    Program Name: Rectangle Calculator
    Author: sft Hanif
    Description: Calculates area and perimeter of rectangle

    Formula:
        Area = length × width
        Perimeter = 2 × (length + width)

Algorithm:
STEP 1: START
STEP 2: Declare variables length, width, area, perimeter
STEP 3: Read length of rectangle from user
STEP 4: Read width of rectangle from user
STEP 5: Calculate area = length × width
STEP 6: Calculate perimeter = 2 × (length + width)
STEP 7: Display area value
STEP 8: Display perimeter value
STEP 9: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare variables│
│length, width,  │
│area, perimeter │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read length from   │
│user               │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Read width from    │
│user               │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│area = length ×    │
│width              │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│perimeter = 2 ×    │
│(length + width)   │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Display area and   │
│perimeter values   │
└─────┬─────────────┘
      │
┌─────▼─────┐
│   STOP    │
└───────────┘
*/

#include <stdio.h>
int main()
{
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}