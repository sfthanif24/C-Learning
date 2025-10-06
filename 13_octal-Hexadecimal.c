#include <stdio.h>
int main()
{
    int octalNum;

    printf("Enter Octal Number: ");
    scanf("%o", &octalNum);

    printf("Hexadecimal Number: %x\n", octalNum);

    /*
             Hexadecimal to Decimal Conversion
            ===================================
    */
    int hexnum;

    printf("\nEnter Hexadecimal Number: ");
    scanf("%x", &hexnum);

    printf("Octal Number: %o", hexnum);

    return 0;
}