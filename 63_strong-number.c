/*
         Strong Number Checker
         >>==================<<

    Program Name: Strong Number
    Author: sft Hanif
    Description: Checks if a number is Strong number
    Strong Number: Sum of factorials of digits equals the number itself
    Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
*/

#include <stdio.h>
int main()
{
    int num, reminder;

    printf("Enter number: ");
    scanf("%d", &num);

    int sum = 0;

    int originalNum = num;

    while (originalNum != 0)
    {
        reminder = originalNum % 10;

        int fact = 1;
        for (int i = 1; i <= reminder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        originalNum = originalNum / 10;
    }

    if (sum == num)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}