#include <stdio.h>
int main()
{
    int decimalNum;

    printf("Enter Decimal Number: ");
    scanf("%d", &decimalNum);

    printf("Hexadecimal Number: %x\n", decimalNum);

    /*
             Hexadecimal to Decimal Conversion
            ===================================
    */
    int hexnum;

    printf("\nEnter Hexadecimal Number: ");
    scanf("%x", &hexnum);

    printf("Decimal Number: %d", hexnum);

    return 0;
}