// Program Name: Sum of 0-n Digits
#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of digits from 1 to %d is: %d\n", n, sum);

    return 0;
}