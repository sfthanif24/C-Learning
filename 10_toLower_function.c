#include <stdio.h>
#include <ctype.h>

int main()
{
    char lowerCase, upperCase;
    printf("Enter any uppercase letter: ");
    scanf("%c", &upperCase);

    lowerCase = tolower(upperCase);
    printf("The lowercase letter is: %c", lowerCase);

    return 0;
}