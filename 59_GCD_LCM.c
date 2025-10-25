/*
         GCD & LCM Calculator
       >>===================<<

  program Name:GCD & LCM Calculator
  GCD (Greatest Common Divisor)
  LCM (Least Common Multiple)
  Author: sft Hanif
  Description: Finds Greatest Common Divisor and Least Common Multiple of two numbers
*/

#include <stdio.h>
int main()
{
    int number1, number2, a, b, reminder;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    a = number1;
    b = number2;

    while (b != 0)
    {
        reminder = a % b;
        a = b;
        b = reminder;
    }
    int gcd = a;

    int lcm = (number1 * number2) / gcd;

    printf("Numbers: %d and %d\n", number1, number2);
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}