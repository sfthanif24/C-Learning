/*
         Fibonacci Series
         >>============<<

    Program Name: Fibonacci Series
    Author: sft Hanif
    Description: Prints Fibonacci series up to n terms
    Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
    Formula: F(n) = F(n-1) + F(n-2)
*/

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}