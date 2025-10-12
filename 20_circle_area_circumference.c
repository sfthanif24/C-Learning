/*
         Circle Area and Circumference
         >>==========================<<

    Program Name: Circle Calculator
    Author: sft Hanif
    Description: Calculates area and circumference of circle

    Formula:
        Area = π × radius × radius
        Circumference = 2 × π × radius

Algorithm:
STEP 1: START
STEP 2: Declare variables radius, area, circumference
STEP 3: Read radius of circle from user
STEP 4: Calculate area = π × radius × radius
STEP 5: Calculate circumference = 2 × π × radius
STEP 6: Display area value
STEP 7: Display circumference value
STEP 8: STOP

Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare variables│
│radius, area,   │
│circumference   │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read radius        │
│from user          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│area = π × r × r   │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│circumference =    │
│2 × π × r          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Display area and   │
│circumference values│
└─────┬─────────────┘
      │
┌─────▼─────┐
│   STOP    │
└───────────┘
*/

#include <stdio.h>
int main()
{
    float radius, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    circumference = 2 * 3.1416 * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}