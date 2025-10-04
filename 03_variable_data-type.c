#include <stdio.h>
int main()
{
    /*
                               Variables
                             ============

    Variables are containers for storing data values, like numbers and characters.

    Ex:
    int   : stores integers (whole numbers), without decimals, such as 123 or -345
    float : stores floating point numbers, with decimals, such as 12.99 or -21.34
    char  : stores single characters, such as 's' or 'H'. Characters are surrounded by single quotes

    */
    // Variable declaration
    int num1;
    float num2;
    double num3;
    char ch;

    // Variable initialization
    num1 = 24;
    num2 = 10.13;
    num3 = 13.23453;
    ch = "S";

    /*
                                  Data Type
                                ============
        Data-Type        Examples     Keyword    Storage Size    Format Specifier

    1. Character data   's','H','t'    char         1 byte              %c
    2. Whole numbers    1234, -345     int          4 bytes             %d
    3. floting numbers  6 decimal      float        4 bytes             %f
    4. double numbers   15 decimal     double       8 bytes             %lf

    */

    printf("        >>>>>  Variables Data-Types in bytes  <<<<<    \n\n");

    printf("1. char: %zu bytes\n", sizeof(char));
    printf("2. int: %zu bytes\n", sizeof(int));
    printf("3. float: %zu bytes\n", sizeof(float));
    printf("4. double: %zu bytes\n", sizeof(double));

    return 0;
}