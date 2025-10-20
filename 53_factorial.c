// program Name : Factorial of a number
#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter a Positive integer: ");
    scanf("%d", &n);

    if (n > 0) // ← Positive numbers
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d! = %d \n", n, fact);
    }
    else if (n == 0) // 0! = 1
    {
        printf("Factorial of 0! = 1\n");
    }
    else
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    return 0;
}