#include <stdio.h>
int main()
{
    int number1;
    float number2;
    printf("Enter an integer: ");
    scanf("%d", &number1);

    printf("Enter a floating number: ");
    scanf("%f", &number2);

    printf("You enter %d and %.2f\n", number1, number2);

    return 0;
}