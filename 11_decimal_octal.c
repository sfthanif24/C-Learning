#include <stdio.h>
int main()
{
    int decimalNum;

    printf("Enter Decimal Number: ");
    scanf("%d", &decimalNum);

    printf("Octal Number: %o\n", decimalNum);

        /*
             Octal to Decimal Conversion
            =============================
    */
    int octalNum;

    printf("\nEnter Octal Number: ");
    scanf("%o", &octalNum);

    printf("Decimal Number: %d", octalNum);

    return 0;
}