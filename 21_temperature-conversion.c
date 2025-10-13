/*
         Temperature Conversion
         >>===================<<

    Program Name: Temperature Converter
    Author: sft Hanif
    Description: Converts between Celsius, Fahrenheit and Kelvin

    Formula:
        Celsius to Fahrenheit: F = (C × 9/5) + 32
        Fahrenheit to Celsius: C = (F - 32) × 5/9
        Celsius to Kelvin: K = C + 273.15
        Kelvin to Celsius: C = K - 273.15

Algorithm:
STEP 1: START
STEP 2: Declare variables celsius, fahrenheit, kelvin
STEP 3: Read temperature in Celsius
STEP 4: Calculate fahrenheit = (celsius × 9/5) + 32
STEP 5: Calculate kelvin = celsius + 273.15
STEP 6: Display Fahrenheit value
STEP 7: Display Kelvin value
STEP 8: STOP


Flowchart:
┌─────────┐
│  START  │
└─────┬───┘
      │
┌─────▼──────────┐
│Declare variables│
│celsius, fahren-│
│heit, kelvin    │
└─────┬──────────┘
      │
┌─────▼─────────────┐
│Read celsius       │
│from user          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│fahrenheit = (c ×  │
│9/5) + 32          │
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Calculate:         │
│kelvin = c + 273.15│
└─────┬─────────────┘
      │
┌─────▼─────────────┐
│Display fahrenheit │
│and kelvin values  │
└─────┬─────────────┘
      │
┌─────▼─────┐
│   STOP    │
└───────────┘
*/

#include <stdio.h>
int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    // Celsius to Kelvin
    kelvin = celsius + 273.15;

    printf("Fahrenheit = %.2f\n", fahrenheit);
    printf("Kelvin = %.2f\n", kelvin);

    return 0;
}