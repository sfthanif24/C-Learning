#include <stdio.h>
int main()
{
    char lowerCase;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lowerCase);

    printf("The uppercase letter is: %c", lowerCase - 32);

    return 0;
}