#include <stdio.h>
int main()
{
    char upperCase;
    printf("Enter any uppercase letter: ");
    scanf("%c", &upperCase);

    printf("The lowercase letter is: %c", upperCase + 32);

    return 0;
}