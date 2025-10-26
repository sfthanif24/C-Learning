/*
         Palindrome Number Checker
         >>=====================<<

    Program Name: Palindrome Number
    Author: sft Hanif
    Description: Checks if a number is palindrome or not
*/

#include <stdio.h>
int main()
{
    int number, reverseNum = 0, reminder;

    printf("Enter number: ");
    scanf("%d", &number);

    int tempNum = number;

    while (tempNum != 0)
    {
        reminder = tempNum % 10;
        reverseNum = reverseNum * 10 + reminder;
        tempNum = tempNum / 10;
    }

    if (number == reverseNum)
    {
        printf("%d is Palindrome Number\n", number);
    }
    else
    {
        printf("%d is not Palindrome Number\n", number);
    }

    return 0;
}