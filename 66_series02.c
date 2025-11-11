// sum of series 1 + 3 + 5 + .. + n
#include <stdio.h>
int main()
{
    int n, sum = 0, a = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (a <= n)
    {
        sum = sum + a;
        a = a + 2;
    }

    printf("Sum = %d\n", sum);
    return 0;
}