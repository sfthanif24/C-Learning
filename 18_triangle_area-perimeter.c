/*
         Triangle Area and Perimeter
         >>=========================<<

    Program Name: Triangle Area
    Author: sft Hanif
    Description: Calculates area of triangle using base and height and perimeter using three sides

    Formula:
        Area = ½ × base × height
        Perimeter = side1 + side2 + side3

Algorithm:
STEP 1: START
STEP 2: Declare variables base, height, side1, side2, side3, area, perimeter
STEP 3: Read base of triangle from user
STEP 4: Read height of triangle from user
STEP 5: Read three sides of triangle from user
STEP 6: Calculate area = 0.5 × base × height
STEP 7: Calculate perimeter = side1 + side2 + side3
STEP 8: Display area value
STEP 9: Display perimeter value
STEP 10: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare variables│
│base, height,   │
│side1, side2,   │
│side3, area,    │
│perimeter       │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read base from     │
│user               │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Read height from   │
│user               │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Read three sides   │
│from user          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│area = 0.5 × b × h │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│perimeter = s1 +   │
│s2 + s3            │
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
    float base, height, side1, side2, side3;
    float area, perimeter;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    area = 0.5 * base * height;
    perimeter = side1 + side2 + side3;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}