// Program Name: Reverse Number

#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}