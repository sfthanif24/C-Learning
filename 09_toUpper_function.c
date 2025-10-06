#include <stdio.h>
#include <ctype.h>

int main()
{
    char lowerCase, upperCase;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lowerCase);

    upperCase = toupper(lowerCase);
    printf("The uppercase letter is: %c", upperCase);

    return 0;
}